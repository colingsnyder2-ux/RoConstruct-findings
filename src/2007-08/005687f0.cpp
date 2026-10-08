// from server: 82% by colin
// roc 2007-08 005687f0  unit: RBX::RootInstance  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005687f0
//
// 005687f0  56                   push esi
// 005687f1  8b742408             mov esi, dword ptr [esp + 8]
// 005687f5  85f6                 test esi, esi
// 005687f7  742c                 je 0x568825
// 005687f9  8da42400000000       lea esp, [esp]
// 00568800  6a00                 push 0
// 00568802  68044e8800           push 0x884e04
// 00568807  684c1f8800           push 0x881f4c
// 0056880c  6a00                 push 0
// 0056880e  56                   push esi
// 0056880f  e822850c00           call 0x630d36
// 00568814  83c414               add esp, 0x14
// 00568817  85c0                 test eax, eax
// 00568819  750e                 jne 0x568829
// 0056881b  8bb6bc000000         mov esi, dword ptr [esi + 0xbc]
// 00568821  85f6                 test esi, esi
// 00568823  75db                 jne 0x568800
// 00568825  33c0                 xor eax, eax
// 00568827  5e                   pop esi
// 00568828  c3                   ret 
// 00568829  8bc8                 mov ecx, eax
// 0056882b  5e                   pop esi
// 0056882c  e9ef80f4ff           jmp 0x4b0920

struct Instance {
    Instance* field_bc;
};

extern "C" Instance* __cdecl sub_630D36(Instance* self, int a, const char* b, const char* c, int d);
extern "C" Instance* __cdecl sub_4B0920(Instance* self);

Instance* __cdecl findFirstChildByName(Instance* inst) {
    Instance* cur = inst;
    while (cur) {
        Instance* result = sub_630D36(cur, 0, (const char*)0x881f4c, (const char*)0x884e04, 0);
        if (result) {
            return sub_4B0920(result);
        }
        cur = cur->field_bc;
    }
    return 0;
}
