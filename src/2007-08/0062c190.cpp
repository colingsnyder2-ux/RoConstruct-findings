// from server: 22% by colin
struct Vector3 {
    float x, y, z;
};

struct Vector2 {
    float x, y;
};

struct MouseCommand {
    void* vtable;
};

struct MegaDragger {
    void* vtable;
};

struct GroupDragTool : MouseCommand {
    MegaDragger* megaDragger;
    Vector2 downPoint;
    bool dragging;
    Vector3 lastHit;

    GroupDragTool* onMouseDown(int hitPart, const Vector3& hitWorld, int dragInstances, int inputObject, int workspace, int selectIfNoDrag);
};

extern "C" void* __stdcall sub_4f3fe0();
extern "C" GroupDragTool* __cdecl sub_62c010(GroupDragTool* self, void* out, int a, int b);
extern "C" GroupDragTool* __cdecl sub_62bb40(GroupDragTool* self, void* out, int a, const char* b);
extern "C" void __cdecl sub_62b2e0(GroupDragTool* self, void* a);
extern "C" void __cdecl sub_62b3e0(GroupDragTool* self);

extern const char* const sGroupDragTool;

GroupDragTool* GroupDragTool::onMouseDown(int hitPart, const Vector3& hitWorld, int dragInstances, int inputObject, int workspace, int selectIfNoDrag) {
    sub_4f3fe0();
    sub_4f3fe0();

    char buf1[0x20];
    char buf2[0x20];

    GroupDragTool* result = sub_62c010(this, buf1, hitPart, 1);
    if (result->megaDragger) {
        *(int*)selectIfNoDrag = *(int*)result;
        *(int*)(selectIfNoDrag + 4) = *(int*)((char*)result + 4);
        *(float*)(selectIfNoDrag + 8) = *(float*)((char*)result + 8);
        *(float*)(selectIfNoDrag + 0xc) = *(float*)((char*)result + 0xc);
        *(float*)(selectIfNoDrag + 0x10) = *(float*)((char*)result + 0x10);
        *(float*)(selectIfNoDrag + 0x14) = *(float*)((char*)result + 0x14);
        *(float*)(selectIfNoDrag + 0x18) = *(float*)((char*)result + 0x18);
        *(float*)(selectIfNoDrag + 0x1c) = *(float*)((char*)result + 0x1c);
        return this;
    }

    result = sub_62bb40(this, buf1, hitPart, sGroupDragTool);
    if (result->megaDragger) {
        *(int*)selectIfNoDrag = *(int*)result;
        *(int*)(selectIfNoDrag + 4) = *(int*)((char*)result + 4);
        *(float*)(selectIfNoDrag + 8) = *(float*)((char*)result + 8);
        *(float*)(selectIfNoDrag + 0xc) = *(float*)((char*)result + 0xc);
        *(float*)(selectIfNoDrag + 0x10) = *(float*)((char*)result + 0x10);
        *(float*)(selectIfNoDrag + 0x14) = *(float*)((char*)result + 0x14);
        *(float*)(selectIfNoDrag + 0x18) = *(float*)((char*)result + 0x18);
        *(float*)(selectIfNoDrag + 0x1c) = *(float*)((char*)result + 0x1c);
        return this;
    }

    result = sub_62bb40(this, buf2, hitPart, (const char*)0x62b3d0);
    Vector3 v;
    v.x = *(float*)((char*)result + 8);
    v.y = *(float*)((char*)result + 0xc);
    v.z = *(float*)((char*)result + 0x10);
    float w = *(float*)((char*)result + 0x14);
    float a = *(float*)((char*)result + 0x18);
    float b = *(float*)((char*)result + 0x1c);
    int c = *(int*)result;
    int d = *(int*)((char*)result + 4);

    if (c) {
        sub_62b2e0(this, &v);
        return this;
    }

    sub_62c010(this, buf2, hitPart, 0);
    sub_62b2e0(this, buf1);
    if (*(int*)buf1) {
        sub_62b2e0(this, buf1);
        return this;
    }

    sub_62b3e0(this);
    return this;
}
