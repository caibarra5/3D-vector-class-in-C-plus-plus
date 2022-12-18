#include <cmath>
#include <iostream>


class vector{

  private:
    double x=0;
    double y=0;
    double z=0;

  public:

//  This constructo is required because when initializing an object of class
//  vector in the particle class, the vectors need to have an appropriate
//  constructor. The values are initialized as above with this constructor.
    vector(){}

    vector( double x, double y, double z ){

      this->x = x;
      this->y = y;
      this->z = z;
    }

    vector operator+( vector v );
    vector operator-( vector v );
    vector operator*( vector v );
    double operator^( vector v );

    double getComponentx();
    double getComponenty();
    double getComponentz();



    void setComponents(double x, double y, double z);

    double magnitude(){

      return sqrt( pow(x,2) + pow(y,2) + pow(z,2) );

    }
    
    friend std::ostream& operator<<(std::ostream& out, const vector& v);


};



  vector operator*( double s, vector v );

  vector operator*( vector v, double s );

