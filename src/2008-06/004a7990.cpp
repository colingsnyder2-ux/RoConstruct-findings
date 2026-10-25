// from server: 100% by colin
// roc 2008-06 004a7990  unit: RBX::VHint::?$FactoryProduct::Creator  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a7990
//
// 004a7990  56                   push esi
// 004a7991  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a7995  85f6                 test esi, esi
// 004a7997  7636                 jbe 0x4a79cf
// 004a7999  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a799d  8b442408             mov eax, dword ptr [esp + 8]
// 004a79a1  57                   push edi
// 004a79a2  85c0                 test eax, eax
// 004a79a4  7420                 je 0x4a79c6
// 004a79a6  8b0a                 mov ecx, dword ptr [edx]
// 004a79a8  8908                 mov dword ptr [eax], ecx
// 004a79aa  8b4a04               mov ecx, dword ptr [edx + 4]
// 004a79ad  894804               mov dword ptr [eax + 4], ecx
// 004a79b0  8b4a08               mov ecx, dword ptr [edx + 8]
// 004a79b3  894808               mov dword ptr [eax + 8], ecx
// 004a79b6  85c9                 test ecx, ecx
// 004a79b8  740c                 je 0x4a79c6
// 004a79ba  83c104               add ecx, 4
// 004a79bd  bf01000000           mov edi, 1
// 004a79c2  f00fc139             lock xadd dword ptr [ecx], edi
// 004a79c6  4e                   dec esi
// 004a79c7  83c00c               add eax, 0xc
// 004a79ca  85f6                 test esi, esi
// 004a79cc  77d4                 ja 0x4a79a2
// 004a79ce  5f                   pop edi
// 004a79cf  5e                   pop esi
// 004a79d0  c3                   ret 

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
