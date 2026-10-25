// from server: 100% by king_originala
// roc 2008-06 005faf20  unit: UString_sink::?$stream_buffer  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005faf20
//
// 005faf20  53                   push ebx
// 005faf21  55                   push ebp
// 005faf22  56                   push esi
// 005faf23  8b742410             mov esi, dword ptr [esp + 0x10]
// 005faf27  8bd9                 mov ebx, ecx
// 005faf29  8bce                 mov ecx, esi
// 005faf2b  e830e4f9ff           call 0x599360
// 005faf30  33ed                 xor ebp, ebp
// 005faf32  396e20               cmp dword ptr [esi + 0x20], ebp
// 005faf35  7e4f                 jle 0x5faf86
// 005faf37  57                   push edi
// 005faf38  eb06                 jmp 0x5faf40
// 005faf3a  8d9b00000000         lea ebx, [ebx]
// 005faf40  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005faf43  8b3ca8               mov edi, dword ptr [eax + ebp*4]
// 005faf46  8b4704               mov eax, dword ptr [edi + 4]
// 005faf49  85c0                 test eax, eax
// 005faf4b  7c2a                 jl 0x5faf77
// 005faf4d  8b530c               mov edx, dword ptr [ebx + 0xc]
// 005faf50  8b7310               mov esi, dword ptr [ebx + 0x10]
// 005faf53  8b74b2fc             mov esi, dword ptr [edx + esi*4 - 4]
// 005faf57  8d4b0c               lea ecx, [ebx + 0xc]
// 005faf5a  893482               mov dword ptr [edx + eax*4], esi
// 005faf5d  894604               mov dword ptr [esi + 4], eax
// 005faf60  8b5104               mov edx, dword ptr [ecx + 4]
// 005faf63  6a00                 push 0
// 005faf65  4a                   dec edx
// 005faf66  52                   push edx
// 005faf67  e804f8ffff           call 0x5fa770
// 005faf6c  8b742414             mov esi, dword ptr [esp + 0x14]
// 005faf70  c74704ffffffff       mov dword ptr [edi + 4], 0xffffffff
// 005faf77  57                   push edi
// 005faf78  8bcb                 mov ecx, ebx
// 005faf7a  e8a1ffffff           call 0x5faf20
// 005faf7f  45                   inc ebp
// 005faf80  3b6e20               cmp ebp, dword ptr [esi + 0x20]
// 005faf83  7cbb                 jl 0x5faf40
// 005faf85  5f                   pop edi
// 005faf86  5e                   pop esi
// 005faf87  5d                   pop ebp
// 005faf88  5b                   pop ebx
// 005faf89  c20400               ret 4

struct Node;

struct Array {
    Node** data;
    int size;
    void resize(int count, Node* value);
};

struct Node {
    char reserved0[4];
    int index;
    char reserved1[20];
    Array children;

    const void* get();
};

struct S {
    char reserved[12];
    Array entries;

    void func_005faf20(Node* node);
};

void S::func_005faf20(Node* node)
{
    node->get();
    for (int i = 0; i < node->children.size; ++i) {
        Node* child = node->children.data[i];
        int index = child->index;
        if (index >= 0) {
            Array* array = &entries;
            Node* last = array->data[array->size - 1];
            array->data[index] = last;
            last->index = index;
            array->resize(array->size - 1, 0);
            child->index = -1;
        }
        func_005faf20(child);
    }
}
