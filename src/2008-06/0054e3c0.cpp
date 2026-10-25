// from server: 100% by king_originala
// roc 2008-06 0054e3c0  unit: RBX::RenderBase::Mesh  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054e3c0
//
// 0054e3c0  55                   push ebp
// 0054e3c1  8bec                 mov ebp, esp
// 0054e3c3  83ec4c               sub esp, 0x4c
// 0054e3c6  894db8               mov dword ptr [ebp - 0x48], ecx
// 0054e3c9  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 0054e3cc  e81f40ffff           call 0x5423f0
// 0054e3d1  8b00                 mov eax, dword ptr [eax]
// 0054e3d3  8945f4               mov dword ptr [ebp - 0xc], eax
// 0054e3d6  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 0054e3d9  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0054e3dc  8955f8               mov dword ptr [ebp - 8], edx
// 0054e3df  c645ff01             mov byte ptr [ebp - 1], 1
// 0054e3e3  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 0054e3e6  50                   push eax
// 0054e3e7  e814e2ffff           call 0x54c600
// 0054e3ec  83c404               add esp, 4
// 0054e3ef  0fbe08               movsx ecx, byte ptr [eax]
// 0054e3f2  85c9                 test ecx, ecx
// 0054e3f4  7562                 jne 0x54e458
// 0054e3f6  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 0054e3f9  8955f8               mov dword ptr [ebp - 8], edx
// 0054e3fc  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 0054e3ff  50                   push eax
// 0054e400  e80be2ffff           call 0x54c610
// 0054e405  83c404               add esp, 4
// 0054e408  50                   push eax
// 0054e409  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0054e40c  51                   push ecx
// 0054e40d  e81ee2ffff           call 0x54c630
// 0054e412  83c404               add esp, 4
// 0054e415  50                   push eax
// 0054e416  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 0054e419  83c108               add ecx, 8
// 0054e41c  e8bfecffff           call 0x54d0e0
// 0054e421  8845ff               mov byte ptr [ebp - 1], al
// 0054e424  0fb655ff             movzx edx, byte ptr [ebp - 1]
// 0054e428  85d2                 test edx, edx
// 0054e42a  7413                 je 0x54e43f
// 0054e42c  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 0054e42f  50                   push eax
// 0054e430  e8fbe1ffff           call 0x54c630
// 0054e435  83c404               add esp, 4
// 0054e438  8b08                 mov ecx, dword ptr [eax]
// 0054e43a  894db4               mov dword ptr [ebp - 0x4c], ecx
// 0054e43d  eb11                 jmp 0x54e450
// 0054e43f  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 0054e442  52                   push edx
// 0054e443  e85839ffff           call 0x541da0
// 0054e448  83c404               add esp, 4
// 0054e44b  8b00                 mov eax, dword ptr [eax]
// 0054e44d  8945b4               mov dword ptr [ebp - 0x4c], eax
// 0054e450  8b4db4               mov ecx, dword ptr [ebp - 0x4c]
// 0054e453  894df4               mov dword ptr [ebp - 0xc], ecx
// 0054e456  eb8b                 jmp 0x54e3e3
// 0054e458  33d2                 xor edx, edx
// 0054e45a  7437                 je 0x54e493
// 0054e45c  c645eb01             mov byte ptr [ebp - 0x15], 1
// 0054e460  8d45eb               lea eax, [ebp - 0x15]
// 0054e463  50                   push eax
// 0054e464  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0054e467  51                   push ecx
// 0054e468  8b55f8               mov edx, dword ptr [ebp - 8]
// 0054e46b  52                   push edx
// 0054e46c  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 0054e470  50                   push eax
// 0054e471  8d4de0               lea ecx, [ebp - 0x20]
// 0054e474  51                   push ecx
// 0054e475  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 0054e478  e833020000           call 0x54e6b0
// 0054e47d  50                   push eax
// 0054e47e  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054e481  e89a260000           call 0x550b20
// 0054e486  8b4508               mov eax, dword ptr [ebp + 8]
// 0054e489  e9ed000000           jmp 0x54e57b
// 0054e48e  e9e8000000           jmp 0x54e57b
// 0054e493  8b55b8               mov edx, dword ptr [ebp - 0x48]
// 0054e496  52                   push edx
// 0054e497  8b45f8               mov eax, dword ptr [ebp - 8]
// 0054e49a  50                   push eax
// 0054e49b  8d4dec               lea ecx, [ebp - 0x14]
// 0054e49e  e87dfeffff           call 0x54e320
// 0054e4a3  0fb64dff             movzx ecx, byte ptr [ebp - 1]
// 0054e4a7  85c9                 test ecx, ecx
// 0054e4a9  7502                 jne 0x54e4ad
// 0054e4ab  eb55                 jmp 0x54e502
// 0054e4ad  8d55d8               lea edx, [ebp - 0x28]
// 0054e4b0  52                   push edx
// 0054e4b1  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 0054e4b4  e8870c0000           call 0x54f140
// 0054e4b9  50                   push eax
// 0054e4ba  8d4dec               lea ecx, [ebp - 0x14]
// 0054e4bd  e80e2affff           call 0x540ed0
// 0054e4c2  0fb6c0               movzx eax, al
// 0054e4c5  85c0                 test eax, eax
// 0054e4c7  7431                 je 0x54e4fa
// 0054e4c9  c645d701             mov byte ptr [ebp - 0x29], 1
// 0054e4cd  8d4dd7               lea ecx, [ebp - 0x29]
// 0054e4d0  51                   push ecx
// 0054e4d1  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0054e4d4  52                   push edx
// 0054e4d5  8b45f8               mov eax, dword ptr [ebp - 8]
// 0054e4d8  50                   push eax
// 0054e4d9  6a01                 push 1
// 0054e4db  8d4dcc               lea ecx, [ebp - 0x34]
// 0054e4de  51                   push ecx
// 0054e4df  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 0054e4e2  e8c9010000           call 0x54e6b0
// 0054e4e7  50                   push eax
// 0054e4e8  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054e4eb  e830260000           call 0x550b20
// 0054e4f0  8b4508               mov eax, dword ptr [ebp + 8]
// 0054e4f3  e983000000           jmp 0x54e57b
// 0054e4f8  eb08                 jmp 0x54e502
// 0054e4fa  8d4dec               lea ecx, [ebp - 0x14]
// 0054e4fd  e80e1a0000           call 0x54ff10
// 0054e502  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0054e505  52                   push edx
// 0054e506  e825e1ffff           call 0x54c630
// 0054e50b  83c404               add esp, 4
// 0054e50e  50                   push eax
// 0054e50f  8d4dec               lea ecx, [ebp - 0x14]
// 0054e512  e859daffff           call 0x54bf70
// 0054e517  50                   push eax
// 0054e518  e8f3e0ffff           call 0x54c610
// 0054e51d  83c404               add esp, 4
// 0054e520  50                   push eax
// 0054e521  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 0054e524  83c108               add ecx, 8
// 0054e527  e8b4ebffff           call 0x54d0e0
// 0054e52c  0fb6c0               movzx eax, al
// 0054e52f  85c0                 test eax, eax
// 0054e531  7431                 je 0x54e564
// 0054e533  c645cb01             mov byte ptr [ebp - 0x35], 1
// 0054e537  8d4dcb               lea ecx, [ebp - 0x35]
// 0054e53a  51                   push ecx
// 0054e53b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0054e53e  52                   push edx
// 0054e53f  8b45f8               mov eax, dword ptr [ebp - 8]
// 0054e542  50                   push eax
// 0054e543  0fb64dff             movzx ecx, byte ptr [ebp - 1]
// 0054e547  51                   push ecx
// 0054e548  8d55c0               lea edx, [ebp - 0x40]
// 0054e54b  52                   push edx
// 0054e54c  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 0054e54f  e85c010000           call 0x54e6b0
// 0054e554  50                   push eax
// 0054e555  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054e558  e8c3250000           call 0x550b20
// 0054e55d  8b4508               mov eax, dword ptr [ebp + 8]
// 0054e560  eb19                 jmp 0x54e57b
// 0054e562  eb17                 jmp 0x54e57b
// 0054e564  c645bf00             mov byte ptr [ebp - 0x41], 0
// 0054e568  8d45bf               lea eax, [ebp - 0x41]
// 0054e56b  50                   push eax
// 0054e56c  8d4dec               lea ecx, [ebp - 0x14]
// 0054e56f  51                   push ecx
// 0054e570  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0054e573  e8a8250000           call 0x550b20
// 0054e578  8b4508               mov eax, dword ptr [ebp + 8]
// 0054e57b  8be5                 mov esp, ebp
// 0054e57d  5d                   pop ebp
// 0054e57e  c20800               ret 8

