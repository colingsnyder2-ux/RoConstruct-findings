// from server: 100% by colin
// roc 2007-08 005a4bd0  unit: RBX::Humanoid  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4bd0
//
// 005a4bd0  8b89b4000000         mov ecx, dword ptr [ecx + 0xb4]
// 005a4bd6  85c9                 test ecx, ecx
// 005a4bd8  740f                 je 0x5a4be9
// 005a4bda  8b01                 mov eax, dword ptr [ecx]
// 005a4bdc  d9442404             fld dword ptr [esp + 4]
// 005a4be0  8b5008               mov edx, dword ptr [eax + 8]
// 005a4be3  51                   push ecx
// 005a4be4  d91c24               fstp dword ptr [esp]
// 005a4be7  ffd2                 call edx
// 005a4be9  c20800               ret 8

struct Humanoid {
    char pad[0xb4];
    void* field_b4;
    void setWalkSpeed(float value, int extra);
};

void Humanoid::setWalkSpeed(float value, int extra)
{
    void* p = field_b4;
    if (p) {
        void** vtbl = *(void***)p;
        typedef void (__thiscall *Fn)(void*, float);
        Fn fn = (Fn)vtbl[2];
        fn(p, value);
    }
}
