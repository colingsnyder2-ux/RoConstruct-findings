// from server: 52% by why2
struct RBX_Mesh {
    char pad[0x15];
    int field_15;
};

int RBX_Mesh_get(RBX_Mesh* p) {
    return (int)((char*)p + 0x15);
}
