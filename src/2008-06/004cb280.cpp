// from server: 100% by colin
// roc 2008-06 004cb280  unit: RBX::Network::RoundRobinPhysicsSender  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cb280
//
// 004cb280  85c9                 test ecx, ecx
// 004cb282  7405                 je 0x4cb289
// 004cb284  8d41f4               lea eax, [ecx - 0xc]
// 004cb287  eb02                 jmp 0x4cb28b
// 004cb289  33c0                 xor eax, eax
// 004cb28b  8b5004               mov edx, dword ptr [eax + 4]
// 004cb28e  85c9                 test ecx, ecx
// 004cb290  7405                 je 0x4cb297
// 004cb292  8d41f4               lea eax, [ecx - 0xc]
// 004cb295  eb02                 jmp 0x4cb299
// 004cb297  33c0                 xor eax, eax
// 004cb299  8b4004               mov eax, dword ptr [eax + 4]
// 004cb29c  8b4050               mov eax, dword ptr [eax + 0x50]
// 004cb29f  83e0fe               and eax, 0xfffffffe
// 004cb2a2  7405                 je 0x4cb2a9
// 004cb2a4  83c0b0               add eax, -0x50
// 004cb2a7  eb02                 jmp 0x4cb2ab
// 004cb2a9  33c0                 xor eax, eax
// 004cb2ab  b101                 mov cl, 1
// 004cb2ad  85c0                 test eax, eax
// 004cb2af  7423                 je 0x4cb2d4
// 004cb2b1  56                   push esi
// 004cb2b2  8b742408             mov esi, dword ptr [esp + 8]
// 004cb2b6  3b7044               cmp esi, dword ptr [eax + 0x44]
// 004cb2b9  8bd0                 mov edx, eax
// 004cb2bb  0f9cc1               setl cl
// 004cb2be  84c9                 test cl, cl
// 004cb2c0  7405                 je 0x4cb2c7
// 004cb2c2  8b4054               mov eax, dword ptr [eax + 0x54]
// 004cb2c5  eb03                 jmp 0x4cb2ca
// 004cb2c7  8b4058               mov eax, dword ptr [eax + 0x58]
// 004cb2ca  85c0                 test eax, eax
// 004cb2cc  7405                 je 0x4cb2d3
// 004cb2ce  83c0b0               add eax, -0x50
// 004cb2d1  75e3                 jne 0x4cb2b6
// 004cb2d3  5e                   pop esi
// 004cb2d4  8b442408             mov eax, dword ptr [esp + 8]
// 004cb2d8  53                   push ebx
// 004cb2d9  33db                 xor ebx, ebx
// 004cb2db  84c9                 test cl, cl
// 004cb2dd  0f94c3               sete bl
// 004cb2e0  8918                 mov dword ptr [eax], ebx
// 004cb2e2  5b                   pop ebx
// 004cb2e3  85d2                 test edx, edx
// 004cb2e5  740b                 je 0x4cb2f2
// 004cb2e7  8d4a50               lea ecx, [edx + 0x50]
// 004cb2ea  894804               mov dword ptr [eax + 4], ecx
// 004cb2ed  b001                 mov al, 1
// 004cb2ef  c20c00               ret 0xc
// 004cb2f2  33c9                 xor ecx, ecx
// 004cb2f4  894804               mov dword ptr [eax + 4], ecx
// 004cb2f7  b001                 mov al, 1
// 004cb2f9  c20c00               ret 0xc

struct Node
{
    char padding0[0x44];
    int key;
    char padding1[0x0c];
    Node* left;
    Node* right;
};

struct Sentinel
{
    char padding[0x50];
    unsigned int link;
};

struct Owner
{
    char padding0[4];
    Sentinel* anchor;
};

struct Result
{
    int right;
    Node* link;
};

struct S
{
    bool find(int key, Result* result, int unused);
};

bool S::find(int key, Result* result, int unused)
{
    Sentinel* anchor = (this ? (Owner*)((char*)this - 12) : 0)->anchor;
    Node* previous = (Node*)anchor;
    unsigned int root =
        (this ? (Owner*)((char*)this - 12) : 0)->anchor->link & ~1u;
    Node* current = root ? (Node*)(root - 0x50) : 0;
    bool left = true;

    while (current)
    {
        previous = current;
        Node* next;
        left = key < current->key;
        if (left)
        {
            next = current->left;
        }
        else
        {
            next = current->right;
        }
        current = next ? (Node*)((char*)next - 0x50) : 0;
    }

    result->right = !left;
    result->link = previous ? (Node*)((char*)previous + 0x50) : 0;
    return true;
}
