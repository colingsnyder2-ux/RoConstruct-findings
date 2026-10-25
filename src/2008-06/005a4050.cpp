// from server: 100% by colin
// roc 2008-06 005a4050  unit: RBX::Stats::N::?$TypedStatsItem  size: 227 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a4050
//
// 005a4050  6aff                 push -1
// 005a4052  68902c7d00           push 0x7d2c90
// 005a4057  64a100000000         mov eax, dword ptr fs:[0]
// 005a405d  50                   push eax
// 005a405e  64892500000000       mov dword ptr fs:[0], esp
// 005a4065  51                   push ecx
// 005a4066  56                   push esi
// 005a4067  8bf1                 mov esi, ecx
// 005a4069  89742404             mov dword ptr [esp + 4], esi
// 005a406d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a4075  e866abebff           call 0x45ebe0
// 005a407a  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a407e  c706643c8300         mov dword ptr [esi], 0x833c64
// 005a4084  c74610543c8300       mov dword ptr [esi + 0x10], 0x833c54
// 005a408b  c746144c3c8300       mov dword ptr [esi + 0x14], 0x833c4c
// 005a4092  c74620443c8300       mov dword ptr [esi + 0x20], 0x833c44
// 005a4099  c74624343c8300       mov dword ptr [esi + 0x24], 0x833c34
// 005a40a0  c74644243c8300       mov dword ptr [esi + 0x44], 0x833c24
// 005a40a7  c74664143c8300       mov dword ptr [esi + 0x64], 0x833c14
// 005a40ae  c78684000000043c8300 mov dword ptr [esi + 0x84], 0x833c04
// 005a40b8  c786a4000000f43b8300 mov dword ptr [esi + 0xa4], 0x833bf4
// 005a40c2  c786c4000000e43b8300 mov dword ptr [esi + 0xc4], 0x833be4
// 005a40cc  c644241001           mov byte ptr [esp + 0x10], 1
// 005a40d1  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 005a40db  85c0                 test eax, eax
// 005a40dd  741f                 je 0x5a40fe
// 005a40df  6a00                 push 0
// 005a40e1  8d8e60010000         lea ecx, [esi + 0x160]
// 005a40e7  51                   push ecx
// 005a40e8  8d542428             lea edx, [esp + 0x28]
// 005a40ec  898658010000         mov dword ptr [esi + 0x158], eax
// 005a40f2  8b00                 mov eax, dword ptr [eax]
// 005a40f4  52                   push edx
// 005a40f5  ffd0                 call eax
// 005a40f7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a40fb  83c40c               add esp, 0xc
// 005a40fe  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005a4106  85c0                 test eax, eax
// 005a4108  7415                 je 0x5a411f
// 005a410a  8b00                 mov eax, dword ptr [eax]
// 005a410c  85c0                 test eax, eax
// 005a410e  740f                 je 0x5a411f
// 005a4110  8d4c2420             lea ecx, [esp + 0x20]
// 005a4114  6a01                 push 1
// 005a4116  51                   push ecx
// 005a4117  8bd1                 mov edx, ecx
// 005a4119  52                   push edx
// 005a411a  ffd0                 call eax
// 005a411c  83c40c               add esp, 0xc
// 005a411f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a4123  8bc6                 mov eax, esi
// 005a4125  5e                   pop esi
// 005a4126  64890d00000000       mov dword ptr fs:[0], ecx
// 005a412d  83c410               add esp, 0x10
// 005a4130  c22000               ret 0x20

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
