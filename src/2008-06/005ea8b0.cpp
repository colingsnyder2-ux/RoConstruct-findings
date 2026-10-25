// from server: 100% by king_originala
// roc 2008-06 005ea8b0  unit: RBX::World  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ea8b0
//
// 005ea8b0  56                   push esi
// 005ea8b1  8b742408             mov esi, dword ptr [esp + 8]
// 005ea8b5  57                   push edi
// 005ea8b6  6a00                 push 0
// 005ea8b8  56                   push esi
// 005ea8b9  8bf9                 mov edi, ecx
// 005ea8bb  e830fbffff           call 0x5ea3f0
// 005ea8c0  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 005ea8c6  56                   push esi
// 005ea8c7  e874230200           call 0x60cc40
// 005ea8cc  8b8f88000000         mov ecx, dword ptr [edi + 0x88]
// 005ea8d2  56                   push esi
// 005ea8d3  e828fb0500           call 0x64a400
// 005ea8d8  8b97ac000000         mov edx, dword ptr [edi + 0xac]
// 005ea8de  8b4650               mov eax, dword ptr [esi + 0x50]
// 005ea8e1  8d8fac000000         lea ecx, [edi + 0xac]
// 005ea8e7  8b7904               mov edi, dword ptr [ecx + 4]
// 005ea8ea  8b7cbafc             mov edi, dword ptr [edx + edi*4 - 4]
// 005ea8ee  893c82               mov dword ptr [edx + eax*4], edi
// 005ea8f1  894750               mov dword ptr [edi + 0x50], eax
// 005ea8f4  8b4104               mov eax, dword ptr [ecx + 4]
// 005ea8f7  6a00                 push 0
// 005ea8f9  48                   dec eax
// 005ea8fa  50                   push eax
// 005ea8fb  e870f1faff           call 0x599a70
// 005ea900  5f                   pop edi
// 005ea901  c74650ffffffff       mov dword ptr [esi + 0x50], 0xffffffff
// 005ea908  c7465800000000       mov dword ptr [esi + 0x58], 0
// 005ea90f  5e                   pop esi
// 005ea910  c20400               ret 4

struct Item {
    char pad0[0x50];
    int index;
    char pad1[4];
    void* owner;
};

struct P_func_0060cc40 {
    void g();
};

struct S_func_0060cc40 {
    P_func_0060cc40* m_p;
    void f();
};

struct Manager {
    void remove(Item*);
};

struct Array {
    Item** data;
    int size;

    void resize(int, int);
    __forceinline void erase(int);
};

struct World {
    char pad0[0x84];
    S_func_0060cc40* first;
    Manager* second;
    char pad1[0x20];
    Array items;

    void detach(Item*, int);
    void remove(Item*);
};

__forceinline void Array::erase(int index)
{
    Item* last = data[size - 1];
    data[index] = last;
    last->index = index;
    resize(size - 1, 0);
}

void World::remove(Item* item)
{
    detach(item, 0);
    (first->*reinterpret_cast<void (S_func_0060cc40::*)(Item*)>(
        &S_func_0060cc40::f))(item);
    second->remove(item);
    items.erase(item->index);
    item->index = -1;
    item->owner = 0;
}
