// from server: 100% by colin
// roc 2007-08 006c1930  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c1930
//
// 006c1930  56                   push esi
// 006c1931  8bf1                 mov esi, ecx
// 006c1933  e8d8d4ffff           call 0x6bee10
// 006c1938  c70694707d00         mov dword ptr [esi], 0x7d7094
// 006c193e  c7863804000000000000 mov dword ptr [esi + 0x438], 0
// 006c1948  c7862405000001000000 mov dword ptr [esi + 0x524], 1
// 006c1952  8bc6                 mov eax, esi
// 006c1954  5e                   pop esi
// 006c1955  c3                   ret 

struct CXTPOffice2003Theme {
    char pad[0x528];
    int f();
};

int CXTPOffice2003Theme::f()
{
    char *self = (char *)this;
    extern void sub_6bee10();
    sub_6bee10();
    *(void **)self = (void *)0x7d7094;
    *(int *)(self + 0x438) = 0;
    *(int *)(self + 0x524) = 1;
    return (int)this;
}
