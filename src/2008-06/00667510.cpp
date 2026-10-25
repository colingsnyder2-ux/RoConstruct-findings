// from server: 100% by king_originala
// roc 2008-06 00667510  unit: RBX::HUMAN::Freefall  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00667510
//
// 00667510  83ec0c               sub esp, 0xc
// 00667513  56                   push esi
// 00667514  8bf1                 mov esi, ecx
// 00667516  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066751a  8b01                 mov eax, dword ptr [ecx]
// 0066751c  8b5004               mov edx, dword ptr [eax + 4]
// 0066751f  6a03                 push 3
// 00667521  ffd2                 call edx
// 00667523  d80d80ce8400         fmul dword ptr [0x84ce80]
// 00667529  8d442404             lea eax, [esp + 4]
// 0066752d  50                   push eax
// 0066752e  8bce                 mov ecx, esi
// 00667530  d99ea8000000         fstp dword ptr [esi + 0xa8]
// 00667536  e825c6fdff           call 0x643b60
// 0066753b  d900                 fld dword ptr [eax]
// 0066753d  d99eb4000000         fstp dword ptr [esi + 0xb4]
// 00667543  d94004               fld dword ptr [eax + 4]
// 00667546  d99eb8000000         fstp dword ptr [esi + 0xb8]
// 0066754c  d94008               fld dword ptr [eax + 8]
// 0066754f  d99ebc000000         fstp dword ptr [esi + 0xbc]
// 00667555  5e                   pop esi
// 00667556  83c40c               add esp, 0xc
// 00667559  c20800               ret 8

extern float factor;

struct Input {
    virtual void unused();
    virtual float value(int);
};

struct Vector {
    float x, y, z;
};

struct S {
    char padding[0xA8];
    float rate;
    char gap[8];
    float x, y, z;

    Vector* sample(Vector*);
    void f(int, Input*);
};

void S::f(int, Input* input)
{
    rate = input->value(3) * factor;
    Vector temporary;
    Vector* result = sample(&temporary);
    x = result->x;
    y = result->y;
    z = result->z;
}
