// from server: 51% by atomic.potato
struct MeshKeyBase {
    void* field0;
    MeshKeyBase(int);
};

extern "C" void* __cdecl sub_7A79A0(unsigned int);

MeshKeyBase::MeshKeyBase(int a) {
    field0 = 0;
    void* p = sub_7A79A0(0x10);
    if (p) {
        *(int*)((char*)p + 4) = 1;
        *(int*)((char*)p + 8) = 1;
        *(int*)p = 0xa8c508;
        *(int*)((char*)p + 0xc) = a;
    } else {
        p = 0;
    }
    field0 = p;
}
