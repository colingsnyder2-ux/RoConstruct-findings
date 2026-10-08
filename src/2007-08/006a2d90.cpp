// from server: 70% by colin
// roc 2007-08 006a2d90  unit: CXTPHookManagerHookAble  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a2d90

struct CXTPHookManagerHookAble {
    void Unhook(void* pNode);
};

extern "C" void __cdecl sub_6d7cd0(void* pNode);

void CXTPHookManagerHookAble::Unhook(void* pNode)
{
    struct Node {
        Node* next;
        Node* prev;
    };
    Node* node = (Node*)pNode;
    if (node == *(Node**)((char*)this + 4)) {
        *(Node**)((char*)this + 4) = node->next;
    } else {
        node->prev->next = node->next;
    }
    if (node == *(Node**)((char*)this + 8)) {
        *(Node**)((char*)this + 8) = node->prev;
    } else {
        node->next->prev = node->prev;
    }
    sub_6d7cd0(node);
}
