// from server: 100% by colin
// roc 2007-08 00671bc0  unit: CPropertyGridItemBrickColor  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671bc0
//
// 00671bc0  8b442408             mov eax, dword ptr [esp + 8]
// 00671bc4  85c0                 test eax, eax
// 00671bc6  7512                 jne 0x671bda
// 00671bc8  56                   push esi
// 00671bc9  8b742408             mov esi, dword ptr [esp + 8]
// 00671bcd  50                   push eax
// 00671bce  56                   push esi
// 00671bcf  e8acffffff           call 0x671b80
// 00671bd4  8bc6                 mov eax, esi
// 00671bd6  5e                   pop esi
// 00671bd7  c20800               ret 8
// 00671bda  8b4020               mov eax, dword ptr [eax + 0x20]
// 00671bdd  56                   push esi
// 00671bde  8b742408             mov esi, dword ptr [esp + 8]
// 00671be2  50                   push eax
// 00671be3  56                   push esi
// 00671be4  e897ffffff           call 0x671b80
// 00671be9  8bc6                 mov eax, esi
// 00671beb  5e                   pop esi
// 00671bec  c20800               ret 8

struct CPropertyGridItemBrickColor
{
    char pad[0x20];
    void* field_20;
};

void __stdcall func_00671b80(void* dst, void* src);

void* __stdcall func_00671bc0(void* dst, CPropertyGridItemBrickColor* src)
{
    void* value;
    if (src == 0)
        value = 0;
    else
        value = src->field_20;
    func_00671b80(dst, value);
    return dst;
}
