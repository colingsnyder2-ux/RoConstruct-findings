// from server: 69% by colin
// from server: 62% by king_originala
// roc 2008-06 005ff750  unit: RBX::Mouse  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ff750
//
// 005ff750  64a100000000         mov eax, dword ptr fs:[0]
// 005ff756  6aff                 push -1
// 005ff758  6868917d00           push 0x7d9168
// 005ff75d  50                   push eax
// 005ff75e  64892500000000       mov dword ptr fs:[0], esp
// 005ff765  83ec08               sub esp, 8
// 005ff768  53                   push ebx
// 005ff769  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005ff76d  56                   push esi
// 005ff76e  8bf1                 mov esi, ecx
// 005ff770  83bec401000005       cmp dword ptr [esi + 0x1c4], 5
// 005ff777  57                   push edi
// 005ff778  0f8d8d000000         jge 0x5ff80b
// 005ff77e  83fb05               cmp ebx, 5
// 005ff781  0f8c84000000         jl 0x5ff80b
// 005ff787  e814faffff           call 0x5ff1a0
// 005ff78c  8d44240c             lea eax, [esp + 0xc]
// 005ff790  50                   push eax
// 005ff791  8bce                 mov ecx, esi
// 005ff793  8d7e14               lea edi, [esi + 0x14]
// 005ff796  e8e5feffff           call 0x5ff680
// 005ff79b  8b10                 mov edx, dword ptr [eax]
// 005ff79d  83ec08               sub esp, 8
// 005ff7a0  8bcc                 mov ecx, esp
// 005ff7a2  8911                 mov dword ptr [ecx], edx
// 005ff7a4  8b4004               mov eax, dword ptr [eax + 4]
// 005ff7a7  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005ff7af  8964242c             mov dword ptr [esp + 0x2c], esp
// 005ff7b3  894104               mov dword ptr [ecx + 4], eax
// 005ff7b6  85c0                 test eax, eax
// 005ff7b8  740c                 je 0x5ff7c6
// 005ff7ba  83c004               add eax, 4
// 005ff7bd  b901000000           mov ecx, 1
// 005ff7c2  f00fc108             lock xadd dword ptr [eax], ecx
// 005ff7c6  57                   push edi
// 005ff7c7  b958b79700           mov ecx, 0x97b758
// 005ff7cc  e82fdae9ff           call 0x49d200
// 005ff7d1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005ff7d5  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005ff7dd  85ff                 test edi, edi
// 005ff7df  742a                 je 0x5ff80b
// 005ff7e1  8d5704               lea edx, [edi + 4]
// 005ff7e4  83c8ff               or eax, 0xffffffff
// 005ff7e7  f00fc102             lock xadd dword ptr [edx], eax
// 005ff7eb  751e                 jne 0x5ff80b
// 005ff7ed  8b17                 mov edx, dword ptr [edi]
// 005ff7ef  8b4204               mov eax, dword ptr [edx + 4]
// 005ff7f2  8bcf                 mov ecx, edi
// 005ff7f4  ffd0                 call eax
// 005ff7f6  8d4f08               lea ecx, [edi + 8]
// 005ff7f9  83caff               or edx, 0xffffffff
// 005ff7fc  f00fc111             lock xadd dword ptr [ecx], edx
// 005ff800  7509                 jne 0x5ff80b
// 005ff802  8b07                 mov eax, dword ptr [edi]
// 005ff804  8b5008               mov edx, dword ptr [eax + 8]
// 005ff807  8bcf                 mov ecx, edi
// 005ff809  ffd2                 call edx
// 005ff80b  83fb06               cmp ebx, 6
// 005ff80e  751f                 jne 0x5ff82f
// 005ff810  8d4614               lea eax, [esi + 0x14]
// 005ff813  50                   push eax
// 005ff814  b918b89700           mov ecx, 0x97b818
// 005ff819  e802bef6ff           call 0x56b620
// 005ff81e  85c0                 test eax, eax
// 005ff820  740d                 je 0x5ff82f
// 005ff822  8d4c2424             lea ecx, [esp + 0x24]
// 005ff826  51                   push ecx
// 005ff827  8d4810               lea ecx, [eax + 0x10]
// 005ff82a  e82161ebff           call 0x4b5950
// 005ff82f  83bec401000006       cmp dword ptr [esi + 0x1c4], 6
// 005ff836  751f                 jne 0x5ff857
// 005ff838  8d4614               lea eax, [esi + 0x14]
// 005ff83b  50                   push eax
// 005ff83c  b9d4b69700           mov ecx, 0x97b6d4
// 005ff841  e8dabdf6ff           call 0x56b620
// 005ff846  85c0                 test eax, eax
// 005ff848  740d                 je 0x5ff857
// 005ff84a  8d542424             lea edx, [esp + 0x24]
// 005ff84e  52                   push edx
// 005ff84f  8d4810               lea ecx, [eax + 0x10]
// 005ff852  e8f960ebff           call 0x4b5950
// 005ff857  83bec401000005       cmp dword ptr [esi + 0x1c4], 5
// 005ff85e  7c4c                 jl 0x5ff8ac
// 005ff860  83fb05               cmp ebx, 5
// 005ff863  7d47                 jge 0x5ff8ac
// 005ff865  8d4614               lea eax, [esi + 0x14]
// 005ff868  50                   push eax
// 005ff869  b908b79700           mov ecx, 0x97b708
// 005ff86e  e8adbdf6ff           call 0x56b620
// 005ff873  85c0                 test eax, eax
// 005ff875  740d                 je 0x5ff884
// 005ff877  8d4c2424             lea ecx, [esp + 0x24]
// 005ff87b  51                   push ecx
// 005ff87c  8d4810               lea ecx, [eax + 0x10]
// 005ff87f  e8cc60ebff           call 0x4b5950
// 005ff884  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 005ff88b  741f                 je 0x5ff8ac
// 005ff88d  8b8eac010000         mov ecx, dword ptr [esi + 0x1ac]
// 005ff893  c7860002000000000000 mov dword ptr [esi + 0x200], 0
// 005ff89d  e88e2efaff           call 0x5a2730
// 005ff8a2  c786ac01000000000000 mov dword ptr [esi + 0x1ac], 0
// 005ff8ac  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ff8b0  899ec4010000         mov dword ptr [esi + 0x1c4], ebx
// 005ff8b6  5f                   pop edi
// 005ff8b7  5e                   pop esi
// 005ff8b8  64890d00000000       mov dword ptr fs:[0], ecx
// 005ff8bf  5b                   pop ebx
// 005ff8c0  83c414               add esp, 0x14
// 005ff8c3  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct __declspec(dllimport) Shared
{
    void* pointer;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared()
{
    if (control && _InterlockedExchangeAdd(&control->strong, -1) == 1)
    {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
            control->destroy();
    }
}

struct Signal
{
    void invoke(int*);
};

struct Entry
{
    char padding[0x10];
    Signal signal;
};

struct Descriptor
{
    void bind(void*, Shared);
    Entry* find(void*);
};

extern Descriptor enteredDescriptor;
extern Descriptor activeDescriptor;
extern Descriptor inactiveDescriptor;
extern Descriptor leftDescriptor;

struct Workspace
{
    void reset();
};

struct S
{
    char padding0[0x14];
    char identity[0x198];
    Workspace* workspace;
    char padding1[0x14];
    int state;
    char padding2[0x38];
    int connected;

    void prepare();
    Shared getShared();
    void setState(int);
};

void S::setState(int value)
{
    const int next = value;

    if (state < 5 && next >= 5)
    {
        prepare();
        const Shared& shared = getShared();
        enteredDescriptor.bind(identity, shared);
    }

    if (next == 6)
    {
        Entry* entry = activeDescriptor.find(identity);
        if (entry)
            entry->signal.invoke(&value);
    }

    if (state == 6)
    {
        Entry* entry = inactiveDescriptor.find(identity);
        if (entry)
            entry->signal.invoke(&value);
    }

    if (state >= 5 && next < 5)
    {
        Entry* entry = leftDescriptor.find(identity);
        if (entry)
            entry->signal.invoke(&value);

        if (connected)
        {
            connected = 0;
            workspace->reset();
            workspace = 0;
        }
    }

    state = next;
}
