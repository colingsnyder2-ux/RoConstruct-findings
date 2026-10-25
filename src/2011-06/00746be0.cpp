// from server: 44% by atomic.potato
// roc 2011-06 00746be0  unit: RBX::VInstance::?$NonFactoryProduct  size: 372 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00746be0
//
// 00746be0  56                   push esi
// 00746be1  57                   push edi
// 00746be2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00746be6  8bf1                 mov esi, ecx
// 00746be8  3bf7                 cmp esi, edi
// 00746bea  0f845d010000         je 0x746d4d
// 00746bf0  8b4704               mov eax, dword ptr [edi + 4]
// 00746bf3  8b4f08               mov ecx, dword ptr [edi + 8]
// 00746bf6  2bc8                 sub ecx, eax
// 00746bf8  b8398ee338           mov eax, 0x38e38e39
// 00746bfd  f7e9                 imul ecx
// 00746bff  55                   push ebp
// 00746c00  c1fa03               sar edx, 3
// 00746c03  8bea                 mov ebp, edx
// 00746c05  c1ed1f               shr ebp, 0x1f
// 00746c08  03ea                 add ebp, edx
// 00746c0a  7538                 jne 0x746c44
// 00746c0c  8b4608               mov eax, dword ptr [esi + 8]
// 00746c0f  8b4e04               mov ecx, dword ptr [esi + 4]
// 00746c12  3bc8                 cmp ecx, eax
// 00746c14  0f8432010000         je 0x746d4c
// 00746c1a  c644241000           mov byte ptr [esp + 0x10], 0
// 00746c1f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00746c23  52                   push edx
// 00746c24  8b542414             mov edx, dword ptr [esp + 0x14]
// 00746c28  52                   push edx
// 00746c29  8b542418             mov edx, dword ptr [esp + 0x18]
// 00746c2d  52                   push edx
// 00746c2e  51                   push ecx
// 00746c2f  50                   push eax
// 00746c30  50                   push eax
// 00746c31  e86af2ffff           call 0x745ea0
// 00746c36  83c418               add esp, 0x18
// 00746c39  5d                   pop ebp
// 00746c3a  894608               mov dword ptr [esi + 8], eax
// 00746c3d  5f                   pop edi
// 00746c3e  8bc6                 mov eax, esi
// 00746c40  5e                   pop esi
// 00746c41  c20400               ret 4
// 00746c44  8b4e08               mov ecx, dword ptr [esi + 8]
// 00746c47  53                   push ebx
// 00746c48  8b5e04               mov ebx, dword ptr [esi + 4]
// 00746c4b  2bcb                 sub ecx, ebx
// 00746c4d  b8398ee338           mov eax, 0x38e38e39
// 00746c52  f7e9                 imul ecx
// 00746c54  c1fa03               sar edx, 3
// 00746c57  8bca                 mov ecx, edx
// 00746c59  c1e91f               shr ecx, 0x1f
// 00746c5c  03ca                 add ecx, edx
// 00746c5e  3be9                 cmp ebp, ecx
// 00746c60  7751                 ja 0x746cb3
// 00746c62  c644241400           mov byte ptr [esp + 0x14], 0
// 00746c67  8b442414             mov eax, dword ptr [esp + 0x14]
// 00746c6b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00746c6f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00746c73  50                   push eax
// 00746c74  8b4708               mov eax, dword ptr [edi + 8]
// 00746c77  51                   push ecx
// 00746c78  52                   push edx
// 00746c79  53                   push ebx
// 00746c7a  50                   push eax
// 00746c7b  8b4704               mov eax, dword ptr [edi + 4]
// 00746c7e  50                   push eax
// 00746c7f  e81cf2ffff           call 0x745ea0
// 00746c84  8b4f08               mov ecx, dword ptr [edi + 8]
// 00746c87  2b4f04               sub ecx, dword ptr [edi + 4]
// 00746c8a  b8398ee338           mov eax, 0x38e38e39
// 00746c8f  f7e9                 imul ecx
// 00746c91  8b4e04               mov ecx, dword ptr [esi + 4]
// 00746c94  c1fa03               sar edx, 3
// 00746c97  83c418               add esp, 0x18
// 00746c9a  8bc2                 mov eax, edx
// 00746c9c  c1e81f               shr eax, 0x1f
// 00746c9f  03c2                 add eax, edx
// 00746ca1  5b                   pop ebx
// 00746ca2  8d04c0               lea eax, [eax + eax*8]
// 00746ca5  5d                   pop ebp
// 00746ca6  8d1481               lea edx, [ecx + eax*4]
// 00746ca9  5f                   pop edi
// 00746caa  895608               mov dword ptr [esi + 8], edx
// 00746cad  8bc6                 mov eax, esi
// 00746caf  5e                   pop esi
// 00746cb0  c20400               ret 4
// 00746cb3  85db                 test ebx, ebx
// 00746cb5  7504                 jne 0x746cbb
// 00746cb7  33c0                 xor eax, eax
// 00746cb9  eb16                 jmp 0x746cd1
// 00746cbb  8b560c               mov edx, dword ptr [esi + 0xc]
// 00746cbe  2bd3                 sub edx, ebx
// 00746cc0  b8398ee338           mov eax, 0x38e38e39
// 00746cc5  f7ea                 imul edx
// 00746cc7  c1fa03               sar edx, 3
// 00746cca  8bc2                 mov eax, edx
// 00746ccc  c1e81f               shr eax, 0x1f
// 00746ccf  03c2                 add eax, edx
// 00746cd1  3be8                 cmp ebp, eax
// 00746cd3  7730                 ja 0x746d05
// 00746cd5  8b4704               mov eax, dword ptr [edi + 4]
// 00746cd8  8d0cc9               lea ecx, [ecx + ecx*8]
// 00746cdb  8d2c88               lea ebp, [eax + ecx*4]
// 00746cde  53                   push ebx
// 00746cdf  55                   push ebp
// 00746ce0  50                   push eax
// 00746ce1  e82af5ffff           call 0x746210
// 00746ce6  8b5608               mov edx, dword ptr [esi + 8]
// 00746ce9  8b4708               mov eax, dword ptr [edi + 8]
// 00746cec  83c40c               add esp, 0xc
// 00746cef  52                   push edx
// 00746cf0  50                   push eax
// 00746cf1  55                   push ebp
// 00746cf2  8bce                 mov ecx, esi
// 00746cf4  e837faffff           call 0x746730
// 00746cf9  5b                   pop ebx
// 00746cfa  5d                   pop ebp
// 00746cfb  894608               mov dword ptr [esi + 8], eax
// 00746cfe  5f                   pop edi
// 00746cff  8bc6                 mov eax, esi
// 00746d01  5e                   pop esi
// 00746d02  c20400               ret 4
// 00746d05  85db                 test ebx, ebx
// 00746d07  7409                 je 0x746d12
// 00746d09  53                   push ebx
// 00746d0a  e849330c00           call 0x80a058
// 00746d0f  83c404               add esp, 4
// 00746d12  8b4f08               mov ecx, dword ptr [edi + 8]
// 00746d15  2b4f04               sub ecx, dword ptr [edi + 4]
// 00746d18  b8398ee338           mov eax, 0x38e38e39
// 00746d1d  f7e9                 imul ecx
// 00746d1f  c1fa03               sar edx, 3
// 00746d22  8bc2                 mov eax, edx
// 00746d24  c1e81f               shr eax, 0x1f
// 00746d27  03c2                 add eax, edx
// 00746d29  50                   push eax
// 00746d2a  8bce                 mov ecx, esi
// 00746d2c  e85ff4ffff           call 0x746190
// 00746d31  84c0                 test al, al
// 00746d33  7416                 je 0x746d4b
// 00746d35  8b4e04               mov ecx, dword ptr [esi + 4]
// 00746d38  8b5708               mov edx, dword ptr [edi + 8]
// 00746d3b  8b4704               mov eax, dword ptr [edi + 4]
// 00746d3e  51                   push ecx
// 00746d3f  52                   push edx
// 00746d40  50                   push eax
// 00746d41  8bce                 mov ecx, esi
// 00746d43  e8e8f9ffff           call 0x746730
// 00746d48  894608               mov dword ptr [esi + 8], eax
// 00746d4b  5b                   pop ebx
// 00746d4c  5d                   pop ebp
// 00746d4d  5f                   pop edi
// 00746d4e  8bc6                 mov eax, esi
// 00746d50  5e                   pop esi
// 00746d51  c20400               ret 4

