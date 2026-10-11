// from server: 71% by tester
struct LuaWriter {
    int* ptr;
    unsigned int pos;
    LuaWriter& put();
};

extern "C" void __stdcall sub_802890();
extern "C" int __stdcall sub_802358();

LuaWriter& LuaWriter::put() {
    int* p = ptr;
    if (p != (int*)-4) {
        if (p == 0) {
            sub_802890();
        }
        int* q = ptr;
        int r = sub_802358();
        r += *(int*)((char*)q + 0x14);
        if (pos >= (unsigned int)r) {
            sub_802890();
        }
    }
    pos++;
    return *this;
}
