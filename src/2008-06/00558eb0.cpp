// from server: 100% by king_originala
// roc 2008-06 00558eb0  unit: RBX::VInstance::?$NonFactoryProduct  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00558eb0
//
// 00558eb0  6aff                 push -1
// 00558eb2  68b8e27c00           push 0x7ce2b8
// 00558eb7  64a100000000         mov eax, dword ptr fs:[0]
// 00558ebd  50                   push eax
// 00558ebe  64892500000000       mov dword ptr fs:[0], esp
// 00558ec5  83ec0c               sub esp, 0xc
// 00558ec8  53                   push ebx
// 00558ec9  8bd9                 mov ebx, ecx
// 00558ecb  56                   push esi
// 00558ecc  895c2408             mov dword ptr [esp + 8], ebx
// 00558ed0  8b730c               mov esi, dword ptr [ebx + 0xc]
// 00558ed3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00558edb  3b7310               cmp esi, dword ptr [ebx + 0x10]
// 00558ede  7606                 jbe 0x558ee6
// 00558ee0  ff1590288000         call dword ptr [0x802890]
// 00558ee6  55                   push ebp
// 00558ee7  8b6b10               mov ebp, dword ptr [ebx + 0x10]
// 00558eea  57                   push edi
// 00558eeb  8b3b                 mov edi, dword ptr [ebx]
// 00558eed  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 00558ef0  7606                 jbe 0x558ef8
// 00558ef2  ff1590288000         call dword ptr [0x802890]
// 00558ef8  8b03                 mov eax, dword ptr [ebx]
// 00558efa  89442414             mov dword ptr [esp + 0x14], eax
// 00558efe  8bff                 mov edi, edi
// 00558f00  85ff                 test edi, edi
// 00558f02  7406                 je 0x558f0a
// 00558f04  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 00558f08  7406                 je 0x558f10
// 00558f0a  ff1590288000         call dword ptr [0x802890]
// 00558f10  3bf5                 cmp esi, ebp
// 00558f12  7449                 je 0x558f5d
// 00558f14  85ff                 test edi, edi
// 00558f16  753d                 jne 0x558f55
// 00558f18  ff1590288000         call dword ptr [0x802890]
// 00558f1e  33c0                 xor eax, eax
// 00558f20  3b7010               cmp esi, dword ptr [eax + 0x10]
// 00558f23  7206                 jb 0x558f2b
// 00558f25  ff1590288000         call dword ptr [0x802890]
// 00558f2b  8b0e                 mov ecx, dword ptr [esi]
// 00558f2d  85c9                 test ecx, ecx
// 00558f2f  7408                 je 0x558f39
// 00558f31  8b11                 mov edx, dword ptr [ecx]
// 00558f33  8b02                 mov eax, dword ptr [edx]
// 00558f35  6a01                 push 1
// 00558f37  ffd0                 call eax
// 00558f39  85ff                 test edi, edi
// 00558f3b  751c                 jne 0x558f59
// 00558f3d  ff1590288000         call dword ptr [0x802890]
// 00558f43  33c0                 xor eax, eax
// 00558f45  3b7010               cmp esi, dword ptr [eax + 0x10]
// 00558f48  7206                 jb 0x558f50
// 00558f4a  ff1590288000         call dword ptr [0x802890]
// 00558f50  83c604               add esi, 4
// 00558f53  ebab                 jmp 0x558f00
// 00558f55  8b07                 mov eax, dword ptr [edi]
// 00558f57  ebc7                 jmp 0x558f20
// 00558f59  8b07                 mov eax, dword ptr [edi]
// 00558f5b  ebe8                 jmp 0x558f45
// 00558f5d  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00558f60  5f                   pop edi
// 00558f61  5d                   pop ebp
// 00558f62  85c0                 test eax, eax
// 00558f64  7409                 je 0x558f6f
// 00558f66  50                   push eax
// 00558f67  e80e771400           call 0x6a067a
// 00558f6c  83c404               add esp, 4
// 00558f6f  8b0b                 mov ecx, dword ptr [ebx]
// 00558f71  33c0                 xor eax, eax
// 00558f73  51                   push ecx
// 00558f74  89430c               mov dword ptr [ebx + 0xc], eax
// 00558f77  894310               mov dword ptr [ebx + 0x10], eax
// 00558f7a  894314               mov dword ptr [ebx + 0x14], eax
// 00558f7d  e8f8761400           call 0x6a067a
// 00558f82  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00558f86  83c404               add esp, 4
// 00558f89  5e                   pop esi
// 00558f8a  5b                   pop ebx
// 00558f8b  64890d00000000       mov dword ptr fs:[0], ecx
// 00558f92  83c418               add esp, 0x18
// 00558f95  c3                   ret 

extern "C" void (__cdecl *_invalid_parameter_noinfo)();
void __cdecl operator delete(void *) throw();

struct Object {
    virtual ~Object();
};

struct Storage;

struct Proxy {
    Storage *owner;
};

struct Iterator {
    Proxy *proxy;
    Object **position;

    Storage *container() const;
    bool operator==(const Iterator &) const;
    Object *operator*() const;
    Iterator &operator++();
};

struct Storage {
    Proxy *proxy;
    unsigned int reserved[2];
    Object **first;
    Object **last;
    Object **limit;

    Iterator begin();
    Iterator end();
    ~Storage();
};

__forceinline Storage *Iterator::container() const
{
    return proxy ? proxy->owner : 0;
}

__forceinline bool Iterator::operator==(const Iterator &other) const
{
    if (!proxy || proxy != other.proxy)
        _invalid_parameter_noinfo();
    return position == other.position;
}

__forceinline Object *Iterator::operator*() const
{
    if (!proxy)
        _invalid_parameter_noinfo();
    if (position >= container()->last)
        _invalid_parameter_noinfo();
    return *position;
}

__forceinline Iterator &Iterator::operator++()
{
    if (!proxy)
        _invalid_parameter_noinfo();
    if (position >= container()->last)
        _invalid_parameter_noinfo();
    ++position;
    return *this;
}

__forceinline Iterator Storage::begin()
{
    Object **p = first;
    if (p > last)
        _invalid_parameter_noinfo();
    Iterator result;
    result.proxy = proxy;
    result.position = p;
    return result;
}

__forceinline Iterator Storage::end()
{
    Object **p = last;
    if (first > p)
        _invalid_parameter_noinfo();
    Iterator result;
    result.proxy = proxy;
    result.position = p;
    return result;
}

__forceinline Storage::~Storage()
{
    if (first)
        operator delete(first);
    first = 0;
    last = 0;
    limit = 0;
    operator delete(proxy);
}

struct S {
    Storage storage;
    ~S();
};

S::~S()
{
    Iterator current = storage.begin();
    Iterator finish = storage.end();
    while (!(current == finish)) {
        delete *current;
        ++current;
    }
}
