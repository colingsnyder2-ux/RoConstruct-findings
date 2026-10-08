// from server: 87% by colin
// roc 2007-08 004560c0  unit: ToggleFullscreenVerb  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004560c0

extern "C" int __stdcall PostMessageA(int, unsigned int, unsigned int, int);
extern "C" int __stdcall sub_62FF02();

struct ToggleFullscreenVerb {
    void doIt(int);
};

void ToggleFullscreenVerb::doIt(int) {
    int a = sub_62FF02();
    int b = *(int*)(a + 4);
    int c = *(int*)(b + 0x20);
    int d = *(int*)(c + 0x20);
    PostMessageA(d, 0x111, 0x80f4, 0);
}
