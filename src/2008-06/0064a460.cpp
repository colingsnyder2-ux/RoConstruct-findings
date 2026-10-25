// from server: 100% by king_originala
// roc 2008-06 0064a460  unit: RBX::CleanStage  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a460
//
// 0064a460  53                   push ebx
// 0064a461  56                   push esi
// 0064a462  57                   push edi
// 0064a463  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0064a467  8b470c               mov eax, dword ptr [edi + 0xc]
// 0064a46a  8bf1                 mov esi, ecx
// 0064a46c  85c0                 test eax, eax
// 0064a46e  7435                 je 0x64a4a5
// 0064a470  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0064a473  85c9                 test ecx, ecx
// 0064a475  742e                 je 0x64a4a5
// 0064a477  3bc1                 cmp eax, ecx
// 0064a479  742a                 je 0x64a4a5
// 0064a47b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0064a47e  8b01                 mov eax, dword ptr [ecx]
// 0064a480  8b5004               mov edx, dword ptr [eax + 4]
// 0064a483  ffd2                 call edx
// 0064a485  8bd8                 mov ebx, eax
// 0064a487  8b06                 mov eax, dword ptr [esi]
// 0064a489  8b5004               mov edx, dword ptr [eax + 4]
// 0064a48c  8bce                 mov ecx, esi
// 0064a48e  ffd2                 call edx
// 0064a490  3bd8                 cmp ebx, eax
// 0064a492  7f35                 jg 0x64a4c9
// 0064a494  8b4e08               mov ecx, dword ptr [esi + 8]
// 0064a497  8b01                 mov eax, dword ptr [ecx]
// 0064a499  8b5010               mov edx, dword ptr [eax + 0x10]
// 0064a49c  57                   push edi
// 0064a49d  ffd2                 call edx
// 0064a49f  5f                   pop edi
// 0064a4a0  5e                   pop esi
// 0064a4a1  5b                   pop ebx
// 0064a4a2  c20800               ret 8
// 0064a4a5  8b4f04               mov ecx, dword ptr [edi + 4]
// 0064a4a8  8b01                 mov eax, dword ptr [ecx]
// 0064a4aa  8b5004               mov edx, dword ptr [eax + 4]
// 0064a4ad  ffd2                 call edx
// 0064a4af  8bd8                 mov ebx, eax
// 0064a4b1  8b06                 mov eax, dword ptr [esi]
// 0064a4b3  8b5004               mov edx, dword ptr [eax + 4]
// 0064a4b6  8bce                 mov ecx, esi
// 0064a4b8  ffd2                 call edx
// 0064a4ba  3bd8                 cmp ebx, eax
// 0064a4bc  7e0b                 jle 0x64a4c9
// 0064a4be  8b4e08               mov ecx, dword ptr [esi + 8]
// 0064a4c1  8b01                 mov eax, dword ptr [ecx]
// 0064a4c3  8b5014               mov edx, dword ptr [eax + 0x14]
// 0064a4c6  57                   push edi
// 0064a4c7  ffd2                 call edx
// 0064a4c9  5f                   pop edi
// 0064a4ca  5e                   pop esi
// 0064a4cb  5b                   pop ebx
// 0064a4cc  c20800               ret 8

struct Item;

struct Stage {
    virtual ~Stage();
    virtual int level();
    virtual void slot2();
    virtual void slot3();
    virtual void insert(Item*);
    virtual void remove(Item*);

    int reserved;
    Stage* next;

    void process(Item*, int);
};

struct Item {
    int reserved0;
    Stage* stage;
    int reserved8;
    void* first;
    void* second;
};

void Stage::process(Item* item, int)
{
    if (item->first && item->second && item->first != item->second) {
        int value = item->stage->level();
        if (value <= level())
            next->insert(item);
    } else {
        int value = item->stage->level();
        if (value > level())
            next->remove(item);
    }
}
