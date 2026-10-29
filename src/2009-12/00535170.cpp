// roc 2009-12 00535170  unit: RBX::Network::IdSerializer  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00535170
//
// 00535170  56                   push esi
// 00535171  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00535175  85f6                 test esi, esi
// 00535177  7636                 jbe 0x5351af
// 00535179  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053517d  8b442408             mov eax, dword ptr [esp + 8]
// 00535181  57                   push edi
// 00535182  85c0                 test eax, eax
// 00535184  7420                 je 0x5351a6
// 00535186  8b0a                 mov ecx, dword ptr [edx]
// 00535188  8908                 mov dword ptr [eax], ecx
// 0053518a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0053518d  894804               mov dword ptr [eax + 4], ecx
// 00535190  8b4a08               mov ecx, dword ptr [edx + 8]
// 00535193  894808               mov dword ptr [eax + 8], ecx
// 00535196  85c9                 test ecx, ecx
// 00535198  740c                 je 0x5351a6
// 0053519a  83c104               add ecx, 4
// 0053519d  bf01000000           mov edi, 1
// 005351a2  f00fc139             lock xadd dword ptr [ecx], edi
// 005351a6  4e                   dec esi
// 005351a7  83c00c               add eax, 0xc
// 005351aa  85f6                 test esi, esi
// 005351ac  77d4                 ja 0x535182
// 005351ae  5f                   pop edi
// 005351af  5e                   pop esi
// 005351b0  c3                   ret 
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