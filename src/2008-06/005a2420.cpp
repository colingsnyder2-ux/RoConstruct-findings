// from server: 98% by colin
// from server: 95% by king_originala
// roc 2008-06 005a2420  unit: RBX::Workspace  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a2420
//
// 005a2420  64a100000000         mov eax, dword ptr fs:[0]
// 005a2426  6aff                 push -1
// 005a2428  6868617c00           push 0x7c6168
// 005a242d  50                   push eax
// 005a242e  64892500000000       mov dword ptr fs:[0], esp
// 005a2435  53                   push ebx
// 005a2436  55                   push ebp
// 005a2437  56                   push esi
// 005a2438  57                   push edi
// 005a2439  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a243d  8b7810               mov edi, dword ptr [eax + 0x10]
// 005a2440  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005a2448  8bf0                 mov esi, eax
// 005a244a  39780c               cmp dword ptr [eax + 0xc], edi
// 005a244d  760a                 jbe 0x5a2459
// 005a244f  ff1590288000         call dword ptr [0x802890]
// 005a2455  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a2459  8b1e                 mov ebx, dword ptr [esi]
// 005a245b  8b700c               mov esi, dword ptr [eax + 0xc]
// 005a245e  8be8                 mov ebp, eax
// 005a2460  3b7010               cmp esi, dword ptr [eax + 0x10]
// 005a2463  7606                 jbe 0x5a246b
// 005a2465  ff1590288000         call dword ptr [0x802890]
// 005a246b  8b4500               mov eax, dword ptr [ebp]
// 005a246e  6890225a00           push 0x5a2290
// 005a2473  57                   push edi
// 005a2474  53                   push ebx
// 005a2475  56                   push esi
// 005a2476  50                   push eax
// 005a2477  e8f4bffdff           call 0x57e470
// 005a247c  8b442438             mov eax, dword ptr [esp + 0x38]
// 005a2480  83c414               add esp, 0x14
// 005a2483  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005a248b  85c0                 test eax, eax
// 005a248d  742c                 je 0x5a24bb
// 005a248f  8bf0                 mov esi, eax
// 005a2491  83c004               add eax, 4
// 005a2494  83c9ff               or ecx, 0xffffffff
// 005a2497  f00fc108             lock xadd dword ptr [eax], ecx
// 005a249b  751e                 jne 0x5a24bb
// 005a249d  8b16                 mov edx, dword ptr [esi]
// 005a249f  8b4204               mov eax, dword ptr [edx + 4]
// 005a24a2  8bce                 mov ecx, esi
// 005a24a4  ffd0                 call eax
// 005a24a6  8d4e08               lea ecx, [esi + 8]
// 005a24a9  83caff               or edx, 0xffffffff
// 005a24ac  f00fc111             lock xadd dword ptr [ecx], edx
// 005a24b0  7509                 jne 0x5a24bb
// 005a24b2  8b06                 mov eax, dword ptr [esi]
// 005a24b4  8b5008               mov edx, dword ptr [eax + 8]
// 005a24b7  8bce                 mov ecx, esi
// 005a24b9  ffd2                 call edx
// 005a24bb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a24bf  5f                   pop edi
// 005a24c0  5e                   pop esi
// 005a24c1  5d                   pop ebp
// 005a24c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005a24c9  5b                   pop ebx
// 005a24ca  83c40c               add esp, 0xc
// 005a24cd  c20800               ret 8
#include <intrin.h>

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Range {
    void* base;
    char padding[8];
    unsigned first;
    unsigned last;
};

struct SharedRange {
    Range* object;
    Control* control;
    ~SharedRange();
};

inline SharedRange::~SharedRange()
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

void __cdecl callback();
void __cdecl process(void*, unsigned, void*, unsigned, void (__cdecl*)());

void __stdcall sub_005a2420(SharedRange range)
{
    Range* endObject = range.object;
    unsigned last = endObject->last;
    if (endObject->first > last)
        _invalid_parameter_noinfo();

    void* lastBase = endObject->base;
    _ReadWriteBarrier();
    Range* beginObject = range.object;
    unsigned first = beginObject->first;
    if (first > beginObject->last)
        _invalid_parameter_noinfo();

    process(beginObject->base, first, lastBase, last, callback);
}
