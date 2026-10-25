// from server: 100% by colin
// roc 2008-06 007faeb0  unit: seg_007f0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007faeb0
//
// 007faeb0  b924dd9600           mov ecx, 0x96dd24
// 007faeb5  e82638c5ff           call 0x44e6e0
// 007faeba  a124dd9600           mov eax, dword ptr [0x96dd24]
// 007faebf  50                   push eax
// 007faec0  e8b557eaff           call 0x6a067a
// 007faec5  59                   pop ecx
// 007faec6  c3                   ret 

struct T_func_007faeb0 {
    void m();
};

extern T_func_007faeb0 G1_func_007faeb0;
extern int G2_func_0096dd24;

extern "C" void __stdcall func_0044e6e0();
extern "C" void __cdecl func_006a067a(int);

void func_007faeb0()
{
    G1_func_007faeb0.m();
    func_006a067a(G2_func_0096dd24);
}
