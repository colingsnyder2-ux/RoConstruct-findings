// from server: 100% by king_originala
// roc 2008-06 005c6f00  unit: RBX::VArrowTool::?$TToolVerb  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c6f00
//
// 005c6f00  56                   push esi
// 005c6f01  8bf1                 mov esi, ecx
// 005c6f03  8b06                 mov eax, dword ptr [esi]
// 005c6f05  8b500c               mov edx, dword ptr [eax + 0xc]
// 005c6f08  ffd2                 call edx
// 005c6f0a  84c0                 test al, al
// 005c6f0c  7412                 je 0x5c6f20
// 005c6f0e  8b460c               mov eax, dword ptr [esi + 0xc]
// 005c6f11  8b8804020000         mov ecx, dword ptr [eax + 0x204]
// 005c6f17  e8f496fdff           call 0x5a0610
// 005c6f1c  5e                   pop esi
// 005c6f1d  c20400               ret 4
// 005c6f20  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005c6f23  8b16                 mov edx, dword ptr [esi]
// 005c6f25  8b4214               mov eax, dword ptr [edx + 0x14]
// 005c6f28  57                   push edi
// 005c6f29  8bb904020000         mov edi, dword ptr [ecx + 0x204]
// 005c6f2f  8bce                 mov ecx, esi
// 005c6f31  ffd0                 call eax
// 005c6f33  50                   push eax
// 005c6f34  8bcf                 mov ecx, edi
// 005c6f36  e885b0fdff           call 0x5a1fc0
// 005c6f3b  5f                   pop edi
// 005c6f3c  5e                   pop esi
// 005c6f3d  c20400               ret 4

struct S {
    char pad[0x3b0];
    void* field_3b0;
    void* field_3b4;
    void f();
    void activate(void*);
};

struct Owner {
    char pad[0x204];
    S* target;
};

struct Tool {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual bool enabled();
    virtual void v4();
    virtual void* value();

    char pad[8];
    Owner* owner;

    void f(int);
};

void Tool::f(int) {
    if (enabled()) {
        owner->target->f();
    } else {
        S* target = owner->target;
        target->activate(value());
    }
}
