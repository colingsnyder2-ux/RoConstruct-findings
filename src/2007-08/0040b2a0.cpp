// from server: 92% by colin
// roc 2007-08 0040b2a0  unit: CBrowserView  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040b2a0
//
// 0040b2a0  56                   push esi
// 0040b2a1  57                   push edi
// 0040b2a2  8bf1                 mov esi, ecx
// 0040b2a4  e80f4e2200           call 0x6300b8
// 0040b2a9  8b4654               mov eax, dword ptr [esi + 0x54]
// 0040b2ac  85c0                 test eax, eax
// 0040b2ae  7403                 je 0x40b2b3
// 0040b2b0  897054               mov dword ptr [eax + 0x54], esi
// 0040b2b3  8dbeb8020000         lea edi, [esi + 0x2b8]
// 0040b2b9  6854597800           push 0x785954
// 0040b2be  8bcf                 mov ecx, edi
// 0040b2c0  ff15b8dc7700         call dword ptr [0x77dcb8]
// 0040b2c6  85c0                 test eax, eax
// 0040b2c8  741a                 je 0x40b2e4
// 0040b2ca  6a00                 push 0
// 0040b2cc  6a00                 push 0
// 0040b2ce  6a00                 push 0
// 0040b2d0  6a00                 push 0
// 0040b2d2  6a00                 push 0
// 0040b2d4  8bcf                 mov ecx, edi
// 0040b2d6  ff1598dd7700         call dword ptr [0x77dd98]
// 0040b2dc  50                   push eax
// 0040b2dd  8bce                 mov ecx, esi
// 0040b2df  e8724c2200           call 0x62ff56
// 0040b2e4  5f                   pop edi
// 0040b2e5  5e                   pop esi
// 0040b2e6  c3                   ret 

struct CBrowserView {
    char pad[0x54];
    CBrowserView* field54;
    char pad2[0x2b8 - 0x58];
    char field2b8[1];
    void func();
};

struct Inner {
    void* method1(const char*);
    void* method2(int, int, int, int, int);
};

extern "C" void __stdcall sub_6300b8();
extern "C" void __stdcall sub_62ff56(CBrowserView*, void*);

void CBrowserView::func()
{
    sub_6300b8();
    if (field54 != 0)
        field54->field54 = this;
    Inner* p = (Inner*)field2b8;
    if (p->method1((const char*)0x785954) != 0)
    {
        void* q = p->method2(0, 0, 0, 0, 0);
        sub_62ff56(this, q);
    }
}
