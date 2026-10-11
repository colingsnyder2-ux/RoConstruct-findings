// from server: 83% by colin
// roc-flags: /O2 /GS- /EHsc /MD
struct Obj{Obj* f4();}; extern "C" void reg_fn(void*,void*); extern "C" void* make_fn(); extern "C" Obj* init_fn(void*); extern "C" void final_fn(int); extern void* type_tag; extern int g_value,final_arg; extern void fn_a(),fn_b();
void func_007f1da0(){void* local; reg_fn(&fn_a,&fn_b); local=make_fn(); Obj* o=init_fn(&local)->f4(); *(void**)o=&type_tag; g_value=0x29a; final_fn((int)&final_arg);}
