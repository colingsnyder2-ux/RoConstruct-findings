// from server: 100% by king_originala
// roc 2008-06 00454170  unit: CRobloxDoc  size: 396 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00454170
//
// 00454170  6aff                 push -1
// 00454172  68c01f7c00           push 0x7c1fc0
// 00454177  64a100000000         mov eax, dword ptr fs:[0]
// 0045417d  50                   push eax
// 0045417e  64892500000000       mov dword ptr fs:[0], esp
// 00454185  83ec1c               sub esp, 0x1c
// 00454188  53                   push ebx
// 00454189  55                   push ebp
// 0045418a  56                   push esi
// 0045418b  57                   push edi
// 0045418c  8bf1                 mov esi, ecx
// 0045418e  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00454194  8d442418             lea eax, [esp + 0x18]
// 00454198  50                   push eax
// 00454199  e8a2670100           call 0x46a940
// 0045419e  8b10                 mov edx, dword ptr [eax]
// 004541a0  83ec08               sub esp, 8
// 004541a3  8bcc                 mov ecx, esp
// 004541a5  8911                 mov dword ptr [ecx], edx
// 004541a7  8b4004               mov eax, dword ptr [eax + 4]
// 004541aa  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 004541b2  89642418             mov dword ptr [esp + 0x18], esp
// 004541b6  894104               mov dword ptr [ecx + 4], eax
// 004541b9  85c0                 test eax, eax
// 004541bb  740c                 je 0x4541c9
// 004541bd  83c004               add eax, 4
// 004541c0  b901000000           mov ecx, 1
// 004541c5  f00fc108             lock xadd dword ptr [eax], ecx
// 004541c9  8d4c2428             lea ecx, [esp + 0x28]
// 004541cd  e86ed9fbff           call 0x411b40
// 004541d2  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004541d6  c644243402           mov byte ptr [esp + 0x34], 2
// 004541db  85ff                 test edi, edi
// 004541dd  742a                 je 0x454209
// 004541df  8d5704               lea edx, [edi + 4]
// 004541e2  83c8ff               or eax, 0xffffffff
// 004541e5  f00fc102             lock xadd dword ptr [edx], eax
// 004541e9  751e                 jne 0x454209
// 004541eb  8b17                 mov edx, dword ptr [edi]
// 004541ed  8b4204               mov eax, dword ptr [edx + 4]
// 004541f0  8bcf                 mov ecx, edi
// 004541f2  ffd0                 call eax
// 004541f4  8d4f08               lea ecx, [edi + 8]
// 004541f7  83caff               or edx, 0xffffffff
// 004541fa  f00fc111             lock xadd dword ptr [ecx], edx
// 004541fe  7509                 jne 0x454209
// 00454200  8b07                 mov eax, dword ptr [edi]
// 00454202  8b5008               mov edx, dword ptr [eax + 8]
// 00454205  8bcf                 mov ecx, edi
// 00454207  ffd2                 call edx
// 00454209  8d442410             lea eax, [esp + 0x10]
// 0045420d  50                   push eax
// 0045420e  8bce                 mov ecx, esi
// 00454210  e82beefaff           call 0x403040
// 00454215  8b08                 mov ecx, dword ptr [eax]
// 00454217  c644243403           mov byte ptr [esp + 0x34], 3
// 0045421c  e8cfeeffff           call 0x4530f0
// 00454221  8ba8b4010000         mov ebp, dword ptr [eax + 0x1b4]
// 00454227  8b442414             mov eax, dword ptr [esp + 0x14]
// 0045422b  c644243402           mov byte ptr [esp + 0x34], 2
// 00454230  85c0                 test eax, eax
// 00454232  742c                 je 0x454260
// 00454234  8bf8                 mov edi, eax
// 00454236  83c004               add eax, 4
// 00454239  83c9ff               or ecx, 0xffffffff
// 0045423c  f00fc108             lock xadd dword ptr [eax], ecx
// 00454240  751e                 jne 0x454260
// 00454242  8b17                 mov edx, dword ptr [edi]
// 00454244  8b4204               mov eax, dword ptr [edx + 4]
// 00454247  8bcf                 mov ecx, edi
// 00454249  ffd0                 call eax
// 0045424b  8d4f08               lea ecx, [edi + 8]
// 0045424e  83caff               or edx, 0xffffffff
// 00454251  f00fc111             lock xadd dword ptr [ecx], edx
// 00454255  7509                 jne 0x454260
// 00454257  8b07                 mov eax, dword ptr [edi]
// 00454259  8b5008               mov edx, dword ptr [eax + 8]
// 0045425c  8bcf                 mov ecx, edi
// 0045425e  ffd2                 call edx
// 00454260  8d442410             lea eax, [esp + 0x10]
// 00454264  50                   push eax
// 00454265  8bce                 mov ecx, esi
// 00454267  e8d4edfaff           call 0x403040
// 0045426c  8b00                 mov eax, dword ptr [eax]
// 0045426e  50                   push eax
// 0045426f  c644243804           mov byte ptr [esp + 0x38], 4
// 00454274  e8076a0400           call 0x49ac80
// 00454279  83c404               add esp, 4
// 0045427c  85c0                 test eax, eax
// 0045427e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00454282  0f95c3               setne bl
// 00454285  c644243402           mov byte ptr [esp + 0x34], 2
// 0045428a  85c0                 test eax, eax
// 0045428c  742c                 je 0x4542ba
// 0045428e  8bf0                 mov esi, eax
// 00454290  83c004               add eax, 4
// 00454293  83c9ff               or ecx, 0xffffffff
// 00454296  f00fc108             lock xadd dword ptr [eax], ecx
// 0045429a  751e                 jne 0x4542ba
// 0045429c  8b16                 mov edx, dword ptr [esi]
// 0045429e  8b4204               mov eax, dword ptr [edx + 4]
// 004542a1  8bce                 mov ecx, esi
// 004542a3  ffd0                 call eax
// 004542a5  8d4e08               lea ecx, [esi + 8]
// 004542a8  83caff               or edx, 0xffffffff
// 004542ab  f00fc111             lock xadd dword ptr [ecx], edx
// 004542af  7509                 jne 0x4542ba
// 004542b1  8b06                 mov eax, dword ptr [esi]
// 004542b3  8b5008               mov edx, dword ptr [eax + 8]
// 004542b6  8bce                 mov ecx, esi
// 004542b8  ffd2                 call edx
// 004542ba  85ed                 test ebp, ebp
// 004542bc  740b                 je 0x4542c9
// 004542be  84db                 test bl, bl
// 004542c0  7507                 jne 0x4542c9
// 004542c2  b801000000           mov eax, 1
// 004542c7  eb02                 jmp 0x4542cb
// 004542c9  33c0                 xor eax, eax
// 004542cb  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004542cf  8b11                 mov edx, dword ptr [ecx]
// 004542d1  50                   push eax
// 004542d2  8b02                 mov eax, dword ptr [edx]
// 004542d4  ffd0                 call eax
// 004542d6  8d4c2420             lea ecx, [esp + 0x20]
// 004542da  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004542e2  e8d9301200           call 0x5773c0
// 004542e7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004542eb  5f                   pop edi
// 004542ec  5e                   pop esi
// 004542ed  5d                   pop ebp
// 004542ee  64890d00000000       mov dword ptr fs:[0], ecx
// 004542f5  5b                   pop ebx
// 004542f6  83c428               add esp, 0x28
// 004542f9  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Counted {
    virtual ~Counted();
    virtual void dispose();
    virtual void destroy();
    long use;
    long weak;
    void release();
};

