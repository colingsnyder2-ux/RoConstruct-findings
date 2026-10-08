// from server: 100% by colin
// roc 2007-08 006853c0  unit: CXTPPropExchangeArchive  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006853c0
//
// 006853c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006853c4  8b542408             mov edx, dword ptr [esp + 8]
// 006853c8  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 006853cb  50                   push eax
// 006853cc  52                   push edx
// 006853cd  e8bcb2faff           call 0x63068e
// 006853d2  c20c00               ret 0xc

struct Inner {
    void method(int a, int b);
};

struct Outer {
    char pad[0x40];
    Inner* m_p;
    void f(int a1, int a2, int a3);
};

void Outer::f(int a1, int a2, int a3)
{
    m_p->method(a2, a3);
}
