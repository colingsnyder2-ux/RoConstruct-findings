// from server: 76% by colin
// from server: 75% by colin
// roc 2008-06 004a75e0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a75e0
//
// 004a75e0  6aff                 push -1
// 004a75e2  6809b77d00           push 0x7db709
// 004a75e7  64a100000000         mov eax, dword ptr fs:[0]
// 004a75ed  50                   push eax
// 004a75ee  64892500000000       mov dword ptr fs:[0], esp
// 004a75f5  83ec08               sub esp, 8
// 004a75f8  53                   push ebx
// 004a75f9  55                   push ebp
// 004a75fa  56                   push esi
// 004a75fb  57                   push edi
// 004a75fc  894c2410             mov dword ptr [esp + 0x10], ecx
// 004a7600  8d442428             lea eax, [esp + 0x28]
// 004a7604  50                   push eax
// 004a7605  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004a760d  e86ecb0a00           call 0x554180
// 004a7612  83c404               add esp, 4
// 004a7615  89442414             mov dword ptr [esp + 0x14], eax
// 004a7619  e842890c00           call 0x56ff60
// 004a761e  8bf0                 mov esi, eax
// 004a7620  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004a7623  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 004a7626  7606                 jbe 0x4a762e
// 004a7628  ff1590288000         call dword ptr [0x802890]
// 004a762e  8b36                 mov esi, dword ptr [esi]
// 004a7630  8bef                 mov ebp, edi
// 004a7632  e829890c00           call 0x56ff60
// 004a7637  8bf8                 mov edi, eax
// 004a7639  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 004a763c  395f0c               cmp dword ptr [edi + 0xc], ebx
// 004a763f  7606                 jbe 0x4a7647
// 004a7641  ff1590288000         call dword ptr [0x802890]
// 004a7647  8b3f                 mov edi, dword ptr [edi]
// 004a7649  85f6                 test esi, esi
// 004a764b  7404                 je 0x4a7651
// 004a764d  3bf7                 cmp esi, edi
// 004a764f  740a                 je 0x4a765b
// 004a7651  8b3d90288000         mov edi, dword ptr [0x802890]
// 004a7657  ffd7                 call edi
// 004a7659  eb06                 jmp 0x4a7661
// 004a765b  8b3d90288000         mov edi, dword ptr [0x802890]
// 004a7661  3beb                 cmp ebp, ebx
// 004a7663  746a                 je 0x4a76cf
// 004a7665  85f6                 test esi, esi
// 004a7667  752b                 jne 0x4a7694
// 004a7669  ffd7                 call edi
// 004a766b  33c0                 xor eax, eax
// 004a766d  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 004a7670  7202                 jb 0x4a7674
// 004a7672  ffd7                 call edi
// 004a7674  8b4d00               mov ecx, dword ptr [ebp]
// 004a7677  8b542414             mov edx, dword ptr [esp + 0x14]
// 004a767b  395104               cmp dword ptr [ecx + 4], edx
// 004a767e  741c                 je 0x4a769c
// 004a7680  85f6                 test esi, esi
// 004a7682  7514                 jne 0x4a7698
// 004a7684  ffd7                 call edi
// 004a7686  33c0                 xor eax, eax
// 004a7688  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 004a768b  7202                 jb 0x4a768f
// 004a768d  ffd7                 call edi
// 004a768f  83c504               add ebp, 4
// 004a7692  eb9e                 jmp 0x4a7632
// 004a7694  8b06                 mov eax, dword ptr [esi]
// 004a7696  ebd5                 jmp 0x4a766d
// 004a7698  8b06                 mov eax, dword ptr [esi]
// 004a769a  ebec                 jmp 0x4a7688
// 004a769c  85f6                 test esi, esi
// 004a769e  752b                 jne 0x4a76cb
// 004a76a0  ffd7                 call edi
// 004a76a2  3b6e10               cmp ebp, dword ptr [esi + 0x10]
// 004a76a5  7202                 jb 0x4a76a9
// 004a76a7  ffd7                 call edi
// 004a76a9  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004a76ad  8b4310               mov eax, dword ptr [ebx + 0x10]
// 004a76b0  2b430c               sub eax, dword ptr [ebx + 0xc]
// 004a76b3  8b742444             mov esi, dword ptr [esp + 0x44]
// 004a76b7  c1f802               sar eax, 2
// 004a76ba  3bf0                 cmp esi, eax
// 004a76bc  7202                 jb 0x4a76c0
// 004a76be  ffd7                 call edi
// 004a76c0  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 004a76c3  8b5500               mov edx, dword ptr [ebp]
// 004a76c6  8914b1               mov dword ptr [ecx + esi*4], edx
// 004a76c9  eb25                 jmp 0x4a76f0
// 004a76cb  8b36                 mov esi, dword ptr [esi]
// 004a76cd  ebd3                 jmp 0x4a76a2
// 004a76cf  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004a76d3  8b4310               mov eax, dword ptr [ebx + 0x10]
// 004a76d6  2b430c               sub eax, dword ptr [ebx + 0xc]
// 004a76d9  8b742444             mov esi, dword ptr [esp + 0x44]
// 004a76dd  c1f802               sar eax, 2
// 004a76e0  3bf0                 cmp esi, eax
// 004a76e2  7202                 jb 0x4a76e6
// 004a76e4  ffd7                 call edi
// 004a76e6  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 004a76e9  c704b100000000       mov dword ptr [ecx + esi*4], 0
// 004a76f0  8d4c2428             lea ecx, [esp + 0x28]
// 004a76f4  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004a76fc  ff1568248000         call dword ptr [0x802468]
// 004a7702  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004a7706  5f                   pop edi
// 004a7707  5e                   pop esi
// 004a7708  5d                   pop ebp
// 004a7709  5b                   pop ebx
// 004a770a  64890d00000000       mov dword ptr fs:[0], ecx
// 004a7711  83c414               add esp, 0x14
// 004a7714  c22000               ret 0x20

