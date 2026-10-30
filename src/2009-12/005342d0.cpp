// roc 2009-12 005342d0  unit: RBX::Network::IdSerializer  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005342d0
//
// 005342d0  55                   push ebp
// 005342d1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 005342d5  3b6c240c             cmp ebp, dword ptr [esp + 0xc]
// 005342d9  746d                 je 0x534348
// 005342db  53                   push ebx
// 005342dc  56                   push esi
// 005342dd  57                   push edi
// 005342de  8d7d08               lea edi, [ebp + 8]
// 005342e1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005342e5  8b08                 mov ecx, dword ptr [eax]
// 005342e7  894d00               mov dword ptr [ebp], ecx
// 005342ea  8b5004               mov edx, dword ptr [eax + 4]
// 005342ed  8957fc               mov dword ptr [edi - 4], edx
// 005342f0  8b5808               mov ebx, dword ptr [eax + 8]
// 005342f3  3b1f                 cmp ebx, dword ptr [edi]
// 005342f5  7442                 je 0x534339
// 005342f7  85db                 test ebx, ebx
// 005342f9  740c                 je 0x534307
// 005342fb  8d4304               lea eax, [ebx + 4]
// 005342fe  b901000000           mov ecx, 1
// 00534303  f00fc108             lock xadd dword ptr [eax], ecx
// 00534307  8b37                 mov esi, dword ptr [edi]
// 00534309  85f6                 test esi, esi
// 0053430b  742a                 je 0x534337
// 0053430d  8d5604               lea edx, [esi + 4]
// 00534310  83c8ff               or eax, 0xffffffff
// 00534313  f00fc102             lock xadd dword ptr [edx], eax
// 00534317  751e                 jne 0x534337
// 00534319  8b16                 mov edx, dword ptr [esi]
// 0053431b  8b4204               mov eax, dword ptr [edx + 4]
// 0053431e  8bce                 mov ecx, esi
// 00534320  ffd0                 call eax
// 00534322  8d4e08               lea ecx, [esi + 8]
// 00534325  83caff               or edx, 0xffffffff
// 00534328  f00fc111             lock xadd dword ptr [ecx], edx
// 0053432c  7509                 jne 0x534337
// 0053432e  8b06                 mov eax, dword ptr [esi]
// 00534330  8b5008               mov edx, dword ptr [eax + 8]
// 00534333  8bce                 mov ecx, esi
// 00534335  ffd2                 call edx
// 00534337  891f                 mov dword ptr [edi], ebx
// 00534339  83c50c               add ebp, 0xc
// 0053433c  83c70c               add edi, 0xc
// 0053433f  3b6c2418             cmp ebp, dword ptr [esp + 0x18]
// 00534343  759c                 jne 0x5342e1
// 00534345  5f                   pop edi
// 00534346  5e                   pop esi
// 00534347  5b                   pop ebx
// 00534348  5d                   pop ebp
// 00534349  c3                   ret 
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