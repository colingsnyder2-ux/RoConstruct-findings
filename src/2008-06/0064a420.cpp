// from server: 100% by king_originala
// roc 2008-06 0064a420  unit: RBX::CleanStage  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a420
//
// 0064a420  53                   push ebx
// 0064a421  56                   push esi
// 0064a422  57                   push edi
// 0064a423  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0064a427  8bf1                 mov esi, ecx
// 0064a429  8b4f04               mov ecx, dword ptr [edi + 4]
// 0064a42c  8b01                 mov eax, dword ptr [ecx]
// 0064a42e  8b5004               mov edx, dword ptr [eax + 4]
// 0064a431  ffd2                 call edx
// 0064a433  8bd8                 mov ebx, eax
// 0064a435  8b06                 mov eax, dword ptr [esi]
// 0064a437  8b5004               mov edx, dword ptr [eax + 4]
// 0064a43a  8bce                 mov ecx, esi
// 0064a43c  ffd2                 call edx
// 0064a43e  3bd8                 cmp ebx, eax
// 0064a440  7e0b                 jle 0x64a44d
// 0064a442  8b4e08               mov ecx, dword ptr [esi + 8]
// 0064a445  8b01                 mov eax, dword ptr [ecx]
// 0064a447  8b5014               mov edx, dword ptr [eax + 0x14]
// 0064a44a  57                   push edi
// 0064a44b  ffd2                 call edx
// 0064a44d  5f                   pop edi
// 0064a44e  5e                   pop esi
// 0064a44f  5b                   pop ebx
// 0064a450  c20800               ret 8

struct Item;

struct Stage {
    virtual void slot0();
    virtual int rank();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void forward(Item*);

    int reserved;
    Stage* next;

    void process(Item*, int);
};

struct Item {
    int reserved;
    Stage* stage;
};

void Stage::process(Item* item, int)
{
    if (item->stage->rank() > rank())
        next->forward(item);
}
