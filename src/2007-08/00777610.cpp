// from server: 84% by colin
struct Seg_00777610 {
    void Init();
};

extern "C" void __stdcall sub_725520(void*, void*);
extern "C" void* __cdecl sub_41bed0();
extern "C" void* __stdcall sub_407410(void*);
extern "C" void __stdcall sub_407220(void*);

void Seg_00777610::Init()
{
    *(int*)0x884a4c = 0x787a98;
    sub_725520((void*)0x8bb480, (void*)0x41c110);
    void* p = sub_41bed0();
    void* q = sub_407410(&p);
    sub_407220(q);
}
