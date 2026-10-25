// from server: 100% by king_originala
// roc 2008-06 0064a4d0  unit: RBX::CleanStage  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a4d0
//
// 0064a4d0  56                   push esi
// 0064a4d1  8b742408             mov esi, dword ptr [esp + 8]
// 0064a4d5  57                   push edi
// 0064a4d6  8bf9                 mov edi, ecx
// 0064a4d8  57                   push edi
// 0064a4d9  8bce                 mov ecx, esi
// 0064a4db  e850b3ffff           call 0x645830
// 0064a4e0  8b460c               mov eax, dword ptr [esi + 0xc]
// 0064a4e3  85c0                 test eax, eax
// 0064a4e5  7416                 je 0x64a4fd
// 0064a4e7  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0064a4ea  85c9                 test ecx, ecx
// 0064a4ec  740f                 je 0x64a4fd
// 0064a4ee  3bc1                 cmp eax, ecx
// 0064a4f0  740b                 je 0x64a4fd
// 0064a4f2  8b4f08               mov ecx, dword ptr [edi + 8]
// 0064a4f5  8b01                 mov eax, dword ptr [ecx]
// 0064a4f7  8b5010               mov edx, dword ptr [eax + 0x10]
// 0064a4fa  56                   push esi
// 0064a4fb  ffd2                 call edx
// 0064a4fd  5f                   pop edi
// 0064a4fe  5e                   pop esi
// 0064a4ff  c20400               ret 4

struct Item;

struct Stage {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void insert(Item*);

    int reserved;
    Stage* next;

    void process(Item*);
};

struct Item {
    char pad0[4];
    int m_x;
    int reserved8;
    void* first;
    void* second;

    void f(int);
};

void Stage::process(Item* item)
{
    item->f((int)this);
    if (item->first && item->second && item->first != item->second)
        next->insert(item);
}
