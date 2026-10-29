// roc 2012-06 0056c140  unit: RBX::Network::IdSerializer  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056c140
//
// 0056c140  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056c144  57                   push edi
// 0056c145  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0056c149  397c2408             cmp dword ptr [esp + 8], edi
// 0056c14d  7474                 je 0x56c1c3
// 0056c14f  53                   push ebx
// 0056c150  55                   push ebp
// 0056c151  56                   push esi
// 0056c152  8d5808               lea ebx, [eax + 8]
// 0056c155  8b4ff4               mov ecx, dword ptr [edi - 0xc]
// 0056c158  83ef0c               sub edi, 0xc
// 0056c15b  83e80c               sub eax, 0xc
// 0056c15e  8908                 mov dword ptr [eax], ecx
// 0056c160  8b5704               mov edx, dword ptr [edi + 4]
// 0056c163  83eb0c               sub ebx, 0xc
// 0056c166  8953fc               mov dword ptr [ebx - 4], edx
// 0056c169  8b6f08               mov ebp, dword ptr [edi + 8]
// 0056c16c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0056c170  3b2b                 cmp ebp, dword ptr [ebx]
// 0056c172  7446                 je 0x56c1ba
// 0056c174  85ed                 test ebp, ebp
// 0056c176  740c                 je 0x56c184
// 0056c178  8d4504               lea eax, [ebp + 4]
// 0056c17b  b901000000           mov ecx, 1
// 0056c180  f00fc108             lock xadd dword ptr [eax], ecx
// 0056c184  8b33                 mov esi, dword ptr [ebx]
// 0056c186  85f6                 test esi, esi
// 0056c188  742a                 je 0x56c1b4
// 0056c18a  8d5604               lea edx, [esi + 4]
// 0056c18d  83c8ff               or eax, 0xffffffff
// 0056c190  f00fc102             lock xadd dword ptr [edx], eax
// 0056c194  751e                 jne 0x56c1b4
// 0056c196  8b16                 mov edx, dword ptr [esi]
// 0056c198  8b4204               mov eax, dword ptr [edx + 4]
// 0056c19b  8bce                 mov ecx, esi
// 0056c19d  ffd0                 call eax
// 0056c19f  8d4e08               lea ecx, [esi + 8]
// 0056c1a2  83caff               or edx, 0xffffffff
// 0056c1a5  f00fc111             lock xadd dword ptr [ecx], edx
// 0056c1a9  7509                 jne 0x56c1b4
// 0056c1ab  8b06                 mov eax, dword ptr [esi]
// 0056c1ad  8b5008               mov edx, dword ptr [eax + 8]
// 0056c1b0  8bce                 mov ecx, esi
// 0056c1b2  ffd2                 call edx
// 0056c1b4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056c1b8  892b                 mov dword ptr [ebx], ebp
// 0056c1ba  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 0056c1be  7595                 jne 0x56c155
// 0056c1c0  5e                   pop esi
// 0056c1c1  5d                   pop ebp
// 0056c1c2  5b                   pop ebx
// 0056c1c3  5f                   pop edi
// 0056c1c4  c3                   ret 
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