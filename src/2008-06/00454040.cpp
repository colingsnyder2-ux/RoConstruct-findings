// from server: 65% by colin
// from server: 64% by king_originala
// roc 2008-06 00454040  unit: CRobloxDoc  size: 303 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00454040
//
// 00454040  6aff                 push -1
// 00454042  68f8217c00           push 0x7c21f8
// 00454047  64a100000000         mov eax, dword ptr fs:[0]
// 0045404d  50                   push eax
// 0045404e  64892500000000       mov dword ptr fs:[0], esp
// 00454055  83ec1c               sub esp, 0x1c
// 00454058  53                   push ebx
// 00454059  56                   push esi
// 0045405a  57                   push edi
// 0045405b  8bf1                 mov esi, ecx
// 0045405d  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00454063  8d442414             lea eax, [esp + 0x14]
// 00454067  50                   push eax
// 00454068  e8d3680100           call 0x46a940
// 0045406d  8b10                 mov edx, dword ptr [eax]
// 0045406f  83ec08               sub esp, 8
// 00454072  8bcc                 mov ecx, esp
// 00454074  8911                 mov dword ptr [ecx], edx
// 00454076  8b4004               mov eax, dword ptr [eax + 4]
// 00454079  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00454081  89642414             mov dword ptr [esp + 0x14], esp
// 00454085  894104               mov dword ptr [ecx + 4], eax
// 00454088  85c0                 test eax, eax
// 0045408a  740c                 je 0x454098
// 0045408c  83c004               add eax, 4
// 0045408f  b901000000           mov ecx, 1
// 00454094  f00fc108             lock xadd dword ptr [eax], ecx
// 00454098  8d4c2424             lea ecx, [esp + 0x24]
// 0045409c  e89fdafbff           call 0x411b40
// 004540a1  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004540a5  b302                 mov bl, 2
// 004540a7  885c2430             mov byte ptr [esp + 0x30], bl
// 004540ab  85ff                 test edi, edi
// 004540ad  742a                 je 0x4540d9
// 004540af  8d5704               lea edx, [edi + 4]
// 004540b2  83c8ff               or eax, 0xffffffff
// 004540b5  f00fc102             lock xadd dword ptr [edx], eax
// 004540b9  751e                 jne 0x4540d9
// 004540bb  8b17                 mov edx, dword ptr [edi]
// 004540bd  8b4204               mov eax, dword ptr [edx + 4]
// 004540c0  8bcf                 mov ecx, edi
// 004540c2  ffd0                 call eax
// 004540c4  8d4f08               lea ecx, [edi + 8]
// 004540c7  83caff               or edx, 0xffffffff
// 004540ca  f00fc111             lock xadd dword ptr [ecx], edx
// 004540ce  7509                 jne 0x4540d9
// 004540d0  8b07                 mov eax, dword ptr [edi]
// 004540d2  8b5008               mov edx, dword ptr [eax + 8]
// 004540d5  8bcf                 mov ecx, edi
// 004540d7  ffd2                 call edx
// 004540d9  8d44240c             lea eax, [esp + 0xc]
// 004540dd  50                   push eax
// 004540de  8bce                 mov ecx, esi
// 004540e0  e85beffaff           call 0x403040
// 004540e5  8b08                 mov ecx, dword ptr [eax]
// 004540e7  c644243003           mov byte ptr [esp + 0x30], 3
// 004540ec  e8ffefffff           call 0x4530f0
// 004540f1  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004540f5  8b80b4010000         mov eax, dword ptr [eax + 0x1b4]
// 004540fb  8b11                 mov edx, dword ptr [ecx]
// 004540fd  895c2438             mov dword ptr [esp + 0x38], ebx
// 00454101  33db                 xor ebx, ebx
// 00454103  83f801               cmp eax, 1
// 00454106  8b02                 mov eax, dword ptr [edx]
// 00454108  0f94c3               sete bl
// 0045410b  53                   push ebx
// 0045410c  ffd0                 call eax
// 0045410e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00454112  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00454116  885c2430             mov byte ptr [esp + 0x30], bl
// 0045411a  85c0                 test eax, eax
// 0045411c  742c                 je 0x45414a
// 0045411e  8bf0                 mov esi, eax
// 00454120  83c004               add eax, 4
// 00454123  83c9ff               or ecx, 0xffffffff
// 00454126  f00fc108             lock xadd dword ptr [eax], ecx
// 0045412a  751e                 jne 0x45414a
// 0045412c  8b16                 mov edx, dword ptr [esi]
// 0045412e  8b4204               mov eax, dword ptr [edx + 4]
// 00454131  8bce                 mov ecx, esi
// 00454133  ffd0                 call eax
// 00454135  8d4e08               lea ecx, [esi + 8]
// 00454138  83caff               or edx, 0xffffffff
// 0045413b  f00fc111             lock xadd dword ptr [ecx], edx
// 0045413f  7509                 jne 0x45414a
// 00454141  8b06                 mov eax, dword ptr [esi]
// 00454143  8b5008               mov edx, dword ptr [eax + 8]
// 00454146  8bce                 mov ecx, esi
// 00454148  ffd2                 call edx
// 0045414a  8d4c241c             lea ecx, [esp + 0x1c]
// 0045414e  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00454156  e865321200           call 0x5773c0
// 0045415b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0045415f  5f                   pop edi
// 00454160  5e                   pop esi
// 00454161  64890d00000000       mov dword ptr fs:[0], ecx
// 00454168  5b                   pop ebx
// 00454169  83c428               add esp, 0x28
// 0045416c  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Count {
    virtual ~Count();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    long use_count;
    long weak_count;
};

struct State {
    unsigned char padding[0x1b4];
    int value;
};

struct Object {
    State* state();
};

struct Shared {
    Object* pointer;
    Count* count;
    ~Shared();
};

inline Shared::~Shared()
{
    Count* p = count;
    if (p && _InterlockedExchangeAdd(&p->use_count, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak_count, -1) == 0)
            p->destroy();
    }
}

struct GuardShared {
    Object* pointer;
    Count* count;
    GuardShared(const Shared& other);
    ~GuardShared();
};

inline GuardShared::GuardShared(const Shared& other)
    : pointer(other.pointer), count(other.count)
{
    if (count)
        _InterlockedIncrement(&count->use_count);
}

inline GuardShared::~GuardShared()
{
    Count* p = count;
    if (p && _InterlockedExchangeAdd(&p->use_count, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak_count, -1) == 0)
            p->destroy();
    }
}

struct Source {
    Shared get();
};

struct Guard {
    unsigned char storage[12];
    Guard(GuardShared value);
    ~Guard();
};

struct Receiver {
    virtual void set(int value) = 0;
};

struct S {
    unsigned char padding[0x94];
    Source* source;
    Shared get();
    void f(Receiver* receiver);
};

void S::f(Receiver* receiver)
{
    Guard guard(source->get());
    receiver->set(get().pointer->state()->value == 1);
}
