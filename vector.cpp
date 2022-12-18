#include "vector.h"
#include <iomanip>
    vector vector::operator+( vector v ){
      double x1,y1,z1;

      x1 = x + v.x;
      y1 = y + v.y;
      z1 = z + v.z;

      return vector( x1, y1, z1 );
    
    }

    vector vector::operator-( vector v ){
    
      double x1,y1,z1;

      x1 = x - v.x;
      y1 = y - v.y;
      z1 = z - v.z;

      return vector( x1, y1, z1 );
    
    }

    vector vector::operator*( vector v ){
      double x1,y1,z1;

      x1 = y*v.z - z*v.y;

      y1 = z*v.x - x*v.z;

      z1 = x*v.y - y*v.x;

      return vector( x1, y1, z1 );

    }

    double vector::operator^( vector v ){
    
      double x1,y1,z1;

      x1 = x * v.x;
      y1 = y * v.y;
      z1 = z * v.z;

      return ( x1 + y1 + z1 );
    
    }


    void vector::setComponents(double x, double y, double z){
      this->x = x;
      this->y = y;
      this->z = z;
    }

    std::ostream& operator<<(std::ostream& out, const vector& v){


//    out << "\n" <<  v.x << "\n" << v.y << "\n" << v.z << std::endl;

//      out << std::setw(11) << v.x << std::setw(11) << v.y << std::setw(11) << v.z << std::endl;
      out << std::setw(20) << v.x << std::setw(20) << v.y << std::setw(20) << v.z << std::endl;

    return out;

  }


    double vector::getComponentx(){
        return x;
    } 



    double vector::getComponenty(){
        return y;
    } 



    double vector::getComponentz(){
        return z;
    } 



    vector operator*(  double s, vector v ){
      double x1,y1,z1;

      x1 = s*v.getComponentx();
      y1 = s*v.getComponenty();
      z1 = s*v.getComponentz();

      return vector( x1, y1, z1 );
    }   


    vector operator*( vector v, double s ){
      double x1,y1,z1;

      x1 = s*v.getComponentx();
      y1 = s*v.getComponenty();
      z1 = s*v.getComponentz();

      return vector( x1, y1, z1 );
    }   

