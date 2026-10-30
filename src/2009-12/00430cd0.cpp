// roc 2009-12 00430cd0  unit: COutputView  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00430cd0
//
// 00430cd0  56                   push esi
// 00430cd1  8bf1                 mov esi, ecx
// 00430cd3  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 00430cd7  7447                 je 0x430d20
// 00430cd9  8b4618               mov eax, dword ptr [esi + 0x18]
// 00430cdc  8b5610               mov edx, dword ptr [esi + 0x10]
// 00430cdf  8bc8                 mov ecx, eax
// 00430ce1  c1e902               shr ecx, 2
// 00430ce4  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 00430ce7  83e003               and eax, 3
// 00430cea  8d0481               lea eax, [ecx + eax*4]
// 00430ced  8b00                 mov eax, dword ptr [eax]
// 00430cef  85c0                 test eax, eax
// 00430cf1  7408                 je 0x430cfb
// 00430cf3  8b10                 mov edx, dword ptr [eax]
// 00430cf5  50                   push eax
// 00430cf6  8b4208               mov eax, dword ptr [edx + 8]
// 00430cf9  ffd0                 call eax
// 00430cfb  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00430cfe  ff4618               inc dword ptr [esi + 0x18]
// 00430d01  8b4618               mov eax, dword ptr [esi + 0x18]
// 00430d04  03c9                 add ecx, ecx
// 00430d06  03c9                 add ecx, ecx
// 00430d08  3bc8                 cmp ecx, eax
// 00430d0a  7707                 ja 0x430d13
// 00430d0c  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00430d13  83461cff             add dword ptr [esi + 0x1c], -1
// 00430d17  7507                 jne 0x430d20
// 00430d19  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00430d20  5e                   pop esi
// 00430d21  c3                   ret 
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