// roc 2009-06 00509430  unit: RBX::Network::PhysicsSender::Job  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00509430
//
// 00509430  85c9                 test ecx, ecx
// 00509432  7405                 je 0x509439
// 00509434  8d41f4               lea eax, [ecx - 0xc]
// 00509437  eb02                 jmp 0x50943b
// 00509439  33c0                 xor eax, eax
// 0050943b  8b5004               mov edx, dword ptr [eax + 4]
// 0050943e  85c9                 test ecx, ecx
// 00509440  7405                 je 0x509447
// 00509442  8d41f4               lea eax, [ecx - 0xc]
// 00509445  eb02                 jmp 0x509449
// 00509447  33c0                 xor eax, eax
// 00509449  8b4004               mov eax, dword ptr [eax + 4]
// 0050944c  8b4060               mov eax, dword ptr [eax + 0x60]
// 0050944f  83e0fe               and eax, 0xfffffffe
// 00509452  7405                 je 0x509459
// 00509454  8d48a0               lea ecx, [eax - 0x60]
// 00509457  eb02                 jmp 0x50945b
// 00509459  33c9                 xor ecx, ecx
// 0050945b  b001                 mov al, 1
// 0050945d  85c9                 test ecx, ecx
// 0050945f  7429                 je 0x50948a
// 00509461  56                   push esi
// 00509462  8b742408             mov esi, dword ptr [esp + 8]
// 00509466  dd4108               fld qword ptr [ecx + 8]
// 00509469  8bd1                 mov edx, ecx
// 0050946b  dc1e                 fcomp qword ptr [esi]
// 0050946d  dfe0                 fnstsw ax
// 0050946f  f6c405               test ah, 5
// 00509472  7a07                 jp 0x50947b
// 00509474  8b4964               mov ecx, dword ptr [ecx + 0x64]
// 00509477  b001                 mov al, 1
// 00509479  eb05                 jmp 0x509480
// 0050947b  8b4968               mov ecx, dword ptr [ecx + 0x68]
// 0050947e  32c0                 xor al, al
// 00509480  85c9                 test ecx, ecx
// 00509482  7405                 je 0x509489
// 00509484  83c1a0               add ecx, -0x60
// 00509487  75dd                 jne 0x509466
// 00509489  5e                   pop esi
// 0050948a  33c9                 xor ecx, ecx
// 0050948c  84c0                 test al, al
// 0050948e  8b442408             mov eax, dword ptr [esp + 8]
// 00509492  0f94c1               sete cl
// 00509495  8908                 mov dword ptr [eax], ecx
// 00509497  85d2                 test edx, edx
// 00509499  740b                 je 0x5094a6
// 0050949b  8d4a60               lea ecx, [edx + 0x60]
// 0050949e  894804               mov dword ptr [eax + 4], ecx
// 005094a1  b001                 mov al, 1
// 005094a3  c20c00               ret 0xc
// 005094a6  33c9                 xor ecx, ecx
// 005094a8  894804               mov dword ptr [eax + 4], ecx
// 005094ab  b001                 mov al, 1
// 005094ad  c20c00               ret 0xc
// copied from an identical function in another client (function ?find@S@@QAE_NPBNPAUResult@@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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