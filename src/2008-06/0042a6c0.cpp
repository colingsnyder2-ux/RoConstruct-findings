// from server: 93% by colin
// roc 2008-06 0042a6c0  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042a6c0
//
// 0042a6c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042a6c4  85c0                 test eax, eax
// 0042a6c6  7523                 jne 0x42a6eb
// 0042a6c8  8b442408             mov eax, dword ptr [esp + 8]
// 0042a6cc  85c0                 test eax, eax
// 0042a6ce  7440                 je 0x42a710
// 0042a6d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042a6d4  8b11                 mov edx, dword ptr [ecx]
// 0042a6d6  8910                 mov dword ptr [eax], edx
// 0042a6d8  8b5104               mov edx, dword ptr [ecx + 4]
// 0042a6db  895004               mov dword ptr [eax + 4], edx
// 0042a6de  8b5108               mov edx, dword ptr [ecx + 8]
// 0042a6e1  895008               mov dword ptr [eax + 8], edx
// 0042a6e4  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0042a6e7  89480c               mov dword ptr [eax + 0xc], ecx
// 0042a6ea  c3                   ret 
// 0042a6eb  83f801               cmp eax, 1
// 0042a6ee  7420                 je 0x42a710
// 0042a6f0  56                   push esi
// 0042a6f1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042a6f5  8b0e                 mov ecx, dword ptr [esi]
// 0042a6f7  68b0e69200           push 0x92e6b0
// 0042a6fc  ff1578288000         call dword ptr [0x802878]
// 0042a702  0fb6d0               movzx edx, al
// 0042a705  f7da                 neg edx
// 0042a707  1bd2                 sbb edx, edx
// 0042a709  23542408             and edx, dword ptr [esp + 8]
// 0042a70d  8916                 mov dword ptr [esi], edx
// 0042a70f  5e                   pop esi
// 0042a710  c3                   ret 





struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct S {
};

void __cdecl assign(void* dst, void* src, int mode)
{
    if (mode == 0) {
        if (dst == 0) return;
        int* d = (int*)dst;
        int* s = (int*)src;
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
        d[3] = s[3];
        return;
    }
    if (mode == 1) return;
    int* p = (int*)src;
    const type_info* ti = (const type_info*)p[0];
    if (*ti == *(const type_info*)0x92e6b0) {
        *(int*)src = (int)dst;
    } else {
        *(int*)src = 0;
    }
}
