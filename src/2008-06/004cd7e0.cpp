// from server: 100% by colin
// roc 2008-06 004cd7e0  unit: RBX::PhysicsService  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cd7e0
//
// 004cd7e0  64a100000000         mov eax, dword ptr fs:[0]
// 004cd7e6  6aff                 push -1
// 004cd7e8  6868917d00           push 0x7d9168
// 004cd7ed  50                   push eax
// 004cd7ee  64892500000000       mov dword ptr fs:[0], esp
// 004cd7f5  83ec08               sub esp, 8
// 004cd7f8  56                   push esi
// 004cd7f9  8bf1                 mov esi, ecx
// 004cd7fb  e8a0f4ffff           call 0x4ccca0
// 004cd800  85c0                 test eax, eax
// 004cd802  0f85ac000000         jne 0x4cd8b4
// 004cd808  53                   push ebx
// 004cd809  8d442408             lea eax, [esp + 8]
// 004cd80d  57                   push edi
// 004cd80e  50                   push eax
// 004cd80f  e84cffffff           call 0x4cd760
// 004cd814  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004cd818  68d41a9700           push 0x971ad4
// 004cd81d  6850a34c00           push 0x4ca350
// 004cd822  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004cd82a  e8019b0800           call 0x557330
// 004cd82f  83c40c               add esp, 0xc
// 004cd832  e8a9c3ffff           call 0x4c9be0
// 004cd837  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 004cd83d  2b8e9c010000         sub ecx, dword ptr [esi + 0x19c]
// 004cd843  8bf8                 mov edi, eax
// 004cd845  c1f903               sar ecx, 3
// 004cd848  3bf9                 cmp edi, ecx
// 004cd84a  7206                 jb 0x4cd852
// 004cd84c  ff1590288000         call dword ptr [0x802890]
// 004cd852  8b969c010000         mov edx, dword ptr [esi + 0x19c]
// 004cd858  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cd85c  8d04fa               lea eax, [edx + edi*8]
// 004cd85f  8d542410             lea edx, [esp + 0x10]
// 004cd863  8908                 mov dword ptr [eax], ecx
// 004cd865  52                   push edx
// 004cd866  8d4804               lea ecx, [eax + 4]
// 004cd869  e8424df3ff           call 0x4025b0
// 004cd86e  56                   push esi
// 004cd86f  8bcb                 mov ecx, ebx
// 004cd871  e87ad00800           call 0x55a8f0
// 004cd876  8b742410             mov esi, dword ptr [esp + 0x10]
// 004cd87a  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004cd882  85f6                 test esi, esi
// 004cd884  742a                 je 0x4cd8b0
// 004cd886  8d4604               lea eax, [esi + 4]
// 004cd889  83c9ff               or ecx, 0xffffffff
// 004cd88c  f00fc108             lock xadd dword ptr [eax], ecx
// 004cd890  751e                 jne 0x4cd8b0
// 004cd892  8b16                 mov edx, dword ptr [esi]
// 004cd894  8b4204               mov eax, dword ptr [edx + 4]
// 004cd897  8bce                 mov ecx, esi
// 004cd899  ffd0                 call eax
// 004cd89b  8d4e08               lea ecx, [esi + 8]
// 004cd89e  83caff               or edx, 0xffffffff
// 004cd8a1  f00fc111             lock xadd dword ptr [ecx], edx
// 004cd8a5  7509                 jne 0x4cd8b0
// 004cd8a7  8b06                 mov eax, dword ptr [esi]
// 004cd8a9  8b5008               mov edx, dword ptr [eax + 8]
// 004cd8ac  8bce                 mov ecx, esi
// 004cd8ae  ffd2                 call edx
// 004cd8b0  5f                   pop edi
// 004cd8b1  8bc3                 mov eax, ebx
// 004cd8b3  5b                   pop ebx
// 004cd8b4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cd8b8  5e                   pop esi
// 004cd8b9  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd8c0  83c414               add esp, 0x14
// 004cd8c3  c3                   ret 

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
