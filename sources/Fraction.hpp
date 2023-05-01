namespace ariel{};
class Fraction {
  public:
    int num1,num2;
    Fraction();
    Fraction(int n1, int n2){num1=n1; num2=n2;};
    Fraction operator+ (Fraction){return *this;};
    Fraction operator+ (double){return *this;};

    Fraction operator- (Fraction){return *this;};
    Fraction operator- (double){return *this;};

    Fraction operator/ (Fraction){return *this;};
    Fraction operator/ (double){return *this;};

    Fraction operator* (Fraction){return *this;};
    Fraction operator* (double){return *this;};
//    double operator* (Fraction);
//    Fraction operator*(const double& left, const Fraction& right)


    Fraction operator++ (int){return *this;};
    Fraction operator-- (int){return *this;};
    Fraction operator-- (){return *this;};

    bool operator< (double){return true;};
    bool operator< (Fraction){return true;};

    bool operator> (double){return true;};
    bool operator> (Fraction){return true;};

    bool operator== (double){return true;};
    bool operator== (Fraction){return true;};

    bool operator>= (double){return true;};
    bool operator>= (Fraction){return true;};
    
    bool operator<= (double){return true;};
    bool operator<= (Fraction){return true;};
    
    friend std::ostream& operator<< (std::ostream& output, const Fraction& c){return output;};
    friend std::istream& operator>> (std::istream& input , Fraction& c){return input;};
};

 Fraction operator* (double d,Fraction f){return f;};

