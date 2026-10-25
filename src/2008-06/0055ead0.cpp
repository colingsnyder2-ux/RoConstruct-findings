// from server: 100% by king_originala
// roc 2008-06 0055ead0  unit: RBX::MD5HasherImpl  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055ead0
//
// 0055ead0  6aff                 push -1
// 0055ead2  68d1e97c00           push 0x7ce9d1
// 0055ead7  64a100000000         mov eax, dword ptr fs:[0]
// 0055eadd  50                   push eax
// 0055eade  64892500000000       mov dword ptr fs:[0], esp
// 0055eae5  83ec0c               sub esp, 0xc
// 0055eae8  53                   push ebx
// 0055eae9  56                   push esi
// 0055eaea  33db                 xor ebx, ebx
// 0055eaec  57                   push edi
// 0055eaed  895c2414             mov dword ptr [esp + 0x14], ebx
// 0055eaf1  8b742430             mov esi, dword ptr [esp + 0x30]
// 0055eaf5  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0055eaf9  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0055eb01  3bf7                 cmp esi, edi
// 0055eb03  7428                 je 0x55eb2d
// 0055eb05  53                   push ebx
// 0055eb06  8d442410             lea eax, [esp + 0x10]
// 0055eb0a  50                   push eax
// 0055eb0b  8d4c2444             lea ecx, [esp + 0x44]
// 0055eb0f  51                   push ecx
// 0055eb10  885c241c             mov byte ptr [esp + 0x1c], bl
// 0055eb14  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0055eb18  52                   push edx
// 0055eb19  8d4c2450             lea ecx, [esp + 0x50]
// 0055eb1d  8974241c             mov dword ptr [esp + 0x1c], esi
// 0055eb21  e8baf0ffff           call 0x55dbe0
// 0055eb26  83c620               add esi, 0x20
// 0055eb29  3bf7                 cmp esi, edi
// 0055eb2b  75d8                 jne 0x55eb05
// 0055eb2d  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0055eb31  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0055eb35  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0055eb39  8b542444             mov edx, dword ptr [esp + 0x44]
// 0055eb3d  8907                 mov dword ptr [edi], eax
// 0055eb3f  8b442448             mov eax, dword ptr [esp + 0x48]
// 0055eb43  894f04               mov dword ptr [edi + 4], ecx
// 0055eb46  895708               mov dword ptr [edi + 8], edx
// 0055eb49  89470c               mov dword ptr [edi + 0xc], eax
// 0055eb4c  3bc3                 cmp eax, ebx
// 0055eb4e  7410                 je 0x55eb60
// 0055eb50  83c004               add eax, 4
// 0055eb53  b901000000           mov ecx, 1
// 0055eb58  f00fc108             lock xadd dword ptr [eax], ecx
// 0055eb5c  8b442448             mov eax, dword ptr [esp + 0x48]
// 0055eb60  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0055eb68  885c2420             mov byte ptr [esp + 0x20], bl
// 0055eb6c  3bc3                 cmp eax, ebx
// 0055eb6e  742c                 je 0x55eb9c
// 0055eb70  8bf0                 mov esi, eax
// 0055eb72  83c004               add eax, 4
// 0055eb75  83caff               or edx, 0xffffffff
// 0055eb78  f00fc110             lock xadd dword ptr [eax], edx
// 0055eb7c  751e                 jne 0x55eb9c
// 0055eb7e  8b06                 mov eax, dword ptr [esi]
// 0055eb80  8b5004               mov edx, dword ptr [eax + 4]
// 0055eb83  8bce                 mov ecx, esi
// 0055eb85  ffd2                 call edx
// 0055eb87  8d4608               lea eax, [esi + 8]
// 0055eb8a  83c9ff               or ecx, 0xffffffff
// 0055eb8d  f00fc108             lock xadd dword ptr [eax], ecx
// 0055eb91  7509                 jne 0x55eb9c
// 0055eb93  8b16                 mov edx, dword ptr [esi]
// 0055eb95  8b4208               mov eax, dword ptr [edx + 8]
// 0055eb98  8bce                 mov ecx, esi
// 0055eb9a  ffd0                 call eax
// 0055eb9c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0055eba0  8bc7                 mov eax, edi
// 0055eba2  5f                   pop edi
// 0055eba3  5e                   pop esi
// 0055eba4  5b                   pop ebx
// 0055eba5  64890d00000000       mov dword ptr fs:[0], ecx
// 0055ebac  83c418               add esp, 0x18
// 0055ebaf  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

inline void add_ref(volatile long* count)
{
    _InterlockedExchangeAdd(count, 1);
}

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Empty {};

struct Iterator {
    void* owner;
    char* current;
};

struct Result;

struct Helper {
    void* first;
    void* second;
    Control* control;
    void insert(Empty, Result*, char**, int);
};

struct Result {
    void* prefix;
    Helper helper;

    Result(const Result& other);
    ~Result();
};

inline Result::Result(const Result& other)
    : prefix(other.prefix), helper(other.helper)
{
    if (other.helper.control)
        add_ref(&other.helper.control->strong);
}

inline Result::~Result()
{
    if (helper.control) {
        Control* p = helper.control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

Result process(Iterator first, Iterator last, Result result)
{
    char* p = first.current;
    char* end = last.current;
    for (; p != end; p += 32) {
        char* current = p;
        result.helper.insert(Empty(), &result, &current, 0);
    }
    return result;
}
