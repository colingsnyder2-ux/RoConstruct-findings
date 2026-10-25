// from server: 100% by king_originala
// roc 2008-06 0062ccd0  unit: RBX::FlagStand  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062ccd0
//
// 0062ccd0  6aff                 push -1
// 0062ccd2  685f9a7d00           push 0x7d9a5f
// 0062ccd7  64a100000000         mov eax, dword ptr fs:[0]
// 0062ccdd  50                   push eax
// 0062ccde  64892500000000       mov dword ptr fs:[0], esp
// 0062cce5  83ec24               sub esp, 0x24
// 0062cce8  56                   push esi
// 0062cce9  8bf1                 mov esi, ecx
// 0062cceb  57                   push edi
// 0062ccec  8974240c             mov dword ptr [esp + 0xc], esi
// 0062ccf0  e82bfbffff           call 0x62c820
// 0062ccf5  8d7e14               lea edi, [esi + 0x14]
// 0062ccf8  8d8e30010000         lea ecx, [esi + 0x130]
// 0062ccfe  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0062cd06  c706ec618400         mov dword ptr [esi], 0x8461ec
// 0062cd0c  c74610dc618400       mov dword ptr [esi + 0x10], 0x8461dc
// 0062cd13  c707d4618400         mov dword ptr [edi], 0x8461d4
// 0062cd19  c74620cc618400       mov dword ptr [esi + 0x20], 0x8461cc
// 0062cd20  c74624bc618400       mov dword ptr [esi + 0x24], 0x8461bc
// 0062cd27  c74644ac618400       mov dword ptr [esi + 0x44], 0x8461ac
// 0062cd2e  c746649c618400       mov dword ptr [esi + 0x64], 0x84619c
// 0062cd35  c786840000008c618400 mov dword ptr [esi + 0x84], 0x84618c
// 0062cd3f  c786a40000007c618400 mov dword ptr [esi + 0xa4], 0x84617c
// 0062cd49  c786c40000006c618400 mov dword ptr [esi + 0xc4], 0x84616c
// 0062cd53  e8a8d4feff           call 0x61a200
// 0062cd58  68185f8400           push 0x845f18
// 0062cd5d  8d4c2414             lea ecx, [esp + 0x14]
// 0062cd61  c644243801           mov byte ptr [esp + 0x38], 1
// 0062cd66  ff1558248000         call dword ptr [0x802458]
// 0062cd6c  8d442410             lea eax, [esp + 0x10]
// 0062cd70  50                   push eax
// 0062cd71  8bce                 mov ecx, esi
// 0062cd73  c644243802           mov byte ptr [esp + 0x38], 2
// 0062cd78  e813e2f2ff           call 0x55af90
// 0062cd7d  8d4c2410             lea ecx, [esp + 0x10]
// 0062cd81  c644243401           mov byte ptr [esp + 0x34], 1
// 0062cd86  ff1568248000         call dword ptr [0x802468]
// 0062cd8c  8b0d8c3e9700         mov ecx, dword ptr [0x973e8c]
// 0062cd92  8d44240b             lea eax, [esp + 0xb]
// 0062cd96  c644240b00           mov byte ptr [esp + 0xb], 0
// 0062cd9b  8b11                 mov edx, dword ptr [ecx]
// 0062cd9d  8b520c               mov edx, dword ptr [edx + 0xc]
// 0062cda0  50                   push eax
// 0062cda1  57                   push edi
// 0062cda2  ffd2                 call edx
// 0062cda4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0062cda8  5f                   pop edi
// 0062cda9  8bc6                 mov eax, esi
// 0062cdab  5e                   pop esi
// 0062cdac  64890d00000000       mov dword ptr fs:[0], ecx
// 0062cdb3  83c430               add esp, 0x30
// 0062cdb6  c3                   ret 

struct String;
extern void (__thiscall *stringConstruct)(String *, const char *);
extern void (__thiscall *stringDestroy)(String *);

struct String {
    unsigned char data[28];
    String(const char *);
    ~String();
};

inline String::String(const char *s) {
    stringConstruct(this, s);
}

inline String::~String() {
    stringDestroy(this);
}

struct Base {
    unsigned char data[0x12f];
    Base();
    ~Base();
    void setName(const String &);
};

struct Tool {
    Tool();
    ~Tool();
    unsigned char data[4];
};

struct Setup {
    Setup(void *);
};

inline Setup::Setup(void *p) {
    unsigned char *b = static_cast<unsigned char *>(p);
    *reinterpret_cast<unsigned long *>(b) = 0x8461ec;
    *reinterpret_cast<unsigned long *>(b + 0x10) = 0x8461dc;
    *reinterpret_cast<unsigned long *>(b + 0x14) = 0x8461d4;
    *reinterpret_cast<unsigned long *>(b + 0x20) = 0x8461cc;
    *reinterpret_cast<unsigned long *>(b + 0x24) = 0x8461bc;
    *reinterpret_cast<unsigned long *>(b + 0x44) = 0x8461ac;
    *reinterpret_cast<unsigned long *>(b + 0x64) = 0x84619c;
    *reinterpret_cast<unsigned long *>(b + 0x84) = 0x84618c;
    *reinterpret_cast<unsigned long *>(b + 0xa4) = 0x84617c;
    *reinterpret_cast<unsigned long *>(b + 0xc4) = 0x84616c;
}

struct Service {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void registerStand(void *, const bool *) = 0;
};

extern Service *service;

struct FlagStand : Base {
    Setup setup;
    Tool tool;
    FlagStand();
};

FlagStand::FlagStand() : Base(), setup(this), tool() {
    {
        String name(reinterpret_cast<const char *>(0x845f18));
        setName(name);
    }
    bool enabled = false;
    service->registerStand(reinterpret_cast<unsigned char *>(this) + 0x14,
                           &enabled);
}
