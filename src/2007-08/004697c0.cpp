// from server: 82% by colin
// roc 2007-08 004697c0  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004697c0
//
// 004697c0  83ec08               sub esp, 8
// 004697c3  53                   push ebx
// 004697c4  55                   push ebp
// 004697c5  56                   push esi
// 004697c6  57                   push edi
// 004697c7  8d713c               lea esi, [ecx + 0x3c]
// 004697ca  8d44241c             lea eax, [esp + 0x1c]
// 004697ce  50                   push eax
// 004697cf  8d4c2414             lea ecx, [esp + 0x14]
// 004697d3  51                   push ecx
// 004697d4  8bce                 mov ecx, esi
// 004697d6  e815a00300           call 0x4a37f0
// 004697db  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004697df  85ff                 test edi, edi
// 004697e1  8b5e04               mov ebx, dword ptr [esi + 4]
// 004697e4  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 004697ea  7404                 je 0x4697f0
// 004697ec  3bfe                 cmp edi, esi
// 004697ee  7402                 je 0x4697f2
// 004697f0  ffd5                 call ebp
// 004697f2  8b742414             mov esi, dword ptr [esp + 0x14]
// 004697f6  3bf3                 cmp esi, ebx
// 004697f8  741a                 je 0x469814
// 004697fa  85ff                 test edi, edi
// 004697fc  7502                 jne 0x469800
// 004697fe  ffd5                 call ebp
// 00469800  3b7704               cmp esi, dword ptr [edi + 4]
// 00469803  7502                 jne 0x469807
// 00469805  ffd5                 call ebp
// 00469807  8b4610               mov eax, dword ptr [esi + 0x10]
// 0046980a  5f                   pop edi
// 0046980b  5e                   pop esi
// 0046980c  5d                   pop ebp
// 0046980d  5b                   pop ebx
// 0046980e  83c408               add esp, 8
// 00469811  c20400               ret 4
// 00469814  5f                   pop edi
// 00469815  5e                   pop esi
// 00469816  5d                   pop ebp
// 00469817  33c0                 xor eax, eax
// 00469819  5b                   pop ebx
// 0046981a  83c408               add esp, 8
// 0046981d  c20400               ret 4

struct LDraw2RobloxColorMap {
    char pad[0x3c];
    void* field_3c;
    void* field_40;
    void* get(int);
};

extern "C" void __stdcall sub_4A37F0(void*, void*);
extern void* g_77E6D8;

void* LDraw2RobloxColorMap::get(int a)
{
    void* local1;
    void* local2;
    void* p = (char*)this + 0x3c;
    sub_4A37F0(&local1, &local2);
    void* edi = local1;
    void* ebx = *(void**)((char*)p + 4);
    void (*ebp)() = (void (*)())g_77E6D8;
    if (edi != 0 && edi != p)
        ebp();
    void* esi = local2;
    if (esi != ebx) {
        if (edi == 0)
            ebp();
        if (esi == *(void**)((char*)edi + 4))
            ebp();
        return *(void**)((char*)esi + 0x10);
    }
    return 0;
}