#pragma optimize("", off)

struct Node;
struct Mesh;

struct Iterator {
    Node* node;
    Mesh* owner;

    Iterator(Node*, Mesh*);
    bool operator==(const Iterator&) const;
    Iterator& operator--();
    Node* get() const;
};

struct Pair {
    Iterator position;
    bool inserted;

    Pair(const Iterator&, const bool&);
};

struct Compare {
    bool operator()(const int&, const int&) const;
};

struct Mesh {
    char padding[8];
    Compare compare;
    char padding2[15];
    Node* sentinel;

    Node** root();
    Iterator end();
    Iterator insert(bool, Node*, Node*);
    Pair find(Node*);
};

extern signed char* __cdecl isNil(Node*);
extern int* __cdecl nodeValue(Node*);
extern int* __cdecl keyValue(Node*);
extern char* __cdecl leftChild(Node*);
extern Node** __cdecl rightChild(Node*);

Pair Mesh::find(Node* key)
{
    struct Locals {
        Node* current;
        Node* parent;
        char padding[3];
        bool before;
    } local;

    local.current = *root();
    local.parent = sentinel;
    local.before = true;

    while (*isNil(local.current) == 0) {
        local.parent = local.current;
        local.before = compare(*keyValue(key), *nodeValue(local.current));
        local.current = local.before
            ? *rightChild(local.current)
            : *reinterpret_cast<Node**>(leftChild(local.current));
    }

    if (false) {
        return Pair(insert(local.before, local.parent, key), true);
    } else {
        Iterator position(local.parent, this);
        if (!local.before) {
        } else {
            if (position == end()) {
                return Pair(insert(true, local.parent, key), true);
            } else {
                --position;
            }
        }

        if (compare(*nodeValue(position.get()), *keyValue(key))) {
            return Pair(insert(local.before, local.parent, key), true);
        } else {
            return Pair(position, false);
        }
    }
}
