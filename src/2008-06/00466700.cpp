// from server: 65% by colin
// from server: 64% by king_originala
// roc 2008-06 00466700  unit: RBX::VSelection::?$FilteredListener  size: 370 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00466700
//
// 00466700  51                   push ecx
// 00466701  53                   push ebx
// 00466702  55                   push ebp
// 00466703  56                   push esi
// 00466704  8bd9                 mov ebx, ecx
// 00466706  57                   push edi
// 00466707  8b7b10               mov edi, dword ptr [ebx + 0x10]
// 0046670a  3b7b14               cmp edi, dword ptr [ebx + 0x14]
// 0046670d  7606                 jbe 0x466715
// 0046670f  ff1590288000         call dword ptr [0x802890]
// 00466715  8b7304               mov esi, dword ptr [ebx + 4]
// 00466718  8bef                 mov ebp, edi
// 0046671a  8d9b00000000         lea ebx, [ebx]
// 00466720  8b7b14               mov edi, dword ptr [ebx + 0x14]
// 00466723  397b10               cmp dword ptr [ebx + 0x10], edi
// 00466726  7606                 jbe 0x46672e
// 00466728  ff1590288000         call dword ptr [0x802890]
// 0046672e  8b4304               mov eax, dword ptr [ebx + 4]
// 00466731  85f6                 test esi, esi
// 00466733  7404                 je 0x466739
// 00466735  3bf0                 cmp esi, eax
// 00466737  7406                 je 0x46673f
// 00466739  ff1590288000         call dword ptr [0x802890]
// 0046673f  3bef                 cmp ebp, edi
// 00466741  0f84c2000000         je 0x466809
// 00466747  8b3d90288000         mov edi, dword ptr [0x802890]
// 0046674d  85f6                 test esi, esi
// 0046674f  755b                 jne 0x4667ac
// 00466751  ffd7                 call edi
// 00466753  33c0                 xor eax, eax
// 00466755  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 00466758  7202                 jb 0x46675c
// 0046675a  ffd7                 call edi
// 0046675c  85f6                 test esi, esi
// 0046675e  7550                 jne 0x4667b0
// 00466760  ffd7                 call edi
// 00466762  33c0                 xor eax, eax
// 00466764  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 00466767  7202                 jb 0x46676b
// 00466769  ffd7                 call edi
// 0046676b  8b4500               mov eax, dword ptr [ebp]
// 0046676e  8b4804               mov ecx, dword ptr [eax + 4]
// 00466771  8b13                 mov edx, dword ptr [ebx]
// 00466773  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00466777  8b5210               mov edx, dword ptr [edx + 0x10]
// 0046677a  83c010               add eax, 0x10
// 0046677d  50                   push eax
// 0046677e  51                   push ecx
// 0046677f  8d442424             lea eax, [esp + 0x24]
// 00466783  50                   push eax
// 00466784  57                   push edi
// 00466785  8bcb                 mov ecx, ebx
// 00466787  ffd2                 call edx
// 00466789  84c0                 test al, al
// 0046678b  752b                 jne 0x4667b8
// 0046678d  85f6                 test esi, esi
// 0046678f  7523                 jne 0x4667b4
// 00466791  ff1590288000         call dword ptr [0x802890]
// 00466797  33c0                 xor eax, eax
// 00466799  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0046679c  7206                 jb 0x4667a4
// 0046679e  ff1590288000         call dword ptr [0x802890]
// 004667a4  83c504               add ebp, 4
// 004667a7  e974ffffff           jmp 0x466720
// 004667ac  8b06                 mov eax, dword ptr [esi]
// 004667ae  eba5                 jmp 0x466755
// 004667b0  8b06                 mov eax, dword ptr [esi]
// 004667b2  ebb0                 jmp 0x466764
// 004667b4  8b06                 mov eax, dword ptr [esi]
// 004667b6  ebe1                 jmp 0x466799
// 004667b8  8b1d90288000         mov ebx, dword ptr [0x802890]
// 004667be  85f6                 test esi, esi
// 004667c0  753f                 jne 0x466801
// 004667c2  ffd3                 call ebx
// 004667c4  33c0                 xor eax, eax
// 004667c6  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 004667c9  7202                 jb 0x4667cd
// 004667cb  ffd3                 call ebx
// 004667cd  8b4500               mov eax, dword ptr [ebp]
// 004667d0  397804               cmp dword ptr [eax + 4], edi
// 004667d3  0f8488000000         je 0x466861
// 004667d9  85f6                 test esi, esi
// 004667db  7528                 jne 0x466805
// 004667dd  ffd3                 call ebx
// 004667df  3b6e10               cmp ebp, dword ptr [esi + 0x10]
// 004667e2  7202                 jb 0x4667e6
// 004667e4  ffd3                 call ebx
// 004667e6  8b4d00               mov ecx, dword ptr [ebp]
// 004667e9  6a00                 push 0
// 004667eb  e8e009ffff           call 0x4571d0
// 004667f0  8d4c241c             lea ecx, [esp + 0x1c]
// 004667f4  e867c4fbff           call 0x422c60
// 004667f9  5f                   pop edi
// 004667fa  5e                   pop esi
// 004667fb  5d                   pop ebp
// 004667fc  5b                   pop ebx
// 004667fd  59                   pop ecx
// 004667fe  c21400               ret 0x14
// 00466801  8b06                 mov eax, dword ptr [esi]
// 00466803  ebc1                 jmp 0x4667c6
// 00466805  8b36                 mov esi, dword ptr [esi]
// 00466807  ebd6                 jmp 0x4667df
// 00466809  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046680d  83ec10               sub esp, 0x10
// 00466810  8bc4                 mov eax, esp
// 00466812  8908                 mov dword ptr [eax], ecx
// 00466814  8b542430             mov edx, dword ptr [esp + 0x30]
// 00466818  895004               mov dword ptr [eax + 4], edx
// 0046681b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0046681f  89642420             mov dword ptr [esp + 0x20], esp
// 00466823  85c9                 test ecx, ecx
// 00466825  740c                 je 0x466833
// 00466827  83c104               add ecx, 4
// 0046682a  ba01000000           mov edx, 1
// 0046682f  f00fc111             lock xadd dword ptr [ecx], edx
// 00466833  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00466837  894808               mov dword ptr [eax + 8], ecx
// 0046683a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0046683e  89500c               mov dword ptr [eax + 0xc], edx
// 00466841  8b442438             mov eax, dword ptr [esp + 0x38]
// 00466845  85c0                 test eax, eax
// 00466847  740c                 je 0x466855
// 00466849  83c004               add eax, 4
// 0046684c  b901000000           mov ecx, 1
// 00466851  f00fc108             lock xadd dword ptr [eax], ecx
// 00466855  8b542428             mov edx, dword ptr [esp + 0x28]
// 00466859  52                   push edx
// 0046685a  8bcb                 mov ecx, ebx
// 0046685c  e8dffbffff           call 0x466440
// 00466861  8d4c241c             lea ecx, [esp + 0x1c]
// 00466865  e8f6c3fbff           call 0x422c60
// 0046686a  5f                   pop edi
// 0046686b  5e                   pop esi
// 0046686c  5d                   pop ebp
// 0046686d  5b                   pop ebx
// 0046686e  59                   pop ecx
// 0046686f  c21400               ret 0x14

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* const invalid_parameter_noinfo)();

