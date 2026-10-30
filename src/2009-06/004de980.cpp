// roc 2009-06 004de980  unit: RBX::Network::IdSerializer  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004de980
//
// 004de980  56                   push esi
// 004de981  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004de985  85f6                 test esi, esi
// 004de987  7636                 jbe 0x4de9bf
// 004de989  8b542410             mov edx, dword ptr [esp + 0x10]
// 004de98d  8b442408             mov eax, dword ptr [esp + 8]
// 004de991  57                   push edi
// 004de992  85c0                 test eax, eax
// 004de994  7420                 je 0x4de9b6
// 004de996  8b0a                 mov ecx, dword ptr [edx]
// 004de998  8908                 mov dword ptr [eax], ecx
// 004de99a  8b4a04               mov ecx, dword ptr [edx + 4]
// 004de99d  894804               mov dword ptr [eax + 4], ecx
// 004de9a0  8b4a08               mov ecx, dword ptr [edx + 8]
// 004de9a3  894808               mov dword ptr [eax + 8], ecx
// 004de9a6  85c9                 test ecx, ecx
// 004de9a8  740c                 je 0x4de9b6
// 004de9aa  83c104               add ecx, 4
// 004de9ad  bf01000000           mov edi, 1
// 004de9b2  f00fc139             lock xadd dword ptr [ecx], edi
// 004de9b6  4e                   dec esi
// 004de9b7  83c00c               add eax, 0xc
// 004de9ba  85f6                 test esi, esi
// 004de9bc  77d4                 ja 0x4de992
// 004de9be  5f                   pop edi
// 004de9bf  5e                   pop esi
// 004de9c0  c3                   ret 
// copied from an identical function in another client (function ?fill@@YAXPAUValue@@IPBU1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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