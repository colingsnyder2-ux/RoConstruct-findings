// from server: 52% by why2
struct RBX_Mesh {
    char pad[0xc];
    int field_c;
};

int __cdecl get_mesh_field(RBX_Mesh* p) {
    return (int)((char*)p + 0xc);
}
