// from server: 98% by colin
// roc 2008-06 005dc540  unit: RBX::VPartInstance::?$FilteredSelection  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dc540
//
// 005dc540  64a100000000         mov eax, dword ptr fs:[0]
// 005dc546  6aff                 push -1
// 005dc548  6868917d00           push 0x7d9168
// 005dc54d  50                   push eax
// 005dc54e  8b442410             mov eax, dword ptr [esp + 0x10]
// 005dc552  64892500000000       mov dword ptr fs:[0], esp
// 005dc559  83ec08               sub esp, 8
// 005dc55c  56                   push esi
// 005dc55d  8bf1                 mov esi, ecx
// 005dc55f  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 005dc565  3bc8                 cmp ecx, eax
// 005dc567  7477                 je 0x5dc5e0
// 005dc569  50                   push eax
// 005dc56a  8d442408             lea eax, [esp + 8]
// 005dc56e  50                   push eax
// 005dc56f  e8ccc40300           call 0x618a40
// 005dc574  83c408               add esp, 8
// 005dc577  8b08                 mov ecx, dword ptr [eax]
// 005dc579  83c004               add eax, 4
// 005dc57c  898e04020000         mov dword ptr [esi + 0x204], ecx
// 005dc582  50                   push eax
// 005dc583  8d8e08020000         lea ecx, [esi + 0x208]
// 005dc589  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005dc591  e81a60e2ff           call 0x4025b0
// 005dc596  8b442408             mov eax, dword ptr [esp + 8]
// 005dc59a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005dc5a2  85c0                 test eax, eax
// 005dc5a4  742e                 je 0x5dc5d4
// 005dc5a6  57                   push edi
// 005dc5a7  8bf8                 mov edi, eax
// 005dc5a9  83c004               add eax, 4
// 005dc5ac  83caff               or edx, 0xffffffff
// 005dc5af  f00fc110             lock xadd dword ptr [eax], edx
// 005dc5b3  751e                 jne 0x5dc5d3
// 005dc5b5  8b07                 mov eax, dword ptr [edi]
// 005dc5b7  8b5004               mov edx, dword ptr [eax + 4]
// 005dc5ba  8bcf                 mov ecx, edi
// 005dc5bc  ffd2                 call edx
// 005dc5be  8d4708               lea eax, [edi + 8]
// 005dc5c1  83c9ff               or ecx, 0xffffffff
// 005dc5c4  f00fc108             lock xadd dword ptr [eax], ecx
// 005dc5c8  7509                 jne 0x5dc5d3
// 005dc5ca  8b17                 mov edx, dword ptr [edi]
// 005dc5cc  8b4208               mov eax, dword ptr [edx + 8]
// 005dc5cf  8bcf                 mov ecx, edi
// 005dc5d1  ffd0                 call eax
// 005dc5d3  5f                   pop edi
// 005dc5d4  68dca59700           push 0x97a5dc
// 005dc5d9  8bce                 mov ecx, esi
// 005dc5db  e82015e3ff           call 0x40db00
// 005dc5e0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dc5e4  5e                   pop esi
// 005dc5e5  64890d00000000       mov dword ptr fs:[0], ecx
// 005dc5ec  83c414               add esp, 0x14
// 005dc5ef  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;

    void release();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Reference
{
    Control* control;

    Reference& operator=(const Reference&);
    ~Reference();
};

__forceinline Reference::~Reference()
{
    if (control)
        control->release();
}

struct Value
{
    void* volatile object;
    Reference reference;
};

Value __cdecl makeValue(void*);
extern char property[];

struct S
{
    char padding[0x204];
    Value value;

    void notify(const void*);
    void set(void*);
};

void S::set(void* object)
{
    if (value.object != object)
    {
        value = makeValue(object);
        notify(property);
    }
}
