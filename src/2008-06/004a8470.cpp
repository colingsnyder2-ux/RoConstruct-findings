// from server: 87% by colin
// from server: 86% by king_originala
// roc 2008-06 004a8470  unit: RBX::VHint::?$FactoryProduct::Creator  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a8470
//
// 004a8470  6aff                 push -1
// 004a8472  68b87f7c00           push 0x7c7fb8
// 004a8477  64a100000000         mov eax, dword ptr fs:[0]
// 004a847d  50                   push eax
// 004a847e  64892500000000       mov dword ptr fs:[0], esp
// 004a8485  83ec18               sub esp, 0x18
// 004a8488  53                   push ebx
// 004a8489  55                   push ebp
// 004a848a  56                   push esi
// 004a848b  57                   push edi
// 004a848c  8bf9                 mov edi, ecx
// 004a848e  8d442413             lea eax, [esp + 0x13]
// 004a8492  50                   push eax
// 004a8493  8d4c2417             lea ecx, [esp + 0x17]
// 004a8497  51                   push ecx
// 004a8498  8bcf                 mov ecx, edi
// 004a849a  897c2424             mov dword ptr [esp + 0x24], edi
// 004a849e  e86ddcf9ff           call 0x446110
// 004a84a3  c744243000000000     mov dword ptr [esp + 0x30], 0
// 004a84ab  e8b07a0c00           call 0x56ff60
// 004a84b0  8bf0                 mov esi, eax
// 004a84b2  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 004a84b5  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 004a84b8  7606                 jbe 0x4a84c0
// 004a84ba  ff1590288000         call dword ptr [0x802890]
// 004a84c0  8b2e                 mov ebp, dword ptr [esi]
// 004a84c2  e8997a0c00           call 0x56ff60
// 004a84c7  8bf0                 mov esi, eax
// 004a84c9  8b4610               mov eax, dword ptr [esi + 0x10]
// 004a84cc  89442414             mov dword ptr [esp + 0x14], eax
// 004a84d0  39460c               cmp dword ptr [esi + 0xc], eax
// 004a84d3  7606                 jbe 0x4a84db
// 004a84d5  ff1590288000         call dword ptr [0x802890]
// 004a84db  8b16                 mov edx, dword ptr [esi]
// 004a84dd  89542420             mov dword ptr [esp + 0x20], edx
// 004a84e1  85ed                 test ebp, ebp
// 004a84e3  7406                 je 0x4a84eb
// 004a84e5  3b6c2420             cmp ebp, dword ptr [esp + 0x20]
// 004a84e9  740a                 je 0x4a84f5
// 004a84eb  8b3590288000         mov esi, dword ptr [0x802890]
// 004a84f1  ffd6                 call esi
// 004a84f3  eb06                 jmp 0x4a84fb
// 004a84f5  8b3590288000         mov esi, dword ptr [0x802890]
// 004a84fb  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 004a84ff  7461                 je 0x4a8562
// 004a8501  85ed                 test ebp, ebp
// 004a8503  7553                 jne 0x4a8558
// 004a8505  ffd6                 call esi
// 004a8507  33c0                 xor eax, eax
// 004a8509  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 004a850c  7202                 jb 0x4a8510
// 004a850e  ffd6                 call esi
// 004a8510  8b03                 mov eax, dword ptr [ebx]
// 004a8512  8b771c               mov esi, dword ptr [edi + 0x1c]
// 004a8515  8d4c2418             lea ecx, [esp + 0x18]
// 004a8519  51                   push ecx
// 004a851a  8bcf                 mov ecx, edi
// 004a851c  8944241c             mov dword ptr [esp + 0x1c], eax
// 004a8520  e87bbf0b00           call 0x5644a0
// 004a8525  8930                 mov dword ptr [eax], esi
// 004a8527  8b471c               mov eax, dword ptr [edi + 0x1c]
// 004a852a  83c9ff               or ecx, 0xffffffff
// 004a852d  85c0                 test eax, eax
// 004a852f  7607                 jbe 0x4a8538
// 004a8531  d1e8                 shr eax, 1
// 004a8533  41                   inc ecx
// 004a8534  85c0                 test eax, eax
// 004a8536  77f9                 ja 0x4a8531
// 004a8538  41                   inc ecx
// 004a8539  894f20               mov dword ptr [edi + 0x20], ecx
// 004a853c  85ed                 test ebp, ebp
// 004a853e  751d                 jne 0x4a855d
// 004a8540  ff1590288000         call dword ptr [0x802890]
// 004a8546  33c0                 xor eax, eax
// 004a8548  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 004a854b  7206                 jb 0x4a8553
// 004a854d  ff1590288000         call dword ptr [0x802890]
// 004a8553  83c304               add ebx, 4
// 004a8556  eb89                 jmp 0x4a84e1
// 004a8558  8b4500               mov eax, dword ptr [ebp]
// 004a855b  ebac                 jmp 0x4a8509
// 004a855d  8b4500               mov eax, dword ptr [ebp]
// 004a8560  ebe6                 jmp 0x4a8548
// 004a8562  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004a8566  8bc7                 mov eax, edi
// 004a8568  5f                   pop edi
// 004a8569  5e                   pop esi
// 004a856a  5d                   pop ebp
// 004a856b  5b                   pop ebx
// 004a856c  64890d00000000       mov dword ptr fs:[0], ecx
// 004a8573  83c424               add esp, 0x24
// 004a8576  c3                   ret 

