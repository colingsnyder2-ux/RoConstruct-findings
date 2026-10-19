// from server: 58% by colin
// from server: 57% by king_originala
// roc 2008-06 00433b80  unit: CObjectBrowser  size: 373 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433b80
//
// 00433b80  8b442404             mov eax, dword ptr [esp + 4]
// 00433b84  83ec14               sub esp, 0x14
// 00433b87  57                   push edi
// 00433b88  50                   push eax
// 00433b89  8bf9                 mov edi, ecx
// 00433b8b  e852d52600           call 0x6a10e2
// 00433b90  83f8ff               cmp eax, -1
// 00433b93  7509                 jne 0x433b9e
// 00433b95  0bc0                 or eax, eax
// 00433b97  5f                   pop edi
// 00433b98  83c414               add esp, 0x14
// 00433b9b  c20400               ret 4
// 00433b9e  8b5758               mov edx, dword ptr [edi + 0x58]
// 00433ba1  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00433ba7  56                   push esi
// 00433ba8  6800e90000           push 0xe900
// 00433bad  6800000050           push 0x50000000
// 00433bb2  6a02                 push 2
// 00433bb4  8d7758               lea esi, [edi + 0x58]
// 00433bb7  6a01                 push 1
// 00433bb9  57                   push edi
// 00433bba  8bce                 mov ecx, esi
// 00433bbc  ffd0                 call eax
// 00433bbe  85c0                 test eax, eax
// 00433bc0  750b                 jne 0x433bcd
// 00433bc2  5e                   pop esi
// 00433bc3  83c8ff               or eax, 0xffffffff
// 00433bc6  5f                   pop edi
// 00433bc7  83c414               add esp, 0x14
// 00433bca  c20400               ret 4
// 00433bcd  8b16                 mov edx, dword ptr [esi]
// 00433bcf  8b82d0010000         mov eax, dword ptr [edx + 0x1d0]
// 00433bd5  53                   push ebx
// 00433bd6  6a04                 push 4
// 00433bd8  8bce                 mov ecx, esi
// 00433bda  ffd0                 call eax
// 00433bdc  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 00433bdf  8b16                 mov edx, dword ptr [esi]
// 00433be1  33c0                 xor eax, eax
// 00433be3  89442410             mov dword ptr [esp + 0x10], eax
// 00433be7  894c2410             mov dword ptr [esp + 0x10], ecx
// 00433beb  8d5c240c             lea ebx, [esp + 0xc]
// 00433bef  53                   push ebx
// 00433bf0  89442410             mov dword ptr [esp + 0x10], eax
// 00433bf4  89442418             mov dword ptr [esp + 0x18], eax
// 00433bf8  8944241c             mov dword ptr [esp + 0x1c], eax
// 00433bfc  89442420             mov dword ptr [esp + 0x20], eax
// 00433c00  b958020000           mov ecx, 0x258
// 00433c05  51                   push ecx
// 00433c06  b8c8000000           mov eax, 0xc8
// 00433c0b  50                   push eax
// 00433c0c  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 00433c12  6804258100           push 0x812504
// 00433c17  6a00                 push 0
// 00433c19  6a00                 push 0
// 00433c1b  8bce                 mov ecx, esi
// 00433c1d  ffd0                 call eax
// 00433c1f  85c0                 test eax, eax
// 00433c21  0f8480000000         je 0x433ca7
// 00433c27  8b9f70010000         mov ebx, dword ptr [edi + 0x170]
// 00433c2d  6a01                 push 1
// 00433c2f  81c770010000         add edi, 0x170
// 00433c35  6a00                 push 0
// 00433c37  8bce                 mov ecx, esi
// 00433c39  e80ed42600           call 0x6a104c
// 00433c3e  8b9348010000         mov edx, dword ptr [ebx + 0x148]
// 00433c44  50                   push eax
// 00433c45  6800008050           push 0x50800000
// 00433c4a  6a01                 push 1
// 00433c4c  6a02                 push 2
// 00433c4e  56                   push esi
// 00433c4f  8bcf                 mov ecx, edi
// 00433c51  ffd2                 call edx
// 00433c53  85c0                 test eax, eax
// 00433c55  7450                 je 0x433ca7
// 00433c57  8b17                 mov edx, dword ptr [edi]
// 00433c59  8d5c240c             lea ebx, [esp + 0xc]
// 00433c5d  53                   push ebx
// 00433c5e  b9c8000000           mov ecx, 0xc8
// 00433c63  51                   push ecx
// 00433c64  b82c010000           mov eax, 0x12c
// 00433c69  50                   push eax
// 00433c6a  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 00433c70  683c258100           push 0x81253c
// 00433c75  6a00                 push 0
// 00433c77  6a00                 push 0
// 00433c79  8bcf                 mov ecx, edi
// 00433c7b  ffd0                 call eax
// 00433c7d  85c0                 test eax, eax
// 00433c7f  7426                 je 0x433ca7
// 00433c81  8b17                 mov edx, dword ptr [edi]
// 00433c83  53                   push ebx
// 00433c84  b9be000000           mov ecx, 0xbe
// 00433c89  51                   push ecx
// 00433c8a  b864000000           mov eax, 0x64
// 00433c8f  50                   push eax
// 00433c90  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 00433c96  68e8248100           push 0x8124e8
// 00433c9b  6a00                 push 0
// 00433c9d  6a01                 push 1
// 00433c9f  8bcf                 mov ecx, edi
// 00433ca1  ffd0                 call eax
// 00433ca3  85c0                 test eax, eax
// 00433ca5  750c                 jne 0x433cb3
// 00433ca7  5b                   pop ebx
// 00433ca8  5e                   pop esi
// 00433ca9  83c8ff               or eax, 0xffffffff
// 00433cac  5f                   pop edi
// 00433cad  83c414               add esp, 0x14
// 00433cb0  c20400               ret 4
// 00433cb3  6a00                 push 0
// 00433cb5  6a00                 push 0
// 00433cb7  8bce                 mov ecx, esi
// 00433cb9  e830d42600           call 0x6a10ee
// 00433cbe  6a00                 push 0
// 00433cc0  6a00                 push 0
// 00433cc2  8bcf                 mov ecx, edi
// 00433cc4  8bf0                 mov esi, eax
// 00433cc6  e823d42600           call 0x6a10ee
// 00433ccb  6a00                 push 0
// 00433ccd  6a01                 push 1
// 00433ccf  8bcf                 mov ecx, edi
// 00433cd1  8bd8                 mov ebx, eax
// 00433cd3  e816d42600           call 0x6a10ee
// 00433cd8  899ea8000000         mov dword ptr [esi + 0xa8], ebx
// 00433cde  8986ac000000         mov dword ptr [esi + 0xac], eax
// 00433ce4  8983b0000000         mov dword ptr [ebx + 0xb0], eax
// 00433cea  5b                   pop ebx
// 00433ceb  5e                   pop esi
// 00433cec  33c0                 xor eax, eax
// 00433cee  5f                   pop edi
// 00433cef  83c414               add esp, 0x14
// 00433cf2  c20400               ret 4
#include <intrin.h>

