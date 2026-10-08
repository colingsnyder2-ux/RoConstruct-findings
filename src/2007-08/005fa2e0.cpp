// from server: 70% by colin
// roc 2007-08 005fa2e0  unit: RBX::VSeat::?$FactoryProduct  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fa2e0
//
// 005fa2e0  8b442408             mov eax, dword ptr [esp + 8]
// 005fa2e4  83f802               cmp eax, 2
// 005fa2e7  7519                 jne 0x5fa302
// 005fa2e9  56                   push esi
// 005fa2ea  8b742408             mov esi, dword ptr [esp + 8]
// 005fa2ee  56                   push esi
// 005fa2ef  b9683f8b00           mov ecx, 0x8b3f68
// 005fa2f4  ff1508e77700         call dword ptr [0x77e708]
// 005fa2fa  f6d8                 neg al
// 005fa2fc  1bc0                 sbb eax, eax
// 005fa2fe  23c6                 and eax, esi
// 005fa300  5e                   pop esi
// 005fa301  c3                   ret 
// 005fa302  8b542404             mov edx, dword ptr [esp + 4]
// 005fa306  c644240800           mov byte ptr [esp + 8], 0
// 005fa30b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fa30f  51                   push ecx
// 005fa310  50                   push eax
// 005fa311  52                   push edx
// 005fa312  e8e982fdff           call 0x5d2600
// 005fa317  83c40c               add esp, 0xc
// 005fa31a  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" void* __cdecl G1_func_005d2600(void*, int, unsigned char);

struct S_func_005fa2e0 {
    void* f(int a, int b);
};

void* S_func_005fa2e0::f(int a, int b)
{
    if (b == 2) {
        void* p = (void*)a;
        if (*(const type_info*)0x8b3f68 == *(const type_info*)p)
            return p;
        return 0;
    }
    unsigned char tmp = 0;
    return G1_func_005d2600((void*)a, b, tmp);
}
