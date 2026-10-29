// roc 2011-06 004f2730  unit: RBX::Network::IdSerializer  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f2730
//
// 004f2730  56                   push esi
// 004f2731  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f2735  85f6                 test esi, esi
// 004f2737  7636                 jbe 0x4f276f
// 004f2739  8b542410             mov edx, dword ptr [esp + 0x10]
// 004f273d  8b442408             mov eax, dword ptr [esp + 8]
// 004f2741  57                   push edi
// 004f2742  85c0                 test eax, eax
// 004f2744  7420                 je 0x4f2766
// 004f2746  8b0a                 mov ecx, dword ptr [edx]
// 004f2748  8908                 mov dword ptr [eax], ecx
// 004f274a  8b4a04               mov ecx, dword ptr [edx + 4]
// 004f274d  894804               mov dword ptr [eax + 4], ecx
// 004f2750  8b4a08               mov ecx, dword ptr [edx + 8]
// 004f2753  894808               mov dword ptr [eax + 8], ecx
// 004f2756  85c9                 test ecx, ecx
// 004f2758  740c                 je 0x4f2766
// 004f275a  83c104               add ecx, 4
// 004f275d  bf01000000           mov edi, 1
// 004f2762  f00fc139             lock xadd dword ptr [ecx], edi
// 004f2766  4e                   dec esi
// 004f2767  83c00c               add eax, 0xc
// 004f276a  85f6                 test esi, esi
// 004f276c  77d4                 ja 0x4f2742
// 004f276e  5f                   pop edi
// 004f276f  5e                   pop esi
// 004f2770  c3                   ret 
// copied from an identical function in another client (function ?fill@ns_ROCX000000@@YAXPAUValue@1@IPBU21@@Z)

namespace ns_ROCX000000 {
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    long unused;
    volatile long references;
};

struct Value {
    unsigned long first;
    unsigned long second;
    Control* control;
};

void __cdecl fill(Value* destination, unsigned int count, const Value* source)
{
    while (count > 0) {
        if (destination) {
            destination->first = source->first;
            destination->second = source->second;
            destination->control = source->control;
            if (destination->control)
                _InterlockedIncrement(&destination->control->references);
        }
        --count;
        ++destination;
    }
}
}
