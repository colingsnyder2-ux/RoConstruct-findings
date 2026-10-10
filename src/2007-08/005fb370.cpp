// from server: 90% by colin
struct FlatTool {
    char pad[0x1c];
    int field1c;
    char pad2[0x8];
    int field28;
    void doAction(int);
};

extern "C" void* __cdecl sub_50B150();
extern "C" void __cdecl sub_575510(void*, int, float*);
extern "C" void __cdecl sub_62E9E0(void*);

void FlatTool::doAction(int arg) {
    if (field1c != 0) {
        float* v = (float*)sub_50B150();
        float local[4];
        local[0] = v[0];
        local[1] = v[1];
        local[2] = v[2];
        local[3] = 1.0f;
        sub_575510((void*)field1c, arg, local);
        sub_62E9E0((void*)field28);
    }
}
