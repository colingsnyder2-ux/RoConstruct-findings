// from server: 29% by tester
struct ShirtGraphic {
    char pad[0x134];
    void* field134;
    void destructor();
};

extern "C" void __stdcall sub_802468(void*);
extern "C" void __stdcall sub_8028c0(void*);
extern "C" void __cdecl sub_5d3bc0(void*);

void ShirtGraphic::destructor() {
    sub_802468(&field134);
    sub_5d3bc0(this);
}
