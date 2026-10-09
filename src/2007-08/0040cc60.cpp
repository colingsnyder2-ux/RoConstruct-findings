// from server: 65% by colin
// roc 2007-08 0040cc60  unit: CChatPrompt  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040cc60

extern "C" void* __stdcall GetFocus();
extern "C" void* __stdcall sub_6301C0(void*);

struct CChatPrompt {
    void method(int a, int b);
};

void CChatPrompt::method(int a, int b) {
    void* focus = GetFocus();
    void* result = sub_6301C0(focus);
    int* obj = (int*)a;
    if (result == this) {
        (*(void (__thiscall**)(int*, int))(*obj + 0x38))(obj, 0);
        (*(void (__thiscall**)(int*, int))(*obj + 0x34))(obj, 0xfae6e6);
    } else {
        (*(void (__thiscall**)(int*, int))(*obj + 0x38))(obj, 0xc8ffff);
        (*(void (__thiscall**)(int*, int))(*obj + 0x34))(obj, 0x404040);
    }
    int* p = (int*)((char*)this + 0x94);
    if (p != 0) {
        p = (int*)p[1];
    }
}
