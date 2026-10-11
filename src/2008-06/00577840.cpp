// from server: 90% by colin
// roc 2008-06 00577840  unit: RBX::PAVTool::?$sp_counted_impl_pd  size: 123 bytes

struct type_info;

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern "C" void __cdecl std_string_dtor(void*);
extern "C" bool __cdecl type_info_equal(const type_info* self, const type_info* other);

struct functor_buffer {
    void* data[4];
};

struct functor_manager {
    static void manage(const functor_buffer& in, functor_buffer& out, int op);
};

extern "C" void __cdecl copy_helper(functor_buffer* dst, void* src);

void functor_manager::manage(const functor_buffer& in, functor_buffer& out, int op)
{
    if (op == 0) {
        void* src = in.data[0];
        void* mem = operator_new(0x20);
        functor_buffer* p = (functor_buffer*)mem;
        copy_helper(p, src);
        out.data[0] = p;
        return;
    }
    if (op == 1) {
        functor_buffer* p = (functor_buffer*)out.data[0];
        std_string_dtor((char*)p + 4);
        operator_delete(p);
        out.data[0] = 0;
        return;
    }
    functor_buffer* p = (functor_buffer*)out.data[0];
    if (type_info_equal((const type_info*)p, (const type_info*)0x946998)) {
        out.data[0] = in.data[0];
    } else {
        out.data[0] = 0;
    }
}
