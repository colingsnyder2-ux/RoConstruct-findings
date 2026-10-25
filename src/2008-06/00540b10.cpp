// from server: 100% by king_originala
// roc 2008-06 00540b10  unit: RBX::RenderBase::AggregatingSceneManager::Bucket  size: 449 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00540b10
//
// 00540b10  55                   push ebp
// 00540b11  8bec                 mov ebp, esp
// 00540b13  83ec4c               sub esp, 0x4c
// 00540b16  894db8               mov dword ptr [ebp - 0x48], ecx
// 00540b19  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 00540b1c  e8cf180000           call 0x5423f0
// 00540b21  8b00                 mov eax, dword ptr [eax]
// 00540b23  8945f4               mov dword ptr [ebp - 0xc], eax
// 00540b26  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 00540b29  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00540b2c  8955f8               mov dword ptr [ebp - 8], edx
// 00540b2f  c645ff01             mov byte ptr [ebp - 1], 1
// 00540b33  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 00540b36  50                   push eax
// 00540b37  e854120000           call 0x541d90
// 00540b3c  83c404               add esp, 4
// 00540b3f  0fbe08               movsx ecx, byte ptr [eax]
// 00540b42  85c9                 test ecx, ecx
// 00540b44  7562                 jne 0x540ba8
// 00540b46  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 00540b49  8955f8               mov dword ptr [ebp - 8], edx
// 00540b4c  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 00540b4f  50                   push eax
// 00540b50  e8bbba0000           call 0x54c610
// 00540b55  83c404               add esp, 4
// 00540b58  50                   push eax
// 00540b59  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00540b5c  51                   push ecx
// 00540b5d  e8ceba0000           call 0x54c630
// 00540b62  83c404               add esp, 4
// 00540b65  50                   push eax
// 00540b66  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 00540b69  83c108               add ecx, 8
// 00540b6c  e86f190000           call 0x5424e0
// 00540b71  8845ff               mov byte ptr [ebp - 1], al
// 00540b74  0fb655ff             movzx edx, byte ptr [ebp - 1]
// 00540b78  85d2                 test edx, edx
// 00540b7a  7413                 je 0x540b8f
// 00540b7c  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 00540b7f  50                   push eax
// 00540b80  e8abba0000           call 0x54c630
// 00540b85  83c404               add esp, 4
// 00540b88  8b08                 mov ecx, dword ptr [eax]
// 00540b8a  894db4               mov dword ptr [ebp - 0x4c], ecx
// 00540b8d  eb11                 jmp 0x540ba0
// 00540b8f  8b55f4               mov edx, dword ptr [ebp - 0xc]
// 00540b92  52                   push edx
// 00540b93  e808120000           call 0x541da0
// 00540b98  83c404               add esp, 4
// 00540b9b  8b00                 mov eax, dword ptr [eax]
// 00540b9d  8945b4               mov dword ptr [ebp - 0x4c], eax
// 00540ba0  8b4db4               mov ecx, dword ptr [ebp - 0x4c]
// 00540ba3  894df4               mov dword ptr [ebp - 0xc], ecx
// 00540ba6  eb8b                 jmp 0x540b33
// 00540ba8  33d2                 xor edx, edx
// 00540baa  7437                 je 0x540be3
// 00540bac  c645eb01             mov byte ptr [ebp - 0x15], 1
// 00540bb0  8d45eb               lea eax, [ebp - 0x15]
// 00540bb3  50                   push eax
// 00540bb4  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00540bb7  51                   push ecx
// 00540bb8  8b55f8               mov edx, dword ptr [ebp - 8]
// 00540bbb  52                   push edx
// 00540bbc  0fb645ff             movzx eax, byte ptr [ebp - 1]
// 00540bc0  50                   push eax
// 00540bc1  8d4de0               lea ecx, [ebp - 0x20]
// 00540bc4  51                   push ecx
// 00540bc5  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 00540bc8  e8a3130000           call 0x541f70
// 00540bcd  50                   push eax
// 00540bce  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00540bd1  e84aff0000           call 0x550b20
// 00540bd6  8b4508               mov eax, dword ptr [ebp + 8]
// 00540bd9  e9ed000000           jmp 0x540ccb
// 00540bde  e9e8000000           jmp 0x540ccb
// 00540be3  8b55b8               mov edx, dword ptr [ebp - 0x48]
// 00540be6  52                   push edx
// 00540be7  8b45f8               mov eax, dword ptr [ebp - 8]
// 00540bea  50                   push eax
// 00540beb  8d4dec               lea ecx, [ebp - 0x14]
// 00540bee  e82dd70000           call 0x54e320
// 00540bf3  0fb64dff             movzx ecx, byte ptr [ebp - 1]
// 00540bf7  85c9                 test ecx, ecx
// 00540bf9  7502                 jne 0x540bfd
// 00540bfb  eb55                 jmp 0x540c52
// 00540bfd  8d55d8               lea edx, [ebp - 0x28]
// 00540c00  52                   push edx
// 00540c01  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 00540c04  e837e50000           call 0x54f140
// 00540c09  50                   push eax
// 00540c0a  8d4dec               lea ecx, [ebp - 0x14]
// 00540c0d  e8be020000           call 0x540ed0
// 00540c12  0fb6c0               movzx eax, al
// 00540c15  85c0                 test eax, eax
// 00540c17  7431                 je 0x540c4a
// 00540c19  c645d701             mov byte ptr [ebp - 0x29], 1
// 00540c1d  8d4dd7               lea ecx, [ebp - 0x29]
// 00540c20  51                   push ecx
// 00540c21  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00540c24  52                   push edx
// 00540c25  8b45f8               mov eax, dword ptr [ebp - 8]
// 00540c28  50                   push eax
// 00540c29  6a01                 push 1
// 00540c2b  8d4dcc               lea ecx, [ebp - 0x34]
// 00540c2e  51                   push ecx
// 00540c2f  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 00540c32  e839130000           call 0x541f70
// 00540c37  50                   push eax
// 00540c38  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00540c3b  e8e0fe0000           call 0x550b20
// 00540c40  8b4508               mov eax, dword ptr [ebp + 8]
// 00540c43  e983000000           jmp 0x540ccb
// 00540c48  eb08                 jmp 0x540c52
// 00540c4a  8d4dec               lea ecx, [ebp - 0x14]
// 00540c4d  e8be1c0000           call 0x542910
// 00540c52  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00540c55  52                   push edx
// 00540c56  e8d5b90000           call 0x54c630
// 00540c5b  83c404               add esp, 4
// 00540c5e  50                   push eax
// 00540c5f  8d4dec               lea ecx, [ebp - 0x14]
// 00540c62  e809b30000           call 0x54bf70
// 00540c67  50                   push eax
// 00540c68  e8a3b90000           call 0x54c610
// 00540c6d  83c404               add esp, 4
// 00540c70  50                   push eax
// 00540c71  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 00540c74  83c108               add ecx, 8
// 00540c77  e864180000           call 0x5424e0
// 00540c7c  0fb6c0               movzx eax, al
// 00540c7f  85c0                 test eax, eax
// 00540c81  7431                 je 0x540cb4
// 00540c83  c645cb01             mov byte ptr [ebp - 0x35], 1
// 00540c87  8d4dcb               lea ecx, [ebp - 0x35]
// 00540c8a  51                   push ecx
// 00540c8b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00540c8e  52                   push edx
// 00540c8f  8b45f8               mov eax, dword ptr [ebp - 8]
// 00540c92  50                   push eax
// 00540c93  0fb64dff             movzx ecx, byte ptr [ebp - 1]
// 00540c97  51                   push ecx
// 00540c98  8d55c0               lea edx, [ebp - 0x40]
// 00540c9b  52                   push edx
// 00540c9c  8b4db8               mov ecx, dword ptr [ebp - 0x48]
// 00540c9f  e8cc120000           call 0x541f70
// 00540ca4  50                   push eax
// 00540ca5  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00540ca8  e873fe0000           call 0x550b20
// 00540cad  8b4508               mov eax, dword ptr [ebp + 8]
// 00540cb0  eb19                 jmp 0x540ccb
// 00540cb2  eb17                 jmp 0x540ccb
// 00540cb4  c645bf00             mov byte ptr [ebp - 0x41], 0
// 00540cb8  8d45bf               lea eax, [ebp - 0x41]
// 00540cbb  50                   push eax
// 00540cbc  8d4dec               lea ecx, [ebp - 0x14]
// 00540cbf  51                   push ecx
// 00540cc0  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00540cc3  e858fe0000           call 0x550b20
// 00540cc8  8b4508               mov eax, dword ptr [ebp + 8]
// 00540ccb  8be5                 mov esp, ebp
// 00540ccd  5d                   pop ebp
// 00540cce  c20800               ret 8

