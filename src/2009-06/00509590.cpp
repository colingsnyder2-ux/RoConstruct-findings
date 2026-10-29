// roc 2009-06 00509590  unit: RBX::Network::PhysicsSender::Job  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00509590
//
// 00509590  85c9                 test ecx, ecx
// 00509592  7405                 je 0x509599
// 00509594  8d41f4               lea eax, [ecx - 0xc]
// 00509597  eb02                 jmp 0x50959b
// 00509599  33c0                 xor eax, eax
// 0050959b  8b5004               mov edx, dword ptr [eax + 4]
// 0050959e  85c9                 test ecx, ecx
// 005095a0  7405                 je 0x5095a7
// 005095a2  8d41f4               lea eax, [ecx - 0xc]
// 005095a5  eb02                 jmp 0x5095a9
// 005095a7  33c0                 xor eax, eax
// 005095a9  8b4004               mov eax, dword ptr [eax + 4]
// 005095ac  8b4050               mov eax, dword ptr [eax + 0x50]
// 005095af  83e0fe               and eax, 0xfffffffe
// 005095b2  7405                 je 0x5095b9
// 005095b4  83c0b0               add eax, -0x50
// 005095b7  eb02                 jmp 0x5095bb
// 005095b9  33c0                 xor eax, eax
// 005095bb  b101                 mov cl, 1
// 005095bd  85c0                 test eax, eax
// 005095bf  7423                 je 0x5095e4
// 005095c1  56                   push esi
// 005095c2  8b742408             mov esi, dword ptr [esp + 8]
// 005095c6  3b7044               cmp esi, dword ptr [eax + 0x44]
// 005095c9  8bd0                 mov edx, eax
// 005095cb  0f9cc1               setl cl
// 005095ce  84c9                 test cl, cl
// 005095d0  7405                 je 0x5095d7
// 005095d2  8b4054               mov eax, dword ptr [eax + 0x54]
// 005095d5  eb03                 jmp 0x5095da
// 005095d7  8b4058               mov eax, dword ptr [eax + 0x58]
// 005095da  85c0                 test eax, eax
// 005095dc  7405                 je 0x5095e3
// 005095de  83c0b0               add eax, -0x50
// 005095e1  75e3                 jne 0x5095c6
// 005095e3  5e                   pop esi
// 005095e4  8b442408             mov eax, dword ptr [esp + 8]
// 005095e8  53                   push ebx
// 005095e9  33db                 xor ebx, ebx
// 005095eb  84c9                 test cl, cl
// 005095ed  0f94c3               sete bl
// 005095f0  8918                 mov dword ptr [eax], ebx
// 005095f2  5b                   pop ebx
// 005095f3  85d2                 test edx, edx
// 005095f5  740b                 je 0x509602
// 005095f7  8d4a50               lea ecx, [edx + 0x50]
// 005095fa  894804               mov dword ptr [eax + 4], ecx
// 005095fd  b001                 mov al, 1
// 005095ff  c20c00               ret 0xc
// 00509602  33c9                 xor ecx, ecx
// 00509604  894804               mov dword ptr [eax + 4], ecx
// 00509607  b001                 mov al, 1
// 00509609  c20c00               ret 0xc
// copied from an identical function in another client (function ?find@S@@QAE_NHPAUResult@@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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