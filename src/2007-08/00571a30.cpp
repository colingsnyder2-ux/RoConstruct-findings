// from server: 42% by colin
// roc 2007-08 00571a30  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00571a30
//
// 00571a30  56                   push esi
// 00571a31  57                   push edi
// 00571a32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00571a36  83ec1c               sub esp, 0x1c
// 00571a39  8d7704               lea esi, [edi + 4]
// 00571a3c  8d460c               lea eax, [esi + 0xc]
// 00571a3f  8bcc                 mov ecx, esp
// 00571a41  89642428             mov dword ptr [esp + 0x28], esp
// 00571a45  50                   push eax
// 00571a46  ff159ce67700         call dword ptr [0x77e69c]
// 00571a4c  8b0f                 mov ecx, dword ptr [edi]
// 00571a4e  56                   push esi
// 00571a4f  ffd1                 call ecx
// 00571a51  83c420               add esp, 0x20
// 00571a54  5f                   pop edi
// 00571a55  5e                   pop esi
// 00571a56  c3                   ret 

struct sp_counted_impl_p_udata {
    void* field_0;
    char pad[0x0c];
    void* field_10;
    void release();
};

struct sp_counted_impl_p {
    void* field_0;
    char pad[0x0c];
    void* field_10;
    void dispose();
};

extern "C" void* __stdcall sub_77E69C(void*);

void sp_counted_impl_p::dispose()
{
    char buf[0x1c];
    sub_77E69C(&buf[0]);
    void (*fn)(void*) = *(void (**)(void*))field_0;
    fn(&field_10);
}
