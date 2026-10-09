// from server: 78% by colin
// roc 2007-08 00683850  unit: CXTPPropertyGrid  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00683850
//
// 00683850  56                   push esi
// 00683851  8bf1                 mov esi, ecx
// 00683853  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00683856  8d44240c             lea eax, [esp + 0xc]
// 0068385a  50                   push eax
// 0068385b  51                   push ecx
// 0068385c  ff15f0ed7700         call dword ptr [0x77edf0]
// 00683862  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 00683868  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0068386c  83c020               add eax, 0x20
// 0068386f  85c9                 test ecx, ecx
// 00683871  7c2c                 jl 0x68389f
// 00683873  3b4808               cmp ecx, dword ptr [eax + 8]
// 00683876  7d27                 jge 0x68389f
// 00683878  8b5004               mov edx, dword ptr [eax + 4]
// 0068387b  8b048a               mov eax, dword ptr [edx + ecx*4]
// 0068387e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00683882  89483c               mov dword ptr [eax + 0x3c], ecx
// 00683885  8b542410             mov edx, dword ptr [esp + 0x10]
// 00683889  895040               mov dword ptr [eax + 0x40], edx
// 0068388c  8b16                 mov edx, dword ptr [esi]
// 0068388e  50                   push eax
// 0068388f  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 00683895  6a0a                 push 0xa
// 00683897  8bce                 mov ecx, esi
// 00683899  ffd0                 call eax
// 0068389b  5e                   pop esi
// 0068389c  c20c00               ret 0xc
// 0068389f  e87cc6faff           call 0x62ff20

struct POINT {
    int x;
    int y;
};

struct CXTPPropertyGrid {
    char pad[0x20];
    void* hwnd;
    char pad2[0x130 - 0x24];
    struct ItemArray* items;
    void SetItemValue(int, int, int);
};

extern "C" int __stdcall ClientToScreen(void*, POINT*);
extern "C" void __stdcall sub_62FF20();

struct ItemArray {
    char pad[4];
    void** data;
    int count;
};

struct Item {
    char pad[0x3c];
    int x;
    int y;
};

void CXTPPropertyGrid::SetItemValue(int index, int x, int y) {
    POINT pt;
    ClientToScreen(hwnd, &pt);
    ItemArray* arr = (ItemArray*)((char*)items + 0x20);
    if (index >= 0 && index < arr->count) {
        Item* item = (Item*)arr->data[index];
        item->x = pt.x;
        item->y = pt.y;
        void** vtbl = *(void***)this;
        void (__thiscall *fn)(void*, int, Item*) = (void (__thiscall *)(void*, int, Item*))vtbl[0x14c/4];
        fn(this, 0xa, item);
    } else {
        sub_62FF20();
    }
}
