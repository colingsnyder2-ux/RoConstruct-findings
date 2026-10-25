// from server: 100% by king_originala
// roc 2008-06 004692f0  unit: DxUserInput  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004692f0
//
// 004692f0  e8ab080a00           call 0x509ba0
// 004692f5  d900                 fld dword ptr [eax]
// 004692f7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004692fb  d919                 fstp dword ptr [ecx]
// 004692fd  d94004               fld dword ptr [eax + 4]
// 00469300  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00469304  d95904               fstp dword ptr [ecx + 4]
// 00469307  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046930b  d901                 fld dword ptr [ecx]
// 0046930d  d800                 fadd dword ptr [eax]
// 0046930f  d918                 fstp dword ptr [eax]
// 00469311  d94104               fld dword ptr [ecx + 4]
// 00469314  d84004               fadd dword ptr [eax + 4]
// 00469317  d95804               fstp dword ptr [eax + 4]
// 0046931a  c3                   ret 

struct Vec2 {
    float x;
    float y;
};

extern const Vec2& __cdecl zeroVector();

void __cdecl func_004692f0(const Vec2* input, Vec2* first, Vec2* second)
{
    const Vec2& zero = zeroVector();
    first->x = zero.x;
    first->y = zero.y;
    second->x = input->x + second->x;
    second->y = input->y + second->y;
}
