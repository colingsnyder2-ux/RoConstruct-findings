// from server: 40% by colin
struct Decal {
    char pad0[0x0c];
    int field_0c;
    char pad10[0x80];
    int field_8c;
    void construct();
    int helper();
};

void Decal::construct() {
    helper();
    field_0c = 0;
    *(int*)((char*)this + 0x00) = 0x7aa68c;
    *(int*)((char*)this + 0x04) = 0x7aa684;
    *(int*)((char*)this + 0x10) = 0x7aa67c;
    *(int*)((char*)this + 0x14) = 0x7aa66c;
    *(int*)((char*)this + 0x2c) = 0x7aa65c;
    *(int*)((char*)this + 0x44) = 0x7aa64c;
    *(int*)((char*)this + 0x5c) = 0x7aa63c;
    *(int*)((char*)this + 0x74) = 0x7aa62c;
    *(int*)((char*)this + 0x8c) = 0x7aa61c;
    field_0c = helper();
}
