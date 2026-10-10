// from server: 80% by colin
struct seg_00770000_00778140
{
    void func_00778140();
};

extern "C" void __cdecl sub_00725520(void*, void*);
extern "C" void* __cdecl sub_00487270();
extern "C" void* __cdecl sub_00407410(void*);
extern "C" void __cdecl sub_00407220(void*);

void seg_00770000_00778140::func_00778140()
{
    *(int*)0x88e324 = 0x79b0c4;
    sub_00725520((void*)0x8bdcc0, (void*)0x4879c0);
    void* p = sub_00487270();
    void* q = sub_00407410(&p);
    sub_00407220(q);
}
