// from server: 73% by colin
// roc 2007-08 006c26c0  unit: XTPPaintThemes::CXTPWhidbeyTheme  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c26c0
//
// 006c26c0  56                   push esi
// 006c26c1  8bf1                 mov esi, ecx
// 006c26c3  8d8e40040000         lea ecx, [esi + 0x440]
// 006c26c9  e842c5fdff           call 0x69ec10
// 006c26ce  85c0                 test eax, eax
// 006c26d0  7416                 je 0x6c26e8
// 006c26d2  8d8e48040000         lea ecx, [esi + 0x448]
// 006c26d8  e833c5fdff           call 0x69ec10
// 006c26dd  85c0                 test eax, eax
// 006c26df  7407                 je 0x6c26e8
// 006c26e1  b801000000           mov eax, 1
// 006c26e6  5e                   pop esi
// 006c26e7  c3                   ret 
// 006c26e8  33c0                 xor eax, eax
// 006c26ea  5e                   pop esi
// 006c26eb  c3                   ret 

struct CXTPWhidbeyTheme
{
    char pad[0x440];
    int field_440;
    int field_444;
    int field_448;
    int field_44c;
    bool IsCustom();
};

extern "C" int __fastcall sub_0069EC10(int *p);

bool CXTPWhidbeyTheme::IsCustom()
{
    if (sub_0069EC10(&field_440) != 0)
        return false;
    if (sub_0069EC10(&field_448) == 0)
        return false;
    return true;
}
