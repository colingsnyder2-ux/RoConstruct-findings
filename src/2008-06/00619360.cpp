// from server: 100% by colin
// roc 2008-06 00619360  unit: RBX::Flag  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00619360
//
// 00619360  64a100000000         mov eax, dword ptr fs:[0]
// 00619366  6aff                 push -1
// 00619368  6868917d00           push 0x7d9168
// 0061936d  50                   push eax
// 0061936e  64892500000000       mov dword ptr fs:[0], esp
// 00619375  83ec08               sub esp, 8
// 00619378  56                   push esi
// 00619379  8bf1                 mov esi, ecx
// 0061937b  e800fdffff           call 0x619080
// 00619380  85c0                 test eax, eax
// 00619382  0f85ac000000         jne 0x619434
// 00619388  53                   push ebx
// 00619389  8d442408             lea eax, [esp + 8]
// 0061938d  57                   push edi
// 0061938e  50                   push eax
// 0061938f  e81c7ffaff           call 0x5c12b0
// 00619394  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00619398  6818bf9700           push 0x97bf18
// 0061939d  6850866100           push 0x618650
// 006193a2  c744242800000000     mov dword ptr [esp + 0x28], 0
// 006193aa  e881dff3ff           call 0x557330
// 006193af  83c40c               add esp, 0xc
// 006193b2  e869f1ffff           call 0x618520
// 006193b7  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 006193bd  2b8e9c010000         sub ecx, dword ptr [esi + 0x19c]
// 006193c3  8bf8                 mov edi, eax
// 006193c5  c1f903               sar ecx, 3
// 006193c8  3bf9                 cmp edi, ecx
// 006193ca  7206                 jb 0x6193d2
// 006193cc  ff1590288000         call dword ptr [0x802890]
// 006193d2  8b969c010000         mov edx, dword ptr [esi + 0x19c]
// 006193d8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006193dc  8d04fa               lea eax, [edx + edi*8]
// 006193df  8d542410             lea edx, [esp + 0x10]
// 006193e3  8908                 mov dword ptr [eax], ecx
// 006193e5  52                   push edx
// 006193e6  8d4804               lea ecx, [eax + 4]
// 006193e9  e8c291deff           call 0x4025b0
// 006193ee  56                   push esi
// 006193ef  8bcb                 mov ecx, ebx
// 006193f1  e8fa14f4ff           call 0x55a8f0
// 006193f6  8b742410             mov esi, dword ptr [esp + 0x10]
// 006193fa  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00619402  85f6                 test esi, esi
// 00619404  742a                 je 0x619430
// 00619406  8d4604               lea eax, [esi + 4]
// 00619409  83c9ff               or ecx, 0xffffffff
// 0061940c  f00fc108             lock xadd dword ptr [eax], ecx
// 00619410  751e                 jne 0x619430
// 00619412  8b16                 mov edx, dword ptr [esi]
// 00619414  8b4204               mov eax, dword ptr [edx + 4]
// 00619417  8bce                 mov ecx, esi
// 00619419  ffd0                 call eax
// 0061941b  8d4e08               lea ecx, [esi + 8]
// 0061941e  83caff               or edx, 0xffffffff
// 00619421  f00fc111             lock xadd dword ptr [ecx], edx
// 00619425  7509                 jne 0x619430
// 00619427  8b06                 mov eax, dword ptr [esi]
// 00619429  8b5008               mov edx, dword ptr [eax + 8]
// 0061942c  8bce                 mov ecx, esi
// 0061942e  ffd2                 call edx
// 00619430  5f                   pop edi
// 00619431  8bc3                 mov eax, ebx
// 00619433  5b                   pop ebx
// 00619434  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00619438  5e                   pop esi
// 00619439  64890d00000000       mov dword ptr fs:[0], ecx
// 00619440  83c414               add esp, 0x14
// 00619443  c3                   ret 

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
