// from server: 93% by colin
// from server: 82% by king_originala
// roc 2008-06 00567420  unit: RBX::Selection  size: 421 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00567420
//
// 00567420  6aff                 push -1
// 00567422  6820f57c00           push 0x7cf520
// 00567427  64a100000000         mov eax, dword ptr fs:[0]
// 0056742d  50                   push eax
// 0056742e  64892500000000       mov dword ptr fs:[0], esp
// 00567435  83ec1c               sub esp, 0x1c
// 00567438  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0056743c  53                   push ebx
// 0056743d  55                   push ebp
// 0056743e  56                   push esi
// 0056743f  57                   push edi
// 00567440  8bf1                 mov esi, ecx
// 00567442  50                   push eax
// 00567443  8d4c2418             lea ecx, [esp + 0x18]
// 00567447  51                   push ecx
// 00567448  89742418             mov dword ptr [esp + 0x18], esi
// 0056744c  e8ef150b00           call 0x618a40
// 00567451  83c408               add esp, 8
// 00567454  8d8e54010000         lea ecx, [esi + 0x154]
// 0056745a  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00567462  e86939f3ff           call 0x49add0
// 00567467  8b30                 mov esi, dword ptr [eax]
// 00567469  8b4004               mov eax, dword ptr [eax + 4]
// 0056746c  8974241c             mov dword ptr [esp + 0x1c], esi
// 00567470  89442420             mov dword ptr [esp + 0x20], eax
// 00567474  85c0                 test eax, eax
// 00567476  740c                 je 0x567484
// 00567478  83c004               add eax, 4
// 0056747b  ba01000000           mov edx, 1
// 00567480  f00fc110             lock xadd dword ptr [eax], edx
// 00567484  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 00567487  c644243401           mov byte ptr [esp + 0x34], 1
// 0056748c  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0056748f  7606                 jbe 0x567497
// 00567491  ff1590288000         call dword ptr [0x802890]
// 00567497  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0056749a  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 0056749d  7606                 jbe 0x5674a5
// 0056749f  ff1590288000         call dword ptr [0x802890]
// 005674a5  8b1e                 mov ebx, dword ptr [esi]
// 005674a7  897c2428             mov dword ptr [esp + 0x28], edi
// 005674ab  3bfd                 cmp edi, ebp
// 005674ad  740f                 je 0x5674be
// 005674af  8b442414             mov eax, dword ptr [esp + 0x14]
// 005674b3  3907                 cmp dword ptr [edi], eax
// 005674b5  7407                 je 0x5674be
// 005674b7  83c708               add edi, 8
// 005674ba  3bfd                 cmp edi, ebp
// 005674bc  75f5                 jne 0x5674b3
// 005674be  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 005674c1  396e0c               cmp dword ptr [esi + 0xc], ebp
// 005674c4  7606                 jbe 0x5674cc
// 005674c6  ff1590288000         call dword ptr [0x802890]
// 005674cc  8b06                 mov eax, dword ptr [esi]
// 005674ce  85db                 test ebx, ebx
// 005674d0  7404                 je 0x5674d6
// 005674d2  3bd8                 cmp ebx, eax
// 005674d4  7406                 je 0x5674dc
// 005674d6  ff1590288000         call dword ptr [0x802890]
// 005674dc  3bfd                 cmp edi, ebp
// 005674de  755f                 jne 0x56753f
// 005674e0  8d442414             lea eax, [esp + 0x14]
// 005674e4  50                   push eax
// 005674e5  8bce                 mov ecx, esi
// 005674e7  e8248cebff           call 0x420110
// 005674ec  8b742410             mov esi, dword ptr [esp + 0x10]
// 005674f0  85f6                 test esi, esi
// 005674f2  7408                 je 0x5674fc
// 005674f4  8d8650010000         lea eax, [esi + 0x150]
// 005674fa  eb02                 jmp 0x5674fe
// 005674fc  33c0                 xor eax, eax
// 005674fe  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00567502  50                   push eax
// 00567503  81c1a4000000         add ecx, 0xa4
// 00567509  e892a3ebff           call 0x4218a0
// 0056750e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00567512  83ec08               sub esp, 8
// 00567515  8bc4                 mov eax, esp
// 00567517  8908                 mov dword ptr [eax], ecx
// 00567519  8b542420             mov edx, dword ptr [esp + 0x20]
// 0056751d  895004               mov dword ptr [eax + 4], edx
// 00567520  8b442420             mov eax, dword ptr [esp + 0x20]
// 00567524  89642444             mov dword ptr [esp + 0x44], esp
// 00567528  85c0                 test eax, eax
// 0056752a  740c                 je 0x567538
// 0056752c  83c004               add eax, 4
// 0056752f  b901000000           mov ecx, 1
// 00567534  f00fc108             lock xadd dword ptr [eax], ecx
// 00567538  8bce                 mov ecx, esi
// 0056753a  e861f6ffff           call 0x566ba0
// 0056753f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00567543  c644243400           mov byte ptr [esp + 0x34], 0
// 00567548  85f6                 test esi, esi
// 0056754a  742a                 je 0x567576
// 0056754c  8d5604               lea edx, [esi + 4]
// 0056754f  83c8ff               or eax, 0xffffffff
// 00567552  f00fc102             lock xadd dword ptr [edx], eax
// 00567556  751e                 jne 0x567576
// 00567558  8b16                 mov edx, dword ptr [esi]
// 0056755a  8b4204               mov eax, dword ptr [edx + 4]
// 0056755d  8bce                 mov ecx, esi
// 0056755f  ffd0                 call eax
// 00567561  8d4e08               lea ecx, [esi + 8]
// 00567564  83caff               or edx, 0xffffffff
// 00567567  f00fc111             lock xadd dword ptr [ecx], edx
// 0056756b  7509                 jne 0x567576
// 0056756d  8b06                 mov eax, dword ptr [esi]
// 0056756f  8b5008               mov edx, dword ptr [eax + 8]
// 00567572  8bce                 mov ecx, esi
// 00567574  ffd2                 call edx
// 00567576  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056757a  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00567582  85f6                 test esi, esi
// 00567584  742a                 je 0x5675b0
// 00567586  8d4604               lea eax, [esi + 4]
// 00567589  83c9ff               or ecx, 0xffffffff
// 0056758c  f00fc108             lock xadd dword ptr [eax], ecx
// 00567590  751e                 jne 0x5675b0
// 00567592  8b16                 mov edx, dword ptr [esi]
// 00567594  8b4204               mov eax, dword ptr [edx + 4]
// 00567597  8bce                 mov ecx, esi
// 00567599  ffd0                 call eax
// 0056759b  8d4e08               lea ecx, [esi + 8]
// 0056759e  83caff               or edx, 0xffffffff
// 005675a1  f00fc111             lock xadd dword ptr [ecx], edx
// 005675a5  7509                 jne 0x5675b0
// 005675a7  8b06                 mov eax, dword ptr [esi]
// 005675a9  8b5008               mov edx, dword ptr [eax + 8]
// 005675ac  8bce                 mov ecx, esi
// 005675ae  ffd2                 call edx
// 005675b0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005675b4  5f                   pop edi
// 005675b5  5e                   pop esi
// 005675b6  5d                   pop ebp
// 005675b7  64890d00000000       mov dword ptr fs:[0], ecx
// 005675be  5b                   pop ebx
// 005675bf  83c428               add esp, 0x28
// 005675c2  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct RefCount
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long strong;
    volatile long weak;

    void release();
};

