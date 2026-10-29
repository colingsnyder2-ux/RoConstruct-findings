// roc 2010-06 004e2220  unit: RBX::Network::IdSerializer  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e2220
//
// 004e2220  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e2224  57                   push edi
// 004e2225  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004e2229  397c2408             cmp dword ptr [esp + 8], edi
// 004e222d  7474                 je 0x4e22a3
// 004e222f  53                   push ebx
// 004e2230  55                   push ebp
// 004e2231  56                   push esi
// 004e2232  8d5808               lea ebx, [eax + 8]
// 004e2235  8b4ff4               mov ecx, dword ptr [edi - 0xc]
// 004e2238  83ef0c               sub edi, 0xc
// 004e223b  83e80c               sub eax, 0xc
// 004e223e  8908                 mov dword ptr [eax], ecx
// 004e2240  8b5704               mov edx, dword ptr [edi + 4]
// 004e2243  83eb0c               sub ebx, 0xc
// 004e2246  8953fc               mov dword ptr [ebx - 4], edx
// 004e2249  8b6f08               mov ebp, dword ptr [edi + 8]
// 004e224c  8944241c             mov dword ptr [esp + 0x1c], eax
// 004e2250  3b2b                 cmp ebp, dword ptr [ebx]
// 004e2252  7446                 je 0x4e229a
// 004e2254  85ed                 test ebp, ebp
// 004e2256  740c                 je 0x4e2264
// 004e2258  8d4504               lea eax, [ebp + 4]
// 004e225b  b901000000           mov ecx, 1
// 004e2260  f00fc108             lock xadd dword ptr [eax], ecx
// 004e2264  8b33                 mov esi, dword ptr [ebx]
// 004e2266  85f6                 test esi, esi
// 004e2268  742a                 je 0x4e2294
// 004e226a  8d5604               lea edx, [esi + 4]
// 004e226d  83c8ff               or eax, 0xffffffff
// 004e2270  f00fc102             lock xadd dword ptr [edx], eax
// 004e2274  751e                 jne 0x4e2294
// 004e2276  8b16                 mov edx, dword ptr [esi]
// 004e2278  8b4204               mov eax, dword ptr [edx + 4]
// 004e227b  8bce                 mov ecx, esi
// 004e227d  ffd0                 call eax
// 004e227f  8d4e08               lea ecx, [esi + 8]
// 004e2282  83caff               or edx, 0xffffffff
// 004e2285  f00fc111             lock xadd dword ptr [ecx], edx
// 004e2289  7509                 jne 0x4e2294
// 004e228b  8b06                 mov eax, dword ptr [esi]
// 004e228d  8b5008               mov edx, dword ptr [eax + 8]
// 004e2290  8bce                 mov ecx, esi
// 004e2292  ffd2                 call edx
// 004e2294  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e2298  892b                 mov dword ptr [ebx], ebp
// 004e229a  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 004e229e  7595                 jne 0x4e2235
// 004e22a0  5e                   pop esi
// 004e22a1  5d                   pop ebp
// 004e22a2  5b                   pop ebx
// 004e22a3  5f                   pop edi
// 004e22a4  c3                   ret 
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