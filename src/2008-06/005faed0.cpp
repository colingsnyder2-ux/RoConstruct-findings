// from server: 100% by colin
// roc 2008-06 005faed0  unit: UString_sink::?$stream_buffer  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005faed0
//
// 005faed0  53                   push ebx
// 005faed1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005faed5  55                   push ebp
// 005faed6  57                   push edi
// 005faed7  33ff                 xor edi, edi
// 005faed9  397b20               cmp dword ptr [ebx + 0x20], edi
// 005faedc  8be9                 mov ebp, ecx
// 005faede  7e33                 jle 0x5faf13
// 005faee0  56                   push esi
// 005faee1  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 005faee4  8b34b8               mov esi, dword ptr [eax + edi*4]
// 005faee7  837e0800             cmp dword ptr [esi + 8], 0
// 005faeeb  7e17                 jle 0x5faf04
// 005faeed  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005faef0  8d4d0c               lea ecx, [ebp + 0xc]
// 005faef3  8d442414             lea eax, [esp + 0x14]
// 005faef7  50                   push eax
// 005faef8  89742418             mov dword ptr [esp + 0x18], esi
// 005faefc  895604               mov dword ptr [esi + 4], edx
// 005faeff  e8bcfcffff           call 0x5fabc0
// 005faf04  56                   push esi
// 005faf05  8bcd                 mov ecx, ebp
// 005faf07  e8c4ffffff           call 0x5faed0
// 005faf0c  47                   inc edi
// 005faf0d  3b7b20               cmp edi, dword ptr [ebx + 0x20]
// 005faf10  7ccf                 jl 0x5faee1
// 005faf12  5e                   pop esi
// 005faf13  5f                   pop edi
// 005faf14  5d                   pop ebp
// 005faf15  5b                   pop ebx
// 005faf16  c20400               ret 4

// from server: 87% by king_originala
struct Node {
    int field0;
    int index;
    int value;
    int field12;
    int field16;
    int field20;
    int field24;
    Node** children;
    int childCount;
};

struct NodeList {
    Node** data;
    int size;
    int capacity;

    void append(Node* const& node);
};

struct S {
    int field0;
    int field4;
    int field8;
    NodeList nodes;

    void visit(Node* node);
};

void S::visit(Node* node)
{
    for (int i = 0; i < node->childCount; ++i) {
        Node* child = node->children[i];
        if (child->value > 0) {
            NodeList* list = &nodes;
            Node* entry = child;
            child->index = list->size;
            list->append(entry);
        }
        visit(child);
    }
}