#pragma optimize("g", off)

struct Node;
struct Bucket;

char* __cdecl nodeFlag(Node*);
char* __cdecl rightLink(Node*);
void* __cdecl nodeValue(void*);
Node** __cdecl leftLink(void*);

struct Iterator {
    Node* node;
    Bucket* owner;

    Iterator(Node*, Bucket*);
    bool equal(const Iterator&) const;
    void decrement();
    void* value() const;
};

struct Result {
    Iterator position;
    bool inserted;

    Result(const Iterator&, const bool&);
};

struct Compare {
    bool less(const void*, const void*) const;
};

struct Bucket {
    char padding[8];
    Compare compare;
    char padding2[15];
    Node* head;

    Node** root();
    Iterator end();
    Iterator insertAt(bool, Node*, void*);
    Result insert(void*);
};

Result Bucket::insert(void* value)
{
    struct State {
        Node* current;
        Node* parent;
        char padding[3];
        bool left;
    } state;

    state.current = *root();
    state.parent = head;
    state.left = true;

    while (*nodeFlag(state.current) == 0) {
        state.parent = state.current;
        state.left = compare.less(leftLink(value), nodeValue(state.current));
        state.current = state.left
            ? *leftLink(state.current)
            : *reinterpret_cast<Node**>(rightLink(state.current));
    }

    if (false) {
        return Result(insertAt(state.left, state.parent, value), true);
    } else {
        Iterator position(state.parent, this);

        if (!state.left) {
        } else {
            if (position.equal(end())) {
                return Result(insertAt(true, state.parent, value), true);
            } else {
                position.decrement();
            }
        }

        if (compare.less(nodeValue(position.value()), leftLink(value))) {
            return Result(insertAt(state.left, state.parent, value), true);
        } else {
            return Result(position, false);
        }
    }
}
