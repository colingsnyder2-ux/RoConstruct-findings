// from server: 100% by king_originala
// roc 2008-06 004a72c0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a72c0
//
// 004a72c0  55                   push ebp
// 004a72c1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 004a72c5  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 004a72c9  746d                 je 0x4a7338
// 004a72cb  53                   push ebx
// 004a72cc  56                   push esi
// 004a72cd  57                   push edi
// 004a72ce  8d7d08               lea edi, [ebp + 8]
// 004a72d1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a72d5  8b08                 mov ecx, dword ptr [eax]
// 004a72d7  894d00               mov dword ptr [ebp], ecx
// 004a72da  8b5004               mov edx, dword ptr [eax + 4]
// 004a72dd  8957fc               mov dword ptr [edi - 4], edx
// 004a72e0  8b5808               mov ebx, dword ptr [eax + 8]
// 004a72e3  3b1f                 cmp ebx, dword ptr [edi]
// 004a72e5  7442                 je 0x4a7329
// 004a72e7  85db                 test ebx, ebx
// 004a72e9  740c                 je 0x4a72f7
// 004a72eb  8d4304               lea eax, [ebx + 4]
// 004a72ee  b901000000           mov ecx, 1
// 004a72f3  f00fc108             lock xadd dword ptr [eax], ecx
// 004a72f7  8b37                 mov esi, dword ptr [edi]
// 004a72f9  85f6                 test esi, esi
// 004a72fb  742a                 je 0x4a7327
// 004a72fd  8d5604               lea edx, [esi + 4]
// 004a7300  83c8ff               or eax, 0xffffffff
// 004a7303  f00fc102             lock xadd dword ptr [edx], eax
// 004a7307  751e                 jne 0x4a7327
// 004a7309  8b16                 mov edx, dword ptr [esi]
// 004a730b  8b4204               mov eax, dword ptr [edx + 4]
// 004a730e  8bce                 mov ecx, esi
// 004a7310  ffd0                 call eax
// 004a7312  8d4e08               lea ecx, [esi + 8]
// 004a7315  83caff               or edx, 0xffffffff
// 004a7318  f00fc111             lock xadd dword ptr [ecx], edx
// 004a731c  7509                 jne 0x4a7327
// 004a731e  8b06                 mov eax, dword ptr [esi]
// 004a7320  8b5008               mov edx, dword ptr [eax + 8]
// 004a7323  8bce                 mov ecx, esi
// 004a7325  ffd2                 call edx
// 004a7327  891f                 mov dword ptr [edi], ebx
// 004a7329  83c50c               add ebp, 0xc
// 004a732c  83c70c               add edi, 0xc
// 004a732f  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 004a7333  759c                 jne 0x4a72d1
// 004a7335  5f                   pop edi
// 004a7336  5e                   pop esi
// 004a7337  5b                   pop ebx
// 004a7338  5d                   pop ebp
// 004a7339  c3                   ret 

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
