// from server: 100% by king_originala
// roc 2008-06 00411370  unit: CChatPrompt  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411370
//
// 00411370  56                   push esi
// 00411371  8b742408             mov esi, dword ptr [esp + 8]
// 00411375  56                   push esi
// 00411376  e8f9f82800           call 0x6a0c74
// 0041137b  85c0                 test eax, eax
// 0041137d  7504                 jne 0x411383
// 0041137f  5e                   pop esi
// 00411380  c20400               ret 4
// 00411383  8b4620               mov eax, dword ptr [esi + 0x20]
// 00411386  257fffcfff           and eax, 0xffcfff7f
// 0041138b  0d00000008           or eax, 0x8000000
// 00411390  894620               mov dword ptr [esi + 0x20], eax
// 00411393  b801000000           mov eax, 1
// 00411398  5e                   pop esi
// 00411399  c20400               ret 4

struct S {
    unsigned char padding[0x20];
    unsigned long flags;
};

extern "C" int __stdcall check(S* p);

int __stdcall f(S* p)
{
    if (!check(p))
        return 0;

    p->flags = (p->flags & 0xFFCFFF7FUL) | 0x08000000UL;
    return 1;
}
