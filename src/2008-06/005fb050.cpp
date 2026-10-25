// from server: 100% by king_originala
// roc 2008-06 005fb050  unit: UString_sink::?$stream_buffer  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fb050
//
// 005fb050  53                   push ebx
// 005fb051  55                   push ebp
// 005fb052  56                   push esi
// 005fb053  57                   push edi
// 005fb054  8be9                 mov ebp, ecx
// 005fb056  33db                 xor ebx, ebx
// 005fb058  eb06                 jmp 0x5fb060
// 005fb05a  8d9b00000000         lea ebx, [ebx]
// 005fb060  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fb064  8b01                 mov eax, dword ptr [ecx]
// 005fb066  8b5010               mov edx, dword ptr [eax + 0x10]
// 005fb069  53                   push ebx
// 005fb06a  ffd2                 call edx
// 005fb06c  8bf0                 mov esi, eax
// 005fb06e  85f6                 test esi, esi
// 005fb070  7437                 je 0x5fb0a9
// 005fb072  ff4e08               dec dword ptr [esi + 8]
// 005fb075  8b7e04               mov edi, dword ptr [esi + 4]
// 005fb078  8b4608               mov eax, dword ptr [esi + 8]
// 005fb07b  85ff                 test edi, edi
// 005fb07d  7c2a                 jl 0x5fb0a9
// 005fb07f  85c0                 test eax, eax
// 005fb081  7526                 jne 0x5fb0a9
// 005fb083  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005fb086  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005fb089  8b5490fc             mov edx, dword ptr [eax + edx*4 - 4]
// 005fb08d  8d4d0c               lea ecx, [ebp + 0xc]
// 005fb090  8914b8               mov dword ptr [eax + edi*4], edx
// 005fb093  897a04               mov dword ptr [edx + 4], edi
// 005fb096  8b4104               mov eax, dword ptr [ecx + 4]
// 005fb099  6a00                 push 0
// 005fb09b  48                   dec eax
// 005fb09c  50                   push eax
// 005fb09d  e8cef6ffff           call 0x5fa770
// 005fb0a2  c74604ffffffff       mov dword ptr [esi + 4], 0xffffffff
// 005fb0a9  43                   inc ebx
// 005fb0aa  83fb02               cmp ebx, 2
// 005fb0ad  7cb1                 jl 0x5fb060
// 005fb0af  5f                   pop edi
// 005fb0b0  5e                   pop esi
// 005fb0b1  5d                   pop ebp
// 005fb0b2  5b                   pop ebx
// 005fb0b3  c20400               ret 4

struct Node {
    int field0;
    int index;
    int references;
};

struct Source {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual Node *get(int index);
};

struct NodeArray {
    Node **data;
    int size;

    void resize(int count, int flag);
};

struct S {
    char padding[12];
    NodeArray nodes;

    void f(Source *source);
};

void S::f(Source *source)
{
    for (int i = 0; i < 2; ++i) {
        Node *node = source->get(i);
        if (node) {
            --node->references;
            int index = node->index;
            if (index >= 0 && node->references == 0) {
                NodeArray *array = &nodes;
                Node *last = array->data[array->size - 1];
                array->data[index] = last;
                last->index = index;
                array->resize(array->size - 1, 0);
                node->index = -1;
            }
        }
    }
}
