// from server: 100% by king_originala
// roc 2008-06 004a7520  unit: RBX::VHint::?$FactoryProduct::Creator  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a7520
//
// 004a7520  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a7524  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a7528  56                   push esi
// 004a7529  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a752d  3bce                 cmp ecx, esi
// 004a752f  7430                 je 0x4a7561
// 004a7531  57                   push edi
// 004a7532  85c0                 test eax, eax
// 004a7534  7420                 je 0x4a7556
// 004a7536  8b11                 mov edx, dword ptr [ecx]
// 004a7538  8910                 mov dword ptr [eax], edx
// 004a753a  8b5104               mov edx, dword ptr [ecx + 4]
// 004a753d  895004               mov dword ptr [eax + 4], edx
// 004a7540  8b5108               mov edx, dword ptr [ecx + 8]
// 004a7543  895008               mov dword ptr [eax + 8], edx
// 004a7546  85d2                 test edx, edx
// 004a7548  740c                 je 0x4a7556
// 004a754a  83c204               add edx, 4
// 004a754d  bf01000000           mov edi, 1
// 004a7552  f00fc13a             lock xadd dword ptr [edx], edi
// 004a7556  83c10c               add ecx, 0xc
// 004a7559  83c00c               add eax, 0xc
// 004a755c  3bce                 cmp ecx, esi
// 004a755e  75d2                 jne 0x4a7532
// 004a7560  5f                   pop edi
// 004a7561  5e                   pop esi
// 004a7562  c3                   ret 

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
