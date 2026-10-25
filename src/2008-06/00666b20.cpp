// from server: 100% by king_originala
// roc 2008-06 00666b20  unit: RBX::HUMAN::Running  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666b20
//
// 00666b20  8b442408             mov eax, dword ptr [esp + 8]
// 00666b24  d9442404             fld dword ptr [esp + 4]
// 00666b28  56                   push esi
// 00666b29  50                   push eax
// 00666b2a  51                   push ecx
// 00666b2b  d91c24               fstp dword ptr [esp]
// 00666b2e  8bf1                 mov esi, ecx
// 00666b30  e8dbf8ffff           call 0x666410
// 00666b35  8bce                 mov ecx, esi
// 00666b37  e8b4d9fdff           call 0x6444f0
// 00666b3c  84c0                 test al, al
// 00666b3e  7409                 je 0x666b49
// 00666b40  d90584cc8400         fld dword ptr [0x84cc84]
// 00666b46  d95e0c               fstp dword ptr [esi + 0xc]
// 00666b49  8bce                 mov ecx, esi
// 00666b4b  e8e0c7fdff           call 0x643330
// 00666b50  84c0                 test al, al
// 00666b52  745c                 je 0x666bb0
// 00666b54  8bce                 mov ecx, esi
// 00666b56  e8f5d11200           call 0x793d50
// 00666b5b  85c0                 test eax, eax
// 00666b5d  7405                 je 0x666b64
// 00666b5f  83c014               add eax, 0x14
// 00666b62  eb02                 jmp 0x666b66
// 00666b64  33c0                 xor eax, eax
// 00666b66  d986c0000000         fld dword ptr [esi + 0xc0]
// 00666b6c  50                   push eax
// 00666b6d  d986bc000000         fld dword ptr [esi + 0xbc]
// 00666b73  b904a59700           mov ecx, 0x97a504
// 00666b78  d986b8000000         fld dword ptr [esi + 0xb8]
// 00666b7e  dcc8                 fmul st(0), st(0)
// 00666b80  d9c1                 fld st(1)
// 00666b82  deca                 fmulp st(2)
// 00666b84  dec1                 faddp st(1)
// 00666b86  d9c1                 fld st(1)
// 00666b88  deca                 fmulp st(2)
// 00666b8a  dec1                 faddp st(1)
// 00666b8c  d9fa                 fsqrt 
// 00666b8e  d95c2410             fstp dword ptr [esp + 0x10]
// 00666b92  e8894af0ff           call 0x56b620
// 00666b97  85c0                 test eax, eax
// 00666b99  7415                 je 0x666bb0
// 00666b9b  d944240c             fld dword ptr [esp + 0xc]
// 00666b9f  51                   push ecx
// 00666ba0  8d4c2410             lea ecx, [esp + 0x10]
// 00666ba4  d91c24               fstp dword ptr [esp]
// 00666ba7  51                   push ecx
// 00666ba8  8d4810               lea ecx, [eax + 0x10]
// 00666bab  e840cce2ff           call 0x4937f0
// 00666bb0  5e                   pop esi
// 00666bb1  c20800               ret 8

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)
#pragma float_control(precise, off)

extern const float resetValue;

struct Signal {
    void fire(const float*, float);
};

struct Result {
    char padding[0x10];
    Signal signal;
};

struct Source {
    char padding[0x14];
    char data;
};

struct Lookup {
    Result* find(void*);
};

extern Lookup lookup;

struct Running {
    char padding0[0x0c];
    float value;
    char padding1[0xa8];
    float x;
    float y;
    float z;

    void update(float, int);
    void baseUpdate(float, int);
    bool shouldReset();
    bool shouldNotify();
    Source* source();
};

void Running::update(float dt, int argument)
{
    baseUpdate(dt, argument);

    if (shouldReset())
        value = resetValue;

    if (shouldNotify()) {
        Source* p = source();
        void* key = p ? &p->data : 0;
        float& speed = reinterpret_cast<float&>(argument);
        speed = (float)sqrt(x * x + y * y + z * z);
        Result* result = lookup.find(key);
        if (result)
            result->signal.fire(&speed, speed);
    }
}
