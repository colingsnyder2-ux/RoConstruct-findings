// roc 2007-08 0047b540  unit: CXTPPropertyGridItemConstraint  size: 4 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b540
//
// 0047b540  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0047b543  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0047b540 {
    char pad0[44];
    int m_x;
    int f();
};
int S_func_0047b540::f()
{
    return m_x;
}
