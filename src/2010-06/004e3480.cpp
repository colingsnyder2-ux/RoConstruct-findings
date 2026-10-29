// roc 2010-06 004e3480  unit: RBX::Network::IdSerializer  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e3480
//
// 004e3480  56                   push esi
// 004e3481  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e3485  85f6                 test esi, esi
// 004e3487  7636                 jbe 0x4e34bf
// 004e3489  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e348d  8b442408             mov eax, dword ptr [esp + 8]
// 004e3491  57                   push edi
// 004e3492  85c0                 test eax, eax
// 004e3494  7420                 je 0x4e34b6
// 004e3496  8b0a                 mov ecx, dword ptr [edx]
// 004e3498  8908                 mov dword ptr [eax], ecx
// 004e349a  8b4a04               mov ecx, dword ptr [edx + 4]
// 004e349d  894804               mov dword ptr [eax + 4], ecx
// 004e34a0  8b4a08               mov ecx, dword ptr [edx + 8]
// 004e34a3  894808               mov dword ptr [eax + 8], ecx
// 004e34a6  85c9                 test ecx, ecx
// 004e34a8  740c                 je 0x4e34b6
// 004e34aa  83c104               add ecx, 4
// 004e34ad  bf01000000           mov edi, 1
// 004e34b2  f00fc139             lock xadd dword ptr [ecx], edi
// 004e34b6  4e                   dec esi
// 004e34b7  83c00c               add eax, 0xc
// 004e34ba  85f6                 test esi, esi
// 004e34bc  77d4                 ja 0x4e3492
// 004e34be  5f                   pop edi
// 004e34bf  5e                   pop esi
// 004e34c0  c3                   ret 
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