// roc 2010-06 004e25e0  unit: RBX::Network::IdSerializer  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e25e0
//
// 004e25e0  55                   push ebp
// 004e25e1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 004e25e5  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 004e25e9  746d                 je 0x4e2658
// 004e25eb  53                   push ebx
// 004e25ec  56                   push esi
// 004e25ed  57                   push edi
// 004e25ee  8d7d08               lea edi, [ebp + 8]
// 004e25f1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e25f5  8b08                 mov ecx, dword ptr [eax]
// 004e25f7  894d00               mov dword ptr [ebp], ecx
// 004e25fa  8b5004               mov edx, dword ptr [eax + 4]
// 004e25fd  8957fc               mov dword ptr [edi - 4], edx
// 004e2600  8b5808               mov ebx, dword ptr [eax + 8]
// 004e2603  3b1f                 cmp ebx, dword ptr [edi]
// 004e2605  7442                 je 0x4e2649
// 004e2607  85db                 test ebx, ebx
// 004e2609  740c                 je 0x4e2617
// 004e260b  8d4304               lea eax, [ebx + 4]
// 004e260e  b901000000           mov ecx, 1
// 004e2613  f00fc108             lock xadd dword ptr [eax], ecx
// 004e2617  8b37                 mov esi, dword ptr [edi]
// 004e2619  85f6                 test esi, esi
// 004e261b  742a                 je 0x4e2647
// 004e261d  8d5604               lea edx, [esi + 4]
// 004e2620  83c8ff               or eax, 0xffffffff
// 004e2623  f00fc102             lock xadd dword ptr [edx], eax
// 004e2627  751e                 jne 0x4e2647
// 004e2629  8b16                 mov edx, dword ptr [esi]
// 004e262b  8b4204               mov eax, dword ptr [edx + 4]
// 004e262e  8bce                 mov ecx, esi
// 004e2630  ffd0                 call eax
// 004e2632  8d4e08               lea ecx, [esi + 8]
// 004e2635  83caff               or edx, 0xffffffff
// 004e2638  f00fc111             lock xadd dword ptr [ecx], edx
// 004e263c  7509                 jne 0x4e2647
// 004e263e  8b06                 mov eax, dword ptr [esi]
// 004e2640  8b5008               mov edx, dword ptr [eax + 8]
// 004e2643  8bce                 mov ecx, esi
// 004e2645  ffd2                 call edx
// 004e2647  891f                 mov dword ptr [edi], ebx
// 004e2649  83c50c               add ebp, 0xc
// 004e264c  83c70c               add edi, 0xc
// 004e264f  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 004e2653  759c                 jne 0x4e25f1
// 004e2655  5f                   pop edi
// 004e2656  5e                   pop esi
// 004e2657  5b                   pop ebx
// 004e2658  5d                   pop ebp
// 004e2659  c3                   ret 
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