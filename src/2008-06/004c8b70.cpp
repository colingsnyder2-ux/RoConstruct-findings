// from server: 88% by colin
// roc 2008-06 004c8b70  unit: RBX::Network::DirectPhysicsReceiver  size: 379 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c8b70
//
// 004c8b70  55                   push ebp
// 004c8b71  8bec                 mov ebp, esp
// 004c8b73  6aff                 push -1
// 004c8b75  68c0967c00           push 0x7c96c0
// 004c8b7a  64a100000000         mov eax, dword ptr fs:[0]
// 004c8b80  50                   push eax
// 004c8b81  64892500000000       mov dword ptr fs:[0], esp
// 004c8b88  83ec10               sub esp, 0x10
// 004c8b8b  53                   push ebx
// 004c8b8c  56                   push esi
// 004c8b8d  57                   push edi
// 004c8b8e  8b7d08               mov edi, dword ptr [ebp + 8]
// 004c8b91  8bf1                 mov esi, ecx
// 004c8b93  8965f0               mov dword ptr [ebp - 0x10], esp
// 004c8b96  8975e8               mov dword ptr [ebp - 0x18], esi
// 004c8b99  85ff                 test edi, edi
// 004c8b9b  7408                 je 0x4c8ba5
// 004c8b9d  8d8f90020000         lea ecx, [edi + 0x290]
// 004c8ba3  eb02                 jmp 0x4c8ba7
// 004c8ba5  33c9                 xor ecx, ecx
// 004c8ba7  8b11                 mov edx, dword ptr [ecx]
// 004c8ba9  8bc2                 mov eax, edx
// 004c8bab  3908                 cmp dword ptr [eax], ecx
// 004c8bad  7407                 je 0x4c8bb6
// 004c8baf  90                   nop 
// 004c8bb0  8b00                 mov eax, dword ptr [eax]
// 004c8bb2  3908                 cmp dword ptr [eax], ecx
// 004c8bb4  75fa                 jne 0x4c8bb0
// 004c8bb6  57                   push edi
// 004c8bb7  8910                 mov dword ptr [eax], edx
// 004c8bb9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004c8bc0  e8eb190000           call 0x4ca5b0
// 004c8bc5  33d2                 xor edx, edx
// 004c8bc7  f77608               div dword ptr [esi + 8]
// 004c8bca  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 004c8bcd  83c404               add esp, 4
// 004c8bd0  c645e400             mov byte ptr [ebp - 0x1c], 0
// 004c8bd4  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 004c8bd7  51                   push ecx
// 004c8bd8  8bce                 mov ecx, esi
// 004c8bda  8bfa                 mov edi, edx
// 004c8bdc  8d04bb               lea eax, [ebx + edi*4]
// 004c8bdf  8d55ec               lea edx, [ebp - 0x14]
// 004c8be2  8945ec               mov dword ptr [ebp - 0x14], eax
// 004c8be5  8b4508               mov eax, dword ptr [ebp + 8]
// 004c8be8  52                   push edx
// 004c8be9  50                   push eax
// 004c8bea  e8c1e4ffff           call 0x4c70b0
// 004c8bef  84c0                 test al, al
// 004c8bf1  7530                 jne 0x4c8c23
// 004c8bf3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 004c8bf6  8d048b               lea eax, [ebx + ecx*4]
// 004c8bf9  3900                 cmp dword ptr [eax], eax
// 004c8bfb  7423                 je 0x4c8c20
// 004c8bfd  894e20               mov dword ptr [esi + 0x20], ecx
// 004c8c00  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004c8c03  51                   push ecx
// 004c8c04  8bce                 mov ecx, esi
// 004c8c06  e875f2ffff           call 0x4c7e80
// 004c8c0b  32c0                 xor al, al
// 004c8c0d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004c8c10  64890d00000000       mov dword ptr fs:[0], ecx
// 004c8c17  5f                   pop edi
// 004c8c18  5e                   pop esi
// 004c8c19  5b                   pop ebx
// 004c8c1a  8be5                 mov esp, ebp
// 004c8c1c  5d                   pop ebp
// 004c8c1d  c20400               ret 4
// 004c8c20  41                   inc ecx
// 004c8c21  ebd3                 jmp 0x4c8bf6
// 004c8c23  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004c8c26  53                   push ebx
// 004c8c27  8bce                 mov ecx, esi
// 004c8c29  c745fc02000000       mov dword ptr [ebp - 4], 2
// 004c8c30  e8dbf3ffff           call 0x4c8010
// 004c8c35  84c0                 test al, al
// 004c8c37  7459                 je 0x4c8c92
// 004c8c39  85db                 test ebx, ebx
// 004c8c3b  7408                 je 0x4c8c45
// 004c8c3d  8d8390020000         lea eax, [ebx + 0x290]
// 004c8c43  eb02                 jmp 0x4c8c47
// 004c8c45  33c0                 xor eax, eax
// 004c8c47  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004c8c4a  8b11                 mov edx, dword ptr [ecx]
// 004c8c4c  8910                 mov dword ptr [eax], edx
// 004c8c4e  8901                 mov dword ptr [ecx], eax
// 004c8c50  8b4620               mov eax, dword ptr [esi + 0x20]
// 004c8c53  3bc7                 cmp eax, edi
// 004c8c55  7618                 jbe 0x4c8c6f
// 004c8c57  897e20               mov dword ptr [esi + 0x20], edi
// 004c8c5a  b001                 mov al, 1
// 004c8c5c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004c8c5f  64890d00000000       mov dword ptr fs:[0], ecx
// 004c8c66  5f                   pop edi
// 004c8c67  5e                   pop esi
// 004c8c68  5b                   pop ebx
// 004c8c69  8be5                 mov esp, ebp
// 004c8c6b  5d                   pop ebp
// 004c8c6c  c20400               ret 4
// 004c8c6f  730c                 jae 0x4c8c7d
// 004c8c71  50                   push eax
// 004c8c72  8d4e08               lea ecx, [esi + 8]
// 004c8c75  e876e4ffff           call 0x4c70f0
// 004c8c7a  894620               mov dword ptr [esi + 0x20], eax
// 004c8c7d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004c8c80  5f                   pop edi
// 004c8c81  5e                   pop esi
// 004c8c82  b001                 mov al, 1
// 004c8c84  64890d00000000       mov dword ptr fs:[0], ecx
// 004c8c8b  5b                   pop ebx
// 004c8c8c  8be5                 mov esp, ebp
// 004c8c8e  5d                   pop ebp
// 004c8c8f  c20400               ret 4
// 004c8c92  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 004c8c95  8b4614               mov eax, dword ptr [esi + 0x14]
// 004c8c98  8d0488               lea eax, [eax + ecx*4]
// 004c8c9b  3900                 cmp dword ptr [eax], eax
// 004c8c9d  7408                 je 0x4c8ca7
// 004c8c9f  894e20               mov dword ptr [esi + 0x20], ecx
// 004c8ca2  e964ffffff           jmp 0x4c8c0b
// 004c8ca7  41                   inc ecx
// 004c8ca8  ebeb                 jmp 0x4c8c95
// 004c8caa  8b75e8               mov esi, dword ptr [ebp - 0x18]
// 004c8cad  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 004c8cb0  51                   push ecx
// 004c8cb1  8d4e08               lea ecx, [esi + 8]
// 004c8cb4  e837e4ffff           call 0x4c70f0
// 004c8cb9  6a00                 push 0
// 004c8cbb  6a00                 push 0
// 004c8cbd  894620               mov dword ptr [esi + 0x20], eax
// 004c8cc0  e8c7881d00           call 0x6a158c
// 004c8cc5  8b75e8               mov esi, dword ptr [ebp - 0x18]
// 004c8cc8  8b5620               mov edx, dword ptr [esi + 0x20]
// 004c8ccb  52                   push edx
// 004c8ccc  8d4e08               lea ecx, [esi + 8]
// 004c8ccf  e81ce4ffff           call 0x4c70f0
// 004c8cd4  894620               mov dword ptr [esi + 0x20], eax
// 004c8cd7  8b4508               mov eax, dword ptr [ebp + 8]
// 004c8cda  50                   push eax
// 004c8cdb  8bce                 mov ecx, esi
// 004c8cdd  e89ef1ffff           call 0x4c7e80
// 004c8ce2  6a00                 push 0
// 004c8ce4  6a00                 push 0
// 004c8ce6  e8a1881d00           call 0x6a158c

