// roc 2012-06 0044e730  unit: boost::gregorian::Ubad_day_of_year::?$error_info_injector  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0044e730
//
// 0044e730  56                   push esi
// 0044e731  8bf1                 mov esi, ecx
// 0044e733  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0044e737  7447                 je 0x44e780
// 0044e739  8b4618               mov eax, dword ptr [esi + 0x18]
// 0044e73c  8b5610               mov edx, dword ptr [esi + 0x10]
// 0044e73f  8bc8                 mov ecx, eax
// 0044e741  c1e902               shr ecx, 2
// 0044e744  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 0044e747  83e003               and eax, 3
// 0044e74a  8d0481               lea eax, [ecx + eax*4]
// 0044e74d  8b00                 mov eax, dword ptr [eax]
// 0044e74f  85c0                 test eax, eax
// 0044e751  7408                 je 0x44e75b
// 0044e753  8b10                 mov edx, dword ptr [eax]
// 0044e755  50                   push eax
// 0044e756  8b4208               mov eax, dword ptr [edx + 8]
// 0044e759  ffd0                 call eax
// 0044e75b  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0044e75e  ff4618               inc dword ptr [esi + 0x18]
// 0044e761  8b4618               mov eax, dword ptr [esi + 0x18]
// 0044e764  03c9                 add ecx, ecx
// 0044e766  03c9                 add ecx, ecx
// 0044e768  3bc8                 cmp ecx, eax
// 0044e76a  7707                 ja 0x44e773
// 0044e76c  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0044e773  83461cff             add dword ptr [esi + 0x1c], -1
// 0044e777  7507                 jne 0x44e780
// 0044e779  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0044e780  5e                   pop esi
// 0044e781  c3                   ret 
// copied from an identical function in another client (function ?pop_front@COutputView@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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

    void pop_front();
};

void COutputView::pop_front()
{
    if (size != 0) {
        Item *&item = map[first / 4][first % 4];
        if (item != 0)
            item->vtable->slots[2](item);

        ++first;
        if (mapSize * 4 <= first)
            first = 0;

        if (--size == 0)
            first = 0;
    }
}