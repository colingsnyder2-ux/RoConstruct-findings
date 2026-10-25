// from server: 100% by king_originala
// roc 2008-06 004cb200  unit: RBX::Network::RoundRobinPhysicsSender  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cb200
//
// 004cb200  85c9                 test ecx, ecx
// 004cb202  7405                 je 0x4cb209
// 004cb204  8d41f4               lea eax, [ecx - 0xc]
// 004cb207  eb02                 jmp 0x4cb20b
// 004cb209  33c0                 xor eax, eax
// 004cb20b  8b5004               mov edx, dword ptr [eax + 4]
// 004cb20e  85c9                 test ecx, ecx
// 004cb210  7405                 je 0x4cb217
// 004cb212  8d41f4               lea eax, [ecx - 0xc]
// 004cb215  eb02                 jmp 0x4cb219
// 004cb217  33c0                 xor eax, eax
// 004cb219  8b4004               mov eax, dword ptr [eax + 4]
// 004cb21c  8b4060               mov eax, dword ptr [eax + 0x60]
// 004cb21f  83e0fe               and eax, 0xfffffffe
// 004cb222  7405                 je 0x4cb229
// 004cb224  8d48a0               lea ecx, [eax - 0x60]
// 004cb227  eb02                 jmp 0x4cb22b
// 004cb229  33c9                 xor ecx, ecx
// 004cb22b  b001                 mov al, 1
// 004cb22d  85c9                 test ecx, ecx
// 004cb22f  7429                 je 0x4cb25a
// 004cb231  56                   push esi
// 004cb232  8b742408             mov esi, dword ptr [esp + 8]
// 004cb236  dd4108               fld qword ptr [ecx + 8]
// 004cb239  8bd1                 mov edx, ecx
// 004cb23b  dc1e                 fcomp qword ptr [esi]
// 004cb23d  dfe0                 fnstsw ax
// 004cb23f  f6c405               test ah, 5
// 004cb242  7a07                 jp 0x4cb24b
// 004cb244  8b4964               mov ecx, dword ptr [ecx + 0x64]
// 004cb247  b001                 mov al, 1
// 004cb249  eb05                 jmp 0x4cb250
// 004cb24b  8b4968               mov ecx, dword ptr [ecx + 0x68]
// 004cb24e  32c0                 xor al, al
// 004cb250  85c9                 test ecx, ecx
// 004cb252  7405                 je 0x4cb259
// 004cb254  83c1a0               add ecx, -0x60
// 004cb257  75dd                 jne 0x4cb236
// 004cb259  5e                   pop esi
// 004cb25a  33c9                 xor ecx, ecx
// 004cb25c  84c0                 test al, al
// 004cb25e  8b442408             mov eax, dword ptr [esp + 8]
// 004cb262  0f94c1               sete cl
// 004cb265  8908                 mov dword ptr [eax], ecx
// 004cb267  85d2                 test edx, edx
// 004cb269  740b                 je 0x4cb276
// 004cb26b  8d4a60               lea ecx, [edx + 0x60]
// 004cb26e  894804               mov dword ptr [eax + 4], ecx
// 004cb271  b001                 mov al, 1
// 004cb273  c20c00               ret 0xc
// 004cb276  33c9                 xor ecx, ecx
// 004cb278  894804               mov dword ptr [eax + 4], ecx
// 004cb27b  b001                 mov al, 1
// 004cb27d  c20c00               ret 0xc

struct Link
{
    unsigned int tagged;
    Link* left;
    Link* right;
};

struct Node
{
    char padding0[8];
    double key;
    char padding1[80];
    Link link;
};

struct Owner
{
    unsigned int unused;
    Node* anchor;
};

struct Result
{
    int right;
    Link* link;
};

struct S
{
    bool find(const double* key, Result* result, int unused);
};

bool S::find(const double* key, Result* result, int unused)
{
    Node* previous = (this ? (Owner*)((char*)this - 12) : 0)->anchor;
    unsigned int root =
        (this ? (Owner*)((char*)this - 12) : 0)->anchor->link.tagged & ~1u;
    Node* current = root ? (Node*)(root - 96) : 0;
    bool left = true;

    while (current)
    {
        previous = current;
        Link* next;
        if (*key > current->key)
        {
            next = current->link.left;
            left = true;
        }
        else
        {
            next = current->link.right;
            left = false;
        }
        current = next ? (Node*)((char*)next - 96) : 0;
    }

    result->right = !left;
    result->link = previous ? &previous->link : 0;
    return true;
}
