// from server: 86% by colin
// roc 2007-08 00635350  unit: MyXTPCommandBars  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00635350
//
// 00635350  56                   push esi
// 00635351  57                   push edi
// 00635352  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00635356  8bf1                 mov esi, ecx
// 00635358  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0063535b  8d44240c             lea eax, [esp + 0xc]
// 0063535f  50                   push eax
// 00635360  57                   push edi
// 00635361  81c18c000000         add ecx, 0x8c
// 00635367  e8f4f6ffff           call 0x634a60
// 0063536c  85c0                 test eax, eax
// 0063536e  7505                 jne 0x635375
// 00635370  5f                   pop edi
// 00635371  5e                   pop esi
// 00635372  c20400               ret 4
// 00635375  8d4c240c             lea ecx, [esp + 0xc]
// 00635379  51                   push ecx
// 0063537a  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0063537d  57                   push edi
// 0063537e  81c1a8000000         add ecx, 0xa8
// 00635384  e8d7f6ffff           call 0x634a60
// 00635389  f7d8                 neg eax
// 0063538b  1bc0                 sbb eax, eax
// 0063538d  5f                   pop edi
// 0063538e  83c001               add eax, 1
// 00635391  5e                   pop esi
// 00635392  c20400               ret 4

struct MyXTPCommandBars {
    char pad[0x74];
    char* field74;
    int func(int arg);
};

extern "C" int __stdcall sub_634a60(void* self, int arg, void* out);

int MyXTPCommandBars::func(int arg) {
    int local;
    int r1 = sub_634a60(field74 + 0x8c, arg, &local);
    if (r1 == 0)
        return 0;
    int r2 = sub_634a60(field74 + 0xa8, arg, &local);
    return (r2 == 0) ? 1 : 0;
}
