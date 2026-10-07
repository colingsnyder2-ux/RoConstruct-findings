// roc 2011-06 004e2ed0  unit: RBX::Network::VClient::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e2ed0
//
// 004e2ed0  dd81e8000000         fld qword ptr [ecx + 0xe8]
// 004e2ed6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004e2ed0 {
    char pad[232];
    double m_x;
    double f();
};
double S_func_004e2ed0::f()
{
    return m_x;
}
