// from server: 60% by colin
// roc 2008-06 004cc210  unit: RBX::VInstance::?$NonFactoryProduct  size: 484 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cc210
//
// 004cc210  55                   push ebp
// 004cc211  8bec                 mov ebp, esp
// 004cc213  6aff                 push -1
// 004cc215  68c0987c00           push 0x7c98c0
// 004cc21a  64a100000000         mov eax, dword ptr fs:[0]
// 004cc220  50                   push eax
// 004cc221  64892500000000       mov dword ptr fs:[0], esp
// 004cc228  83ec10               sub esp, 0x10
// 004cc22b  53                   push ebx
// 004cc22c  56                   push esi
// 004cc22d  57                   push edi
// 004cc22e  8b7d08               mov edi, dword ptr [ebp + 8]
// 004cc231  8965f0               mov dword ptr [ebp - 0x10], esp
// 004cc234  c645e800             mov byte ptr [ebp - 0x18], 0
// 004cc238  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 004cc23b  50                   push eax
// 004cc23c  57                   push edi
// 004cc23d  8bf1                 mov esi, ecx
// 004cc23f  57                   push edi
// 004cc240  8975ec               mov dword ptr [ebp - 0x14], esi
// 004cc243  e818ecffff           call 0x4cae60
// 004cc248  84c0                 test al, al
// 004cc24a  0f85d4000000         jne 0x4cc324
// 004cc250  85f6                 test esi, esi
// 004cc252  7405                 je 0x4cc259
// 004cc254  8d46f4               lea eax, [esi - 0xc]
// 004cc257  eb02                 jmp 0x4cc25b
// 004cc259  33c0                 xor eax, eax
// 004cc25b  8b5804               mov ebx, dword ptr [eax + 4]
// 004cc25e  85f6                 test esi, esi
// 004cc260  7405                 je 0x4cc267
// 004cc262  8d46f4               lea eax, [esi - 0xc]
// 004cc265  eb02                 jmp 0x4cc269
// 004cc267  33c0                 xor eax, eax
// 004cc269  8b5004               mov edx, dword ptr [eax + 4]
// 004cc26c  85f6                 test esi, esi
// 004cc26e  7405                 je 0x4cc275
// 004cc270  8d46f4               lea eax, [esi - 0xc]
// 004cc273  eb02                 jmp 0x4cc277
// 004cc275  33c0                 xor eax, eax
// 004cc277  8b4004               mov eax, dword ptr [eax + 4]
// 004cc27a  8d4860               lea ecx, [eax + 0x60]
// 004cc27d  85ff                 test edi, edi
// 004cc27f  7405                 je 0x4cc286
// 004cc281  8d4760               lea eax, [edi + 0x60]
// 004cc284  eb02                 jmp 0x4cc288
// 004cc286  33c0                 xor eax, eax
// 004cc288  83c368               add ebx, 0x68
// 004cc28b  53                   push ebx
// 004cc28c  83c264               add edx, 0x64
// 004cc28f  52                   push edx
// 004cc290  51                   push ecx
// 004cc291  50                   push eax
// 004cc292  e849a7ffff           call 0x4c69e0
// 004cc297  83c410               add esp, 0x10
// 004cc29a  c645e800             mov byte ptr [ebp - 0x18], 0
// 004cc29e  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004cc2a1  51                   push ecx
// 004cc2a2  8d55e4               lea edx, [ebp - 0x1c]
// 004cc2a5  52                   push edx
// 004cc2a6  8d4708               lea eax, [edi + 8]
// 004cc2a9  50                   push eax
// 004cc2aa  8bce                 mov ecx, esi
// 004cc2ac  c745fc02000000       mov dword ptr [ebp - 4], 2
// 004cc2b3  e848efffff           call 0x4cb200
// 004cc2b8  84c0                 test al, al
// 004cc2ba  7532                 jne 0x4cc2ee
// 004cc2bc  57                   push edi
// 004cc2bd  8bce                 mov ecx, esi
// 004cc2bf  e88cf5ffff           call 0x4cb850
// 004cc2c4  32c0                 xor al, al
// 004cc2c6  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004cc2c9  64890d00000000       mov dword ptr fs:[0], ecx
// 004cc2d0  5f                   pop edi
// 004cc2d1  5e                   pop esi
// 004cc2d2  5b                   pop ebx
// 004cc2d3  8be5                 mov esp, ebp
// 004cc2d5  5d                   pop ebp
// 004cc2d6  c20400               ret 4
// 004cc2d9  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004cc2dc  51                   push ecx
// 004cc2dd  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 004cc2e0  e86bf5ffff           call 0x4cb850
// 004cc2e5  6a00                 push 0
// 004cc2e7  6a00                 push 0
// 004cc2e9  e89e521d00           call 0x6a158c
// 004cc2ee  85f6                 test esi, esi
// 004cc2f0  7405                 je 0x4cc2f7
// 004cc2f2  8d46f4               lea eax, [esi - 0xc]
// 004cc2f5  eb02                 jmp 0x4cc2f9
// 004cc2f7  33c0                 xor eax, eax
// 004cc2f9  8b4004               mov eax, dword ptr [eax + 4]
// 004cc2fc  85c0                 test eax, eax
// 004cc2fe  7405                 je 0x4cc305
// 004cc300  8d4860               lea ecx, [eax + 0x60]
// 004cc303  eb02                 jmp 0x4cc307
// 004cc305  33c9                 xor ecx, ecx
// 004cc307  85ff                 test edi, edi
// 004cc309  7405                 je 0x4cc310
// 004cc30b  8d4760               lea eax, [edi + 0x60]
// 004cc30e  eb02                 jmp 0x4cc312
// 004cc310  33c0                 xor eax, eax
// 004cc312  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 004cc315  51                   push ecx
// 004cc316  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 004cc319  52                   push edx
// 004cc31a  51                   push ecx
// 004cc31b  50                   push eax
// 004cc31c  e85fa6ffff           call 0x4c6980
// 004cc321  83c410               add esp, 0x10
// 004cc324  57                   push edi
// 004cc325  8bce                 mov ecx, esi
// 004cc327  c745fc04000000       mov dword ptr [ebp - 4], 4
// 004cc32e  e8ddf8ffff           call 0x4cbc10
// 004cc333  84c0                 test al, al
// 004cc335  754f                 jne 0x4cc386
// 004cc337  85f6                 test esi, esi
// 004cc339  7405                 je 0x4cc340
// 004cc33b  8d46f4               lea eax, [esi - 0xc]
// 004cc33e  eb02                 jmp 0x4cc342
// 004cc340  33c0                 xor eax, eax
// 004cc342  8b5804               mov ebx, dword ptr [eax + 4]
// 004cc345  85f6                 test esi, esi
// 004cc347  7405                 je 0x4cc34e
// 004cc349  8d46f4               lea eax, [esi - 0xc]
// 004cc34c  eb02                 jmp 0x4cc350
// 004cc34e  33c0                 xor eax, eax
// 004cc350  8b5004               mov edx, dword ptr [eax + 4]
// 004cc353  85f6                 test esi, esi
// 004cc355  7405                 je 0x4cc35c
// 004cc357  8d46f4               lea eax, [esi - 0xc]
// 004cc35a  eb02                 jmp 0x4cc35e
// 004cc35c  33c0                 xor eax, eax
// 004cc35e  8b4004               mov eax, dword ptr [eax + 4]
// 004cc361  83c060               add eax, 0x60
// 004cc364  85ff                 test edi, edi
// 004cc366  7405                 je 0x4cc36d
// 004cc368  8d4f60               lea ecx, [edi + 0x60]
// 004cc36b  eb02                 jmp 0x4cc36f
// 004cc36d  33c9                 xor ecx, ecx
// 004cc36f  83c368               add ebx, 0x68
// 004cc372  53                   push ebx
// 004cc373  83c264               add edx, 0x64
// 004cc376  52                   push edx
// 004cc377  50                   push eax
// 004cc378  51                   push ecx
// 004cc379  e862a6ffff           call 0x4c69e0
// 004cc37e  83c410               add esp, 0x10
// 004cc381  e93effffff           jmp 0x4cc2c4
// 004cc386  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004cc389  5f                   pop edi
// 004cc38a  5e                   pop esi
// 004cc38b  b001                 mov al, 1
// 004cc38d  64890d00000000       mov dword ptr fs:[0], ecx
// 004cc394  5b                   pop ebx
// 004cc395  8be5                 mov esp, ebp
// 004cc397  5d                   pop ebp
// 004cc398  c20400               ret 4
// 004cc39b  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004cc39e  85c0                 test eax, eax
// 004cc3a0  7405                 je 0x4cc3a7
// 004cc3a2  8d48f4               lea ecx, [eax - 0xc]
// 004cc3a5  eb02                 jmp 0x4cc3a9
// 004cc3a7  33c9                 xor ecx, ecx
// 004cc3a9  8b7104               mov esi, dword ptr [ecx + 4]
// 004cc3ac  85c0                 test eax, eax
// 004cc3ae  7405                 je 0x4cc3b5
// 004cc3b0  8d48f4               lea ecx, [eax - 0xc]
// 004cc3b3  eb02                 jmp 0x4cc3b7
// 004cc3b5  33c9                 xor ecx, ecx
// 004cc3b7  8b5104               mov edx, dword ptr [ecx + 4]
// 004cc3ba  85c0                 test eax, eax
// 004cc3bc  7405                 je 0x4cc3c3
// 004cc3be  83c0f4               add eax, -0xc
// 004cc3c1  eb02                 jmp 0x4cc3c5
// 004cc3c3  33c0                 xor eax, eax
// 004cc3c5  8b4004               mov eax, dword ptr [eax + 4]
// 004cc3c8  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004cc3cb  83c060               add eax, 0x60
// 004cc3ce  85c9                 test ecx, ecx
// 004cc3d0  7405                 je 0x4cc3d7
// 004cc3d2  83c160               add ecx, 0x60
// 004cc3d5  eb02                 jmp 0x4cc3d9
// 004cc3d7  33c9                 xor ecx, ecx
// 004cc3d9  83c668               add esi, 0x68
// 004cc3dc  56                   push esi
// 004cc3dd  83c264               add edx, 0x64
// 004cc3e0  52                   push edx
// 004cc3e1  50                   push eax
// 004cc3e2  51                   push ecx
// 004cc3e3  e8f8a5ffff           call 0x4c69e0
// 004cc3e8  83c410               add esp, 0x10
// 004cc3eb  6a00                 push 0
// 004cc3ed  6a00                 push 0
// 004cc3ef  e898511d00           call 0x6a158c

