// roc 2011-06 004f0610  unit: RBX::Network::IdSerializer  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f0610
//
// 004f0610  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f0614  57                   push edi
// 004f0615  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004f0619  397c2408             cmp dword ptr [esp + 8], edi
// 004f061d  7474                 je 0x4f0693
// 004f061f  53                   push ebx
// 004f0620  55                   push ebp
// 004f0621  56                   push esi
// 004f0622  8d5808               lea ebx, [eax + 8]
// 004f0625  8b4ff4               mov ecx, dword ptr [edi - 0xc]
// 004f0628  83ef0c               sub edi, 0xc
// 004f062b  83e80c               sub eax, 0xc
// 004f062e  8908                 mov dword ptr [eax], ecx
// 004f0630  8b5704               mov edx, dword ptr [edi + 4]
// 004f0633  83eb0c               sub ebx, 0xc
// 004f0636  8953fc               mov dword ptr [ebx - 4], edx
// 004f0639  8b6f08               mov ebp, dword ptr [edi + 8]
// 004f063c  8944241c             mov dword ptr [esp + 0x1c], eax
// 004f0640  3b2b                 cmp ebp, dword ptr [ebx]
// 004f0642  7446                 je 0x4f068a
// 004f0644  85ed                 test ebp, ebp
// 004f0646  740c                 je 0x4f0654
// 004f0648  8d4504               lea eax, [ebp + 4]
// 004f064b  b901000000           mov ecx, 1
// 004f0650  f00fc108             lock xadd dword ptr [eax], ecx
// 004f0654  8b33                 mov esi, dword ptr [ebx]
// 004f0656  85f6                 test esi, esi
// 004f0658  742a                 je 0x4f0684
// 004f065a  8d5604               lea edx, [esi + 4]
// 004f065d  83c8ff               or eax, 0xffffffff
// 004f0660  f00fc102             lock xadd dword ptr [edx], eax
// 004f0664  751e                 jne 0x4f0684
// 004f0666  8b16                 mov edx, dword ptr [esi]
// 004f0668  8b4204               mov eax, dword ptr [edx + 4]
// 004f066b  8bce                 mov ecx, esi
// 004f066d  ffd0                 call eax
// 004f066f  8d4e08               lea ecx, [esi + 8]
// 004f0672  83caff               or edx, 0xffffffff
// 004f0675  f00fc111             lock xadd dword ptr [ecx], edx
// 004f0679  7509                 jne 0x4f0684
// 004f067b  8b06                 mov eax, dword ptr [esi]
// 004f067d  8b5008               mov edx, dword ptr [eax + 8]
// 004f0680  8bce                 mov ecx, esi
// 004f0682  ffd2                 call edx
// 004f0684  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f0688  892b                 mov dword ptr [ebx], ebp
// 004f068a  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 004f068e  7595                 jne 0x4f0625
// 004f0690  5e                   pop esi
// 004f0691  5d                   pop ebp
// 004f0692  5b                   pop ebx
// 004f0693  5f                   pop edi
// 004f0694  c3                   ret 
// copied from an identical function in another client (function ?copy_backward@ns_ROCX00000d@@YAPAUEntry@1@PAU21@00@Z)

namespace ns_ROCX00000d {
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
}
