// roc 2012-06 0056e290  unit: RBX::Network::IdSerializer  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056e290
//
// 0056e290  56                   push esi
// 0056e291  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056e295  85f6                 test esi, esi
// 0056e297  7636                 jbe 0x56e2cf
// 0056e299  8b542410             mov edx, dword ptr [esp + 0x10]
// 0056e29d  8b442408             mov eax, dword ptr [esp + 8]
// 0056e2a1  57                   push edi
// 0056e2a2  85c0                 test eax, eax
// 0056e2a4  7420                 je 0x56e2c6
// 0056e2a6  8b0a                 mov ecx, dword ptr [edx]
// 0056e2a8  8908                 mov dword ptr [eax], ecx
// 0056e2aa  8b4a04               mov ecx, dword ptr [edx + 4]
// 0056e2ad  894804               mov dword ptr [eax + 4], ecx
// 0056e2b0  8b4a08               mov ecx, dword ptr [edx + 8]
// 0056e2b3  894808               mov dword ptr [eax + 8], ecx
// 0056e2b6  85c9                 test ecx, ecx
// 0056e2b8  740c                 je 0x56e2c6
// 0056e2ba  83c104               add ecx, 4
// 0056e2bd  bf01000000           mov edi, 1
// 0056e2c2  f00fc139             lock xadd dword ptr [ecx], edi
// 0056e2c6  4e                   dec esi
// 0056e2c7  83c00c               add eax, 0xc
// 0056e2ca  85f6                 test esi, esi
// 0056e2cc  77d4                 ja 0x56e2a2
// 0056e2ce  5f                   pop edi
// 0056e2cf  5e                   pop esi
// 0056e2d0  c3                   ret 
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