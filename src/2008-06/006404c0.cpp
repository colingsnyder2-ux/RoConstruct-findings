// from server: 100% by king_originala
// roc 2008-06 006404c0  unit: RBX::ArrowTool  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006404c0
//
// 006404c0  64a100000000         mov eax, dword ptr fs:[0]
// 006404c6  6aff                 push -1
// 006404c8  6868617c00           push 0x7c6168
// 006404cd  50                   push eax
// 006404ce  64892500000000       mov dword ptr fs:[0], esp
// 006404d5  56                   push esi
// 006404d6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006404da  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006404de  50                   push eax
// 006404df  51                   push ecx
// 006404e0  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006404e8  e8e3eefcff           call 0x60f3d0
// 006404ed  8b742420             mov esi, dword ptr [esp + 0x20]
// 006404f1  83c408               add esp, 8
// 006404f4  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 006404fc  85f6                 test esi, esi
// 006404fe  742a                 je 0x64052a
// 00640500  8d5604               lea edx, [esi + 4]
// 00640503  83c8ff               or eax, 0xffffffff
// 00640506  f00fc102             lock xadd dword ptr [edx], eax
// 0064050a  751e                 jne 0x64052a
// 0064050c  8b16                 mov edx, dword ptr [esi]
// 0064050e  8b4204               mov eax, dword ptr [edx + 4]
// 00640511  8bce                 mov ecx, esi
// 00640513  ffd0                 call eax
// 00640515  8d4e08               lea ecx, [esi + 8]
// 00640518  83caff               or edx, 0xffffffff
// 0064051b  f00fc111             lock xadd dword ptr [ecx], edx
// 0064051f  7509                 jne 0x64052a
// 00640521  8b06                 mov eax, dword ptr [esi]
// 00640523  8b5008               mov edx, dword ptr [eax + 8]
// 00640526  8bce                 mov ecx, esi
// 00640528  ffd2                 call edx
// 0064052a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0064052e  64890d00000000       mov dword ptr fs:[0], ecx
// 00640535  5e                   pop esi
// 00640536  83c40c               add esp, 0xc
// 00640539  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

extern void __cdecl helper(void*, void*);

void __cdecl func_006404c0(Shared value, void* argument)
{
    helper(value.object, argument);
}
