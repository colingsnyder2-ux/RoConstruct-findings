// from server: 94% by colin
// roc 2007-08 00729350  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00729350
//
// 00729350  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00729353  8b10                 mov edx, dword ptr [eax]
// 00729355  56                   push esi
// 00729356  8b742408             mov esi, dword ptr [esp + 8]
// 0072935a  89460c               mov dword ptr [esi + 0xc], eax
// 0072935d  33c0                 xor eax, eax
// 0072935f  890e                 mov dword ptr [esi], ecx
// 00729361  894e08               mov dword ptr [esi + 8], ecx
// 00729364  895604               mov dword ptr [esi + 4], edx
// 00729367  894610               mov dword ptr [esi + 0x10], eax
// 0072936a  894614               mov dword ptr [esi + 0x14], eax
// 0072936d  8bce                 mov ecx, esi
// 0072936f  884618               mov byte ptr [esi + 0x18], al
// 00729372  e849fdffff           call 0x7290c0
// 00729377  8bc6                 mov eax, esi
// 00729379  5e                   pop esi
// 0072937a  c20400               ret 4

struct Ubasic_connection_sp_counted_impl_p {
    char pad[0x18];
    void* field_18;
    void* construct(void*);
};

extern "C" void __stdcall sub_7290c0(void*);

void* Ubasic_connection_sp_counted_impl_p::construct(void* arg) {
    void* p = this->field_18;
    void* v = *(void**)p;
    char* out = (char*)arg;
    *(void**)(out + 0xc) = p;
    *(void**)out = this;
    *(void**)(out + 8) = this;
    *(void**)(out + 4) = v;
    *(int*)(out + 0x10) = 0;
    *(int*)(out + 0x14) = 0;
    *(char*)(out + 0x18) = 0;
    sub_7290c0(out);
    return out;
}
