// from server: 95% by colin
// roc 2007-08 00729380  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00729380
//
// 00729380  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00729383  56                   push esi
// 00729384  8b742408             mov esi, dword ptr [esp + 8]
// 00729388  894604               mov dword ptr [esi + 4], eax
// 0072938b  89460c               mov dword ptr [esi + 0xc], eax
// 0072938e  33c0                 xor eax, eax
// 00729390  890e                 mov dword ptr [esi], ecx
// 00729392  894e08               mov dword ptr [esi + 8], ecx
// 00729395  894610               mov dword ptr [esi + 0x10], eax
// 00729398  894614               mov dword ptr [esi + 0x14], eax
// 0072939b  8bce                 mov ecx, esi
// 0072939d  884618               mov byte ptr [esi + 0x18], al
// 007293a0  e81bfdffff           call 0x7290c0
// 007293a5  8bc6                 mov eax, esi
// 007293a7  5e                   pop esi
// 007293a8  c20400               ret 4

struct Ubasic_connection_sp_counted_impl_p {
    char pad[0x18];
    int field_18;
    void construct();
    void* create(void* p);
};

void* Ubasic_connection_sp_counted_impl_p::create(void* p) {
    int v = field_18;
    char* q = (char*)p;
    *(int*)(q + 4) = v;
    *(int*)(q + 0xc) = v;
    *(int*)q = (int)this;
    *(int*)(q + 8) = (int)this;
    *(int*)(q + 0x10) = 0;
    *(int*)(q + 0x14) = 0;
    q[0x18] = 0;
    ((Ubasic_connection_sp_counted_impl_p*)q)->construct();
    return q;
}
