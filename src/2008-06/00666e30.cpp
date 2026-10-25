// from server: 100% by king_originala
// roc 2008-06 00666e30  unit: RBX::HUMAN::FallingDown  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666e30
//
// 00666e30  6aff                 push -1
// 00666e32  68b8c27d00           push 0x7dc2b8
// 00666e37  64a100000000         mov eax, dword ptr fs:[0]
// 00666e3d  50                   push eax
// 00666e3e  64892500000000       mov dword ptr fs:[0], esp
// 00666e45  51                   push ecx
// 00666e46  8b442414             mov eax, dword ptr [esp + 0x14]
// 00666e4a  56                   push esi
// 00666e4b  8bf1                 mov esi, ecx
// 00666e4d  50                   push eax
// 00666e4e  89742408             mov dword ptr [esp + 8], esi
// 00666e52  e8a9cffdff           call 0x643e00
// 00666e57  8bce                 mov ecx, esi
// 00666e59  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00666e61  c70610cd8400         mov dword ptr [esi], 0x84cd10
// 00666e67  c7460408cd8400       mov dword ptr [esi + 4], 0x84cd08
// 00666e6e  e8ddce1200           call 0x793d50
// 00666e73  85c0                 test eax, eax
// 00666e75  7405                 je 0x666e7c
// 00666e77  83c014               add eax, 0x14
// 00666e7a  eb02                 jmp 0x666e7e
// 00666e7c  33c0                 xor eax, eax
// 00666e7e  50                   push eax
// 00666e7f  b9f4a29700           mov ecx, 0x97a2f4
// 00666e84  e89747f0ff           call 0x56b620
// 00666e89  85c0                 test eax, eax
// 00666e8b  740f                 je 0x666e9c
// 00666e8d  6a01                 push 1
// 00666e8f  8d4c241c             lea ecx, [esp + 0x1c]
// 00666e93  51                   push ecx
// 00666e94  8d4810               lea ecx, [eax + 0x10]
// 00666e97  e864b0f7ff           call 0x5e1f00
// 00666e9c  d90580e38100         fld dword ptr [0x81e380]
// 00666ea2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00666ea6  d95e0c               fstp dword ptr [esi + 0xc]
// 00666ea9  8bc6                 mov eax, esi
// 00666eab  5e                   pop esi
// 00666eac  64890d00000000       mov dword ptr fs:[0], ecx
// 00666eb3  83c410               add esp, 0x10
// 00666eb6  c20400               ret 4

struct Primary {
    virtual ~Primary();
};

struct Secondary {
    virtual ~Secondary();
};

struct Base : Primary, Secondary {
    int owner;
    float timer;

    Base(void*);
    virtual ~Base();
    int f();
};

struct Property {
    void set(void**, int);
};

struct Object {
    char padding[16];
    Property property;
};

struct Registry {
    Object* find(void*);
};

extern Registry registry;
extern const float initialTimer;

struct FallingDown : Base {
    FallingDown(void*);
    virtual ~FallingDown();
};

FallingDown::FallingDown(void* argument)
    : Base(argument)
{
    int value = f();
    void* key = value ? reinterpret_cast<void*>(value + 20) : 0;
    Object* object = registry.find(key);
    if (object)
        object->property.set(&argument, 1);
    timer = initialTimer;
}
