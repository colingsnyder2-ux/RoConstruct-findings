// from server: 69% by colin
// roc 2007-08 00499660  unit: RBX::VServiceProvider::?$Listener  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00499660
//
// 00499660  56                   push esi
// 00499661  8bf1                 mov esi, ecx
// 00499663  e8c8850a00           call 0x541c30
// 00499668  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0049966e  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 00499674  8b01                 mov eax, dword ptr [ecx]
// 00499676  8b4064               mov eax, dword ptr [eax + 0x64]
// 00499679  6a00                 push 0
// 0049967b  6a01                 push 1
// 0049967d  52                   push edx
// 0049967e  8b9630010000         mov edx, dword ptr [esi + 0x130]
// 00499684  52                   push edx
// 00499685  ffd0                 call eax
// 00499687  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0049968d  8b11                 mov edx, dword ptr [ecx]
// 0049968f  8b442408             mov eax, dword ptr [esp + 8]
// 00499693  8b5228               mov edx, dword ptr [edx + 0x28]
// 00499696  6a00                 push 0
// 00499698  50                   push eax
// 00499699  ffd2                 call edx
// 0049969b  5e                   pop esi
// 0049969c  c20400               ret 4

struct Listener {
    char pad[0xf8];
    void* m_provider;
    char pad2[0x130 - 0xf8 - 4];
    int m_a;
    int m_b;
    void evaluate(int);
};

void __stdcall sub_541c30();

void Listener::evaluate(int arg)
{
    sub_541c30();
    void* p = m_provider;
    int* vt = *(int**)p;
    void (__stdcall *fn)(int, int, int, int) = (void (__stdcall *)(int, int, int, int))vt[0x64/4];
    fn(m_a, m_b, 1, 0);
    void* p2 = m_provider;
    int* vt2 = *(int**)p2;
    void (__stdcall *fn2)(int, int) = (void (__stdcall *)(int, int))vt2[0x28/4];
    fn2(arg, 0);
}
