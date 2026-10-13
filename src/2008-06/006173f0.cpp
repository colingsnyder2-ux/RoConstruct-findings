// from server: 100% by colin
// roc 2008-06 006173f0  unit: RBX::VInstance::?$FilteredSelection  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006173f0
//
// 006173f0  64a100000000         mov eax, dword ptr fs:[0]
// 006173f6  6aff                 push -1
// 006173f8  6868917d00           push 0x7d9168
// 006173fd  50                   push eax
// 006173fe  64892500000000       mov dword ptr fs:[0], esp
// 00617405  83ec08               sub esp, 8
// 00617408  56                   push esi
// 00617409  8bf1                 mov esi, ecx
// 0061740b  e830ffffff           call 0x617340
// 00617410  85c0                 test eax, eax
// 00617412  0f85ac000000         jne 0x6174c4
// 00617418  53                   push ebx
// 00617419  8d442408             lea eax, [esp + 8]
// 0061741d  57                   push edi
// 0061741e  50                   push eax
// 0061741f  e8bcfaffff           call 0x616ee0
// 00617424  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00617428  6800bf9700           push 0x97bf00
// 0061742d  6800646100           push 0x616400
// 00617432  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0061743a  e8f1fef3ff           call 0x557330
// 0061743f  83c40c               add esp, 0xc
// 00617442  e8f9edffff           call 0x616240
// 00617447  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 0061744d  2b8e9c010000         sub ecx, dword ptr [esi + 0x19c]
// 00617453  8bf8                 mov edi, eax
// 00617455  c1f903               sar ecx, 3
// 00617458  3bf9                 cmp edi, ecx
// 0061745a  7206                 jb 0x617462
// 0061745c  ff1590288000         call dword ptr [0x802890]
// 00617462  8b969c010000         mov edx, dword ptr [esi + 0x19c]
// 00617468  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0061746c  8d04fa               lea eax, [edx + edi*8]
// 0061746f  8d542410             lea edx, [esp + 0x10]
// 00617473  8908                 mov dword ptr [eax], ecx
// 00617475  52                   push edx
// 00617476  8d4804               lea ecx, [eax + 4]
// 00617479  e832b1deff           call 0x4025b0
// 0061747e  56                   push esi
// 0061747f  8bcb                 mov ecx, ebx
// 00617481  e86a34f4ff           call 0x55a8f0
// 00617486  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061748a  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00617492  85f6                 test esi, esi
// 00617494  742a                 je 0x6174c0
// 00617496  8d4604               lea eax, [esi + 4]
// 00617499  83c9ff               or ecx, 0xffffffff
// 0061749c  f00fc108             lock xadd dword ptr [eax], ecx
// 006174a0  751e                 jne 0x6174c0
// 006174a2  8b16                 mov edx, dword ptr [esi]
// 006174a4  8b4204               mov eax, dword ptr [edx + 4]
// 006174a7  8bce                 mov ecx, esi
// 006174a9  ffd0                 call eax
// 006174ab  8d4e08               lea ecx, [esi + 8]
// 006174ae  83caff               or edx, 0xffffffff
// 006174b1  f00fc111             lock xadd dword ptr [ecx], edx
// 006174b5  7509                 jne 0x6174c0
// 006174b7  8b06                 mov eax, dword ptr [esi]
// 006174b9  8b5008               mov edx, dword ptr [eax + 8]
// 006174bc  8bce                 mov ecx, esi
// 006174be  ffd2                 call edx
// 006174c0  5f                   pop edi
// 006174c1  8bc3                 mov eax, ebx
// 006174c3  5b                   pop ebx
// 006174c4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006174c8  5e                   pop esi
// 006174c9  64890d00000000       mov dword ptr fs:[0], ecx
// 006174d0  83c414               add esp, 0x14
// 006174d3  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct CChatPrompt;

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;

    void release();
};

struct Handle
{
    Control* p;
    Handle& operator=(const Handle&);
};

struct Object
{
    void attach(CChatPrompt*);
};

struct Shared
{
    Object* px;
    Handle pn;
    ~Shared();
};

extern Shared __cdecl create_shared();
extern unsigned __cdecl current_index();
extern void __cdecl register_callback(void (__cdecl*)(), void*);
extern void __cdecl callback();
extern char callback_data;
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct CChatPrompt
{
    char padding[0x19c];
    Shared* first;
    Shared* last;

    Object* existing();
    Object* func_00412710();
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

__forceinline Shared::~Shared()
{
    if (pn.p)
        pn.p->release();
}

Object* CChatPrompt::func_00412710()
{
    Object* result = existing();
    if (!result)
    {
        Shared value = create_shared();
        result = value.px;
        register_callback(callback, &callback_data);

        unsigned index = current_index();
        if (index >= static_cast<unsigned>(last - first))
            _invalid_parameter_noinfo();

        Shared& slot = first[index];
        slot.px = value.px;
        slot.pn = value.pn;
        result->attach(this);
    }
    return result;
}
