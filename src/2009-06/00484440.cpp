// from server: 71% by why2
struct RbxSpatialHashedSceneNode {
    void removeAllChildren();
    void sub_4841E0();
};

void RbxSpatialHashedSceneNode::removeAllChildren() {
    sub_4841E0();
    extern void (__stdcall *g_8a0a8c)();
    g_8a0a8c();
}
