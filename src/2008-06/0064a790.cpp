// from server: 100% by king_originala
// roc 2008-06 0064a790  unit: RBX::CleanStage  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a790
//
// 0064a790  83ec08               sub esp, 8
// 0064a793  803dc1ab970000       cmp byte ptr [0x97abc1], 0
// 0064a79a  56                   push esi
// 0064a79b  57                   push edi
// 0064a79c  8bf9                 mov edi, ecx
// 0064a79e  7522                 jne 0x64a7c2
// 0064a7a0  8b742414             mov esi, dword ptr [esp + 0x14]
// 0064a7a4  807e6900             cmp byte ptr [esi + 0x69], 0
// 0064a7a8  7412                 je 0x64a7bc
// 0064a7aa  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0064a7ad  034e6c               add ecx, dword ptr [esi + 0x6c]
// 0064a7b0  8b4670               mov eax, dword ptr [esi + 0x70]
// 0064a7b3  ffd0                 call eax
// 0064a7b5  884668               mov byte ptr [esi + 0x68], al
// 0064a7b8  c6466900             mov byte ptr [esi + 0x69], 0
// 0064a7bc  807e6800             cmp byte ptr [esi + 0x68], 0
// 0064a7c0  750d                 jne 0x64a7cf
// 0064a7c2  5f                   pop edi
// 0064a7c3  b803000000           mov eax, 3
// 0064a7c8  5e                   pop esi
// 0064a7c9  83c408               add esp, 8
// 0064a7cc  c20400               ret 4
// 0064a7cf  53                   push ebx
// 0064a7d0  55                   push ebp
// 0064a7d1  8bce                 mov ecx, esi
// 0064a7d3  c644241301           mov byte ptr [esp + 0x13], 1
// 0064a7d8  e893c4f9ff           call 0x5e6c70
// 0064a7dd  33db                 xor ebx, ebx
// 0064a7df  395804               cmp dword ptr [eax + 4], ebx
// 0064a7e2  89442414             mov dword ptr [esp + 0x14], eax
// 0064a7e6  0f8e9a000000         jle 0x64a886
// 0064a7ec  eb06                 jmp 0x64a7f4
// 0064a7ee  8bff                 mov edi, edi
// 0064a7f0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064a7f4  8b08                 mov ecx, dword ptr [eax]
// 0064a7f6  8b3499               mov esi, dword ptr [ecx + ebx*4]
// 0064a7f9  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064a7fc  8b11                 mov edx, dword ptr [ecx]
// 0064a7fe  8b4204               mov eax, dword ptr [edx + 4]
// 0064a801  ffd0                 call eax
// 0064a803  8b17                 mov edx, dword ptr [edi]
// 0064a805  8be8                 mov ebp, eax
// 0064a807  8b4204               mov eax, dword ptr [edx + 4]
// 0064a80a  8bcf                 mov ecx, edi
// 0064a80c  ffd0                 call eax
// 0064a80e  3be8                 cmp ebp, eax
// 0064a810  7c5f                 jl 0x64a871
// 0064a812  8b16                 mov edx, dword ptr [esi]
// 0064a814  8b420c               mov eax, dword ptr [edx + 0xc]
// 0064a817  8b6e08               mov ebp, dword ptr [esi + 8]
// 0064a81a  8bce                 mov ecx, esi
// 0064a81c  ffd0                 call eax
// 0064a81e  83f801               cmp eax, 1
// 0064a821  750a                 jne 0x64a82d
// 0064a823  83fd03               cmp ebp, 3
// 0064a826  7405                 je 0x64a82d
// 0064a828  83fd04               cmp ebp, 4
// 0064a82b  7544                 jne 0x64a871
// 0064a82d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0064a831  56                   push esi
// 0064a832  e879b9f9ff           call 0x5e61b0
// 0064a837  8bf0                 mov esi, eax
// 0064a839  837e0400             cmp dword ptr [esi + 4], 0
// 0064a83d  7432                 je 0x64a871
// 0064a83f  8b4e04               mov ecx, dword ptr [esi + 4]
// 0064a842  8b11                 mov edx, dword ptr [ecx]
// 0064a844  8b4204               mov eax, dword ptr [edx + 4]
// 0064a847  ffd0                 call eax
// 0064a849  8b17                 mov edx, dword ptr [edi]
// 0064a84b  8be8                 mov ebp, eax
// 0064a84d  8b4204               mov eax, dword ptr [edx + 4]
// 0064a850  8bcf                 mov ecx, edi
// 0064a852  ffd0                 call eax
// 0064a854  3be8                 cmp ebp, eax
// 0064a856  7c19                 jl 0x64a871
// 0064a858  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0064a85b  833903               cmp dword ptr [ecx], 3
// 0064a85e  7511                 jne 0x64a871
// 0064a860  56                   push esi
// 0064a861  8bcf                 mov ecx, edi
// 0064a863  c644241700           mov byte ptr [esp + 0x17], 0
// 0064a868  e883fdffff           call 0x64a5f0
// 0064a86d  84c0                 test al, al
// 0064a86f  7524                 jne 0x64a895
// 0064a871  8b542414             mov edx, dword ptr [esp + 0x14]
// 0064a875  43                   inc ebx
// 0064a876  3b5a04               cmp ebx, dword ptr [edx + 4]
// 0064a879  0f8c71ffffff         jl 0x64a7f0
// 0064a87f  807c241300           cmp byte ptr [esp + 0x13], 0
// 0064a884  741e                 je 0x64a8a4
// 0064a886  5d                   pop ebp
// 0064a887  5b                   pop ebx
// 0064a888  5f                   pop edi
// 0064a889  b805000000           mov eax, 5
// 0064a88e  5e                   pop esi
// 0064a88f  83c408               add esp, 8
// 0064a892  c20400               ret 4
// 0064a895  5d                   pop ebp
// 0064a896  5b                   pop ebx
// 0064a897  5f                   pop edi
// 0064a898  b803000000           mov eax, 3
// 0064a89d  5e                   pop esi
// 0064a89e  83c408               add esp, 8
// 0064a8a1  c20400               ret 4
// 0064a8a4  5d                   pop ebp
// 0064a8a5  5b                   pop ebx
// 0064a8a6  5f                   pop edi
// 0064a8a7  b804000000           mov eax, 4
// 0064a8ac  5e                   pop esi
// 0064a8ad  83c408               add esp, 8
// 0064a8b0  c20400               ret 4

