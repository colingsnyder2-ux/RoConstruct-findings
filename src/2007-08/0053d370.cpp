// from server: 84% by colin
// roc 2007-08 0053d370  unit: std::D::DU?$char_traits::V?$basic_string::?$sp_counted_impl_p  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053d370
//
// 0053d370  56                   push esi
// 0053d371  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0053d374  85f6                 test esi, esi
// 0053d376  7411                 je 0x53d389
// 0053d378  8bce                 mov ecx, esi
// 0053d37a  ff15ace67700         call dword ptr [0x77e6ac]
// 0053d380  56                   push esi
// 0053d381  e8dc280f00           call 0x62fc62
// 0053d386  83c404               add esp, 4
// 0053d389  5e                   pop esi
// 0053d38a  c3                   ret 

struct S {
    char pad[12];
    void* field_c;
    void destroy();
};

extern "C" void __stdcall string_dtor(void*);
extern "C" void __cdecl free_mem(void*);

void S::destroy() {
    void* p = field_c;
    if (p != 0) {
        string_dtor(p);
        free_mem(p);
    }
}
