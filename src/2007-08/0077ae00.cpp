// from server: 76% by colin
// roc 2007-08 0077ae00  unit: seg_00770000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ae00

extern "C" void __stdcall sub_725520(int, int);
extern "C" int __cdecl sub_58d7c0();
extern "C" int __cdecl sub_407410(int*);
extern "C" void __cdecl sub_407220();

void sub_7af6e8();

int g_8a450c;
int g_8c37c0;

void sub_7ae00()
{
    *(void**)0x8a450c = (void*)sub_7af6e8;
    sub_725520(0x58dd80, 0x8c37c0);
    int v = sub_58d7c0();
    int* p = &v;
    int r = sub_407410(p);
    sub_407220();
}
