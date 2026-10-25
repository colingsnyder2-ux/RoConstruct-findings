// from server: 100% by king_originala
// roc 2008-06 005f13e0  unit: RBX::FaceInstance  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f13e0
//
// 005f13e0  8b542404             mov edx, dword ptr [esp + 4]
// 005f13e4  56                   push esi
// 005f13e5  8bf1                 mov esi, ecx
// 005f13e7  8b4604               mov eax, dword ptr [esi + 4]
// 005f13ea  8b0e                 mov ecx, dword ptr [esi]
// 005f13ec  3b9481e0020000       cmp edx, dword ptr [ecx + eax*4 + 0x2e0]
// 005f13f3  7432                 je 0x5f1427
// 005f13f5  52                   push edx
// 005f13f6  50                   push eax
// 005f13f7  81c128020000         add ecx, 0x228
// 005f13fd  e84e64ffff           call 0x5e7850
// 005f1402  8b4604               mov eax, dword ptr [esi + 4]
// 005f1405  8b0e                 mov ecx, dword ptr [esi]
// 005f1407  50                   push eax
// 005f1408  e8b383faff           call 0x5997c0
// 005f140d  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f1410  51                   push ecx
// 005f1411  8b0e                 mov ecx, dword ptr [esi]
// 005f1413  e8c879faff           call 0x598de0
// 005f1418  8bc8                 mov ecx, eax
// 005f141a  e811b6ffff           call 0x5eca30
// 005f141f  8b0e                 mov ecx, dword ptr [esi]
// 005f1421  50                   push eax
// 005f1422  e8d9c6e1ff           call 0x40db00
// 005f1427  5e                   pop esi
// 005f1428  c20400               ret 4

struct Ball {
    char padding[0xB8];
    int values[1];
    void set(int index, int value);
};

struct Descriptor {
    void* get();
};

struct Part {
    char padding[0x228];
    Ball ball;
    void setShouldRender(int index);
    int* f(int index);
    void notify(void* value);
};

struct S {
    Part* part;
    int index;
    void set(int value);
};

void S::set(int value)
{
    if (value != part->ball.values[index]) {
        part->ball.set(index, value);
        part->setShouldRender(index);
        part->notify(reinterpret_cast<Descriptor*>(part->f(index))->get());
    }
}
