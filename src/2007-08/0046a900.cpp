// from server: 36% by colin
struct Sub {
    char pad0[8];
    void* field8;
    char pad12[0x24 - 0xC];
    void* field24;
};

struct S {
    void __cdecl f(Sub* first, Sub* last);
};

extern "C" void __stdcall string_dtor(void*);

void S::f(Sub* first, Sub* last)
{
    while (first != last) {
        string_dtor(&first->field24);
        string_dtor(&first->field8);
        first = (Sub*)((char*)first + 0x40);
    }
}
