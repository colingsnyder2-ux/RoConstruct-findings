// from server: 28% by colin
struct S {
    char pad0[8];
    char field8[0x1c];
    char field24[0x1c];
};

extern "C" void __stdcall sub_802468();

void destroy_range(S* first, S* last)
{
    while (first != last) {
        sub_802468();
        first = (S*)((char*)first + 0x40);
    }
}
