// from server: 81% by colin
// roc 2007-08 005fb370  unit: RBX::FlatTool  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fb370

struct Vector3 {
    float x;
    float y;
    float z;
};

struct FlatTool {
    char pad[0x1c];
    void* field1c;
    char pad2[0x28 - 0x20];
    void* field28;
    void doAction(int arg);
};

extern "C" void* __cdecl sub_50B150();
extern "C" void* __cdecl sub_575510(void* a, int b, void* c, void* d);
extern "C" void __cdecl sub_62E9E0(void* a);

void FlatTool::doAction(int arg)
{
    if (field1c != 0) {
        void* p = sub_50B150();
        Vector3 v;
        v.x = *(float*)((char*)p + 0);
        v.y = *(float*)((char*)p + 4);
        v.z = *(float*)((char*)p + 8);
        float w = 1.0f;
        void* r = sub_575510(field28, arg, &v, &w);
        sub_62E9E0(r);
    }
}