// from server: 96% by king_originala
struct Node
{
    Node *next;
};

struct Object
{
    char padding[0x290];
    Node link;
};

struct Flag
{
    bool value;
};

struct Table
{
    unsigned count;
    unsigned padding[2];
    Node **data;
    int f(int);
};

struct Receiver
{
    unsigned padding[2];
    Table table;
    unsigned padding2[2];
    unsigned first;

    bool insert(Object *);
    bool prepare(Object *, Node ***, Flag);
    void remove(Object *);
    bool accept(Object *);
};

extern "C" unsigned __cdecl hashObject(Object *);

bool Receiver::insert(Object *object)
{
    Node *node = object ? &object->link : 0;
    Node *next = node->next;
    Node *previous = next;
    while (previous->next != node)
        previous = previous->next;
    previous->next = next;

    Flag flag;
    try
    {
        unsigned bucket = hashObject(object) % table.count;
        Node **data = table.data;
        Node **position = data + bucket;
        flag.value = false;

        if (!prepare(object, &position, flag))
        {
            unsigned index = first;
            for (;;)
            {
                if (data[index] != reinterpret_cast<Node *>(data + index))
                {
                    first = index;
                    remove(object);
                    return false;
                }
                ++index;
            }
        }

        try
        {
            try
            {
                if (accept(object))
                {
                    Node *entry = object ? &object->link : 0;
                    entry->next = *position;
                    *position = entry;

                    unsigned index = first;
                    if (index > bucket)
                        first = bucket;
                    else if (index < bucket)
                        first = table.f(index);
                    return true;
                }
            }
            catch (...)
            {
                throw;
            }
        }
        catch (...)
        {
            remove(0);
            throw;
        }

        unsigned index = first;
        for (;;)
        {
            if (table.data[index] !=
                reinterpret_cast<Node *>(table.data + index))
            {
                first = index;
                return false;
            }
            ++index;
        }
    }
    catch (...)
    {
        throw;
    }
}