extern "C" void __cdecl _invalid_parameter_noinfo();

struct String {
    unsigned char storage[28];
    __declspec(dllimport) ~String() throw();
};

extern void (__thiscall * const destroyString)(String*);

struct Entry {
    unsigned int unused;
    unsigned int key;
};

struct Vector;

struct Proxy {
    Vector* container;
};

struct Iterator {
    Proxy* owner;
    Entry** position;

    Entry*& operator*() const;
    Iterator& operator++();
    bool operator!=(const Iterator& other) const;
};

struct Vector {
    Proxy* proxy;
    unsigned int unused[2];
    Entry** first;
    Entry** last;
    Entry** limit;

    Iterator begin();
    Iterator end();
};

extern unsigned int __cdecl lookup(String*);
extern Vector& __cdecl registry();

Iterator Vector::begin() {
    Entry** position = first;
    if (position > last)
        _invalid_parameter_noinfo();
    Iterator result;
    result.owner = proxy;
    result.position = position;
    return result;
}

Iterator Vector::end() {
    Entry** position = last;
    if (first > position)
        _invalid_parameter_noinfo();
    Iterator result;
    result.owner = proxy;
    result.position = position;
    return result;
}

bool Iterator::operator!=(const Iterator& other) const {
    if (!owner || owner != other.owner)
        _invalid_parameter_noinfo();
    return position != other.position;
}

Entry*& Iterator::operator*() const {
    if (!owner)
        _invalid_parameter_noinfo();
    Vector* container = owner ? owner->container : 0;
    if (position >= container->last)
        _invalid_parameter_noinfo();
    return *position;
}

Iterator& Iterator::operator++() {
    if (!owner)
        _invalid_parameter_noinfo();
    Vector* container = owner ? owner->container : 0;
    if (position >= container->last)
        _invalid_parameter_noinfo();
    ++position;
    return *this;
}

struct S {
    unsigned int unused[3];
    Entry** first;
    Entry** last;

    void assign(String name, unsigned int index);
};

void S::assign(String name, unsigned int index) {
    unsigned int key = lookup(&name);
    Iterator i = registry().begin();
    Iterator e = registry().end();
    for (; i != e; ++i) {
        if ((*i)->key == key) {
            Entry*& entry = *i;
            if (index >= static_cast<unsigned int>(last - first))
                _invalid_parameter_noinfo();
            first[index] = entry;
            return;
        }
    }
    if (index >= static_cast<unsigned int>(last - first))
        _invalid_parameter_noinfo();
    first[index] = 0;
}
