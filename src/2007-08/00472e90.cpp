// from server: 90% by colin
// roc 2007-08 00472e90  unit: G3D::VARArea  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00472e90
//
// 00472e90  56                   push esi
// 00472e91  33f6                 xor esi, esi
// 00472e93  3935bcd08b00         cmp dword ptr [0x8bd0bc], esi
// 00472e99  7e2e                 jle 0x472ec9
// 00472e9b  eb03                 jmp 0x472ea0
// 00472e9d  8d4900               lea ecx, [ecx]
// 00472ea0  a1b8d08b00           mov eax, dword ptr [0x8bd0b8]
// 00472ea5  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00472ea8  e803fcffff           call 0x472ab0
// 00472ead  8b0db8d08b00         mov ecx, dword ptr [0x8bd0b8]
// 00472eb3  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00472eb6  8b11                 mov edx, dword ptr [ecx]
// 00472eb8  8b02                 mov eax, dword ptr [edx]
// 00472eba  6a00                 push 0
// 00472ebc  ffd0                 call eax
// 00472ebe  83c601               add esi, 1
// 00472ec1  3b35bcd08b00         cmp esi, dword ptr [0x8bd0bc]
// 00472ec7  7cd7                 jl 0x472ea0
// 00472ec9  6a01                 push 1
// 00472ecb  6a00                 push 0
// 00472ecd  b9b8d08b00           mov ecx, 0x8bd0b8
// 00472ed2  e8f9fbffff           call 0x472ad0
// 00472ed7  5e                   pop esi
// 00472ed8  c3                   ret 

struct VARArea {
    void cleanup();
    void removeAll(int, int);
};

extern int g_varAreaCount;
extern VARArea** g_varAreas;

void VARArea::cleanup()
{
    int i = 0;
    if (g_varAreaCount > 0) {
        do {
            g_varAreas[i]->cleanup();
            VARArea* a = g_varAreas[i];
            void (__thiscall *fn)(VARArea*, int) = *(void (__thiscall **)(VARArea*, int))a;
            fn(a, 0);
            ++i;
        } while (i < g_varAreaCount);
    }
    g_varAreas[0]->removeAll(0, 1);
}
