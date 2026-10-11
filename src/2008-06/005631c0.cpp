// from server: 26% by tester
struct ContentProvider {
    char pad[0x10];
    char field10[0x1c];
    char field2c[0x1c];
    char field48[0x20];
    char field68[0x20];
    void destructor();
};

extern "C" void __stdcall sub_802468();

void ContentProvider::destructor() {
    sub_802468();
    sub_802468();
    sub_802468();
    sub_802468();
}
