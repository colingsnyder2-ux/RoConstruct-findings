// from server: 93% by colin
// roc 2007-08 0070ca80  unit: CXTColorBase  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070ca80
//
// 0070ca80  56                   push esi
// 0070ca81  8bf1                 mov esi, ecx
// 0070ca83  e8b637f2ff           call 0x63023e
// 0070ca88  f644240801           test byte ptr [esp + 8], 1
// 0070ca8d  742f                 je 0x70cabe
// 0070ca8f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070ca93  8b06                 mov eax, dword ptr [esi]
// 0070ca95  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0070ca99  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 0070ca9f  6a01                 push 1
// 0070caa1  51                   push ecx
// 0070caa2  52                   push edx
// 0070caa3  8bce                 mov ecx, esi
// 0070caa5  ffd0                 call eax
// 0070caa7  ff15d4ec7700         call dword ptr [0x77ecd4]
// 0070caad  50                   push eax
// 0070caae  e80d37f2ff           call 0x6301c0
// 0070cab3  3bc6                 cmp eax, esi
// 0070cab5  7407                 je 0x70cabe
// 0070cab7  8bce                 mov ecx, esi
// 0070cab9  e84635f2ff           call 0x630004
// 0070cabe  5e                   pop esi
// 0070cabf  c20c00               ret 0xc

struct CXTColorBase {
    void sub_63023E();
    void sub_630004();
    void f(int, int, int);
};

extern "C" void* __stdcall GetFocus();
extern "C" void* __stdcall sub_6301C0(void*);

void CXTColorBase::f(int a, int b, int c)
{
    sub_63023E();
    if (a & 1) {
        (*(void (__thiscall**)(CXTColorBase*, int, int, int))(*(int*)this + 0x14c))(this, b, c, 1);
        if ((void*)sub_6301C0(GetFocus()) != this) {
            sub_630004();
        }
    }
}
