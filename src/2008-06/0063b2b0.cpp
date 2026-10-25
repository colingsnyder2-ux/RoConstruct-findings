// from server: 100% by king_originala
// roc 2008-06 0063b2b0  unit: RBX::VBodyGyro::?$BoundPropGetSet  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063b2b0
//
// 0063b2b0  8b442404             mov eax, dword ptr [esp + 4]
// 0063b2b4  53                   push ebx
// 0063b2b5  55                   push ebp
// 0063b2b6  56                   push esi
// 0063b2b7  8be9                 mov ebp, ecx
// 0063b2b9  85c0                 test eax, eax
// 0063b2bb  7409                 je 0x63b2c6
// 0063b2bd  8d70ec               lea esi, [eax - 0x14]
// 0063b2c0  89742410             mov dword ptr [esp + 0x10], esi
// 0063b2c4  eb0c                 jmp 0x63b2d2
// 0063b2c6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063b2ce  8b742410             mov esi, dword ptr [esp + 0x10]
// 0063b2d2  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0063b2d5  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0063b2d9  53                   push ebx
// 0063b2da  03ce                 add ecx, esi
// 0063b2dc  e8ffb2e3ff           call 0x4765e0
// 0063b2e1  84c0                 test al, al
// 0063b2e3  7445                 je 0x63b32a
// 0063b2e5  8b4508               mov eax, dword ptr [ebp + 8]
// 0063b2e8  03c6                 add eax, esi
// 0063b2ea  57                   push edi
// 0063b2eb  8bf8                 mov edi, eax
// 0063b2ed  b909000000           mov ecx, 9
// 0063b2f2  8bf3                 mov esi, ebx
// 0063b2f4  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0063b2f6  d94324               fld dword ptr [ebx + 0x24]
// 0063b2f9  d95824               fstp dword ptr [eax + 0x24]
// 0063b2fc  d94328               fld dword ptr [ebx + 0x28]
// 0063b2ff  d95828               fstp dword ptr [eax + 0x28]
// 0063b302  d9432c               fld dword ptr [ebx + 0x2c]
// 0063b305  d9582c               fstp dword ptr [eax + 0x2c]
// 0063b308  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0063b30b  5f                   pop edi
// 0063b30c  85c0                 test eax, eax
// 0063b30e  740d                 je 0x63b31d
// 0063b310  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0063b313  51                   push ecx
// 0063b314  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0063b317  034c2414             add ecx, dword ptr [esp + 0x14]
// 0063b31b  ffd0                 call eax
// 0063b31d  8b5504               mov edx, dword ptr [ebp + 4]
// 0063b320  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063b324  52                   push edx
// 0063b325  e8d627ddff           call 0x40db00
// 0063b32a  5e                   pop esi
// 0063b32b  5d                   pop ebp
// 0063b32c  5b                   pop ebx
// 0063b32d  c20800               ret 8

struct Matrix {
    float elements[9];
};

struct Frame {
    Matrix rotation;
    float x, y, z;

    bool different(const Frame& value);
};

struct Object {
    char prefix[20];
    void notify(void* property);
};

struct Interface {
    char data;
};

struct Concrete : Object, Interface {
};

typedef void (__thiscall *Callback)(void*, void*);

struct S {
    void* reserved0;
    void* property;
    int valueOffset;
    int reserved12;
    Callback callback;
    int callbackOffset;

    void set(Interface* object, const Frame& value);
};

void S::set(Interface* object, const Frame& value)
{
    Concrete* owner = static_cast<Concrete*>(object);
    char* base = reinterpret_cast<char*>(owner);

    if (reinterpret_cast<Frame*>(base + valueOffset)->different(value)) {
        Frame* destination = reinterpret_cast<Frame*>(base + valueOffset);
        destination->rotation = value.rotation;
        destination->x = value.x;
        destination->y = value.y;
        destination->z = value.z;

        if (callback)
            callback(base + callbackOffset, property);

        owner->notify(property);
    }
}
