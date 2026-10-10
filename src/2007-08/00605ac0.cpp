// from server: 51% by colin
struct SleepStage {
    void stepSleepStage(int);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" int __cdecl sub_604BE0(void*, int);
extern "C" int __cdecl sub_604B80(void*, int);
extern "C" void __cdecl sub_433230(int, int, int, int, int, int);
extern "C" void __cdecl sub_5B7430(int, int, int, int, int, int);

void SleepStage::stepSleepStage(int a)
{
    int b = sub_604BE0(this, a);
    if (this == 0)
        _invalid_parameter_noinfo();
    int c = sub_604B80(this, a);
    if (this == 0)
        _invalid_parameter_noinfo();

    int d = 0;
    sub_433230(c, (int)this, b, (int)this, (int)&d, d);
    sub_5B7430((int)this, (int)&d, c, (int)this, b, (int)this);
}
