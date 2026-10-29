// roc 2009-12 00534900  unit: RBX::Network::IdSerializer  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00534900
//
// 00534900  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00534904  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00534908  56                   push esi
// 00534909  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053490d  3bce                 cmp ecx, esi
// 0053490f  7430                 je 0x534941
// 00534911  57                   push edi
// 00534912  85c0                 test eax, eax
// 00534914  7420                 je 0x534936
// 00534916  8b11                 mov edx, dword ptr [ecx]
// 00534918  8910                 mov dword ptr [eax], edx
// 0053491a  8b5104               mov edx, dword ptr [ecx + 4]
// 0053491d  895004               mov dword ptr [eax + 4], edx
// 00534920  8b5108               mov edx, dword ptr [ecx + 8]
// 00534923  895008               mov dword ptr [eax + 8], edx
// 00534926  85d2                 test edx, edx
// 00534928  740c                 je 0x534936
// 0053492a  83c204               add edx, 4
// 0053492d  bf01000000           mov edi, 1
// 00534932  f00fc13a             lock xadd dword ptr [edx], edi
// 00534936  83c10c               add ecx, 0xc
// 00534939  83c00c               add eax, 0xc
// 0053493c  3bce                 cmp ecx, esi
// 0053493e  75d2                 jne 0x534912
// 00534940  5f                   pop edi
// 00534941  5e                   pop esi
// 00534942  c3                   ret 
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