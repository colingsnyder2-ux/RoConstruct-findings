// roc 2009-12 00533f10  unit: RBX::Network::IdSerializer  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00533f10
//
// 00533f10  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00533f14  57                   push edi
// 00533f15  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00533f19  397c2408             cmp dword ptr [esp + 8], edi
// 00533f1d  7474                 je 0x533f93
// 00533f1f  53                   push ebx
// 00533f20  55                   push ebp
// 00533f21  56                   push esi
// 00533f22  8d5808               lea ebx, [eax + 8]
// 00533f25  8b4ff4               mov ecx, dword ptr [edi - 0xc]
// 00533f28  83ef0c               sub edi, 0xc
// 00533f2b  83e80c               sub eax, 0xc
// 00533f2e  8908                 mov dword ptr [eax], ecx
// 00533f30  8b5704               mov edx, dword ptr [edi + 4]
// 00533f33  83eb0c               sub ebx, 0xc
// 00533f36  8953fc               mov dword ptr [ebx - 4], edx
// 00533f39  8b6f08               mov ebp, dword ptr [edi + 8]
// 00533f3c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00533f40  3b2b                 cmp ebp, dword ptr [ebx]
// 00533f42  7446                 je 0x533f8a
// 00533f44  85ed                 test ebp, ebp
// 00533f46  740c                 je 0x533f54
// 00533f48  8d4504               lea eax, [ebp + 4]
// 00533f4b  b901000000           mov ecx, 1
// 00533f50  f00fc108             lock xadd dword ptr [eax], ecx
// 00533f54  8b33                 mov esi, dword ptr [ebx]
// 00533f56  85f6                 test esi, esi
// 00533f58  742a                 je 0x533f84
// 00533f5a  8d5604               lea edx, [esi + 4]
// 00533f5d  83c8ff               or eax, 0xffffffff
// 00533f60  f00fc102             lock xadd dword ptr [edx], eax
// 00533f64  751e                 jne 0x533f84
// 00533f66  8b16                 mov edx, dword ptr [esi]
// 00533f68  8b4204               mov eax, dword ptr [edx + 4]
// 00533f6b  8bce                 mov ecx, esi
// 00533f6d  ffd0                 call eax
// 00533f6f  8d4e08               lea ecx, [esi + 8]
// 00533f72  83caff               or edx, 0xffffffff
// 00533f75  f00fc111             lock xadd dword ptr [ecx], edx
// 00533f79  7509                 jne 0x533f84
// 00533f7b  8b06                 mov eax, dword ptr [esi]
// 00533f7d  8b5008               mov edx, dword ptr [eax + 8]
// 00533f80  8bce                 mov ecx, esi
// 00533f82  ffd2                 call edx
// 00533f84  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00533f88  892b                 mov dword ptr [ebx], ebp
// 00533f8a  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 00533f8e  7595                 jne 0x533f25
// 00533f90  5e                   pop esi
// 00533f91  5d                   pop ebp
// 00533f92  5b                   pop ebx
// 00533f93  5f                   pop edi
// 00533f94  c3                   ret 
// copied from an identical function in another client (function ?copy_backward@@YAPAUEntry@@PAU1@00@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Entry {
    unsigned long value;
    void* pointer;
    Control* control;
};

Entry* __cdecl copy_backward(Entry* first, Entry* last, Entry* result)
{
    if (first != last) {
        Control** slot = &result->control;
        do {
            --last;
            --result;
            result->value = last->value;
            slot = reinterpret_cast<Control**>(
                reinterpret_cast<char*>(slot) - sizeof(Entry));
            reinterpret_cast<void**>(slot)[-1] = last->pointer;

            Control* incoming = last->control;
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
        } while (last != first);
    }
    return result;
}