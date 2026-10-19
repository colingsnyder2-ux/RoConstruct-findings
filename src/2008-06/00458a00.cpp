// from server: 98% by colin
// from server: 96% by king_originala
// roc 2008-06 00458a00  unit: CRobloxReportPaneView  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00458a00
//
// 00458a00  51                   push ecx
// 00458a01  56                   push esi
// 00458a02  8bf1                 mov esi, ecx
// 00458a04  e8b9822400           call 0x6a0cc2
// 00458a09  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00458a0c  83ec08               sub esp, 8
// 00458a0f  8bc4                 mov eax, esp
// 00458a11  8964240c             mov dword ptr [esp + 0xc], esp
// 00458a15  85c9                 test ecx, ecx
// 00458a17  7408                 je 0x458a21
// 00458a19  50                   push eax
// 00458a1a  e821a6faff           call 0x403040
// 00458a1f  eb0d                 jmp 0x458a2e
// 00458a21  c70000000000         mov dword ptr [eax], 0
// 00458a27  c7400400000000       mov dword ptr [eax + 4], 0
// 00458a2e  8bce                 mov ecx, esi
// 00458a30  e8cbfcffff           call 0x458700
// 00458a35  83ec08               sub esp, 8
// 00458a38  8bc4                 mov eax, esp
// 00458a3a  c70000000000         mov dword ptr [eax], 0
// 00458a40  c7400400000000       mov dword ptr [eax + 4], 0
// 00458a47  8b155cc29600         mov edx, dword ptr [0x96c25c]
// 00458a4d  8964240c             mov dword ptr [esp + 0xc], esp
// 00458a51  83ec08               sub esp, 8
// 00458a54  8bc4                 mov eax, esp
// 00458a56  8910                 mov dword ptr [eax], edx
// 00458a58  8b1560c29600         mov edx, dword ptr [0x96c260]
// 00458a5e  895004               mov dword ptr [eax + 4], edx
// 00458a61  8bc2                 mov eax, edx
// 00458a63  8d8ed4030000         lea ecx, [esi + 0x3d4]
// 00458a69  89642414             mov dword ptr [esp + 0x14], esp
// 00458a6d  85c0                 test eax, eax
// 00458a6f  740c                 je 0x458a7d
// 00458a71  83c004               add eax, 4
// 00458a74  ba01000000           mov edx, 1
// 00458a79  f00fc110             lock xadd dword ptr [eax], edx
// 00458a7d  8b01                 mov eax, dword ptr [ecx]
// 00458a7f  8b10                 mov edx, dword ptr [eax]
// 00458a81  ffd2                 call edx
// 00458a83  5e                   pop esi
// 00458a84  59                   pop ecx
// 00458a85  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)

struct Control
{
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;

    void release();
};

inline void Control::release()
{
    if (_InterlockedExchangeAdd(&strong, -1) == 1)
    {
        dispose();
        if (_InterlockedExchangeAdd(&weak, -1) == 1)
            destroy();
    }
}

struct Source;

struct Result
{
    unsigned int first;
    unsigned int second;

    Result();
    Result(Source*);
    Result(const Result&);
    ~Result();
};

struct Source
{
    void copy(Result* output);
};

inline Result::Result()
{
    first = 0;
    second = 0;
}

inline Result::Result(Source* source)
{
    if (source)
        source->copy(this);
    else
    {
        first = 0;
        second = 0;
    }
}

inline Result::Result(const Result& other)
    : first(other.first), second(other.second)
{
    Control* control = reinterpret_cast<Control*>(second);
    if (control)
    {
        volatile long* count = &control->strong;
        _InterlockedIncrement(count);
    }
}

inline Result::~Result()
{
    if (second)
        reinterpret_cast<Control*>(second)->release();
}

extern Result globalResult;

struct Sink
{
    virtual void invoke(Result, Result);
};

struct S
{
    unsigned char padding[0x54];
    Source* source;
    unsigned char padding2[0x37c];
    Sink sink;

    void initialize();
    void forward(Result);
    void f();
};

void S::f()
{
    initialize();
    forward(Result(source));
    Sink* destination = &sink;
    destination->invoke(globalResult, Result());
}
