// from server: 62% by colin
// roc 2007-08 006fa850  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridNativeXPTheme  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fa850
//
// 006fa850  56                   push esi
// 006fa851  8bf1                 mov esi, ecx
// 006fa853  e828ebffff           call 0x6f9380
// 006fa858  e813e7f6ff           call 0x668f70
// 006fa85d  8bc8                 mov ecx, eax
// 006fa85f  e80ce5f6ff           call 0x668d70
// 006fa864  83e801               sub eax, 1
// 006fa867  740a                 je 0x6fa873
// 006fa869  83e801               sub eax, 1
// 006fa86c  740e                 je 0x6fa87c
// 006fa86e  83e801               sub eax, 1
// 006fa871  7507                 jne 0x6fa87a
// 006fa873  c7463c7f9db900       mov dword ptr [esi + 0x3c], 0xb99d7f
// 006fa87a  5e                   pop esi
// 006fa87b  c3                   ret 
// 006fa87c  c7463ca4b97f00       mov dword ptr [esi + 0x3c], 0x7fb9a4
// 006fa883  5e                   pop esi
// 006fa884  c3                   ret 

struct CXTPPropertyGridNativeXPTheme
{
    void Init();
    int field_0x3c;
};

extern "C" void __stdcall sub_6F9380();
extern "C" int __stdcall sub_668F70();
extern "C" int __stdcall sub_668D70();

void CXTPPropertyGridNativeXPTheme::Init()
{
    sub_6F9380();
    int v = sub_668F70();
    int r = sub_668D70();
    r -= 1;
    if (r == 0)
    {
        field_0x3c = 0xb99d7f;
        return;
    }
    r -= 1;
    if (r == 0)
    {
        field_0x3c = 0x7fb9a4;
        return;
    }
    r -= 1;
    if (r == 0)
    {
        field_0x3c = 0xb99d7f;
    }
}