inline void Counted::release()
{
    if (_InterlockedDecrement(&use) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Info {
    char padding[0x1b4];
    int enabled;
};

struct Object {
    Info* getInfo();
};

struct ProviderShared {
    Object* pointer;
    Counted* count;
    ~ProviderShared();
};

inline ProviderShared::~ProviderShared()
{
    if (count)
        count->release();
}

struct Shared {
    Object* pointer;
    Counted* count;
    Shared(const ProviderShared&);
    Shared(const Shared&);
    ~Shared();
    Object* getPointer() const;
};

inline Shared::Shared(const ProviderShared& other)
    : pointer(other.pointer), count(other.count)
{
    if (count)
        _InterlockedIncrement(&count->use);
}

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), count(other.count)
{
    if (count)
        _InterlockedIncrement(&count->use);
}

inline Shared::~Shared()
{
    if (count)
        count->release();
}

inline Object* Shared::getPointer() const
{
    return pointer;
}

struct Provider {
    ProviderShared get();
};

struct Guard {
    char storage[12];
    Guard(Shared);
    ~Guard();
};

struct Command {
    virtual void enable(int);
};

void* __cdecl query(Object*);

struct CRobloxDoc {
    char padding[0x94];
    Provider* provider;
    Shared get();
    void update(Command*);
};

void CRobloxDoc::update(Command* command)
{
    Guard guard(provider->get());
    int enabled = get().pointer->getInfo()->enabled;
    bool blocked = query(get().getPointer()) != 0;
    command->enable(enabled && !blocked ? 1 : 0);
}
