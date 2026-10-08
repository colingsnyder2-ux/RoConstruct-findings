// from server: 47% by colin
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
typedef unsigned long DWORD;
struct RbxSubEntityShadowRenderable {
    DWORD field_6c;

    int getSomething();
};

int RbxSubEntityShadowRenderable::getSomething() {
    RbxSubEntityShadowRenderable* this_ = this;
    DWORD v1 = *(DWORD*)((DWORD)this_ + 0x6c);
    DWORD v2 = *(DWORD*)v1;
    DWORD v3 = *(DWORD*)(v2 + 0x44);
    return *(DWORD*)v3;
}