inline void RefCount::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Instance;
struct Entries;

template<class T> struct Shared
{
    T* ptr;
    RefCount* count;

    Shared(const Shared&);
    explicit Shared(Instance*);
    ~Shared();
};

template<class T>
inline Shared<T>::Shared(const Shared<T>& other)
{
    ptr = other.ptr;
    count = other.count;
    if (count)
        _InterlockedIncrement(&count->strong);
}

template<class T>
inline Shared<T>::~Shared()
{
    if (count)
        count->release();
}

extern "C" void __cdecl initialize_shared(Shared<Instance>*, Instance*);

template<>
inline Shared<Instance>::Shared(Instance* source)
{
    initialize_shared(this, source);
}

struct Listener
{
    void attach(void*);
};

struct Instance
{
    char padding[0xa4];
    Listener listener;
};

struct Iterator
{
    void* owner;
    Shared<Instance>* position;
};

struct Entries
{
    void* owner;
    unsigned long padding[2];
    Shared<Instance>* first;
    Shared<Instance>* last;

    void append(const Shared<Instance>&);
    Iterator begin();
    Iterator end();
};

inline Iterator Entries::begin()
{
    Shared<Instance>* start = first;
    if (start > last)
        _invalid_parameter_noinfo();
    Iterator result;
    result.owner = owner;
    result.position = start;
    return result;
}

inline Iterator Entries::end()
{
    Shared<Instance>* finish = last;
    if (first > finish)
        _invalid_parameter_noinfo();
    Iterator result;
    result.owner = owner;
    result.position = finish;
    return result;
}

inline Iterator find_entry(Iterator current, Iterator finish,
                           Instance* const& value)
{
    while (current.position != finish.position)
    {
        if (current.position->ptr == value)
            break;
        ++current.position;
    }
    return current;
}

struct Holder
{
    Shared<Entries>* get();
};

struct Selection
{
    char padding[0x150];
    unsigned long signal;
    Holder holder;

    void notify(Shared<Instance>);
    void select(Instance*);
};

void Selection::select(Instance* instance)
{
    Shared<Instance> item(instance);
    Shared<Entries> entries(*holder.get());

    Entries* list = entries.ptr;
    Iterator finish = list->end();
    Iterator initial = list->begin();
    Iterator current = find_entry(initial, finish, item.ptr);

    finish = list->end();
    if (!current.owner || current.owner != finish.owner)
        _invalid_parameter_noinfo();

    if (current.position == finish.position)
    {
        list->append(item);
        instance->listener.attach(this ? &signal : 0);
        notify(item);
    }
}
