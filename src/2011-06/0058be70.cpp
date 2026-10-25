// from server: 100% by tester
// roc 2011-06 0058be70  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058be70
//
// 0058be70  dd442404             fld qword ptr [esp + 4]
// 0058be74  dd1dc053c900         fstp qword ptr [0xc953c0]
// 0058be7a  c20800               ret 8

struct S {
    void f(double);
};

void S::f(double value)
{
    *(double*)0xc953c0 = value;
}