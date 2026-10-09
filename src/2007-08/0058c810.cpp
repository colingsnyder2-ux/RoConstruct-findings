// from server: 70% by colin
// roc 2007-08 0058c810  unit: VStockSound::?$FactoryProduct  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058c810
//
// 0058c810  83ec08               sub esp, 8
// 0058c813  53                   push ebx
// 0058c814  55                   push ebp
// 0058c815  56                   push esi
// 0058c816  57                   push edi
// 0058c817  8db1f4000000         lea esi, [ecx + 0xf4]
// 0058c81d  8d44241c             lea eax, [esp + 0x1c]
// 0058c821  50                   push eax
// 0058c822  8d4c2414             lea ecx, [esp + 0x14]
// 0058c826  51                   push ecx
// 0058c827  8bce                 mov ecx, esi
// 0058c829  e892c6ffff           call 0x588ec0
// 0058c82e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0058c832  85ff                 test edi, edi
// 0058c834  8b5e04               mov ebx, dword ptr [esi + 4]
// 0058c837  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0058c83d  7404                 je 0x58c843
// 0058c83f  3bfe                 cmp edi, esi
// 0058c841  7402                 je 0x58c845
// 0058c843  ffd5                 call ebp
// 0058c845  8b742414             mov esi, dword ptr [esp + 0x14]
// 0058c849  3bf3                 cmp esi, ebx
// 0058c84b  7415                 je 0x58c862
// 0058c84d  85ff                 test edi, edi
// 0058c84f  7502                 jne 0x58c853
// 0058c851  ffd5                 call ebp
// 0058c853  3b7704               cmp esi, dword ptr [edi + 4]
// 0058c856  7502                 jne 0x58c85a
// 0058c858  ffd5                 call ebp
// 0058c85a  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0058c85d  e88efdffff           call 0x58c5f0
// 0058c862  5f                   pop edi
// 0058c863  5e                   pop esi
// 0058c864  5d                   pop ebp
// 0058c865  5b                   pop ebx
// 0058c866  83c408               add esp, 8
// 0058c869  c20400               ret 4

struct VStockSound_FactoryProduct
{
    char pad[0xf4];
    struct CreatorList
    {
        void* head;
        void* tail;
    } creators;
    void destroy(void*);
    void func_0058c5f0();
    void func_00588ec0(void**, void**);
    void removeCreator(void*);
};

extern void* g_77e6d8;

void VStockSound_FactoryProduct::removeCreator(void* arg)
{
    CreatorList* list = &creators;
    void* local1;
    void* local2;
    func_00588ec0(&local2, &local1);
    void* p = local1;
    void* end = list->tail;
    void* invalid = g_77e6d8;
    if (p != 0 && p != list)
        ((void (__stdcall*)())invalid)();
    void* it = local2;
    if (it != end)
    {
        if (p == 0)
            ((void (__stdcall*)())invalid)();
        if (it == *(void**)((char*)p + 4))
            ((void (__stdcall*)())invalid)();
        ((VStockSound_FactoryProduct*)((char*)it - 0x10))->func_0058c5f0();
    }
}
