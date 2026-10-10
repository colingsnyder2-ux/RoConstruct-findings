// from server: 81% by tester
// roc 2007-08 0076cbd0  unit: seg_00760000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076cbd0

extern "C" int __cdecl sub_00725520(int, int);
extern "C" int __cdecl sub_0041fd40();
extern "C" int __cdecl sub_00407410(int*);
extern "C" int __cdecl sub_00630d23(int);
extern "C" int __cdecl sub_004339d0();

struct CrashReporter {
    void init();
};

void CrashReporter::init()
{
    sub_00725520(0x8bb4c4, 0x420660);
    int v = sub_0041fd40();
    int* p = &v;
    int r = sub_00407410(p);
    sub_004339d0();
    *(int*)r = 0x886358;
    sub_00630d23(0x777880);
}
