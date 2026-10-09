// from server: 95% by colin
// roc 2007-08 004cdae0  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cdae0

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern type_info* type_info_896898;

struct holder {
    int a;
    int b;
    int c;
};

void* __cdecl func(void* arg1, int arg2, int arg3)
{
    if (arg2 == 2) {
        if (*type_info_896898 == *(type_info*)arg1) {
            return arg1;
        }
        return 0;
    }
    if (arg2 == 0) {
        holder* p = (holder*)operator_new(0xc);
        if (p) {
            holder* src = (holder*)arg1;
            p->a = src->a;
            p->b = src->b;
            p->c = src->c;
        }
        return p;
    }
    operator_delete(arg1);
    return 0;
}
