// roc 2007-03 006669a0  unit: seg_00660000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006669a0
//
// 006669a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006669a4  8b542408             mov edx, dword ptr [esp + 8]
// 006669a8  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 006669ab  50                   push eax
// 006669ac  52                   push edx
// 006669ad  e81c84fbff           call 0x61edce
// 006669b2  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@Outer@ns_ROCX00000a@@QAEXHHH@Z)

namespace ns_ROCX00000a {
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
}
