// from server: 100% by colin
// roc 2007-08 006a2d90  unit: CXTPHookManagerHookAble  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a2d90
//
// 006a2d90  8b442404             mov eax, dword ptr [esp + 4]
// 006a2d94  3b4104               cmp eax, dword ptr [ecx + 4]
// 006a2d97  56                   push esi
// 006a2d98  7507                 jne 0x6a2da1
// 006a2d9a  8b10                 mov edx, dword ptr [eax]
// 006a2d9c  895104               mov dword ptr [ecx + 4], edx
// 006a2d9f  eb07                 jmp 0x6a2da8
// 006a2da1  8b5004               mov edx, dword ptr [eax + 4]
// 006a2da4  8b30                 mov esi, dword ptr [eax]
// 006a2da6  8932                 mov dword ptr [edx], esi
// 006a2da8  3b4108               cmp eax, dword ptr [ecx + 8]
// 006a2dab  7510                 jne 0x6a2dbd
// 006a2dad  8b5004               mov edx, dword ptr [eax + 4]
// 006a2db0  895108               mov dword ptr [ecx + 8], edx
// 006a2db3  5e                   pop esi
// 006a2db4  89442404             mov dword ptr [esp + 4], eax
// 006a2db8  e9134f0300           jmp 0x6d7cd0
// 006a2dbd  8b7004               mov esi, dword ptr [eax + 4]
// 006a2dc0  8b10                 mov edx, dword ptr [eax]
// 006a2dc2  897204               mov dword ptr [edx + 4], esi
// 006a2dc5  5e                   pop esi
// 006a2dc6  89442404             mov dword ptr [esp + 4], eax
// 006a2dca  e9014f0300           jmp 0x6d7cd0

struct CXTPHookManagerHookAble {
    void Unlink(void* node);
    void Remove(void* node);
};

void CXTPHookManagerHookAble::Unlink(void* node) {
    struct Node {
        Node* next;
        Node* prev;
    };
    Node* n = (Node*)node;
    if (n == *(Node**)((char*)this + 4)) {
        *(Node**)((char*)this + 4) = n->next;
    } else {
        n->prev->next = n->next;
    }
    if (n == *(Node**)((char*)this + 8)) {
        *(Node**)((char*)this + 8) = n->prev;
        Remove(n);
    } else {
        n->next->prev = n->prev;
        Remove(n);
    }
}
