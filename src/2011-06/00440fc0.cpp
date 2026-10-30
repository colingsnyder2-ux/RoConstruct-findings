// roc 2011-06 00440fc0  unit: COutputView  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00440fc0
//
// 00440fc0  56                   push esi
// 00440fc1  8bf1                 mov esi, ecx
// 00440fc3  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 00440fc7  7447                 je 0x441010
// 00440fc9  8b4618               mov eax, dword ptr [esi + 0x18]
// 00440fcc  8b5610               mov edx, dword ptr [esi + 0x10]
// 00440fcf  8bc8                 mov ecx, eax
// 00440fd1  c1e902               shr ecx, 2
// 00440fd4  8b0c8a               mov ecx, dword ptr [edx + ecx*4]
// 00440fd7  83e003               and eax, 3
// 00440fda  8d0481               lea eax, [ecx + eax*4]
// 00440fdd  8b00                 mov eax, dword ptr [eax]
// 00440fdf  85c0                 test eax, eax
// 00440fe1  7408                 je 0x440feb
// 00440fe3  8b10                 mov edx, dword ptr [eax]
// 00440fe5  50                   push eax
// 00440fe6  8b4208               mov eax, dword ptr [edx + 8]
// 00440fe9  ffd0                 call eax
// 00440feb  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00440fee  ff4618               inc dword ptr [esi + 0x18]
// 00440ff1  8b4618               mov eax, dword ptr [esi + 0x18]
// 00440ff4  03c9                 add ecx, ecx
// 00440ff6  03c9                 add ecx, ecx
// 00440ff8  3bc8                 cmp ecx, eax
// 00440ffa  7707                 ja 0x441003
// 00440ffc  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00441003  83461cff             add dword ptr [esi + 0x1c], -1
// 00441007  7507                 jne 0x441010
// 00441009  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00441010  5e                   pop esi
// 00441011  c3                   ret 
// copied from an identical function in another client (function ?pop_front@COutputView@ns_ROCX000018@@QAEXXZ)

namespace ns_ROCX000018 {
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
}
