// from server: 100% by tester
// roc 2011-06 0058bfe0  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058bfe0
//
// 0058bfe0  dd442404             fld qword ptr [esp + 4]
// 0058bfe4  dd1d9889c500         fstp qword ptr [0xc58998]
// 0058bfea  c20800               ret 8

struct S {
    void f(double);
};

void S::f(double value)
{
    *(double*)0xc58998 = value;
}