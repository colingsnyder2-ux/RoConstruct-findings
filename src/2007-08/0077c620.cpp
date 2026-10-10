// from server: 80% by colin
extern "C" void __cdecl sub_00725520(void*, void*);
extern "C" void* __cdecl sub_005F0770();
extern "C" void* __cdecl sub_00407410(void*);
extern "C" void __cdecl sub_00407220(void*);

void sub_0077C620()
{
    *(int*)0x8B3AD0 = 0x7C087C;
    sub_00725520((void*)0x8C77FC, (void*)0x5F0C70);
    void* p = sub_005F0770();
    void* q = sub_00407410(&p);
    sub_00407220(q);
}
