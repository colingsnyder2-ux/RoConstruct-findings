// from server: 95% by colin
// roc 2007-08 00409db0  unit: VCApp::?$CComObject  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00409db0
//
// 00409db0  56                   push esi
// 00409db1  8bf1                 mov esi, ecx
// 00409db3  c706b8537800         mov dword ptr [esi], 0x7853b8
// 00409db9  c74604a0537800       mov dword ptr [esi + 4], 0x7853a0
// 00409dc0  c746087c537800       mov dword ptr [esi + 8], 0x78537c
// 00409dc7  c7461464537800       mov dword ptr [esi + 0x14], 0x785364
// 00409dce  c7461c48537800       mov dword ptr [esi + 0x1c], 0x785348
// 00409dd5  c74624fc527800       mov dword ptr [esi + 0x24], 0x7852fc
// 00409ddc  c74628010000c0       mov dword ptr [esi + 0x28], 0xc0000001
// 00409de3  8b0d44ae8b00         mov ecx, dword ptr [0x8bae44]
// 00409de9  8b01                 mov eax, dword ptr [ecx]
// 00409deb  8b5008               mov edx, dword ptr [eax + 8]
// 00409dee  ffd2                 call edx
// 00409df0  8bce                 mov ecx, esi
// 00409df2  e899f4ffff           call 0x409290
// 00409df7  f644240801           test byte ptr [esp + 8], 1
// 00409dfc  7409                 je 0x409e07
// 00409dfe  56                   push esi
// 00409dff  e85e5e2200           call 0x62fc62
// 00409e04  83c404               add esp, 4
// 00409e07  8bc6                 mov eax, esi
// 00409e09  5e                   pop esi
// 00409e0a  c20400               ret 4

struct VCApp_CComObject {
    void* f(int);
};

extern "C" void __cdecl sub_62FC62(void*);
extern "C" void __stdcall sub_409290();

struct GlobalObj_8BAE44 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

extern GlobalObj_8BAE44* g_8BAE44;

void* VCApp_CComObject::f(int arg)
{
    *(int*)((char*)this + 0) = 0x7853b8;
    *(int*)((char*)this + 4) = 0x7853a0;
    *(int*)((char*)this + 8) = 0x78537c;
    *(int*)((char*)this + 0x14) = 0x785364;
    *(int*)((char*)this + 0x1c) = 0x785348;
    *(int*)((char*)this + 0x24) = 0x7852fc;
    *(int*)((char*)this + 0x28) = 0xc0000001;

    GlobalObj_8BAE44* p = g_8BAE44;
    p->v2();

    sub_409290();

    if (arg & 1)
        sub_62FC62(this);

    return this;
}
