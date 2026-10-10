// from server: 80% by colin
// roc 2007-08 00779d40  unit: seg_00770000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779d40

extern "C" void __cdecl sub_00725520(int, int);
extern "C" int __cdecl sub_0055e6a0();
extern "C" int __cdecl sub_00407410(int*);
extern "C" void __cdecl sub_00407220();

void __cdecl sub_00779d40()
{
    int local;
    *(int*)0x89f37c = 0x7a95a8;
    sub_00725520(0x8c2320, 0x55ed50);
    local = sub_0055e6a0();
    sub_00407410(&local);
    sub_00407220();
}
