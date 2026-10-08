// from server: 89% by colin
// roc 2007-08 00576a90  unit: RBX::PartInstance  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00576a90
//
// 00576a90  56                   push esi
// 00576a91  8bf1                 mov esi, ecx
// 00576a93  e8e8f9ffff           call 0x576480
// 00576a98  f644240801           test byte ptr [esp + 8], 1
// 00576a9d  8b8698020000         mov eax, dword ptr [esi + 0x298]
// 00576aa3  c78694020000ac4c7a00 mov dword ptr [esi + 0x294], 0x7a4cac
// 00576aad  8b4804               mov ecx, dword ptr [eax + 4]
// 00576ab0  c7843198020000a44c7a00 mov dword ptr [ecx + esi + 0x298], 0x7a4ca4
// 00576abb  740a                 je 0x576ac7
// 00576abd  56                   push esi
// 00576abe  ff15c4e67700         call dword ptr [0x77e6c4]
// 00576ac4  83c404               add esp, 4
// 00576ac7  8bc6                 mov eax, esi
// 00576ac9  5e                   pop esi
// 00576aca  c20400               ret 4

struct S_func_00576a90 {
    char pad0[0x294];
    int m_field294;
    char pad1[0x4];
    int m_field298;
    void f(int);
};

extern "C" void __stdcall sub_576480();
extern "C" void __stdcall free(void*);

void S_func_00576a90::f(int arg)
{
    sub_576480();
    int* p = (int*)m_field298;
    m_field294 = 0x7a4cac;
    int v = p[1];
    *(int*)((char*)v + (int)this + 0x298) = 0x7a4ca4;
    if (arg & 1) {
        free(this);
    }
}
