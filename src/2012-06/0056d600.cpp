// roc 2012-06 0056d600  unit: RBX::Network::IdSerializer  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056d600
//
// 0056d600  55                   push ebp
// 0056d601  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0056d605  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 0056d609  746d                 je 0x56d678
// 0056d60b  53                   push ebx
// 0056d60c  56                   push esi
// 0056d60d  57                   push edi
// 0056d60e  8d7d08               lea edi, [ebp + 8]
// 0056d611  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056d615  8b08                 mov ecx, dword ptr [eax]
// 0056d617  894d00               mov dword ptr [ebp], ecx
// 0056d61a  8b5004               mov edx, dword ptr [eax + 4]
// 0056d61d  8957fc               mov dword ptr [edi - 4], edx
// 0056d620  8b5808               mov ebx, dword ptr [eax + 8]
// 0056d623  3b1f                 cmp ebx, dword ptr [edi]
// 0056d625  7442                 je 0x56d669
// 0056d627  85db                 test ebx, ebx
// 0056d629  740c                 je 0x56d637
// 0056d62b  8d4304               lea eax, [ebx + 4]
// 0056d62e  b901000000           mov ecx, 1
// 0056d633  f00fc108             lock xadd dword ptr [eax], ecx
// 0056d637  8b37                 mov esi, dword ptr [edi]
// 0056d639  85f6                 test esi, esi
// 0056d63b  742a                 je 0x56d667
// 0056d63d  8d5604               lea edx, [esi + 4]
// 0056d640  83c8ff               or eax, 0xffffffff
// 0056d643  f00fc102             lock xadd dword ptr [edx], eax
// 0056d647  751e                 jne 0x56d667
// 0056d649  8b16                 mov edx, dword ptr [esi]
// 0056d64b  8b4204               mov eax, dword ptr [edx + 4]
// 0056d64e  8bce                 mov ecx, esi
// 0056d650  ffd0                 call eax
// 0056d652  8d4e08               lea ecx, [esi + 8]
// 0056d655  83caff               or edx, 0xffffffff
// 0056d658  f00fc111             lock xadd dword ptr [ecx], edx
// 0056d65c  7509                 jne 0x56d667
// 0056d65e  8b06                 mov eax, dword ptr [esi]
// 0056d660  8b5008               mov edx, dword ptr [eax + 8]
// 0056d663  8bce                 mov ecx, esi
// 0056d665  ffd2                 call edx
// 0056d667  891f                 mov dword ptr [edi], ebx
// 0056d669  83c50c               add ebp, 0xc
// 0056d66c  83c70c               add edi, 0xc
// 0056d66f  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 0056d673  759c                 jne 0x56d611
// 0056d675  5f                   pop edi
// 0056d676  5e                   pop esi
// 0056d677  5b                   pop ebx
// 0056d678  5d                   pop ebp
// 0056d679  c3                   ret 
// copied from an identical function in another client (function ?fill@@YAXPAURecord@@0ABU1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Record {
    unsigned long first;
    unsigned long second;
    Control* control;
};

void __cdecl fill(Record* first, Record* last, const Record& value)
{
    if (first != last) {
        Control** slot = &first->control;
        do {
            first->first = value.first;
            reinterpret_cast<unsigned long*>(slot)[-1] = value.second;

            Control* incoming = value.control;
            if (incoming != *slot) {
                if (incoming)
                    _InterlockedIncrement(&incoming->strong);

                Control* outgoing = *slot;
                if (outgoing) {
                    if (_InterlockedDecrement(&outgoing->strong) == 0) {
                        outgoing->dispose();
                        if (_InterlockedDecrement(&outgoing->weak) == 0)
                            outgoing->destroy();
                    }
                }
                *slot = incoming;
            }

            ++first;
            slot += 3;
        } while (first != last);
    }
}