// from server: 89% by king_originala
struct Tag {
    bool value;
};

struct Link {
    unsigned int tagged;
    Link *left;
    Link *right;
};

struct Node {
    char padding0[8];
    double key;
    char padding1[80];
    Link link;
};

extern "C" void __cdecl insert(
    Link *node, Link *root, Link **left, Link **right);

struct Factory {
    bool check(Node *node, Node *position, Tag tag);
    bool find(const double *key, Link **position, Tag tag);
    void remove(Node *node);
    bool attach(Node *node);
};

bool Factory::attach(Node *node)
{
    Tag tag;
    tag.value = false;

    if (!check(node, node, tag)) {
        Node *rightOwner = *reinterpret_cast<Node **>(
            (this ? reinterpret_cast<char *>(this) - 12 : 0) + 4);
        Node *leftOwner = *reinterpret_cast<Node **>(
            (this ? reinterpret_cast<char *>(this) - 12 : 0) + 4);
        Node *rootOwner = *reinterpret_cast<Node **>(
            (this ? reinterpret_cast<char *>(this) - 12 : 0) + 4);

        insert(node ? &node->link : 0,
               &rootOwner->link,
               &leftOwner->link.left,
               &rightOwner->link.right);

        Link *position;
        tag.value = false;

        try {
            try {
                try {
                    if (!find(&node->key, &position, tag)) {
                        remove(node);
                        return false;
                    }
                }
                catch (...) {
                    remove(node);
                    throw;
                }
            }
            catch (...) {
                throw;
            }
        }
        catch (...) {
            throw;
        }
    }

    return true;
}
