// roc 2011-06 004f2280  unit: RBX::Network::IdSerializer  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f2280
//
// 004f2280  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f2284  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f2288  56                   push esi
// 004f2289  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f228d  3bce                 cmp ecx, esi
// 004f228f  7430                 je 0x4f22c1
// 004f2291  57                   push edi
// 004f2292  85c0                 test eax, eax
// 004f2294  7420                 je 0x4f22b6
// 004f2296  8b11                 mov edx, dword ptr [ecx]
// 004f2298  8910                 mov dword ptr [eax], edx
// 004f229a  8b5104               mov edx, dword ptr [ecx + 4]
// 004f229d  895004               mov dword ptr [eax + 4], edx
// 004f22a0  8b5108               mov edx, dword ptr [ecx + 8]
// 004f22a3  895008               mov dword ptr [eax + 8], edx
// 004f22a6  85d2                 test edx, edx
// 004f22a8  740c                 je 0x4f22b6
// 004f22aa  83c204               add edx, 4
// 004f22ad  bf01000000           mov edi, 1
// 004f22b2  f00fc13a             lock xadd dword ptr [edx], edi
// 004f22b6  83c10c               add ecx, 0xc
// 004f22b9  83c00c               add eax, 0xc
// 004f22bc  3bce                 cmp ecx, esi
// 004f22be  75d2                 jne 0x4f2292
// 004f22c0  5f                   pop edi
// 004f22c1  5e                   pop esi
// 004f22c2  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX00000f@@YAPAUS@1@PBU21@0PAU21@@Z)

namespace ns_ROCX00000f {
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier(void);
#pragma intrinsic(_ReadWriteBarrier)

struct Control {
    long reserved;
    volatile long references;
};

struct S {
    unsigned long first;
    unsigned long second;
    Control* control;
};

S* __cdecl f(const S* first, const S* last, S* output)
{
    while (first != last) {
        if (output) {
            output->first = first->first;
            output->second = first->second;
            output->control = first->control;
            if (output->control) {
                volatile long* references = &output->control->references;
                _ReadWriteBarrier();
                _InterlockedExchangeAdd(references, 1);
            }
        }
        ++first;
        ++output;
    }
    return output;
}
}
