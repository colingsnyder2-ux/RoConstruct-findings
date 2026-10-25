// from server: 100% by king_originala
// roc 2008-06 004a6ee0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a6ee0
//
// 004a6ee0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a6ee4  57                   push edi
// 004a6ee5  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004a6ee9  397c2408             cmp dword ptr [esp + 8], edi
// 004a6eed  7474                 je 0x4a6f63
// 004a6eef  53                   push ebx
// 004a6ef0  55                   push ebp
// 004a6ef1  56                   push esi
// 004a6ef2  8d5808               lea ebx, [eax + 8]
// 004a6ef5  8b4ff4               mov ecx, dword ptr [edi - 0xc]
// 004a6ef8  83ef0c               sub edi, 0xc
// 004a6efb  83e80c               sub eax, 0xc
// 004a6efe  8908                 mov dword ptr [eax], ecx
// 004a6f00  8b5704               mov edx, dword ptr [edi + 4]
// 004a6f03  83eb0c               sub ebx, 0xc
// 004a6f06  8953fc               mov dword ptr [ebx - 4], edx
// 004a6f09  8b6f08               mov ebp, dword ptr [edi + 8]
// 004a6f0c  8944241c             mov dword ptr [esp + 0x1c], eax
// 004a6f10  3b2b                 cmp ebp, dword ptr [ebx]
// 004a6f12  7446                 je 0x4a6f5a
// 004a6f14  85ed                 test ebp, ebp
// 004a6f16  740c                 je 0x4a6f24
// 004a6f18  8d4504               lea eax, [ebp + 4]
// 004a6f1b  b901000000           mov ecx, 1
// 004a6f20  f00fc108             lock xadd dword ptr [eax], ecx
// 004a6f24  8b33                 mov esi, dword ptr [ebx]
// 004a6f26  85f6                 test esi, esi
// 004a6f28  742a                 je 0x4a6f54
// 004a6f2a  8d5604               lea edx, [esi + 4]
// 004a6f2d  83c8ff               or eax, 0xffffffff
// 004a6f30  f00fc102             lock xadd dword ptr [edx], eax
// 004a6f34  751e                 jne 0x4a6f54
// 004a6f36  8b16                 mov edx, dword ptr [esi]
// 004a6f38  8b4204               mov eax, dword ptr [edx + 4]
// 004a6f3b  8bce                 mov ecx, esi
// 004a6f3d  ffd0                 call eax
// 004a6f3f  8d4e08               lea ecx, [esi + 8]
// 004a6f42  83caff               or edx, 0xffffffff
// 004a6f45  f00fc111             lock xadd dword ptr [ecx], edx
// 004a6f49  7509                 jne 0x4a6f54
// 004a6f4b  8b06                 mov eax, dword ptr [esi]
// 004a6f4d  8b5008               mov edx, dword ptr [eax + 8]
// 004a6f50  8bce                 mov ecx, esi
// 004a6f52  ffd2                 call edx
// 004a6f54  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a6f58  892b                 mov dword ptr [ebx], ebp
// 004a6f5a  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 004a6f5e  7595                 jne 0x4a6ef5
// 004a6f60  5e                   pop esi
// 004a6f61  5d                   pop ebp
// 004a6f62  5b                   pop ebx
// 004a6f63  5f                   pop edi
// 004a6f64  c3                   ret 

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