struct Context
{
    void* first;
    void* second;
    void* third;
    void* fourth;
    void* fifth;
};

struct Node
{
    char padding[0xa8];
    Node* first;
    Node* second;
    Node* third;
};

struct Control;

struct ControlTable
{
    char padding0[0x148];
    int (__thiscall *create)(Control*, void*, int, int, unsigned long, unsigned long);
    int (__thiscall *insert)(Control*, int, int, const char*, int, int, Context*);
    char padding1[0x80];
    void (__thiscall *setMode)(Control*, int);
};

struct Control
{
    ControlTable* table;
    char padding[0x114];

    unsigned long query(int, int);
    Node* getNode(int, int);
};

extern const char textFirst[];
extern const char textSecond[];
extern const char textThird[];

struct CObjectBrowser
{
    char padding[0x54];
    void* value;
    Control first;
    Control second;

    int initialize(int);
    int create(int);
};

int CObjectBrowser::create(int argument)
{
    int result = initialize(argument);
    if (result == -1)
        return result;

    if (!first.table->create(&first, this, 1, 2, 0x50000000UL, 0xe900UL))
        return -1;

    first.table->setMode(&first, 4);

    Context context = { 0, 0, 0, 0, 0 };
    context.second = value;
    _ReadWriteBarrier();

    if (!first.table->insert(&first, 0, 0, textFirst, 200, 600, &context))
        return -1;

    if (!second.table->create(&second, &first, 2, 1, 0x50800000UL,
                              first.query(0, 1)))
        return -1;

    if (!second.table->insert(&second, 0, 0, textSecond, 300, 200, &context))
        return -1;

    if (!second.table->insert(&second, 1, 0, textThird, 100, 190, &context))
        return -1;

    Node* root = first.getNode(0, 0);
    Node* left = second.getNode(0, 0);
    Node* right = second.getNode(1, 0);

    root->first = left;
    root->second = right;
    left->third = right;
    return 0;
}
