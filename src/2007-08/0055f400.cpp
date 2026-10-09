// from server: 66% by colin
// roc 2007-08 0055f400  unit: RBX::ClearBackpack  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055f400
//
// 0055f400  53                   push ebx
// 0055f401  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0055f405  56                   push esi
// 0055f406  8b742414             mov esi, dword ptr [esp + 0x14]
// 0055f40a  57                   push edi
// 0055f40b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0055f40f  3bf7                 cmp esi, edi
// 0055f411  742f                 je 0x55f442
// 0055f413  8b06                 mov eax, dword ptr [esi]
// 0055f415  83ec08               sub esp, 8
// 0055f418  8bcc                 mov ecx, esp
// 0055f41a  8901                 mov dword ptr [ecx], eax
// 0055f41c  8b4604               mov eax, dword ptr [esi + 4]
// 0055f41f  85c0                 test eax, eax
// 0055f421  8964241c             mov dword ptr [esp + 0x1c], esp
// 0055f425  894104               mov dword ptr [ecx + 4], eax
// 0055f428  740c                 je 0x55f436
// 0055f42a  83c004               add eax, 4
// 0055f42d  b901000000           mov ecx, 1
// 0055f432  f00fc108             lock xadd dword ptr [eax], ecx
// 0055f436  ffd3                 call ebx
// 0055f438  83c608               add esi, 8
// 0055f43b  83c408               add esp, 8
// 0055f43e  3bf7                 cmp esi, edi
// 0055f440  75d1                 jne 0x55f413
// 0055f442  8b442410             mov eax, dword ptr [esp + 0x10]
// 0055f446  8b542428             mov edx, dword ptr [esp + 0x28]
// 0055f44a  5f                   pop edi
// 0055f44b  5e                   pop esi
// 0055f44c  8918                 mov dword ptr [eax], ebx
// 0055f44e  895004               mov dword ptr [eax + 4], edx
// 0055f451  5b                   pop ebx
// 0055f452  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ClearBackpackHelper {
    int field0;
    volatile long* field4;
};

struct ClearBackpackResult {
    int field0;
    int field4;
};

struct ClearBackpack {
    ClearBackpackResult* clear(ClearBackpackHelper* first, ClearBackpackHelper* last, void (__cdecl *fn)(ClearBackpackHelper*), ClearBackpackResult* out);
};

ClearBackpackResult* ClearBackpack::clear(ClearBackpackHelper* first, ClearBackpackHelper* last, void (__cdecl *fn)(ClearBackpackHelper*), ClearBackpackResult* out)
{
    while (first != last) {
        ClearBackpackHelper tmp;
        tmp.field0 = first->field0;
        tmp.field4 = first->field4;
        if (tmp.field4 != 0) {
            _InterlockedExchangeAdd(tmp.field4, 1);
        }
        fn(&tmp);
        first += 1;
    }
    out->field0 = (int)fn;
    out->field4 = (int)last;
    return out;
}
