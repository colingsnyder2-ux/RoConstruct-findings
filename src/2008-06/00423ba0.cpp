// from server: 56% by colin
// roc 2008-06 00423ba0  unit: CSelectionTreeCtrl  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00423ba0
//
// 00423ba0  51                   push ecx
// 00423ba1  8b442418             mov eax, dword ptr [esp + 0x18]
// 00423ba5  56                   push esi
// 00423ba6  8b742414             mov esi, dword ptr [esp + 0x14]
// 00423baa  57                   push edi
// 00423bab  8bf8                 mov edi, eax
// 00423bad  3bf0                 cmp esi, eax
// 00423baf  7436                 je 0x423be7
// 00423bb1  8b06                 mov eax, dword ptr [esi]
// 00423bb3  83ec08               sub esp, 8
// 00423bb6  8bcc                 mov ecx, esp
// 00423bb8  8901                 mov dword ptr [ecx], eax
// 00423bba  8b4604               mov eax, dword ptr [esi + 4]
// 00423bbd  89642410             mov dword ptr [esp + 0x10], esp
// 00423bc1  894104               mov dword ptr [ecx + 4], eax
// 00423bc4  85c0                 test eax, eax
// 00423bc6  740c                 je 0x423bd4
// 00423bc8  83c004               add eax, 4
// 00423bcb  b901000000           mov ecx, 1
// 00423bd0  f00fc108             lock xadd dword ptr [eax], ecx
// 00423bd4  8b542430             mov edx, dword ptr [esp + 0x30]
// 00423bd8  52                   push edx
// 00423bd9  ff542430             call dword ptr [esp + 0x30]
// 00423bdd  83c608               add esi, 8
// 00423be0  83c40c               add esp, 0xc
// 00423be3  3bf7                 cmp esi, edi
// 00423be5  75ca                 jne 0x423bb1
// 00423be7  8b442410             mov eax, dword ptr [esp + 0x10]
// 00423beb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00423bef  8b542428             mov edx, dword ptr [esp + 0x28]
// 00423bf3  5f                   pop edi
// 00423bf4  8908                 mov dword ptr [eax], ecx
// 00423bf6  895004               mov dword ptr [eax + 4], edx
// 00423bf9  5e                   pop esi
// 00423bfa  59                   pop ecx
// 00423bfb  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    int* ptr;
    long* refcount;
};

struct CSelectionTreeCtrl {
    void __cdecl assign_range(RefCounted* first, RefCounted* last, RefCounted* out);
};

void CSelectionTreeCtrl::assign_range(RefCounted* first, RefCounted* last, RefCounted* out) {
    while (first != last) {
        RefCounted tmp;
        tmp.ptr = first->ptr;
        tmp.refcount = first->refcount;
        if (tmp.refcount != 0) {
            _InterlockedExchangeAdd(tmp.refcount, 1);
        }
        void (*fn)(RefCounted*) = *(void (**)(RefCounted*))((char*)&out + 4);
        fn(&tmp);
        first = (RefCounted*)((char*)first + 8);
    }
    out->ptr = first->ptr;
    out->refcount = first->refcount;
}
