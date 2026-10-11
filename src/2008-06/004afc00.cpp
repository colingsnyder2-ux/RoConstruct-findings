// from server: 33% by tester
struct JointsService {
    char pad[0x138];
    int field_138;

    void destroy();
};

extern "C" void __stdcall sub_5dd2c0(void*);
extern "C" void __stdcall sub_55a540(void*);

void JointsService::destroy() {
    sub_5dd2c0((char*)this + 0x138);
    sub_55a540(this);
}
