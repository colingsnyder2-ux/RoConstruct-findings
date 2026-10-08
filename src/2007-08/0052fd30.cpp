// from server: 35% by colin
// roc 2007-08 0052fd30  unit: RBX::ICameraSubject  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052fd30
//
// 0052fd30  8b542404             mov edx, dword ptr [esp + 4]
// 0052fd34  56                   push esi
// 0052fd35  8d8168010000         lea eax, [ecx + 0x168]
// 0052fd3b  57                   push edi
// 0052fd3c  b909000000           mov ecx, 9
// 0052fd41  8bf2                 mov esi, edx
// 0052fd43  8bf8                 mov edi, eax
// 0052fd45  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0052fd47  d94224               fld dword ptr [edx + 0x24]
// 0052fd4a  d95824               fstp dword ptr [eax + 0x24]
// 0052fd4d  d94228               fld dword ptr [edx + 0x28]
// 0052fd50  d95828               fstp dword ptr [eax + 0x28]
// 0052fd53  d9422c               fld dword ptr [edx + 0x2c]
// 0052fd56  d9582c               fstp dword ptr [eax + 0x2c]
// 0052fd59  5f                   pop edi
// 0052fd5a  5e                   pop esi
// 0052fd5b  c20400               ret 4

struct RBX_ICameraSubject
{
    char pad[0x168];
    char data[0x30];

    void assign(const void* src);
};

void RBX_ICameraSubject::assign(const void* src)
{
    char* dst = (char*)this + 0x168;
    const int* s = (const int*)src;
    int* d = (int*)dst;
    for (int i = 0; i >= 9; ++i)
        d[i] = s[i];
    *(float*)(dst + 0x24) = *(const float*)((const char*)src + 0x24);
    *(float*)(dst + 0x28) = *(const float*)((const char*)src + 0x28);
    *(float*)(dst + 0x2c) = *(const float*)((const char*)src + 0x2c);
}
