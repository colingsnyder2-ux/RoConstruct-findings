// from server: 100% by king_originala
// roc 2008-06 006692e0  unit: RBX::TreeStage  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006692e0
//
// 006692e0  56                   push esi
// 006692e1  57                   push edi
// 006692e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006692e6  8bf1                 mov esi, ecx
// 006692e8  8d44240c             lea eax, [esp + 0xc]
// 006692ec  50                   push eax
// 006692ed  8d4e38               lea ecx, [esi + 0x38]
// 006692f0  897c2410             mov dword ptr [esp + 0x10], edi
// 006692f4  e8670cf8ff           call 0x5e9f60
// 006692f9  837f0400             cmp dword ptr [edi + 4], 0
// 006692fd  742c                 je 0x66932b
// 006692ff  8b4f04               mov ecx, dword ptr [edi + 4]
// 00669302  8b11                 mov edx, dword ptr [ecx]
// 00669304  8b4204               mov eax, dword ptr [edx + 4]
// 00669307  53                   push ebx
// 00669308  ffd0                 call eax
// 0066930a  8b16                 mov edx, dword ptr [esi]
// 0066930c  8bd8                 mov ebx, eax
// 0066930e  8b4204               mov eax, dword ptr [edx + 4]
// 00669311  8bce                 mov ecx, esi
// 00669313  ffd0                 call eax
// 00669315  3bd8                 cmp ebx, eax
// 00669317  5b                   pop ebx
// 00669318  7e09                 jle 0x669323
// 0066931a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0066931d  57                   push edi
// 0066931e  e82d620000           call 0x66f550
// 00669323  56                   push esi
// 00669324  8bcf                 mov ecx, edi
// 00669326  e8f5c4fdff           call 0x645820
// 0066932b  8b17                 mov edx, dword ptr [edi]
// 0066932d  8b02                 mov eax, dword ptr [edx]
// 0066932f  6a01                 push 1
// 00669331  8bcf                 mov ecx, edi
// 00669333  ffd0                 call eax
// 00669335  5f                   pop edi
// 00669336  5e                   pop esi
// 00669337  c20400               ret 4

struct Item;
struct TreeStage;

struct Container {
    void remove(Item** item);
};

struct Owner {
    void remove(Item* item);
};

struct Item {
    virtual void release(unsigned int flags);
    TreeStage* parent;
    void detach(int stage);
};

struct TreeStage {
    virtual void release(unsigned int flags);
    virtual int rank();

    int reserved;
    Owner* owner;
    char padding[44];
    Container items;

    void remove(Item* item);
};

void TreeStage::remove(Item* item)
{
    Item* saved = item;
    *(Item* volatile*)&item = saved;
    items.remove(&item);

    if (saved->parent != 0) {
        int parentRank = saved->parent->rank();
        if (parentRank > rank())
            owner->remove(saved);
        saved->detach((int)this);
    }

    saved->release(1);
}
