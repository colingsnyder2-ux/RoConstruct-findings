// from server: 100% by king_originala
// roc 2008-06 0067cae0  unit: Ogre::RbxEntity  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067cae0
//
// 0067cae0  53                   push ebx
// 0067cae1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0067cae5  55                   push ebp
// 0067cae6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0067caea  2bdd                 sub ebx, ebp
// 0067caec  c1fb03               sar ebx, 3
// 0067caef  8bc3                 mov eax, ebx
// 0067caf1  99                   cdq 
// 0067caf2  2bc2                 sub eax, edx
// 0067caf4  56                   push esi
// 0067caf5  8bf0                 mov esi, eax
// 0067caf7  d1fe                 sar esi, 1
// 0067caf9  85f6                 test esi, esi
// 0067cafb  7e21                 jle 0x67cb1e
// 0067cafd  57                   push edi
// 0067cafe  8d7cf500             lea edi, [ebp + esi*8]
// 0067cb02  8b47fc               mov eax, dword ptr [edi - 4]
// 0067cb05  8b4ff8               mov ecx, dword ptr [edi - 8]
// 0067cb08  83ef08               sub edi, 8
// 0067cb0b  50                   push eax
// 0067cb0c  51                   push ecx
// 0067cb0d  53                   push ebx
// 0067cb0e  4e                   dec esi
// 0067cb0f  56                   push esi
// 0067cb10  55                   push ebp
// 0067cb11  e86afcffff           call 0x67c780
// 0067cb16  83c414               add esp, 0x14
// 0067cb19  85f6                 test esi, esi
// 0067cb1b  7fe5                 jg 0x67cb02
// 0067cb1d  5f                   pop edi
// 0067cb1e  5e                   pop esi
// 0067cb1f  5d                   pop ebp
// 0067cb20  5b                   pop ebx
// 0067cb21  c3                   ret 

struct Item {
    unsigned int first;
    unsigned int second;
};

extern void __cdecl adjust_heap(Item *, int, int, Item);

void __cdecl make_heap(Item *first, Item *last)
{
    int count = last - first;
    int parent = count / 2;
    if (parent > 0) {
        Item *current = first + parent;
        do {
            Item value = *--current;
            --parent;
            adjust_heap(first, parent, count, value);
        } while (parent > 0);
    }
}
