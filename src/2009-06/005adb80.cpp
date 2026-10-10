// from server: 52% by why2
struct RBX_Mesh {
    char pad[0x14];
    int field_14;
};

int* get_field_14(RBX_Mesh* p) {
    return &p->field_14;
}
