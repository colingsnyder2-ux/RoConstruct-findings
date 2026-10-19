// from server: 85% by colin
// from server: 84% by king_originala
// roc 2008-06 00454490  unit: CRobloxDoc  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00454490
//
// 00454490  6aff                 push -1
// 00454492  68f8217c00           push 0x7c21f8
// 00454497  64a100000000         mov eax, dword ptr fs:[0]
// 0045449d  50                   push eax
// 0045449e  64892500000000       mov dword ptr fs:[0], esp
// 004544a5  83ec1c               sub esp, 0x1c
// 004544a8  56                   push esi
// 004544a9  57                   push edi
// 004544aa  8bf9                 mov edi, ecx
// 004544ac  8b8f94000000         mov ecx, dword ptr [edi + 0x94]
// 004544b2  8d442410             lea eax, [esp + 0x10]
// 004544b6  50                   push eax
// 004544b7  e884640100           call 0x46a940
// 004544bc  8b10                 mov edx, dword ptr [eax]
// 004544be  83ec08               sub esp, 8
// 004544c1  8bcc                 mov ecx, esp
// 004544c3  8911                 mov dword ptr [ecx], edx
// 004544c5  8b4004               mov eax, dword ptr [eax + 4]
// 004544c8  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004544d0  89642410             mov dword ptr [esp + 0x10], esp
// 004544d4  894104               mov dword ptr [ecx + 4], eax
// 004544d7  85c0                 test eax, eax
// 004544d9  740c                 je 0x4544e7
// 004544db  83c004               add eax, 4
// 004544de  b901000000           mov ecx, 1
// 004544e3  f00fc108             lock xadd dword ptr [eax], ecx
// 004544e7  8d4c2420             lea ecx, [esp + 0x20]
// 004544eb  e850d6fbff           call 0x411b40
// 004544f0  8b742414             mov esi, dword ptr [esp + 0x14]
// 004544f4  c644242c02           mov byte ptr [esp + 0x2c], 2
// 004544f9  85f6                 test esi, esi
// 004544fb  742a                 je 0x454527
// 004544fd  8d5604               lea edx, [esi + 4]
// 00454500  83c8ff               or eax, 0xffffffff
// 00454503  f00fc102             lock xadd dword ptr [edx], eax
// 00454507  751e                 jne 0x454527
// 00454509  8b16                 mov edx, dword ptr [esi]
// 0045450b  8b4204               mov eax, dword ptr [edx + 4]
// 0045450e  8bce                 mov ecx, esi
// 00454510  ffd0                 call eax
// 00454512  8d4e08               lea ecx, [esi + 8]
// 00454515  83caff               or edx, 0xffffffff
// 00454518  f00fc111             lock xadd dword ptr [ecx], edx
// 0045451c  7509                 jne 0x454527
// 0045451e  8b06                 mov eax, dword ptr [esi]
// 00454520  8b5008               mov edx, dword ptr [eax + 8]
// 00454523  8bce                 mov ecx, esi
// 00454525  ffd2                 call edx
// 00454527  8d442408             lea eax, [esp + 8]
// 0045452b  50                   push eax
// 0045452c  8bcf                 mov ecx, edi
// 0045452e  e80debfaff           call 0x403040
// 00454533  8b08                 mov ecx, dword ptr [eax]
// 00454535  c644242c03           mov byte ptr [esp + 0x2c], 3
// 0045453a  85c9                 test ecx, ecx
// 0045453c  7409                 je 0x454547
// 0045453e  e84d99fdff           call 0x42de90
// 00454543  8bf8                 mov edi, eax
// 00454545  eb02                 jmp 0x454549
// 00454547  33ff                 xor edi, edi
// 00454549  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0045454d  c644242c02           mov byte ptr [esp + 0x2c], 2
// 00454552  85f6                 test esi, esi
// 00454554  742a                 je 0x454580
// 00454556  8d4e04               lea ecx, [esi + 4]
// 00454559  83caff               or edx, 0xffffffff
// 0045455c  f00fc111             lock xadd dword ptr [ecx], edx
// 00454560  751e                 jne 0x454580
// 00454562  8b06                 mov eax, dword ptr [esi]
// 00454564  8b5004               mov edx, dword ptr [eax + 4]
// 00454567  8bce                 mov ecx, esi
// 00454569  ffd2                 call edx
// 0045456b  8d4608               lea eax, [esi + 8]
// 0045456e  83c9ff               or ecx, 0xffffffff
// 00454571  f00fc108             lock xadd dword ptr [eax], ecx
// 00454575  7509                 jne 0x454580
// 00454577  8b16                 mov edx, dword ptr [esi]
// 00454579  8b4208               mov eax, dword ptr [edx + 8]
// 0045457c  8bce                 mov ecx, esi
// 0045457e  ffd0                 call eax
// 00454580  85ff                 test edi, edi
// 00454582  7410                 je 0x454594
// 00454584  83bf3801000000       cmp dword ptr [edi + 0x138], 0
// 0045458b  7407                 je 0x454594
// 0045458d  b801000000           mov eax, 1
// 00454592  eb02                 jmp 0x454596
// 00454594  33c0                 xor eax, eax
// 00454596  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0045459a  8b11                 mov edx, dword ptr [ecx]
// 0045459c  50                   push eax
// 0045459d  8b02                 mov eax, dword ptr [edx]
// 0045459f  ffd0                 call eax
// 004545a1  8d4c2418             lea ecx, [esp + 0x18]
// 004545a5  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 004545ad  e80e2e1200           call 0x5773c0
// 004545b2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004545b6  5f                   pop edi
// 004545b7  64890d00000000       mov dword ptr fs:[0], ecx
// 004545be  5e                   pop esi
// 004545bf  83c428               add esp, 0x28
// 004545c2  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long use_count;
    volatile long weak_count;
};

struct State
{
    unsigned char padding[0x138];
    int enabled;
};

struct Object
{
    State* getState();
};

struct Result
{
    Object* object;
    Control* control;
    State* getState() const;
    ~Result();
};

inline State* Result::getState() const
{
    return object ? object->getState() : 0;
}

inline Result::~Result()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->use_count, -1) == 1)
    {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak_count, -1) == 1)
            p->destroy();
    }
}

struct Pair
{
    Object* object;
    Control* control;
    Pair(const Result& other);
    ~Pair();
};

inline Pair::Pair(const Result& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->use_count);
}

inline Pair::~Pair()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->use_count, -1) == 1)
    {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak_count, -1) == 1)
            p->destroy();
    }
}

struct Source
{
    Result get();
};

struct Guard
{
    unsigned char storage[12];
    Guard(Pair value);
    ~Guard();
};

struct Callback
{
    virtual void setEnabled(int value);
};

struct S
{
    unsigned char padding[0x94];
    Source* source;
    Result get();
    void f(Callback* callback);
};

void S::f(Callback* callback)
{
    Guard guard(source->get());

    State* state = get().getState();

    int enabled;
    if (state && state->enabled)
        enabled = 1;
    else
        enabled = 0;

    callback->setEnabled(enabled);
}
