// roc 2012-06 0056de50  unit: RBX::Network::IdSerializer  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056de50
//
// 0056de50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056de54  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056de58  56                   push esi
// 0056de59  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056de5d  3bce                 cmp ecx, esi
// 0056de5f  7430                 je 0x56de91
// 0056de61  57                   push edi
// 0056de62  85c0                 test eax, eax
// 0056de64  7420                 je 0x56de86
// 0056de66  8b11                 mov edx, dword ptr [ecx]
// 0056de68  8910                 mov dword ptr [eax], edx
// 0056de6a  8b5104               mov edx, dword ptr [ecx + 4]
// 0056de6d  895004               mov dword ptr [eax + 4], edx
// 0056de70  8b5108               mov edx, dword ptr [ecx + 8]
// 0056de73  895008               mov dword ptr [eax + 8], edx
// 0056de76  85d2                 test edx, edx
// 0056de78  740c                 je 0x56de86
// 0056de7a  83c204               add edx, 4
// 0056de7d  bf01000000           mov edi, 1
// 0056de82  f00fc13a             lock xadd dword ptr [edx], edi
// 0056de86  83c10c               add ecx, 0xc
// 0056de89  83c00c               add eax, 0xc
// 0056de8c  3bce                 cmp ecx, esi
// 0056de8e  75d2                 jne 0x56de62
// 0056de90  5f                   pop edi
// 0056de91  5e                   pop esi
// 0056de92  c3                   ret 
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