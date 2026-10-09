// from server: 100% by colin
// roc 2007-08 0052d250  unit: RBX::RunService  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052d250
//
// 0052d250  56                   push esi
// 0052d251  8bf1                 mov esi, ecx
// 0052d253  83bebc00000000       cmp dword ptr [esi + 0xbc], 0
// 0052d25a  7538                 jne 0x52d294
// 0052d25c  57                   push edi
// 0052d25d  8d8e74010000         lea ecx, [esi + 0x174]
// 0052d263  c6865801000001       mov byte ptr [esi + 0x158], 1
// 0052d26a  e8e1961f00           call 0x726950
// 0052d26f  8bbe90010000         mov edi, dword ptr [esi + 0x190]
// 0052d275  85ff                 test edi, edi
// 0052d277  c7869001000000000000 mov dword ptr [esi + 0x190], 0
// 0052d281  7410                 je 0x52d293
// 0052d283  8bcf                 mov ecx, edi
// 0052d285  e8b6911f00           call 0x726440
// 0052d28a  57                   push edi
// 0052d28b  e8d2291000           call 0x62fc62
// 0052d290  83c404               add esp, 4
// 0052d293  5f                   pop edi
// 0052d294  5e                   pop esi
// 0052d295  c20400               ret 4

struct T_func_0052d250 {
    char pad[0xbc];
    int field_bc;
    char pad2[0x158 - 0xc0];
    unsigned char field_158;
    char pad3[0x174 - 0x159];
    char field_174[0x190 - 0x174];
    int field_190;
    void m(int);
};

extern void __fastcall func_00726950(char*);
extern void __fastcall func_00726440(void*);
extern void __cdecl func_0062fc62(void*);

void T_func_0052d250::m(int)
{
    if (field_bc != 0)
        return;
    field_158 = 1;
    func_00726950(field_174);
    int* p = (int*)field_190;
    field_190 = 0;
    if (p != 0)
    {
        func_00726440(p);
        func_0062fc62(p);
    }
}
