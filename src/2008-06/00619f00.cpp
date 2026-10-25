// from server: 100% by king_originala
// roc 2008-06 00619f00  unit: RBX::FlatTool  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00619f00
//
// 00619f00  56                   push esi
// 00619f01  8bf1                 mov esi, ecx
// 00619f03  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00619f07  8b06                 mov eax, dword ptr [esi]
// 00619f09  8b500c               mov edx, dword ptr [eax + 0xc]
// 00619f0c  51                   push ecx
// 00619f0d  8bce                 mov ecx, esi
// 00619f0f  ffd2                 call edx
// 00619f11  8b4624               mov eax, dword ptr [esi + 0x24]
// 00619f14  85c0                 test eax, eax
// 00619f16  744b                 je 0x619f63
// 00619f18  8b16                 mov edx, dword ptr [esi]
// 00619f1a  50                   push eax
// 00619f1b  8b4240               mov eax, dword ptr [edx + 0x40]
// 00619f1e  8bce                 mov ecx, esi
// 00619f20  ffd0                 call eax
// 00619f22  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00619f25  6a08                 push 8
// 00619f27  51                   push ecx
// 00619f28  e88368f6ff           call 0x5807b0
// 00619f2d  83c404               add esp, 4
// 00619f30  8bc8                 mov ecx, eax
// 00619f32  e8e938faff           call 0x5bd820
// 00619f37  837e4410             cmp dword ptr [esi + 0x44], 0x10
// 00619f3b  7205                 jb 0x619f42
// 00619f3d  8b4630               mov eax, dword ptr [esi + 0x30]
// 00619f40  eb03                 jmp 0x619f45
// 00619f42  8d4630               lea eax, [esi + 0x30]
// 00619f45  8b5618               mov edx, dword ptr [esi + 0x18]
// 00619f48  52                   push edx
// 00619f49  50                   push eax
// 00619f4a  e87126f7ff           call 0x58c5c0
// 00619f4f  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619f52  8b88a8030000         mov ecx, dword ptr [eax + 0x3a8]
// 00619f58  8b11                 mov edx, dword ptr [ecx]
// 00619f5a  8b02                 mov eax, dword ptr [edx]
// 00619f5c  83c408               add esp, 8
// 00619f5f  6a01                 push 1
// 00619f61  ffd0                 call eax
// 00619f63  33c0                 xor eax, eax
// 00619f65  5e                   pop esi
// 00619f66  c20400               ret 4

struct Controller {
    virtual void setEnabled(int);
};

namespace RBX {
    class Instance {
    public:
        virtual ~Instance();
        char padding[0x3a4];
        Controller* controller;
    };

    class ServiceProvider {
    public:
        void update(int);
    };

    void handle(int, int);
}

RBX::ServiceProvider* __cdecl func_005807b0(RBX::Instance*);

struct S {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(int);
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16(int);

    char padding0[0x14];
    RBX::Instance* owner;
    char padding1[8];
    int target;
    char padding2[8];
    union {
        char local[16];
        char* heap;
    } text;
    unsigned int length;
    unsigned int capacity;

    int f(int);
};

int S::f(int argument)
{
    v3(argument);
    if (target) {
        v16(target);
        func_005807b0(owner)->update(8);
        RBX::handle(
            reinterpret_cast<int>(capacity >= 16 ? text.heap : text.local),
            reinterpret_cast<int>(owner));
        owner->controller->setEnabled(1);
    }
    return 0;
}
