# include <iostream>
using namespace std;
# ifndef STRING__H_
# define STRING__H_

class String{
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 70;
public:
	String(const char* s);
	String();
	String(const String&);
	~String();
	int length()const { return len; }
	//overload operator methods
	String& operator=(const String&);
	String& operator=(const char* s);
	char& operator[](int i);
	const char& operator[](int i) const;
	friend bool operator <(const String &st1, const String &st2);
	friend bool operator >(const String &str1, const String &st2);
	friend bool operator==(const String &st, const String &st2);
	friend ostream& operator <<(ostream& os, const String& rg);
	friend istream& operator >>(istream& is, String& rg);

	//static function
	static int howMany();
};
# endif
