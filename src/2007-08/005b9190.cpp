// from server: 92% by colin
// roc 2007-08 005b9190  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b9190
//
// 005b9190  8b01                 mov eax, dword ptr [ecx]
// 005b9192  8b80d8010000         mov eax, dword ptr [eax + 0x1d8]
// 005b9198  8b4904               mov ecx, dword ptr [ecx + 4]
// 005b919b  8b848894000000       mov eax, dword ptr [eax + ecx*4 + 0x94]
// 005b91a2  85c0                 test eax, eax
// 005b91a4  753a                 jne 0x5b91e0
// 005b91a6  b801000000           mov eax, 1
// 005b91ab  8405bc5e8c00         test byte ptr [0x8c5ebc], al
// 005b91b1  7528                 jne 0x5b91db
// 005b91b3  d905f0547b00         fld dword ptr [0x7b54f0]
// 005b91b9  0905bc5e8c00         or dword ptr [0x8c5ebc], eax
// 005b91bf  d91db45e8c00         fstp dword ptr [0x8c5eb4]
// 005b91c5  c705b05e8c0000000000 mov dword ptr [0x8c5eb0], 0
// 005b91cf  d9059c7e7900         fld dword ptr [0x797e9c]
// 005b91d5  d91db85e8c00         fstp dword ptr [0x8c5eb8]
// 005b91db  b8b05e8c00           mov eax, 0x8c5eb0
// 005b91e0  d94004               fld dword ptr [eax + 4]
// 005b91e3  c3                   ret 

struct EnumPropDescriptor {
    char pad0[4];
    int m_index;
    float getValue();
};

extern float g_7b54f0;
extern float g_797e9c;
extern int g_8c5ebc;
extern float g_8c5eb4;
extern int g_8c5eb0;
extern float g_8c5eb8;

float EnumPropDescriptor::getValue()
{
    int* p = *(int**)this;
    int* arr = *(int**)((char*)p + 0x1d8);
    int idx = *(int*)((char*)this + 4);
    int* elem = (int*)((char*)arr + idx * 4 + 0x94);
    int* result = (int*)*elem;
    if (result == 0)
    {
        if ((g_8c5ebc & 1) == 0)
        {
            g_8c5eb4 = g_7b54f0;
            g_8c5ebc |= 1;
            g_8c5eb0 = 0;
            g_8c5eb8 = g_797e9c;
        }
        result = &g_8c5eb0;
    }
    return *(float*)((char*)result + 4);
}
