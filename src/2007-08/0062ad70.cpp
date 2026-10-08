// from server: 59% by colin
// roc 2007-08 0062ad70  unit: RBX::GroupDragTool  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062ad70
//
// 0062ad70  8b442404             mov eax, dword ptr [esp + 4]
// 0062ad74  0fbf500a             movsx edx, word ptr [eax + 0xa]
// 0062ad78  56                   push esi
// 0062ad79  8bf1                 mov esi, ecx
// 0062ad7b  0fbf4808             movsx ecx, word ptr [eax + 8]
// 0062ad7f  8b06                 mov eax, dword ptr [esi]
// 0062ad81  894c2408             mov dword ptr [esp + 8], ecx
// 0062ad85  8bce                 mov ecx, esi
// 0062ad87  db442408             fild dword ptr [esp + 8]
// 0062ad8b  89542408             mov dword ptr [esp + 8], edx
// 0062ad8f  8b5020               mov edx, dword ptr [eax + 0x20]
// 0062ad92  db442408             fild dword ptr [esp + 8]
// 0062ad96  d9c9                 fxch st(1)
// 0062ad98  d95e24               fstp dword ptr [esi + 0x24]
// 0062ad9b  d95e28               fstp dword ptr [esi + 0x28]
// 0062ad9e  ffd2                 call edx
// 0062ada0  8bc6                 mov eax, esi
// 0062ada2  5e                   pop esi
// 0062ada3  c20400               ret 4

struct S_func_0062ad70 {
    char pad0[0x24];
    float m_24;
    float m_28;
    void f(int a1);
};

void S_func_0062ad70::f(int a1)
{
    int x = *(short*)(a1 + 8);
    int y = *(short*)(a1 + 0xa);
    m_24 = (float)x;
    m_28 = (float)y;
    (*(void(__thiscall**)(void*))(*(int*)this + 0x20))(this);
}
