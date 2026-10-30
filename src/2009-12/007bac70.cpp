// roc 2009-12 007bac70  unit: RBX::MovingAssemblyStage  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007bac70
//
// 007bac70  56                   push esi
// 007bac71  8b7114               mov esi, dword ptr [ecx + 0x14]
// 007bac74  57                   push edi
// 007bac75  8d7914               lea edi, [ecx + 0x14]
// 007bac78  3bf7                 cmp esi, edi
// 007bac7a  7426                 je 0x7baca2
// 007bac7c  8d642400             lea esp, [esp]
// 007bac80  85f6                 test esi, esi
// 007bac82  7405                 je 0x7bac89
// 007bac84  8d4ed4               lea ecx, [esi - 0x2c]
// 007bac87  eb02                 jmp 0x7bac8b
// 007bac89  33c9                 xor ecx, ecx
// 007bac8b  8b01                 mov eax, dword ptr [ecx]
// 007bac8d  dd44240c             fld qword ptr [esp + 0xc]
// 007bac91  8b503c               mov edx, dword ptr [eax + 0x3c]
// 007bac94  83ec08               sub esp, 8
// 007bac97  dd1c24               fstp qword ptr [esp]
// 007bac9a  ffd2                 call edx
// 007bac9c  8b36                 mov esi, dword ptr [esi]
// 007bac9e  3bf7                 cmp esi, edi
// 007baca0  75de                 jne 0x7bac80
// 007baca2  5f                   pop edi
// 007baca3  5e                   pop esi
// 007baca4  c20800               ret 8
// copied from an identical function in another client (function ?method@S@ns_ROCX000002@@QAEXN@Z)

namespace ns_ROCX000002 {
// from server: 100% by atomic.potato
struct Node {
    Node* next;
    char pad[0x28];
};

struct Inner {
    virtual void f(double);
    virtual void g(double);
    virtual void h(double);
    virtual void i(double);
    virtual void j(double);
    virtual void k(double);
    virtual void l(double);
    virtual void m(double);
    virtual void n(double);
    virtual void o(double);
    virtual void p(double);
    virtual void q(double);
    virtual void r(double);
    virtual void s(double);
    virtual void t(double);
    virtual void u(double);
};

struct S {
    char pad[0x14];
    Node head;
    void method(double);
};

void S::method(double d) {
    Node* p = head.next;
    Node* end = &head;
    while (p != end) {
        Inner* obj;
        if (p != 0) {
            obj = (Inner*)((char*)p - 0x2c);
        } else {
            obj = 0;
        }
        obj->u(d);
        p = p->next;
    }
}
}
