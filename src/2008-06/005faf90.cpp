// from server: 100% by king_originala
// roc 2008-06 005faf90  unit: UString_sink::?$stream_buffer  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005faf90
//
// 005faf90  53                   push ebx
// 005faf91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005faf95  8b4304               mov eax, dword ptr [ebx + 4]
// 005faf98  57                   push edi
// 005faf99  8bf9                 mov edi, ecx
// 005faf9b  85c0                 test eax, eax
// 005faf9d  7c28                 jl 0x5fafc7
// 005faf9f  8b570c               mov edx, dword ptr [edi + 0xc]
// 005fafa2  56                   push esi
// 005fafa3  8b7710               mov esi, dword ptr [edi + 0x10]
// 005fafa6  8b74b2fc             mov esi, dword ptr [edx + esi*4 - 4]
// 005fafaa  8d4f0c               lea ecx, [edi + 0xc]
// 005fafad  893482               mov dword ptr [edx + eax*4], esi
// 005fafb0  894604               mov dword ptr [esi + 4], eax
// 005fafb3  8b4104               mov eax, dword ptr [ecx + 4]
// 005fafb6  6a00                 push 0
// 005fafb8  48                   dec eax
// 005fafb9  50                   push eax
// 005fafba  e8b1f7ffff           call 0x5fa770
// 005fafbf  c74304ffffffff       mov dword ptr [ebx + 4], 0xffffffff
// 005fafc6  5e                   pop esi
// 005fafc7  8b4f04               mov ecx, dword ptr [edi + 4]
// 005fafca  8d54240c             lea edx, [esp + 0xc]
// 005fafce  890b                 mov dword ptr [ebx], ecx
// 005fafd0  52                   push edx
// 005fafd1  8bcf                 mov ecx, edi
// 005fafd3  895c2410             mov dword ptr [esp + 0x10], ebx
// 005fafd7  e8e4fbffff           call 0x5fabc0
// 005fafdc  53                   push ebx
// 005fafdd  8bcf                 mov ecx, edi
// 005fafdf  e8ecfeffff           call 0x5faed0
// 005fafe4  5f                   pop edi
// 005fafe5  5b                   pop ebx
// 005fafe6  c20400               ret 4

struct Node {
    int activeIndex;
    int freeIndex;
};

struct NodeArray {
    Node** data;
    int size;
    int capacity;

    void resize(int newSize, Node* value);
    void append(Node* const& value);
};

struct S {
    NodeArray active;
    NodeArray freeNodes;

    void process(Node* node);
    void activate(Node* node);
};

void S::activate(Node* node)
{
    int index = node->freeIndex;
    if (index >= 0) {
        NodeArray& nodes = freeNodes;
        Node* last = nodes.data[nodes.size - 1];
        nodes.data[index] = last;
        last->freeIndex = index;
        nodes.resize(nodes.size - 1, 0);
        node->freeIndex = -1;
    }

    node->activeIndex = active.size;
    Node* value = node;
    active.append(value);
    process(node);
}
