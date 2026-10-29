// roc 2010-06 004e2c10  unit: RBX::Network::IdSerializer  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e2c10
//
// 004e2c10  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e2c14  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e2c18  56                   push esi
// 004e2c19  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e2c1d  3bce                 cmp ecx, esi
// 004e2c1f  7430                 je 0x4e2c51
// 004e2c21  57                   push edi
// 004e2c22  85c0                 test eax, eax
// 004e2c24  7420                 je 0x4e2c46
// 004e2c26  8b11                 mov edx, dword ptr [ecx]
// 004e2c28  8910                 mov dword ptr [eax], edx
// 004e2c2a  8b5104               mov edx, dword ptr [ecx + 4]
// 004e2c2d  895004               mov dword ptr [eax + 4], edx
// 004e2c30  8b5108               mov edx, dword ptr [ecx + 8]
// 004e2c33  895008               mov dword ptr [eax + 8], edx
// 004e2c36  85d2                 test edx, edx
// 004e2c38  740c                 je 0x4e2c46
// 004e2c3a  83c204               add edx, 4
// 004e2c3d  bf01000000           mov edi, 1
// 004e2c42  f00fc13a             lock xadd dword ptr [edx], edi
// 004e2c46  83c10c               add ecx, 0xc
// 004e2c49  83c00c               add eax, 0xc
// 004e2c4c  3bce                 cmp ecx, esi
// 004e2c4e  75d2                 jne 0x4e2c22
// 004e2c50  5f                   pop edi
// 004e2c51  5e                   pop esi
// 004e2c52  c3                   ret 
// copied from an identical function in another client (function ?f@@YAPAUS@@PBU1@0PAU1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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