// from server: 62% by colin
// roc 2007-08 006a3a70  unit: PAUHWND__::?$CArray  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3a70
//
// 006a3a70  56                   push esi
// 006a3a71  8bf1                 mov esi, ecx
// 006a3a73  837e1000             cmp dword ptr [esi + 0x10], 0
// 006a3a77  7e10                 jle 0x6a3a89
// 006a3a79  8b460c               mov eax, dword ptr [esi + 0xc]
// 006a3a7c  8b08                 mov ecx, dword ptr [eax]
// 006a3a7e  e8cdfcf9ff           call 0x643750
// 006a3a83  837e1000             cmp dword ptr [esi + 0x10], 0
// 006a3a87  7ff0                 jg 0x6a3a79
// 006a3a89  5e                   pop esi
// 006a3a8a  c3                   ret 

struct S_func_006a3a70 {
    char pad0[12];
    int* m_data;
    int m_size;
    void f();
};

extern "C" void __fastcall sub_00643750(int);

void S_func_006a3a70::f()
{
    while (m_size > 0) {
        sub_00643750(*m_data);
    }
}
