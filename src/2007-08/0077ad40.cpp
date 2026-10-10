// from server: 85% by colin
// roc 2007-08 0077ad40  unit: seg_00770000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ad40

extern "C" void __stdcall sub_725520(int, int);
extern "C" int __cdecl sub_58d910();
extern "C" int __cdecl sub_407410(int*);
extern "C" void __fastcall sub_407220(int);

void sub_7af73c();
void sub_8c37cc();
void sub_58ddb0();

int g_8a4518;

void f()
{
    sub_725520(0x58ddb0, 0x8c37cc);
    g_8a4518 = (int)&sub_7af73c;
    int v = sub_58d910();
    sub_407220(sub_407410(&v));
}
