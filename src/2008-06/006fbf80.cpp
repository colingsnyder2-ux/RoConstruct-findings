// from server: 55% by colin
struct S {
    char pad0[0x20];
    int field20;
    char pad24[0x138 - 0x24];
    void* field138;
    int field13c;
    char pad140[0x148 - 0x140];
    int field148;
    S* getSomething();
    void resetSomething();

    void f();
};

extern "C" int __stdcall InvalidateRect(void*, const void*, int);

S* S::getSomething() { return 0; }
void S::resetSomething() {}

void S::f() {
    int flag = (*(int*)((char*)field138 + 0x28) != 0) ? 1 : 0;
    if (field13c != flag) {
        if (getSomething()->field148 != 0) {
            resetSomething();
            return;
        }
    }
    if (field20 != 0) {
        if (getSomething()->field148 == 0) {
            InvalidateRect((void*)field20, 0, 0);
        }
    }
}
