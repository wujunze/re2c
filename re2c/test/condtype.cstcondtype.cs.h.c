re2c: warning: line 11: control flow in condition 'a' is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
re2c: warning: line 11: control flow in condition 'b' is undefined for strings that match '[\x0-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
/* Generated by re2c */
#line 1 "condtype.cstcondtype.cs.h.re"
int main ()
{
	YYCONDTYPE cond;
	char * YYCURSOR;
#define YYGETCONDITION() cond

#line 10 "<stdout>"
{
	unsigned char yych;
	if (YYGETCONDITION() < 1) {
		goto yyc_a;
	} else {
		goto yyc_b;
	}
/* *********************************** */
yyc_a:
	yych = *YYCURSOR;
	if (yych == 'a') goto yy4;
yy4:
	++YYCURSOR;
#line 9 "condtype.cstcondtype.cs.h.re"
	{}
#line 26 "<stdout>"
/* *********************************** */
yyc_b:
	yych = *YYCURSOR;
	if (yych == 'b') goto yy9;
yy9:
	++YYCURSOR;
#line 10 "condtype.cstcondtype.cs.h.re"
	{}
#line 35 "<stdout>"
}
#line 11 "condtype.cstcondtype.cs.h.re"

	return 0;
}
/* Generated by re2c */
#line 3 "condtype.cs.h"

enum YYCONDTYPE {
	yyca,
	yycb,
};
