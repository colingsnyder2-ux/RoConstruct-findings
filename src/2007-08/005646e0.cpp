// from server: 77% by colin
struct TrackCameraCommand {
    char pad[0x14];
    int field14;
    char pad2[0x20 - 0x18];
    void* field20;
    bool method();
};

extern "C" void* __fastcall sub_562300(int* p, int a);
extern "C" void* __fastcall sub_410d40(void* p);

bool TrackCameraCommand::method() {
    void* r = sub_562300(&field14, 1);
    int* p = *(int**)((char*)r + 0x104);
    int count = 0;
    if (p[1] != 0) {
        count = (p[2] - p[1]) >> 3;
    }
    if (count == 0) {
        return false;
    }
    void* q;
    if (field20 != 0) {
        q = sub_410d40(field20);
    } else {
        q = 0;
    }
    int* p2 = *(int**)((char*)q + 0x104);
    int count2 = 0;
    if (p2[1] != 0) {
        count2 = (p2[2] - p2[1]) >> 3;
    }
    return count2 == 1;
}