extern "C" void (__cdecl * const invalid_parameter_noinfo)();

struct Empty {
    Empty();
};

struct Empty2 {
    Empty2();
};

inline Empty::Empty() {}
inline Empty2::Empty2() {}

struct Vector;

struct Proxy {
    Vector* owner;
};

struct Iterator {
    Proxy* owner;
    unsigned* current;

    Iterator(Proxy*, unsigned*);
    bool operator==(const Iterator&) const;
    Vector* container() const;
    unsigned& operator*() const;
    Iterator& operator++();
};

struct Vector {
    Proxy* proxy;
    unsigned reserved[2];
    unsigned* first;
    unsigned* last;

    Iterator begin();
    Iterator end();
};

inline Iterator::Iterator(Proxy* p, unsigned* q)
    : owner(p), current(q)
{
}

inline bool Iterator::operator==(const Iterator& other) const
{
    if (!owner || owner != other.owner)
        invalid_parameter_noinfo();
    return current == other.current;
}

inline Iterator Vector::begin()
{
    unsigned* p = first;
    if (p > last)
        invalid_parameter_noinfo();
    return Iterator(proxy, p);
}

inline Iterator Vector::end()
{
    unsigned* p = last;
    if (first > p)
        invalid_parameter_noinfo();
    return Iterator(proxy, p);
}

inline Vector* Iterator::container() const
{
    if (owner)
        return owner->owner;
    invalid_parameter_noinfo();
    return 0;
}

inline unsigned& Iterator::operator*() const
{
    if (current >= container()->last)
        invalid_parameter_noinfo();
    return *current;
}

inline Iterator& Iterator::operator++()
{
    if (current >= container()->last)
        invalid_parameter_noinfo();
    ++current;
    return *this;
}

extern Vector* __cdecl getValues();

struct Base {
    unsigned storage[7];
    unsigned count;
    unsigned bits;
struct BothEmpty : Empty, Empty2 { BothEmpty() {} };


    Base(const Empty&, const Empty2&);
    ~Base();
    unsigned* lookup(const unsigned*);
};

struct S : Base {
    S();
};

S::S() : Base(BothEmpty(), BothEmpty())
{
    Iterator current = getValues()->begin();
    Iterator end = getValues()->end();
    for (; !(current == end); ++current) {
        unsigned key = *current;
        unsigned value = count;
        *lookup(&key) = value;

        unsigned n = count;
        unsigned result = ~0u;
        while (n > 0) {
            n >>= 1;
            ++result;
        }
        bits = result + 1;
    }
}
