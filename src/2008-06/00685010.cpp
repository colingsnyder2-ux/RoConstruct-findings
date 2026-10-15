// from server: 56% by colin
// roc-cl: 21022
// roc-flags: /O1 /GS- /EHsc /MD
struct Vec3 {
    float x;
    float y;
    float z;
};

struct Camera {
    const Vec3& getDerivedPosition() const;
};

struct Node {
    char pad0[0x28];
    Camera* mCamera;
};

struct RbxSubEntity {
    char pad0[0x28];
    Node* mNode;
    char pad1[0xe8 - 0x2c];
    int mIndex;
    float mValue;
    char pad2[0xfc - 0xe8 - 4];
    float mX;
    char pad3[0x10c - 0xfc - 4];
    float mY;
    char pad4[0x11c - 0x10c - 4];
    float mZ;
    float f(int index);
};

extern "C" int __cdecl sub_006A17C6(int);
extern "C" void* __cdecl sub_00932CEC();
extern "C" void* __cdecl sub_00932D04();

float RbxSubEntity::f(int index)
{
    if (mIndex == index) {
        return mValue;
    }
    Camera* cam = mNode->mCamera;
    int v = sub_006A17C6(((int (__thiscall*)(Camera*, int, void*, void*, int))*(void**)(*(int*)cam + 0x48))(cam, 0, (void*)0x932CEC, (void*)0x932D04, 0));
    float a = mX;
    float b = mY;
    float c = mZ;
    const Vec3& p = cam->getDerivedPosition();
    float dx = a - p.x;
    float dy = b - p.y;
    float dz = c - p.z;
    return dx * dx + dy * dy + dz * dz;
}
