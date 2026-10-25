// from server: 100% by king_originala
// roc 2008-06 00633630  unit: RBX::Network::VPlayer::?$BoundPropGetSet  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633630
//
// 00633630  64a100000000         mov eax, dword ptr fs:[0]
// 00633636  6aff                 push -1
// 00633638  68d8f47b00           push 0x7bf4d8
// 0063363d  50                   push eax
// 0063363e  64892500000000       mov dword ptr fs:[0], esp
// 00633645  83ec2c               sub esp, 0x2c
// 00633648  833900               cmp dword ptr [ecx], 0
// 0063364b  7517                 jne 0x633664
// 0063364d  8d4c2404             lea ecx, [esp + 4]
// 00633651  e89a68ddff           call 0x409ef0
// 00633656  50                   push eax
// 00633657  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0063365f  e89c6eddff           call 0x40a500
// 00633664  d944243c             fld dword ptr [esp + 0x3c]
// 00633668  83ec0c               sub esp, 0xc
// 0063366b  8bc4                 mov eax, esp
// 0063366d  d918                 fstp dword ptr [eax]
// 0063366f  83c108               add ecx, 8
// 00633672  d944244c             fld dword ptr [esp + 0x4c]
// 00633676  8964240c             mov dword ptr [esp + 0xc], esp
// 0063367a  d95804               fstp dword ptr [eax + 4]
// 0063367d  51                   push ecx
// 0063367e  d9442454             fld dword ptr [esp + 0x54]
// 00633682  d95808               fstp dword ptr [eax + 8]
// 00633685  8b41f8               mov eax, dword ptr [ecx - 8]
// 00633688  8b4804               mov ecx, dword ptr [eax + 4]
// 0063368b  ffd1                 call ecx
// 0063368d  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00633691  83c410               add esp, 0x10
// 00633694  64890d00000000       mov dword ptr fs:[0], ecx
// 0063369b  83c438               add esp, 0x38
// 0063369e  c20c00               ret 0xc

struct Vector3
{
    float x, y, z;

    Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}
    ~Vector3() {}
};

struct CallError
{
    char data[40];

    CallError();
    ~CallError();
};

__declspec(noreturn) void __cdecl raiseCallError(const CallError&);

struct Operations
{
    void (__cdecl *unused)();
    void (__cdecl *invoke)(void*, Vector3);
};

struct BoundPropGetSet
{
    Operations* operations;
    unsigned int reserved;
    char storage[4];

    void set(Vector3 value);
};

void BoundPropGetSet::set(Vector3 value)
{
    if (!operations)
        raiseCallError(CallError());

    operations->invoke(storage, value);
}
