// from server: 61% by colin
// roc 2007-08 005a5600  unit: RBX::Humanoid  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a5600
//
// 005a5600  51                   push ecx
// 005a5601  85c9                 test ecx, ecx
// 005a5603  56                   push esi
// 005a5604  7407                 je 0x5a560d
// 005a5606  8d4104               lea eax, [ecx + 4]
// 005a5609  8bf0                 mov esi, eax
// 005a560b  eb04                 jmp 0x5a5611
// 005a560d  33c0                 xor eax, eax
// 005a560f  33f6                 xor esi, esi
// 005a5611  8b0dac588c00         mov ecx, dword ptr [0x8c58ac]
// 005a5617  8b11                 mov edx, dword ptr [ecx]
// 005a5619  50                   push eax
// 005a561a  8b4204               mov eax, dword ptr [edx + 4]
// 005a561d  ffd0                 call eax
// 005a561f  d95c2404             fstp dword ptr [esp + 4]
// 005a5623  8b0d1c598c00         mov ecx, dword ptr [0x8c591c]
// 005a5629  8b11                 mov edx, dword ptr [ecx]
// 005a562b  8b4204               mov eax, dword ptr [edx + 4]
// 005a562e  56                   push esi
// 005a562f  ffd0                 call eax
// 005a5631  d87c2404             fdivr dword ptr [esp + 4]
// 005a5635  5e                   pop esi
// 005a5636  59                   pop ecx
// 005a5637  c3                   ret 

struct Humanoid {
    char pad[4];
    int field4;
    float getScale();
};

struct IUnknownLike {
    virtual void dummy0();
    virtual float getValue(int* p);
};

extern IUnknownLike* g_ptr1;
extern IUnknownLike* g_ptr2;

float Humanoid::getScale()
{
    float a;
    int* p;
    if (this) {
        p = &this->field4;
    } else {
        p = 0;
    }
    a = g_ptr1->getValue(p);
    float b = g_ptr2->getValue(p);
    return a / b;
}
