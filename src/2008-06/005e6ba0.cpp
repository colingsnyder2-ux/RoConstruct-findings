// from server: 100% by king_originala
// roc 2008-06 005e6ba0  unit: RBX::Clump  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6ba0
//
// 005e6ba0  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005e6ba3  83ec08               sub esp, 8
// 005e6ba6  50                   push eax
// 005e6ba7  8d4c2404             lea ecx, [esp + 4]
// 005e6bab  51                   push ecx
// 005e6bac  e87f0b0600           call 0x647730
// 005e6bb1  83c408               add esp, 8
// 005e6bb4  f605b4ab970001       test byte ptr [0x97abb4], 1
// 005e6bbb  7513                 jne 0x5e6bd0
// 005e6bbd  830db4ab970001       or dword ptr [0x97abb4], 1
// 005e6bc4  33c0                 xor eax, eax
// 005e6bc6  a3acab9700           mov dword ptr [0x97abac], eax
// 005e6bcb  a3b0ab9700           mov dword ptr [0x97abb0], eax
// 005e6bd0  53                   push ebx
// 005e6bd1  8b1dacab9700         mov ebx, dword ptr [0x97abac]
// 005e6bd7  55                   push ebp
// 005e6bd8  8b2db0ab9700         mov ebp, dword ptr [0x97abb0]
// 005e6bde  56                   push esi
// 005e6bdf  8b742418             mov esi, dword ptr [esp + 0x18]
// 005e6be3  57                   push edi
// 005e6be4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005e6be8  3bfd                 cmp edi, ebp
// 005e6bea  7506                 jne 0x5e6bf2
// 005e6bec  395c2410             cmp dword ptr [esp + 0x10], ebx
// 005e6bf0  746c                 je 0x5e6c5e
// 005e6bf2  8b4604               mov eax, dword ptr [esi + 4]
// 005e6bf5  3b4608               cmp eax, dword ptr [esi + 8]
// 005e6bf8  7d19                 jge 0x5e6c13
// 005e6bfa  8b16                 mov edx, dword ptr [esi]
// 005e6bfc  8d0482               lea eax, [edx + eax*4]
// 005e6bff  85c0                 test eax, eax
// 005e6c01  7402                 je 0x5e6c05
// 005e6c03  8938                 mov dword ptr [eax], edi
// 005e6c05  ff4604               inc dword ptr [esi + 4]
// 005e6c08  8d4c2410             lea ecx, [esp + 0x10]
// 005e6c0c  e8ef0a0600           call 0x647700
// 005e6c11  ebd1                 jmp 0x5e6be4
// 005e6c13  8b0e                 mov ecx, dword ptr [esi]
// 005e6c15  8d54241c             lea edx, [esp + 0x1c]
// 005e6c19  3bd1                 cmp edx, ecx
// 005e6c1b  7222                 jb 0x5e6c3f
// 005e6c1d  8d0c81               lea ecx, [ecx + eax*4]
// 005e6c20  3bd1                 cmp edx, ecx
// 005e6c22  731b                 jae 0x5e6c3f
// 005e6c24  8d44241c             lea eax, [esp + 0x1c]
// 005e6c28  50                   push eax
// 005e6c29  8bce                 mov ecx, esi
// 005e6c2b  897c2420             mov dword ptr [esp + 0x20], edi
// 005e6c2f  e80cfaffff           call 0x5e6640
// 005e6c34  8d4c2410             lea ecx, [esp + 0x10]
// 005e6c38  e8c30a0600           call 0x647700
// 005e6c3d  eba5                 jmp 0x5e6be4
// 005e6c3f  6a00                 push 0
// 005e6c41  40                   inc eax
// 005e6c42  50                   push eax
// 005e6c43  8bce                 mov ecx, esi
// 005e6c45  e8f6f8ffff           call 0x5e6540
// 005e6c4a  8b4e04               mov ecx, dword ptr [esi + 4]
// 005e6c4d  8b16                 mov edx, dword ptr [esi]
// 005e6c4f  897c8afc             mov dword ptr [edx + ecx*4 - 4], edi
// 005e6c53  8d4c2410             lea ecx, [esp + 0x10]
// 005e6c57  e8a40a0600           call 0x647700
// 005e6c5c  eb86                 jmp 0x5e6be4
// 005e6c5e  5f                   pop edi
// 005e6c5f  5e                   pop esi
// 005e6c60  5d                   pop ebp
// 005e6c61  5b                   pop ebx
// 005e6c62  83c408               add esp, 8
// 005e6c65  c20400               ret 4

struct Iterator {
    void* owner;
    void* value;

    __forceinline Iterator() : owner(0), value(0) {}
    void advance();
};

extern Iterator __cdecl beginIterator(void*);

struct Array {
    void** data;
    int size;
    int capacity;

    void resize(int, int);
    void append(void* const*);
};

struct Clump {
    char padding[28];
    void* collection;

    void collect(Array*);
};

void Clump::collect(Array* output)
{
    Iterator current = beginIterator(collection);
    static Iterator end;
    Iterator finish = end;

    while (current.value != finish.value || current.owner != finish.owner) {
        void* value = current.value;

        if (output->size < output->capacity) {
            void** slot = output->data + output->size;
            if (slot)
                *slot = value;
            ++output->size;
        } else {
            bool overlaps;
            {
                void* probe;
                overlaps =
                    (unsigned long)&probe >= (unsigned long)output->data &&
                    (unsigned long)&probe <
                        (unsigned long)(output->data + output->size);
            }
            if (overlaps) {
                void* temporary = value;
                output->append(&temporary);
            } else {
                output->resize(output->size + 1, 0);
                output->data[output->size - 1] = value;
            }
        }

        current.advance();
    }
}
