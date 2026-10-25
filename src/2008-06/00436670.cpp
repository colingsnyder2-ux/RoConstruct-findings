// from server: 100% by king_originala
// roc 2008-06 00436670  unit: COutputView  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00436670
//
// 00436670  56                   push esi
// 00436671  8bf1                 mov esi, ecx
// 00436673  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 00436677  7447                 je 0x4366c0
// 00436679  8b4618               mov eax, dword ptr [esi + 0x18]
// 0043667c  8b5610               mov edx, dword ptr [esi + 0x10]
// 0043667f  8bc8                 mov ecx, eax
// 00436681  c1e902               shr ecx, 2
// 00436684  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 00436687  83e003               and eax, 3
// 0043668a  8d0481               lea eax, [ecx + eax*4]
// 0043668d  8b00                 mov eax, dword ptr [eax]
// 0043668f  85c0                 test eax, eax
// 00436691  7408                 je 0x43669b
// 00436693  8b10                 mov edx, dword ptr [eax]
// 00436695  50                   push eax
// 00436696  8b4208               mov eax, dword ptr [edx + 8]
// 00436699  ffd0                 call eax
// 0043669b  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0043669e  ff4618               inc dword ptr [esi + 0x18]
// 004366a1  8b4618               mov eax, dword ptr [esi + 0x18]
// 004366a4  03c9                 add ecx, ecx
// 004366a6  03c9                 add ecx, ecx
// 004366a8  3bc8                 cmp ecx, eax
// 004366aa  7707                 ja 0x4366b3
// 004366ac  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004366b3  83461cff             add dword ptr [esi + 0x1c], -1
// 004366b7  7507                 jne 0x4366c0
// 004366b9  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004366c0  5e                   pop esi
// 004366c1  c3                   ret 

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
