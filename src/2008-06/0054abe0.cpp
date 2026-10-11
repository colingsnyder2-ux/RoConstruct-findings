// from server: 20% by colin
struct Mesh {
    char pad0[0x20];
    int field20;
    char pad24[0x24];
    void sub_54b370();
    void sub_563070();
    Mesh();
};

Mesh::Mesh()
{
    sub_54b370();
    sub_563070();
    field20 = 0;
}
