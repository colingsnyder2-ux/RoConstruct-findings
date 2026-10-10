// from server: 44% by tester
extern "C" int __cdecl sub_50A9B0();

extern "C" int (__stdcall *off_94278C)();
extern "C" void (__stdcall *off_802468)();
extern "C" void (__stdcall *off_8027F4)(int);

extern "C" char byte_96EE76;

struct S {
    void f();
};

void S::f()
{
    int local4;
    char local8[20];
    int local1C;
    int local2C;
    char bl;

    local1C = 1;
    if (off_94278C()) {
        bl = 1;
    } else {
        bl = 0;
    }

    local2C = -1;
    if (local4 & 1) {
        off_802468();
    }

    if (bl) {
        off_8027F4(-1);
    }

    sub_50A9B0();

    byte_96EE76 = byte_96EE76;
}