struct RefCount
{
    long unused;
    volatile long count;
};

struct Payload
{
    void* first;
    RefCount* firstCount;
    void* second;
    RefCount* secondCount;

    Payload(const Payload&) throw();
    ~Payload() throw();
};

inline Payload::Payload(const Payload& other) throw()
    : first(other.first), firstCount(other.firstCount)
{
    if (firstCount)
        _InterlockedIncrement(&firstCount->count);
    second = other.second;
    secondCount = other.secondCount;
    if (secondCount)
        _InterlockedIncrement(&secondCount->count);
}

struct Entry
{
    unsigned long unused0;
    void* key;
    unsigned long unused8;
    unsigned long unused12;
    Payload payload;

    void set(int) throw();
};

struct Owner
{
    unsigned long unused[4];
    Entry** end;
};

struct Proxy
{
    Owner* owner;
};

struct Iterator
{
    Proxy* proxy;
    Entry** position;

    bool equals(const Iterator&) const throw();
};

inline bool Iterator::equals(const Iterator& other) const throw()
{
    if (!proxy || proxy != other.proxy)
        invalid_parameter_noinfo();
    return position == other.position;
}

struct Listener
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual bool accept(void*, const Payload&, void*, const Payload&) throw();

    Proxy* proxy;
    unsigned long unused8;
    unsigned long unused12;
    Entry** begin;
    Entry** end;

    void append(void*, Payload) throw();
    void notify(void*, Payload) throw();
};

void Listener::notify(void* key, Payload value) throw()
{
    Entry** first = begin;
    if (first > end)
        invalid_parameter_noinfo();

    Iterator current;
    current.proxy = proxy;
    current.position = first;

    for (;;)
    {
        Iterator finish;
        finish.position = end;
        if (begin > finish.position)
            invalid_parameter_noinfo();
        finish.proxy = proxy;
        if (current.equals(finish))
        {
            append(key, value);
            return;
        }

        void (__cdecl* fail)() = invalid_parameter_noinfo;
        Owner* owner;
        if (!current.proxy)
        {
            fail();
            owner = 0;
        }
        else
            owner = current.proxy->owner;
        if (current.position >= owner->end)
            fail();

        if (!current.proxy)
        {
            fail();
            owner = 0;
        }
        else
            owner = current.proxy->owner;
        if (current.position >= owner->end)
            fail();

        Entry* entry = *current.position;
        void* selectedKey = key;
        void* entryKey = entry->key;
        const Payload* entryPayload = &entry->payload;
        if (accept(selectedKey, value, entryKey, *entryPayload))
        {
            void (__cdecl* failed)() = invalid_parameter_noinfo;
            if (!current.proxy)
            {
                failed();
                owner = 0;
            }
            else
                owner = current.proxy->owner;
            if (current.position >= owner->end)
                failed();

            if ((*current.position)->key != selectedKey)
            {
                Owner* finalOwner = reinterpret_cast<Owner*>(current.proxy);
                if (!current.proxy)
                    failed();
                else
                    finalOwner = current.proxy->owner;

                if (current.position >= finalOwner->end)
                    failed();
                (*current.position)->set(0);
            }
            return;
        }

        if (!current.proxy)
        {
            invalid_parameter_noinfo();
            owner = 0;
        }
        else
            owner = current.proxy->owner;
        if (current.position >= owner->end)
            invalid_parameter_noinfo();
        ++current.position;
    }
}
