// from server: 81% by colin
// roc 2007-08 007773a0  unit: seg_00770000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007773a0

extern "C" void __stdcall sub_725520(int, int);
extern "C" int __cdecl sub_40cd00();
extern "C" int __cdecl sub_407410(int*);
extern "C" void __cdecl sub_407220(int);

struct CChildFrame {
    void init();
};

void CChildFrame::init() {
    *(int*)0x8824c0 = 0x78688c;
    sub_725520(0x40d270, 0x8baf80);
    int v = sub_40cd00();
    int* p = &v;
    int r = sub_407410(p);
    sub_407220(r);
}