struct Elem {
    char pad[36];
};

struct Vec {
    Elem* begin;
    Elem* end;
    Elem* cap;
};

struct S {
    Vec v;
    S* assign(S* other);
};

extern "C" void __cdecl free_(void*);
extern "C" Elem* __cdecl alloc_fill(Elem*, Elem*, Elem*, int, int, int);
extern "C" Elem* __cdecl copy_range(Elem*, Elem*, Elem*);
extern "C" bool __cdecl reserve_check(S*, int);
extern "C" Elem* __cdecl move_range(S*, Elem*, Elem*, Elem*);

S* S::assign(S* other) {
    if (this == other) return this;
    int n = (int)((other->v.end - other->v.begin) / 36);
    if (n == 0) {
        if (this->v.begin != this->v.end) {
            this->v.end = alloc_fill(this->v.begin, this->v.end, this->v.end, 0, 0, 0);
        }
        return this;
    }
    int cur = (int)((this->v.end - this->v.begin) / 36);
    if ((unsigned)n <= (unsigned)cur) {
        Elem* src = other->v.begin;
        Elem* dst = this->v.begin;
        alloc_fill(dst, dst, src, 0, 0, 0);
        this->v.end = this->v.begin + n * 36;
        return this;
    }
    int cap = this->v.begin ? (int)((this->v.cap - this->v.begin) / 36) : 0;
    if ((unsigned)n <= (unsigned)cap) {
        Elem* mid = other->v.begin + cur * 36;
        copy_range(this->v.begin, other->v.begin, mid);
        this->v.end = move_range(this, mid, other->v.end, this->v.end);
        return this;
    }
    if (this->v.begin) free_(this->v.begin);
    if (reserve_check(this, n)) {
        this->v.end = move_range(this, other->v.begin, other->v.end, this->v.begin);
    }
    return this;
}
