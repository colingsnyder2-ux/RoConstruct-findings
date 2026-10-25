// from server: 100% by colin
// roc 2008-06 00561070  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00561070
//
// 00561070  56                   push esi
// 00561071  57                   push edi
// 00561072  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00561076  8bf1                 mov esi, ecx
// 00561078  3bf7                 cmp esi, edi
// 0056107a  0f84f6000000         je 0x561176
// 00561080  53                   push ebx
// 00561081  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 00561084  55                   push ebp
// 00561085  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00561088  8bd3                 mov edx, ebx
// 0056108a  2bd5                 sub edx, ebp
// 0056108c  c1fa05               sar edx, 5
// 0056108f  85d2                 test edx, edx
// 00561091  750e                 jne 0x5610a1
// 00561093  e838fbffff           call 0x560bd0
// 00561098  5d                   pop ebp
// 00561099  5b                   pop ebx
// 0056109a  5f                   pop edi
// 0056109b  8bc6                 mov eax, esi
// 0056109d  5e                   pop esi
// 0056109e  c20400               ret 4
// 005610a1  8b4610               mov eax, dword ptr [esi + 0x10]
// 005610a4  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005610a7  2bc1                 sub eax, ecx
// 005610a9  c1f805               sar eax, 5
// 005610ac  3bd0                 cmp edx, eax
// 005610ae  7739                 ja 0x5610e9
// 005610b0  51                   push ecx
// 005610b1  53                   push ebx
// 005610b2  55                   push ebp
// 005610b3  e8f8daffff           call 0x55ebb0
// 005610b8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005610bc  51                   push ecx
// 005610bd  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005610c0  8d5608               lea edx, [esi + 8]
// 005610c3  52                   push edx
// 005610c4  51                   push ecx
// 005610c5  50                   push eax
// 005610c6  e8e5e4ffff           call 0x55f5b0
// 005610cb  8b5710               mov edx, dword ptr [edi + 0x10]
// 005610ce  2b570c               sub edx, dword ptr [edi + 0xc]
// 005610d1  83c41c               add esp, 0x1c
// 005610d4  c1fa05               sar edx, 5
// 005610d7  5d                   pop ebp
// 005610d8  c1e205               shl edx, 5
// 005610db  03560c               add edx, dword ptr [esi + 0xc]
// 005610de  5b                   pop ebx
// 005610df  5f                   pop edi
// 005610e0  895610               mov dword ptr [esi + 0x10], edx
// 005610e3  8bc6                 mov eax, esi
// 005610e5  5e                   pop esi
// 005610e6  c20400               ret 4
// 005610e9  85c9                 test ecx, ecx
// 005610eb  7504                 jne 0x5610f1
// 005610ed  33db                 xor ebx, ebx
// 005610ef  eb08                 jmp 0x5610f9
// 005610f1  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 005610f4  2bd9                 sub ebx, ecx
// 005610f6  c1fb05               sar ebx, 5
// 005610f9  3bd3                 cmp edx, ebx
// 005610fb  7730                 ja 0x56112d
// 005610fd  8bd5                 mov edx, ebp
// 005610ff  c1e005               shl eax, 5
// 00561102  03c2                 add eax, edx
// 00561104  51                   push ecx
// 00561105  8bd8                 mov ebx, eax
// 00561107  53                   push ebx
// 00561108  52                   push edx
// 00561109  e8a2daffff           call 0x55ebb0
// 0056110e  8b4610               mov eax, dword ptr [esi + 0x10]
// 00561111  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00561114  83c40c               add esp, 0xc
// 00561117  50                   push eax
// 00561118  51                   push ecx
// 00561119  53                   push ebx
// 0056111a  8bce                 mov ecx, esi
// 0056111c  e81ff9ffff           call 0x560a40
// 00561121  5d                   pop ebp
// 00561122  5b                   pop ebx
// 00561123  894610               mov dword ptr [esi + 0x10], eax
// 00561126  5f                   pop edi
// 00561127  8bc6                 mov eax, esi
// 00561129  5e                   pop esi
// 0056112a  c20400               ret 4
// 0056112d  85c9                 test ecx, ecx
// 0056112f  7418                 je 0x561149
// 00561131  8b4610               mov eax, dword ptr [esi + 0x10]
// 00561134  50                   push eax
// 00561135  51                   push ecx
// 00561136  8bce                 mov ecx, esi
// 00561138  e8e3f6ffff           call 0x560820
// 0056113d  8b560c               mov edx, dword ptr [esi + 0xc]
// 00561140  52                   push edx
// 00561141  e834f51300           call 0x6a067a
// 00561146  83c404               add esp, 4
// 00561149  8b4710               mov eax, dword ptr [edi + 0x10]
// 0056114c  2b470c               sub eax, dword ptr [edi + 0xc]
// 0056114f  8bce                 mov ecx, esi
// 00561151  c1f805               sar eax, 5
// 00561154  50                   push eax
// 00561155  e846c0ffff           call 0x55d1a0
// 0056115a  84c0                 test al, al
// 0056115c  7416                 je 0x561174
// 0056115e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00561161  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00561164  8b570c               mov edx, dword ptr [edi + 0xc]
// 00561167  50                   push eax
// 00561168  51                   push ecx
// 00561169  52                   push edx
// 0056116a  8bce                 mov ecx, esi
// 0056116c  e8cff8ffff           call 0x560a40
// 00561171  894610               mov dword ptr [esi + 0x10], eax
// 00561174  5d                   pop ebp
// 00561175  5b                   pop ebx
// 00561176  5f                   pop edi
// 00561177  8bc6                 mov eax, esi
// 00561179  5e                   pop esi
// 0056117a  c20400               ret 4

struct Element {
    unsigned char data[32];
};

struct DestroyTag {};

struct S {
    unsigned char prefix[8];
    unsigned char allocator;
    unsigned char padding[3];
    Element* first;
    Element* last;
    Element* limit;

    S& operator=(const S& other);
    void clear();
    void destroy(Element* begin, Element* end);
    Element* construct(const Element* begin, const Element* end,
                       Element* destination);
    bool allocate(unsigned int count);
};

extern Element* __cdecl copy_elements(const Element* begin,
                                     const Element* end,
                                     Element* destination);
extern void __cdecl destroy_elements(Element* begin, Element* end,
                                     unsigned char* allocator,
                                     DestroyTag tag);
extern void __cdecl release_storage(void* storage);

S& S::operator=(const S& other)
{
    if (this != &other) {
        if (static_cast<unsigned int>(other.last - other.first) == 0) {
            clear();
        } else if (static_cast<unsigned int>(other.last - other.first)
                   <= static_cast<unsigned int>(last - first)) {
            Element* newEnd = copy_elements(other.first, other.last, first);
            DestroyTag tag;
            destroy_elements(newEnd, last, &allocator, tag);
            last = first + (other.last - other.first);
        } else {
            unsigned int capacity;
            if (first == 0)
                capacity = 0;
            else
                capacity = limit - first;

            if (static_cast<unsigned int>(other.last - other.first)
                <= capacity) {
                const Element* middle = other.first + (last - first);
                copy_elements(other.first, middle, first);
                last = construct(middle, other.last, last);
            } else {
                if (first != 0) {
                    destroy(first, last);
                    release_storage(first);
                }
                if (allocate(other.last - other.first)) {
                    Element* dest = first;
                    last = construct(other.first, other.last, dest);
                }
            }
        }
    }
    return *this;
}
