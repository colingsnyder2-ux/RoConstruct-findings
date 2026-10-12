// from server: 74% by colin
struct RbxSubEntity {
    void getEdgeList();
};

extern "C" void __stdcall sub_8028A4(void*);
extern "C" void __cdecl sub_6A158C(void*, const char*);

void RbxSubEntity::getEdgeList()
{
    char buf[16];
    const char* msg = "RBX RbxSubEntity::getEdgeList(): should not be called";
    sub_8028A4(buf);
    sub_6A158C(buf, msg);
}
