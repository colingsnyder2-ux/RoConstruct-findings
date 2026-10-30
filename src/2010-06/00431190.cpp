// roc 2010-06 00431190  unit: COutputView  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00431190
//
// 00431190  56                   push esi
// 00431191  8bf1                 mov esi, ecx
// 00431193  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 00431197  7447                 je 0x4311e0
// 00431199  8b4618               mov eax, dword ptr [esi + 0x18]
// 0043119c  8b5610               mov edx, dword ptr [esi + 0x10]
// 0043119f  8bc8                 mov ecx, eax
// 004311a1  c1e902               shr ecx, 2
// 004311a4  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 004311a7  83e003               and eax, 3
// 004311aa  8d0481               lea eax, [ecx + eax*4]
// 004311ad  8b00                 mov eax, dword ptr [eax]
// 004311af  85c0                 test eax, eax
// 004311b1  7408                 je 0x4311bb
// 004311b3  8b10                 mov edx, dword ptr [eax]
// 004311b5  50                   push eax
// 004311b6  8b4208               mov eax, dword ptr [edx + 8]
// 004311b9  ffd0                 call eax
// 004311bb  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004311be  ff4618               inc dword ptr [esi + 0x18]
// 004311c1  8b4618               mov eax, dword ptr [esi + 0x18]
// 004311c4  03c9                 add ecx, ecx
// 004311c6  03c9                 add ecx, ecx
// 004311c8  3bc8                 cmp ecx, eax
// 004311ca  7707                 ja 0x4311d3
// 004311cc  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004311d3  83461cff             add dword ptr [esi + 0x1c], -1
// 004311d7  7507                 jne 0x4311e0
// 004311d9  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004311e0  5e                   pop esi
// 004311e1  c3                   ret 
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