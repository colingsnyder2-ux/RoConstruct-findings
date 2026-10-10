// from server: 78% by colin
// roc 2007-08 00777190  unit: seg_00770000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777190

extern "C" void __stdcall sub_725520(void*, void*);
extern "C" void* __cdecl sub_4027a0();
extern "C" void __cdecl sub_407410(void*);
extern "C" void __cdecl sub_407220();

void sub_777190()
{
    *(void**)0x881370 = (void*)0x7850fc;
    sub_725520((void*)0x8baecc, (void*)0x4035d0);
    void* p = sub_4027a0();
    sub_407410(&p);
    sub_407220();
}
