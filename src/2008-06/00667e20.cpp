// from server: 100% by king_originala
// roc 2008-06 00667e20  unit: RBX::HUMAN::GettingUp  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00667e20
//
// 00667e20  6aff                 push -1
// 00667e22  68b8c27d00           push 0x7dc2b8
// 00667e27  64a100000000         mov eax, dword ptr fs:[0]
// 00667e2d  50                   push eax
// 00667e2e  64892500000000       mov dword ptr fs:[0], esp
// 00667e35  51                   push ecx
// 00667e36  d9055ccc8400         fld dword ptr [0x84cc5c]
// 00667e3c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00667e40  56                   push esi
// 00667e41  83ec08               sub esp, 8
// 00667e44  d95c2404             fstp dword ptr [esp + 4]
// 00667e48  8bf1                 mov esi, ecx
// 00667e4a  d905e06d8200         fld dword ptr [0x826de0]
// 00667e50  8974240c             mov dword ptr [esp + 0xc], esi
// 00667e54  d91c24               fstp dword ptr [esp]
// 00667e57  50                   push eax
// 00667e58  e803680000           call 0x66e660
// 00667e5d  8bce                 mov ecx, esi
// 00667e5f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00667e67  c70630cf8400         mov dword ptr [esi], 0x84cf30
// 00667e6d  c7460428cf8400       mov dword ptr [esi + 4], 0x84cf28
// 00667e74  e8d7be1200           call 0x793d50
// 00667e79  85c0                 test eax, eax
// 00667e7b  7405                 je 0x667e82
// 00667e7d  83c014               add eax, 0x14
// 00667e80  eb02                 jmp 0x667e84
// 00667e82  33c0                 xor eax, eax
// 00667e84  50                   push eax
// 00667e85  b930a69700           mov ecx, 0x97a630
// 00667e8a  e89137f0ff           call 0x56b620
// 00667e8f  85c0                 test eax, eax
// 00667e91  740f                 je 0x667ea2
// 00667e93  6a01                 push 1
// 00667e95  8d4c241c             lea ecx, [esp + 0x1c]
// 00667e99  51                   push ecx
// 00667e9a  8d4810               lea ecx, [eax + 0x10]
// 00667e9d  e85ea0f7ff           call 0x5e1f00
// 00667ea2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00667ea6  8bc6                 mov eax, esi
// 00667ea8  5e                   pop esi
// 00667ea9  64890d00000000       mov dword ptr fs:[0], ecx
// 00667eb0  83c410               add esp, 0x10
// 00667eb3  c20400               ret 4

extern const float initialX;
extern const float initialY;
extern char primaryTable[];
extern char secondaryTable[];

struct GroupDragTool {
    void* vtable;
    void* vtable2;
    char pad[0x98];
    float fieldA0;
    float fieldA4;

    GroupDragTool(void* a, float x, float y);
    ~GroupDragTool();
    int f();
};

struct Signal {
    void connect(void** argument, int enabled);
};

struct Target {
    char pad[0x10];
    Signal signal;
};

struct Registry {
    Target* find(void* key);
};

extern Registry registry;

struct GettingUp : GroupDragTool {
    GettingUp(void* argument);
};

GettingUp::GettingUp(void* argument)
    : GroupDragTool(argument, initialX, initialY)
{
    vtable = primaryTable;
    vtable2 = secondaryTable;

    int object = f();
    void* key = object ? reinterpret_cast<void*>(object + 0x14) : 0;
    Target* target = registry.find(key);
    if (target)
        target->signal.connect(&argument, 1);
}
