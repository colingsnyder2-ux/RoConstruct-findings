// from server: 80% by colin
// roc 2007-08 00779c40  unit: seg_00770000  size: 55 bytes

extern "C" void __cdecl sub_00725520(void*, void*);
extern "C" void* __cdecl sub_00557710();
extern "C" void* __cdecl sub_00407410(void*);
extern "C" void __cdecl sub_00407220(void*);

void sub_00779c40()
{
    *(void**)0x89ebc4 = (void*)0x7a8a14;
    sub_00725520((void*)0x8c1f0c, (void*)0x5586e0);
    void* p = sub_00557710();
    void* q = sub_00407410(&p);
    sub_00407220(q);
}
