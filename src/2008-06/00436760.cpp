// from server: 100% by colin
// roc 2008-06 00436760  unit: COutputView  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00436760
//
// 00436760  53                   push ebx
// 00436761  56                   push esi
// 00436762  8bf1                 mov esi, ecx
// 00436764  33db                 xor ebx, ebx
// 00436766  57                   push edi
// 00436767  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 0043676a  7447                 je 0x4367b3
// 0043676c  83cfff               or edi, 0xffffffff
// 0043676f  90                   nop 
// 00436770  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00436773  3bc3                 cmp eax, ebx
// 00436775  7437                 je 0x4367ae
// 00436777  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0043677a  8b5614               mov edx, dword ptr [esi + 0x14]
// 0043677d  8d4408ff             lea eax, [eax + ecx - 1]
// 00436781  8bc8                 mov ecx, eax
// 00436783  c1e902               shr ecx, 2
// 00436786  3bd1                 cmp edx, ecx
// 00436788  7702                 ja 0x43678c
// 0043678a  2bca                 sub ecx, edx
// 0043678c  8b5610               mov edx, dword ptr [esi + 0x10]
// 0043678f  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 00436792  83e003               and eax, 3
// 00436795  8d0481               lea eax, [ecx + eax*4]
// 00436798  8b00                 mov eax, dword ptr [eax]
// 0043679a  3bc3                 cmp eax, ebx
// 0043679c  7408                 je 0x4367a6
// 0043679e  8b10                 mov edx, dword ptr [eax]
// 004367a0  50                   push eax
// 004367a1  8b4208               mov eax, dword ptr [edx + 8]
// 004367a4  ffd0                 call eax
// 004367a6  017e1c               add dword ptr [esi + 0x1c], edi
// 004367a9  7503                 jne 0x4367ae
// 004367ab  895e18               mov dword ptr [esi + 0x18], ebx
// 004367ae  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 004367b1  75bd                 jne 0x436770
// 004367b3  8b7e14               mov edi, dword ptr [esi + 0x14]
// 004367b6  3bfb                 cmp edi, ebx
// 004367b8  7621                 jbe 0x4367db
// 004367ba  8d9b00000000         lea ebx, [ebx]
// 004367c0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004367c3  4f                   dec edi
// 004367c4  391cb9               cmp dword ptr [ecx + edi*4], ebx
// 004367c7  8d04b9               lea eax, [ecx + edi*4]
// 004367ca  740b                 je 0x4367d7
// 004367cc  8b10                 mov edx, dword ptr [eax]
// 004367ce  52                   push edx
// 004367cf  e8a69e2600           call 0x6a067a
// 004367d4  83c404               add esp, 4
// 004367d7  3bfb                 cmp edi, ebx
// 004367d9  77e5                 ja 0x4367c0
// 004367db  8b4610               mov eax, dword ptr [esi + 0x10]
// 004367de  3bc3                 cmp eax, ebx
// 004367e0  7409                 je 0x4367eb
// 004367e2  50                   push eax
// 004367e3  e8929e2600           call 0x6a067a
// 004367e8  83c404               add esp, 4
// 004367eb  5f                   pop edi
// 004367ec  895e10               mov dword ptr [esi + 0x10], ebx
// 004367ef  895e14               mov dword ptr [esi + 0x14], ebx
// 004367f2  5e                   pop esi
// 004367f3  5b                   pop ebx
// 004367f4  c3                   ret 

extern "C" void __cdecl free_mem(void *);

struct Item;

struct ItemVTable {
    void (__stdcall *slots[3])(Item *);
};

struct Item {
    ItemVTable *vtable;
};

struct COutputView {
    unsigned char padding[16];
    Item ***map;
    unsigned int mapSize;
    unsigned int first;
    unsigned int size;

    void clear();
};

void COutputView::clear()
{
    while (size != 0) {
        if (size != 0) {
            unsigned int idx = size + first - 1;
            unsigned int bucket = idx >> 2;
            if (mapSize <= bucket)
                bucket -= mapSize;
            Item *&item = map[bucket][idx & 3];
            if (item != 0)
                item->vtable->slots[2](item);

            if (--size == 0)
                first = 0;
        }
    }

    unsigned int i = mapSize;
    while (i > 0) {
        --i;
        if (map[i] != 0)
            free_mem(map[i]);
    }

    if (map != 0)
        free_mem(map);

    mapSize = 0;
    map = 0;
}
