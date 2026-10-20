// from server: 88% by colin
// from server: 86% by king_originala
// roc 2008-06 00578e50  unit: RBX::VDataModel::?$SignalDesc  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00578e50
//
// 00578e50  64a100000000         mov eax, dword ptr fs:[0]
// 00578e56  6aff                 push -1
// 00578e58  6808817c00           push 0x7c8108
// 00578e5d  50                   push eax
// 00578e5e  64892500000000       mov dword ptr fs:[0], esp
// 00578e65  83ec18               sub esp, 0x18
// 00578e68  56                   push esi
// 00578e69  8bf1                 mov esi, ecx
// 00578e6b  80be5902000000       cmp byte ptr [esi + 0x259], 0
// 00578e72  7465                 je 0x578ed9
// 00578e74  8b8604020000         mov eax, dword ptr [esi + 0x204]
// 00578e7a  8b8028040000         mov eax, dword ptr [eax + 0x428]
// 00578e80  6a01                 push 1
// 00578e82  50                   push eax
// 00578e83  8d4c240c             lea ecx, [esp + 0xc]
// 00578e87  e8f4b00400           call 0x5c3f80
// 00578e8c  d944242c             fld dword ptr [esp + 0x2c]
// 00578e90  51                   push ecx
// 00578e91  8bce                 mov ecx, esi
// 00578e93  d91c24               fstp dword ptr [esp]
// 00578e96  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00578e9e  e8fdfdffff           call 0x578ca0
// 00578ea3  8b8604020000         mov eax, dword ptr [esi + 0x204]
// 00578ea9  8d8888020000         lea ecx, [eax + 0x288]
// 00578eaf  8b01                 mov eax, dword ptr [ecx]
// 00578eb1  8b5004               mov edx, dword ptr [eax + 4]
// 00578eb4  ffd2                 call edx
// 00578eb6  8bc8                 mov ecx, eax
// 00578eb8  e843420500           call 0x5cd100
// 00578ebd  8b8efc010000         mov ecx, dword ptr [esi + 0x1fc]
// 00578ec3  e8b82e0800           call 0x5fbd80
// 00578ec8  8d4c2404             lea ecx, [esp + 4]
// 00578ecc  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00578ed4  e8f7b30400           call 0x5c42d0
// 00578ed9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00578edd  5e                   pop esi
// 00578ede  64890d00000000       mov dword ptr fs:[0], ecx
// 00578ee5  83c424               add esp, 0x24
// 00578ee8  c20400               ret 4

struct Scope
{
    const char* name;
    void* previous;
    bool enabled;
    double startTime;

    Scope(const char* nameValue, bool enabledValue);
    ~Scope();
};

struct Result
{
    void finish();
};

struct Interface
{
    virtual void slot0();
    virtual Result* get();
};

struct Owner
{
    char padding0[0x4];
    Interface interfaceObject;
    char padding1[0x19C];
    const char* scopeName;
};

struct Secondary
{
    void update();
};

struct S
{
    char padding0[0x1FC];
    Secondary* secondary;
    char padding1[4];
    Owner* owner;
    char padding2[0x51];
    bool enabled;

    void step(float value);
    void apply(float value);
};

void S::step(float value)
{
    if (enabled)
    {
        Scope scope(owner->scopeName, true);
        apply(value);
        owner->interfaceObject.get()->finish();
        secondary->update();
    }
}
