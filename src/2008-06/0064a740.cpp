// from server: 100% by king_originala
// roc 2008-06 0064a740  unit: RBX::CleanStage  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064a740
//
// 0064a740  56                   push esi
// 0064a741  57                   push edi
// 0064a742  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064a746  837f0400             cmp dword ptr [edi + 4], 0
// 0064a74a  8bf1                 mov esi, ecx
// 0064a74c  7436                 je 0x64a784
// 0064a74e  8b4f04               mov ecx, dword ptr [edi + 4]
// 0064a751  8b01                 mov eax, dword ptr [ecx]
// 0064a753  8b5004               mov edx, dword ptr [eax + 4]
// 0064a756  53                   push ebx
// 0064a757  ffd2                 call edx
// 0064a759  8bd8                 mov ebx, eax
// 0064a75b  8b06                 mov eax, dword ptr [esi]
// 0064a75d  8b5004               mov edx, dword ptr [eax + 4]
// 0064a760  8bce                 mov ecx, esi
// 0064a762  ffd2                 call edx
// 0064a764  3bd8                 cmp ebx, eax
// 0064a766  5b                   pop ebx
// 0064a767  7c1b                 jl 0x64a784
// 0064a769  8b4718               mov eax, dword ptr [edi + 0x18]
// 0064a76c  833803               cmp dword ptr [eax], 3
// 0064a76f  7513                 jne 0x64a784
// 0064a771  57                   push edi
// 0064a772  8bce                 mov ecx, esi
// 0064a774  e8e7feffff           call 0x64a660
// 0064a779  84c0                 test al, al
// 0064a77b  7507                 jne 0x64a784
// 0064a77d  5f                   pop edi
// 0064a77e  b001                 mov al, 1
// 0064a780  5e                   pop esi
// 0064a781  c20400               ret 4
// 0064a784  5f                   pop edi
// 0064a785  32c0                 xor al, al
// 0064a787  5e                   pop esi
// 0064a788  c20400               ret 4

struct Item;

struct Stage {
    virtual void unused();
    virtual int level();
    bool blocked(Item* item);
    bool eligible(Item* item);
};

struct Item {
    int padding0;
    Stage* stage;
    int padding1[4];
    int* state;
};

bool Stage::eligible(Item* item)
{
    if (item->stage) {
        int otherLevel = item->stage->level();
        if (otherLevel >= level() &&
            *item->state == 3 &&
            !blocked(item))
            return true;
    }
    return false;
}
