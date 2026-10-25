// from server: 100% by king_originala
// roc 2008-06 00669940  unit: RBX::TreeStage  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669940
//
// 00669940  53                   push ebx
// 00669941  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00669945  56                   push esi
// 00669946  57                   push edi
// 00669947  8bf9                 mov edi, ecx
// 00669949  85db                 test ebx, ebx
// 0066994b  7426                 je 0x669973
// 0066994d  53                   push ebx
// 0066994e  e8edf8ffff           call 0x669240
// 00669953  8b742414             mov esi, dword ptr [esp + 0x14]
// 00669957  c6432400             mov byte ptr [ebx + 0x24], 0
// 0066995b  85f6                 test esi, esi
// 0066995d  751c                 jne 0x66997b
// 0066995f  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00669962  8b485c               mov ecx, dword ptr [eax + 0x5c]
// 00669965  51                   push ecx
// 00669966  8bcf                 mov ecx, edi
// 00669968  e873f9ffff           call 0x6692e0
// 0066996d  5f                   pop edi
// 0066996e  5e                   pop esi
// 0066996f  5b                   pop ebx
// 00669970  c20c00               ret 0xc
// 00669973  8b742414             mov esi, dword ptr [esp + 0x14]
// 00669977  85f6                 test esi, esi
// 00669979  741b                 je 0x669996
// 0066997b  56                   push esi
// 0066997c  8bcf                 mov ecx, edi
// 0066997e  e8bdf8ffff           call 0x669240
// 00669983  8b542418             mov edx, dword ptr [esp + 0x18]
// 00669987  6a00                 push 0
// 00669989  52                   push edx
// 0066998a  56                   push esi
// 0066998b  8bcf                 mov ecx, edi
// 0066998d  c6462401             mov byte ptr [esi + 0x24], 1
// 00669991  e80afeffff           call 0x6697a0
// 00669996  5f                   pop edi
// 00669997  5e                   pop esi
// 00669998  5b                   pop ebx
// 00669999  c20c00               ret 0xc

struct Item;

struct Owner {
    char padding[0x5c];
    Item* item;
};

struct Node {
    char padding0[0x0c];
    Owner* owner;
    char padding1[0x14];
    bool marked;
};

struct TreeStage {
    void detach(Node* node);
    void remove(Item* item);
    void attach(Node* node, void* context, int flag);
    void change(Node* previous, Node* next, void* context);
};

void TreeStage::change(Node* previous, Node* next, void* context)
{
    if (previous) {
        detach(previous);
        previous->marked = false;
        if (!next) {
            remove(previous->owner->item);
            return;
        }
    }

    if (next) {
        detach(next);
        next->marked = true;
        attach(next, context, 0);
    }
}
