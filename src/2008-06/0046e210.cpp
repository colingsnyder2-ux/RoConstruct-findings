// from server: 42% by tester
struct S {
    char pad[0x40];
};

extern "C" void __stdcall sub_802468(void*);

void f(S* first, S* last) {
    while (first != last) {
        sub_802468((char*)first + 0x24);
        sub_802468((char*)first + 0x08);
        first = (S*)((char*)first + 0x40);
    }
}
