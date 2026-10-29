// roc 2009-06 004de500  unit: RBX::Network::IdSerializer  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004de500
//
// 004de500  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004de504  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004de508  56                   push esi
// 004de509  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004de50d  3bce                 cmp ecx, esi
// 004de50f  7430                 je 0x4de541
// 004de511  57                   push edi
// 004de512  85c0                 test eax, eax
// 004de514  7420                 je 0x4de536
// 004de516  8b11                 mov edx, dword ptr [ecx]
// 004de518  8910                 mov dword ptr [eax], edx
// 004de51a  8b5104               mov edx, dword ptr [ecx + 4]
// 004de51d  895004               mov dword ptr [eax + 4], edx
// 004de520  8b5108               mov edx, dword ptr [ecx + 8]
// 004de523  895008               mov dword ptr [eax + 8], edx
// 004de526  85d2                 test edx, edx
// 004de528  740c                 je 0x4de536
// 004de52a  83c204               add edx, 4
// 004de52d  bf01000000           mov edi, 1
// 004de532  f00fc13a             lock xadd dword ptr [edx], edi
// 004de536  83c10c               add ecx, 0xc
// 004de539  83c00c               add eax, 0xc
// 004de53c  3bce                 cmp ecx, esi
// 004de53e  75d2                 jne 0x4de512
// 004de540  5f                   pop edi
// 004de541  5e                   pop esi
// 004de542  c3                   ret 
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