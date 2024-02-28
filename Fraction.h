#pragma once
class Fraction
{
private:int Numerator, Denominator;
public:
	Fraction()
	{
		this->Numerator = 0;
		this->Denominator = 1;
	}
	void input();
	void print() const ;
	Fraction add(const Fraction& a) const;
};

