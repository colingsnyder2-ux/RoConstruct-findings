// from server: 65% by colin
struct SharedPtr_VHardwareVertexBuffer {
    void setNull();
};

struct RbxSceneNode {
    char pad0[4];
    void* field4;
    char field8;
    char field9;
    char fieldA;
    char padB[0x24 - 0xB];
    SharedPtr_VHardwareVertexBuffer field24;
    void func(void* a, int b, char c, char d, char e);
};

extern "C" void __stdcall setNull_SharedPtr(SharedPtr_VHardwareVertexBuffer* p);

void RbxSceneNode::func(void* a, int b, char c, char d, char e)
{
    field9 = c;
    field8 = d;
    field4 = a;
    field24.setNull();
    void** vtbl = *(void***)a;
    void (*fn)(void*, RbxSceneNode*) = (void (*)(void*, RbxSceneNode*))vtbl[0x21c / 4];
    fn(a, this);
}
