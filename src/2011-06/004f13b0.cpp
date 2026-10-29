// roc 2011-06 004f13b0  unit: RBX::Network::IdSerializer  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f13b0
//
// 004f13b0  55                   push ebp
// 004f13b1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 004f13b5  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 004f13b9  746d                 je 0x4f1428
// 004f13bb  53                   push ebx
// 004f13bc  56                   push esi
// 004f13bd  57                   push edi
// 004f13be  8d7d08               lea edi, [ebp + 8]
// 004f13c1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f13c5  8b08                 mov ecx, dword ptr [eax]
// 004f13c7  894d00               mov dword ptr [ebp], ecx
// 004f13ca  8b5004               mov edx, dword ptr [eax + 4]
// 004f13cd  8957fc               mov dword ptr [edi - 4], edx
// 004f13d0  8b5808               mov ebx, dword ptr [eax + 8]
// 004f13d3  3b1f                 cmp ebx, dword ptr [edi]
// 004f13d5  7442                 je 0x4f1419
// 004f13d7  85db                 test ebx, ebx
// 004f13d9  740c                 je 0x4f13e7
// 004f13db  8d4304               lea eax, [ebx + 4]
// 004f13de  b901000000           mov ecx, 1
// 004f13e3  f00fc108             lock xadd dword ptr [eax], ecx
// 004f13e7  8b37                 mov esi, dword ptr [edi]
// 004f13e9  85f6                 test esi, esi
// 004f13eb  742a                 je 0x4f1417
// 004f13ed  8d5604               lea edx, [esi + 4]
// 004f13f0  83c8ff               or eax, 0xffffffff
// 004f13f3  f00fc102             lock xadd dword ptr [edx], eax
// 004f13f7  751e                 jne 0x4f1417
// 004f13f9  8b16                 mov edx, dword ptr [esi]
// 004f13fb  8b4204               mov eax, dword ptr [edx + 4]
// 004f13fe  8bce                 mov ecx, esi
// 004f1400  ffd0                 call eax
// 004f1402  8d4e08               lea ecx, [esi + 8]
// 004f1405  83caff               or edx, 0xffffffff
// 004f1408  f00fc111             lock xadd dword ptr [ecx], edx
// 004f140c  7509                 jne 0x4f1417
// 004f140e  8b06                 mov eax, dword ptr [esi]
// 004f1410  8b5008               mov edx, dword ptr [eax + 8]
// 004f1413  8bce                 mov ecx, esi
// 004f1415  ffd2                 call edx
// 004f1417  891f                 mov dword ptr [edi], ebx
// 004f1419  83c50c               add ebp, 0xc
// 004f141c  83c70c               add edi, 0xc
// 004f141f  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 004f1423  759c                 jne 0x4f13c1
// 004f1425  5f                   pop edi
// 004f1426  5e                   pop esi
// 004f1427  5b                   pop ebx
// 004f1428  5d                   pop ebp
// 004f1429  c3                   ret 
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