extern bool disabled;

struct Item;
struct Clump;

struct Value {
    char data[12];
};

struct List {
    Item** items;
    int count;
};

struct Stage {
    virtual void slot0();
    virtual int level();

    bool process(Item*);
    int run(Clump*);
};

struct Item {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual int kind();

    Stage* stage;
    int state;
    char padding[12];
    int* status;
};

struct Clump {
    char padding[104];
    bool enabled;
    bool dirty;
    char alignment[2];
    int adjustment;
    bool (__thiscall *evaluate)(void*);
    char* context;

    Value* getValue();
    Item* find(Item*);
};

int Stage::run(Clump* clump)
{
    if (disabled)
        goto inactive;

    if (clump->dirty) {
        clump->enabled =
            clump->evaluate(clump->context + clump->adjustment);
        clump->dirty = false;
    }

    if (!clump->enabled) {
inactive:
        return 3;
    }

    bool untouched = true;
    List* list = reinterpret_cast<List*>(clump->getValue());

    for (int i = 0; i < list->count; ++i) {
        Item* item = list->items[i];
        int itemLevel = item->stage->level();
        if (itemLevel < level())
            continue;

        int state = item->state;
        if (item->kind() == 1 && state != 3 && state != 4)
            continue;

        item = clump->find(item);
        if (!item->stage)
            continue;

        itemLevel = item->stage->level();
        if (itemLevel < level())
            continue;

        if (*item->status != 3)
            continue;

        untouched = false;
        if (process(item))
            return 3;
    }

    if (untouched)
        return 5;
    return 4;
}
