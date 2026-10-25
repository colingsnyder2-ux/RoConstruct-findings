// from server: 100% by king_originala
// roc 2008-06 00666bc0  unit: RBX::HUMAN::Climbing  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666bc0
//
// 00666bc0  8b442408             mov eax, dword ptr [esp + 8]
// 00666bc4  d9442404             fld dword ptr [esp + 4]
// 00666bc8  56                   push esi
// 00666bc9  50                   push eax
// 00666bca  51                   push ecx
// 00666bcb  d91c24               fstp dword ptr [esp]
// 00666bce  8bf1                 mov esi, ecx
// 00666bd0  e83bf8ffff           call 0x666410
// 00666bd5  8bce                 mov ecx, esi
// 00666bd7  e854c7fdff           call 0x643330
// 00666bdc  84c0                 test al, al
// 00666bde  745c                 je 0x666c3c
// 00666be0  8bce                 mov ecx, esi
// 00666be2  e869d11200           call 0x793d50
// 00666be7  85c0                 test eax, eax
// 00666be9  7405                 je 0x666bf0
// 00666beb  83c014               add eax, 0x14
// 00666bee  eb02                 jmp 0x666bf2
// 00666bf0  33c0                 xor eax, eax
// 00666bf2  d986c0000000         fld dword ptr [esi + 0xc0]
// 00666bf8  50                   push eax
// 00666bf9  d986bc000000         fld dword ptr [esi + 0xbc]
// 00666bff  b98ca59700           mov ecx, 0x97a58c
// 00666c04  d986b8000000         fld dword ptr [esi + 0xb8]
// 00666c0a  dcc8                 fmul st(0), st(0)
// 00666c0c  d9c1                 fld st(1)
// 00666c0e  deca                 fmulp st(2)
// 00666c10  dec1                 faddp st(1)
// 00666c12  d9c1                 fld st(1)
// 00666c14  deca                 fmulp st(2)
// 00666c16  dec1                 faddp st(1)
// 00666c18  d9fa                 fsqrt 
// 00666c1a  d95c2410             fstp dword ptr [esp + 0x10]
// 00666c1e  e8fd49f0ff           call 0x56b620
// 00666c23  85c0                 test eax, eax
// 00666c25  7415                 je 0x666c3c
// 00666c27  d944240c             fld dword ptr [esp + 0xc]
// 00666c2b  51                   push ecx
// 00666c2c  8d4c2410             lea ecx, [esp + 0x10]
// 00666c30  d91c24               fstp dword ptr [esp]
// 00666c33  51                   push ecx
// 00666c34  8d4810               lea ecx, [eax + 0x10]
// 00666c37  e8b4cbe2ff           call 0x4937f0
// 00666c3c  5e                   pop esi
// 00666c3d  c20800               ret 8

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off, push)

struct Signal {
    void fire(const float*, float);
};

struct Entry {
    char padding[0x10];
    Signal signal;
};

struct Registry {
    Entry* find(void*);
};

extern Registry registry;

struct Climbing {
    char padding[0xb8];
    float x;
    float y;
    float z;

    void update(float, int);
    void baseUpdate(float, int);
    bool isActive();
    void* owner();
};

void Climbing::update(float dt, int step)
{
    baseUpdate(dt, step);
    if (isActive()) {
        void* p = owner();
        void* key = p ? static_cast<char*>(p) + 0x14 : 0;
        float speed = static_cast<float>(sqrt(x * x + y * y + z * z));
        Entry* entry = registry.find(key);
        if (entry)
            entry->signal.fire(&speed, speed);
    }
}

#pragma float_control(pop)
