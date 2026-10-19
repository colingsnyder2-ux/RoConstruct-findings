// from server: 98% by colin
// from server: 95% by king_originala
// roc 2008-06 005a24d0  unit: RBX::Workspace  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a24d0
//
// 005a24d0  64a100000000         mov eax, dword ptr fs:[0]
// 005a24d6  6aff                 push -1
// 005a24d8  6868617c00           push 0x7c6168
// 005a24dd  50                   push eax
// 005a24de  64892500000000       mov dword ptr fs:[0], esp
// 005a24e5  53                   push ebx
// 005a24e6  55                   push ebp
// 005a24e7  56                   push esi
// 005a24e8  57                   push edi
// 005a24e9  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a24ed  8b7810               mov edi, dword ptr [eax + 0x10]
// 005a24f0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005a24f8  8bf0                 mov esi, eax
// 005a24fa  39780c               cmp dword ptr [eax + 0xc], edi
// 005a24fd  760a                 jbe 0x5a2509
// 005a24ff  ff1590288000         call dword ptr [0x802890]
// 005a2505  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a2509  8b1e                 mov ebx, dword ptr [esi]
// 005a250b  8b700c               mov esi, dword ptr [eax + 0xc]
// 005a250e  8be8                 mov ebp, eax
// 005a2510  3b7010               cmp esi, dword ptr [eax + 0x10]
// 005a2513  7606                 jbe 0x5a251b
// 005a2515  ff1590288000         call dword ptr [0x802890]
// 005a251b  8b4500               mov eax, dword ptr [ebp]
// 005a251e  6830235a00           push 0x5a2330
// 005a2523  57                   push edi
// 005a2524  53                   push ebx
// 005a2525  56                   push esi
// 005a2526  50                   push eax
// 005a2527  e844bffdff           call 0x57e470
// 005a252c  8b442438             mov eax, dword ptr [esp + 0x38]
// 005a2530  83c414               add esp, 0x14
// 005a2533  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005a253b  85c0                 test eax, eax
// 005a253d  742c                 je 0x5a256b
// 005a253f  8bf0                 mov esi, eax
// 005a2541  83c004               add eax, 4
// 005a2544  83c9ff               or ecx, 0xffffffff
// 005a2547  f00fc108             lock xadd dword ptr [eax], ecx
// 005a254b  751e                 jne 0x5a256b
// 005a254d  8b16                 mov edx, dword ptr [esi]
// 005a254f  8b4204               mov eax, dword ptr [edx + 4]
// 005a2552  8bce                 mov ecx, esi
// 005a2554  ffd0                 call eax
// 005a2556  8d4e08               lea ecx, [esi + 8]
// 005a2559  83caff               or edx, 0xffffffff
// 005a255c  f00fc111             lock xadd dword ptr [ecx], edx
// 005a2560  7509                 jne 0x5a256b
// 005a2562  8b06                 mov eax, dword ptr [esi]
// 005a2564  8b5008               mov edx, dword ptr [eax + 8]
// 005a2567  8bce                 mov ecx, esi
// 005a2569  ffd2                 call edx
// 005a256b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a256f  5f                   pop edi
// 005a2570  5e                   pop esi
// 005a2571  5d                   pop ebp
// 005a2572  64890d00000000       mov dword ptr fs:[0], ecx
// 005a2579  5b                   pop ebx
// 005a257a  83c40c               add esp, 0xc
// 005a257d  c20800               ret 8
#include <intrin.h>

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Range {
    void* data;
    unsigned reserved[2];
    unsigned first;
    unsigned last;
};

struct Iterator {
    void* data;
    unsigned index;
};

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Handle {
    Range* pointer;
    Control* control;
    ~Handle();
};

void __cdecl callback();
void __cdecl process(Iterator, Iterator, void (__cdecl*)());

Handle::~Handle()
{
    if (control) {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

void __stdcall sub_005a24d0(Handle value)
{
    Range* range = value.pointer;
    Iterator end;
    end.index = range->last;
    if (range->first > end.index)
        _invalid_parameter_noinfo();
    end.data = range->data;
    _ReadWriteBarrier();

    Iterator begin;
    begin.index = value.pointer->first;
    Range* beginRange = value.pointer;
    if (begin.index > beginRange->last)
        _invalid_parameter_noinfo();
    begin.data = beginRange->data;

    process(begin, end, callback);
}
