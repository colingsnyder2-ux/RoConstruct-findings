// from server: 98% by colin
// from server: 94% by king_originala
// roc 2008-06 004c7ef0  unit: RBX::VInstance::?$Association::Item  size: 282 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c7ef0
//
// 004c7ef0  83ec0c               sub esp, 0xc
// 004c7ef3  55                   push ebp
// 004c7ef4  8b2d90288000         mov ebp, dword ptr [0x802890]
// 004c7efa  56                   push esi
// 004c7efb  57                   push edi
// 004c7efc  8bf1                 mov esi, ecx
// 004c7efe  8bff                 mov edi, edi
// 004c7f00  8b4610               mov eax, dword ptr [esi + 0x10]
// 004c7f03  2b460c               sub eax, dword ptr [esi + 0xc]
// 004c7f06  8b15881a9700         mov edx, dword ptr [0x971a88]
// 004c7f0c  c1f802               sar eax, 2
// 004c7f0f  f6c201               test dl, 1
// 004c7f12  7520                 jne 0x4c7f34
// 004c7f14  8b3d801a9700         mov edi, dword ptr [0x971a80]
// 004c7f1a  83ca01               or edx, 1
// 004c7f1d  8bcf                 mov ecx, edi
// 004c7f1f  47                   inc edi
// 004c7f20  8915881a9700         mov dword ptr [0x971a88], edx
// 004c7f26  890d841a9700         mov dword ptr [0x971a84], ecx
// 004c7f2c  893d801a9700         mov dword ptr [0x971a80], edi
// 004c7f32  eb06                 jmp 0x4c7f3a
// 004c7f34  8b0d841a9700         mov ecx, dword ptr [0x971a84]
// 004c7f3a  3bc1                 cmp eax, ecx
// 004c7f3c  7757                 ja 0x4c7f95
// 004c7f3e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004c7f41  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004c7f49  85c9                 test ecx, ecx
// 004c7f4b  7504                 jne 0x4c7f51
// 004c7f4d  33c0                 xor eax, eax
// 004c7f4f  eb08                 jmp 0x4c7f59
// 004c7f51  8b4614               mov eax, dword ptr [esi + 0x14]
// 004c7f54  2bc1                 sub eax, ecx
// 004c7f56  c1f802               sar eax, 2
// 004c7f59  8b7e10               mov edi, dword ptr [esi + 0x10]
// 004c7f5c  8bd7                 mov edx, edi
// 004c7f5e  2bd1                 sub edx, ecx
// 004c7f60  c1fa02               sar edx, 2
// 004c7f63  3bd0                 cmp edx, eax
// 004c7f65  730e                 jae 0x4c7f75
// 004c7f67  c70700000000         mov dword ptr [edi], 0
// 004c7f6d  83c704               add edi, 4
// 004c7f70  897e10               mov dword ptr [esi + 0x10], edi
// 004c7f73  eb8b                 jmp 0x4c7f00
// 004c7f75  3bcf                 cmp ecx, edi
// 004c7f77  7602                 jbe 0x4c7f7b
// 004c7f79  ffd5                 call ebp
// 004c7f7b  8b06                 mov eax, dword ptr [esi]
// 004c7f7d  8d4c240c             lea ecx, [esp + 0xc]
// 004c7f81  51                   push ecx
// 004c7f82  57                   push edi
// 004c7f83  50                   push eax
// 004c7f84  8d54241c             lea edx, [esp + 0x1c]
// 004c7f88  52                   push edx
// 004c7f89  8bce                 mov ecx, esi
// 004c7f8b  e8d0fcffff           call 0x4c7c60
// 004c7f90  e96bffffff           jmp 0x4c7f00
// 004c7f95  f6c201               test dl, 1
// 004c7f98  751c                 jne 0x4c7fb6
// 004c7f9a  a1801a9700           mov eax, dword ptr [0x971a80]
// 004c7f9f  83ca01               or edx, 1
// 004c7fa2  8bc8                 mov ecx, eax
// 004c7fa4  40                   inc eax
// 004c7fa5  8915881a9700         mov dword ptr [0x971a88], edx
// 004c7fab  890d841a9700         mov dword ptr [0x971a84], ecx
// 004c7fb1  a3801a9700           mov dword ptr [0x971a80], eax
// 004c7fb6  8b4610               mov eax, dword ptr [esi + 0x10]
// 004c7fb9  2b460c               sub eax, dword ptr [esi + 0xc]
// 004c7fbc  8bf9                 mov edi, ecx
// 004c7fbe  c1f802               sar eax, 2
// 004c7fc1  3bc8                 cmp ecx, eax
// 004c7fc3  7202                 jb 0x4c7fc7
// 004c7fc5  ffd5                 call ebp
// 004c7fc7  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004c7fca  833cb900             cmp dword ptr [ecx + edi*4], 0
// 004c7fce  8d34b9               lea esi, [ecx + edi*4]
// 004c7fd1  752b                 jne 0x4c7ffe
// 004c7fd3  6a08                 push 8
// 004c7fd5  e846891d00           call 0x6a0920
// 004c7fda  83c404               add esp, 4
// 004c7fdd  85c0                 test eax, eax
// 004c7fdf  7419                 je 0x4c7ffa
// 004c7fe1  c700ec658200         mov dword ptr [eax], 0x8265ec
// 004c7fe7  c7400400000000       mov dword ptr [eax + 4], 0
// 004c7fee  5f                   pop edi
// 004c7fef  8906                 mov dword ptr [esi], eax
// 004c7ff1  5e                   pop esi
// 004c7ff2  83c004               add eax, 4
// 004c7ff5  5d                   pop ebp
// 004c7ff6  83c40c               add esp, 0xc
// 004c7ff9  c3                   ret 
// 004c7ffa  33c0                 xor eax, eax
// 004c7ffc  8906                 mov dword ptr [esi], eax
// 004c7ffe  8b06                 mov eax, dword ptr [esi]
// 004c8000  5f                   pop edi
// 004c8001  5e                   pop esi
// 004c8002  83c004               add eax, 4
// 004c8005  5d                   pop ebp
// 004c8006  83c40c               add esp, 0xc
// 004c8009  c3                   ret 
#include <intrin.h>

