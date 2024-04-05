#include <iostream>

class C
{
	protected:

	int fieldA;
	std::string name

	public:
		C(int a, std::string n)
		{
			fieldA = 15;
			name = "C"
		}
		int GetA()
		{
			return fieldA;
		}
		void ShowInfo()
		{
			std::cout << "informacja na temat klasy B\n";
			std::cout << "Field A = " << fieldA << "\n";
};
class A : public C
{
	private:

	public:
		A(int a, std::string n)
		{
			fieldA = 15;
			name = "C"
		}
		A()
	{
		fieldA = 5
	}

	
/*	void showinfo()
	{
		std::cout << "informacja na temat klasy A\n";
		std::cout << "fieldA =" << fieldA << "\n";
	}
*/
};
	class B
	{
	private:
			int fieldB;	

	public:
		B()
		{
			fieldA = 5;
			fieldB = 4;
		}

		int GetFieldB()
		{
			return fieldB;
		}

/*  	void ShowInfo()
		{
			std:: cout << "informacja na temat klasy B\n";
			std::cout << "Field A = " << fieldA << "\n";
			std::cout << "Field B = " << fieldB << "\n";
		}
*/
	};
	int main()
	{
		
	}
