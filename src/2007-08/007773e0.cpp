// from server: 80% by colin
// roc 2007-08 007773e0  unit: seg_00770000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007773e0

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_40ed00();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_407220(void*);

struct S {
    void f();
};

void S::f() {
    *(void**)0x88261c = (void*)0x786cdc;
    sub_725520((void*)0x8bafa0, (void*)0x40edc0);
    void* p = sub_40ed00();
    sub_407220(sub_407410(&p));
}
