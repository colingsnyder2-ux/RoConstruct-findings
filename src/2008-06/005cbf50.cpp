// from server: 100% by tester
// roc 2008-06 005cbf50  unit: RBX::Camera  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cbf50
//
// 005cbf50  56                   push esi
// 005cbf51  8bb104010000         mov esi, dword ptr [ecx + 0x104]
// 005cbf57  85f6                 test esi, esi
// 005cbf59  742a                 je 0x5cbf85
// 005cbf5b  eb03                 jmp 0x5cbf60
// 005cbf5d  8d4900               lea ecx, [ecx]
// 005cbf60  6a00                 push 0
// 005cbf62  6880969400           push 0x949680
// 005cbf67  687c909200           push 0x92907c
// 005cbf6c  6a00                 push 0
// 005cbf6e  56                   push esi
// 005cbf6f  e852580d00           call 0x6a17c6
// 005cbf74  83c414               add esp, 0x14
// 005cbf77  85c0                 test eax, eax
// 005cbf79  750c                 jne 0x5cbf87
// 005cbf7b  8bb604010000         mov esi, dword ptr [esi + 0x104]
// 005cbf81  85f6                 test esi, esi
// 005cbf83  75db                 jne 0x5cbf60
// 005cbf85  33c0                 xor eax, eax
// 005cbf87  5e                   pop esi
// 005cbf88  c3                   ret 

namespace RBX {
class ICameraOwner { public: virtual void f(); };
class Instance {
public:
    virtual void g();
    char pad[0x100];
    Instance* parent;
};
class Camera : public Instance {
public:
    ICameraOwner* getCameraOwner();
};
ICameraOwner* Camera::getCameraOwner() {
    for (Instance* p = parent; p; p = p->parent) {
        ICameraOwner* o = dynamic_cast<ICameraOwner*>(p);
        if (o) return o;
    }
    return 0;
}
}
