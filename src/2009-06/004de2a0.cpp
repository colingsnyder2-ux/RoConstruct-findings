// roc 2009-06 004de2a0  unit: RBX::Network::IdSerializer  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004de2a0
//
// 004de2a0  55                   push ebp
// 004de2a1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 004de2a5  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 004de2a9  746d                 je 0x4de318
// 004de2ab  53                   push ebx
// 004de2ac  56                   push esi
// 004de2ad  57                   push edi
// 004de2ae  8d7d08               lea edi, [ebp + 8]
// 004de2b1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004de2b5  8b08                 mov ecx, dword ptr [eax]
// 004de2b7  894d00               mov dword ptr [ebp], ecx
// 004de2ba  8b5004               mov edx, dword ptr [eax + 4]
// 004de2bd  8957fc               mov dword ptr [edi - 4], edx
// 004de2c0  8b5808               mov ebx, dword ptr [eax + 8]
// 004de2c3  3b1f                 cmp ebx, dword ptr [edi]
// 004de2c5  7442                 je 0x4de309
// 004de2c7  85db                 test ebx, ebx
// 004de2c9  740c                 je 0x4de2d7
// 004de2cb  8d4304               lea eax, [ebx + 4]
// 004de2ce  b901000000           mov ecx, 1
// 004de2d3  f00fc108             lock xadd dword ptr [eax], ecx
// 004de2d7  8b37                 mov esi, dword ptr [edi]
// 004de2d9  85f6                 test esi, esi
// 004de2db  742a                 je 0x4de307
// 004de2dd  8d5604               lea edx, [esi + 4]
// 004de2e0  83c8ff               or eax, 0xffffffff
// 004de2e3  f00fc102             lock xadd dword ptr [edx], eax
// 004de2e7  751e                 jne 0x4de307
// 004de2e9  8b16                 mov edx, dword ptr [esi]
// 004de2eb  8b4204               mov eax, dword ptr [edx + 4]
// 004de2ee  8bce                 mov ecx, esi
// 004de2f0  ffd0                 call eax
// 004de2f2  8d4e08               lea ecx, [esi + 8]
// 004de2f5  83caff               or edx, 0xffffffff
// 004de2f8  f00fc111             lock xadd dword ptr [ecx], edx
// 004de2fc  7509                 jne 0x4de307
// 004de2fe  8b06                 mov eax, dword ptr [esi]
// 004de300  8b5008               mov edx, dword ptr [eax + 8]
// 004de303  8bce                 mov ecx, esi
// 004de305  ffd2                 call edx
// 004de307  891f                 mov dword ptr [edi], ebx
// 004de309  83c50c               add ebp, 0xc
// 004de30c  83c70c               add edi, 0xc
// 004de30f  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 004de313  759c                 jne 0x4de2b1
// 004de315  5f                   pop edi
// 004de316  5e                   pop esi
// 004de317  5b                   pop ebx
// 004de318  5d                   pop ebp
// 004de319  c3                   ret 
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