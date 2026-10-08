// from server: 25% by colin
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
typedef unsigned long DWORD;
struct RbxSubEntityShadowRenderable {
    DWORD* vtable;
    DWORD* someData;
    DWORD* anotherData;

    DWORD getSomeData() const;
    DWORD getAnotherData() const;
};

extern "C" __declspec(dllimport) void someFunction(DWORD*);

DWORD RbxSubEntityShadowRenderable::getSomeData() const {
    return someData[0];
}

DWORD RbxSubEntityShadowRenderable::getAnotherData() const {
    return anotherData[0];
}
