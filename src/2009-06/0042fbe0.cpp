// roc 2009-06 0042fbe0  unit: COutputView  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0042fbe0
//
// 0042fbe0  56                   push esi
// 0042fbe1  8bf1                 mov esi, ecx
// 0042fbe3  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0042fbe7  7447                 je 0x42fc30
// 0042fbe9  8b4618               mov eax, dword ptr [esi + 0x18]
// 0042fbec  8b5610               mov edx, dword ptr [esi + 0x10]
// 0042fbef  8bc8                 mov ecx, eax
// 0042fbf1  c1e902               shr ecx, 2
// 0042fbf4  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 0042fbf7  83e003               and eax, 3
// 0042fbfa  8d0481               lea eax, [ecx + eax*4]
// 0042fbfd  8b00                 mov eax, dword ptr [eax]
// 0042fbff  85c0                 test eax, eax
// 0042fc01  7408                 je 0x42fc0b
// 0042fc03  8b10                 mov edx, dword ptr [eax]
// 0042fc05  50                   push eax
// 0042fc06  8b4208               mov eax, dword ptr [edx + 8]
// 0042fc09  ffd0                 call eax
// 0042fc0b  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0042fc0e  ff4618               inc dword ptr [esi + 0x18]
// 0042fc11  8b4618               mov eax, dword ptr [esi + 0x18]
// 0042fc14  03c9                 add ecx, ecx
// 0042fc16  03c9                 add ecx, ecx
// 0042fc18  3bc8                 cmp ecx, eax
// 0042fc1a  7707                 ja 0x42fc23
// 0042fc1c  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0042fc23  83461cff             add dword ptr [esi + 0x1c], -1
// 0042fc27  7507                 jne 0x42fc30
// 0042fc29  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0042fc30  5e                   pop esi
// 0042fc31  c3                   ret 
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