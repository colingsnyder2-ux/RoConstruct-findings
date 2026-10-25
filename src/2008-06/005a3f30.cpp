// from server: 100% by king_originala
// roc 2008-06 005a3f30  unit: RBX::VWorkspace::?$RefPropDescriptor  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a3f30
//
// 005a3f30  6aff                 push -1
// 005a3f32  68902c7d00           push 0x7d2c90
// 005a3f37  64a100000000         mov eax, dword ptr fs:[0]
// 005a3f3d  50                   push eax
// 005a3f3e  64892500000000       mov dword ptr fs:[0], esp
// 005a3f45  51                   push ecx
// 005a3f46  56                   push esi
// 005a3f47  8bf1                 mov esi, ecx
// 005a3f49  89742404             mov dword ptr [esp + 4], esi
// 005a3f4d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a3f55  e886acebff           call 0x45ebe0
// 005a3f5a  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a3f5e  c7069c3b8300         mov dword ptr [esi], 0x833b9c
// 005a3f64  c74610903b8300       mov dword ptr [esi + 0x10], 0x833b90
// 005a3f6b  c74614883b8300       mov dword ptr [esi + 0x14], 0x833b88
// 005a3f72  c74620803b8300       mov dword ptr [esi + 0x20], 0x833b80
// 005a3f79  c74624703b8300       mov dword ptr [esi + 0x24], 0x833b70
// 005a3f80  c74644603b8300       mov dword ptr [esi + 0x44], 0x833b60
// 005a3f87  c74664503b8300       mov dword ptr [esi + 0x64], 0x833b50
// 005a3f8e  c78684000000403b8300 mov dword ptr [esi + 0x84], 0x833b40
// 005a3f98  c786a4000000303b8300 mov dword ptr [esi + 0xa4], 0x833b30
// 005a3fa2  c786c4000000203b8300 mov dword ptr [esi + 0xc4], 0x833b20
// 005a3fac  c644241001           mov byte ptr [esp + 0x10], 1
// 005a3fb1  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 005a3fbb  85c0                 test eax, eax
// 005a3fbd  741f                 je 0x5a3fde
// 005a3fbf  6a00                 push 0
// 005a3fc1  8d8e60010000         lea ecx, [esi + 0x160]
// 005a3fc7  51                   push ecx
// 005a3fc8  8d542428             lea edx, [esp + 0x28]
// 005a3fcc  898658010000         mov dword ptr [esi + 0x158], eax
// 005a3fd2  8b00                 mov eax, dword ptr [eax]
// 005a3fd4  52                   push edx
// 005a3fd5  ffd0                 call eax
// 005a3fd7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a3fdb  83c40c               add esp, 0xc
// 005a3fde  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005a3fe6  85c0                 test eax, eax
// 005a3fe8  7415                 je 0x5a3fff
// 005a3fea  8b00                 mov eax, dword ptr [eax]
// 005a3fec  85c0                 test eax, eax
// 005a3fee  740f                 je 0x5a3fff
// 005a3ff0  8d4c2420             lea ecx, [esp + 0x20]
// 005a3ff4  6a01                 push 1
// 005a3ff6  51                   push ecx
// 005a3ff7  8bd1                 mov edx, ecx
// 005a3ff9  52                   push edx
// 005a3ffa  ffd0                 call eax
// 005a3ffc  83c40c               add esp, 0xc
// 005a3fff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a4003  8bc6                 mov eax, esi
// 005a4005  5e                   pop esi
// 005a4006  64890d00000000       mov dword ptr fs:[0], ecx
// 005a400d  83c410               add esp, 0x10
// 005a4010  c22000               ret 0x20

struct Buffer {
    unsigned char bytes[24];
};

struct Manager {
    void (__cdecl *manage)(Buffer*, Buffer*, int);
};

struct Function {
    Manager* manager;
    unsigned padding;
    Buffer buffer;

    Function(const Function&);
    ~Function();
};

inline Function::Function(const Function& source) : manager(0)
{
    if (source.manager) {
        manager = source.manager;
        manager->manage(const_cast<Buffer*>(&source.buffer), &buffer, 0);
    }
}

inline Function::~Function()
{
    if (manager) {
        void (__cdecl *manage)(Buffer*, Buffer*, int) = manager->manage;
        if (manage)
            manage(&buffer, &buffer, 1);
    }
}

struct B0 {
    virtual ~B0();
    unsigned char padding[12];
};

struct B1 {
    virtual ~B1();
};

struct B2 {
    virtual ~B2();
    unsigned char padding[8];
};

struct B3 {
    virtual ~B3();
};

struct B4 {
    virtual ~B4();
    unsigned char padding[28];
};

struct B5 {
    virtual ~B5();
    unsigned char padding[28];
};

struct B6 {
    virtual ~B6();
    unsigned char padding[28];
};

struct B7 {
    virtual ~B7();
    unsigned char padding[28];
};

struct B8 {
    virtual ~B8();
    unsigned char padding[28];
};

struct B9 {
    virtual ~B9();
    unsigned char padding[144];
};

struct Base : B0, B1, B2, B3, B4, B5, B6, B7, B8, B9 {
    Base();
    virtual ~Base();
};

struct Descriptor : Base {
    Function callback;

    Descriptor(Function);
    virtual ~Descriptor();
};

Descriptor::Descriptor(Function source) : callback(source)
{
}