extern void (__cdecl *invalidParameter)();
extern void* __cdecl allocate(unsigned int);
extern unsigned int nextIndex;
extern void* nodeVtable[];

struct Node
{
    void* vtable;
    int value;
};

struct Iterator
{
    void* owner;
    Node** position;
};

struct S
{
    void* owner;
    int padding[2];
    Node** first;
    Node** last;
    Node** limit;

    static unsigned int index();
    Iterator insert(Iterator, Node* const&);
    int* f();
};

__forceinline unsigned int S::index()
{
    static unsigned int value = nextIndex++;
    return value;
}

int* S::f()
{
    void (__cdecl *check)() = invalidParameter;

    for (;;)
    {
        unsigned int count = (unsigned int)(last - first);
        unsigned int required = index();
        if (count > required)
            break;

        Node* value = 0;
        Node** begin = first;
        unsigned int capacity;
        if (!begin)
            capacity = 0;
        else
            capacity = (unsigned int)(limit - begin);

        Node** end = last;
        if ((unsigned int)(end - begin) < capacity)
        {
            *end = value;
            last = end + 1;
        }
        else
        {
            if (begin > end)
                check();

            Iterator position = { owner, end };
            insert(position, value);
        }
    }

    unsigned int offset = index();
    unsigned int count = (unsigned int)(last - first);
    _ReadWriteBarrier();
    if (offset >= count)
        check();

    Node** slot = first + offset;
    if (!*slot)
    {
        Node* node = (Node*)allocate(8);
        if (node)
        {
            node->vtable = nodeVtable;
            node->value = 0;
        }
        else
        {
            node = 0;
        }
        *slot = node;
    }

    return &(*slot)->value;
}
