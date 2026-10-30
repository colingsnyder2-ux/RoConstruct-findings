// roc 2009-06 004dded0  unit: RBX::Network::IdSerializer  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004dded0
//
// 004dded0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004dded4  57                   push edi
// 004dded5  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004dded9  397c2408             cmp dword ptr [esp + 8], edi
// 004ddedd  7474                 je 0x4ddf53
// 004ddedf  53                   push ebx
// 004ddee0  55                   push ebp
// 004ddee1  56                   push esi
// 004ddee2  8d5808               lea ebx, [eax + 8]
// 004ddee5  8b4ff4               mov ecx, dword ptr [edi - 0xc]
// 004ddee8  83ef0c               sub edi, 0xc
// 004ddeeb  83e80c               sub eax, 0xc
// 004ddeee  8908                 mov dword ptr [eax], ecx
// 004ddef0  8b5704               mov edx, dword ptr [edi + 4]
// 004ddef3  83eb0c               sub ebx, 0xc
// 004ddef6  8953fc               mov dword ptr [ebx - 4], edx
// 004ddef9  8b6f08               mov ebp, dword ptr [edi + 8]
// 004ddefc  8944241c             mov dword ptr [esp + 0x1c], eax
// 004ddf00  3b2b                 cmp ebp, dword ptr [ebx]
// 004ddf02  7446                 je 0x4ddf4a
// 004ddf04  85ed                 test ebp, ebp
// 004ddf06  740c                 je 0x4ddf14
// 004ddf08  8d4504               lea eax, [ebp + 4]
// 004ddf0b  b901000000           mov ecx, 1
// 004ddf10  f00fc108             lock xadd dword ptr [eax], ecx
// 004ddf14  8b33                 mov esi, dword ptr [ebx]
// 004ddf16  85f6                 test esi, esi
// 004ddf18  742a                 je 0x4ddf44
// 004ddf1a  8d5604               lea edx, [esi + 4]
// 004ddf1d  83c8ff               or eax, 0xffffffff
// 004ddf20  f00fc102             lock xadd dword ptr [edx], eax
// 004ddf24  751e                 jne 0x4ddf44
// 004ddf26  8b16                 mov edx, dword ptr [esi]
// 004ddf28  8b4204               mov eax, dword ptr [edx + 4]
// 004ddf2b  8bce                 mov ecx, esi
// 004ddf2d  ffd0                 call eax
// 004ddf2f  8d4e08               lea ecx, [esi + 8]
// 004ddf32  83caff               or edx, 0xffffffff
// 004ddf35  f00fc111             lock xadd dword ptr [ecx], edx
// 004ddf39  7509                 jne 0x4ddf44
// 004ddf3b  8b06                 mov eax, dword ptr [esi]
// 004ddf3d  8b5008               mov edx, dword ptr [eax + 8]
// 004ddf40  8bce                 mov ecx, esi
// 004ddf42  ffd2                 call edx
// 004ddf44  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004ddf48  892b                 mov dword ptr [ebx], ebp
// 004ddf4a  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 004ddf4e  7595                 jne 0x4ddee5
// 004ddf50  5e                   pop esi
// 004ddf51  5d                   pop ebp
// 004ddf52  5b                   pop ebx
// 004ddf53  5f                   pop edi
// 004ddf54  c3                   ret 
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