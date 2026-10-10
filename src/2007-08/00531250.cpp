// from server: 38% by colin
struct VCoordinateFrame;

struct TypedPropertyDescriptor {
    bool equalTo(const TypedPropertyDescriptor& other) const;
};

struct VCoordinateFrame {
    bool equalTo(const VCoordinateFrame& other) const;
};

extern "C" void* __fastcall sub_4A7AF0(void* self, void* out, const void* arg);

bool TypedPropertyDescriptor::equalTo(const TypedPropertyDescriptor& other) const {
    char buf1[0x30];
    char buf2[0x30];
    void* a = sub_4A7AF0((void*)this, buf1, &other);
    void* b = sub_4A7AF0((void*)this, buf2, &other);
    if (*(float*)((char*)a + 0x24) == *(float*)((char*)b + 0x24))
        return false;
    if (*(float*)((char*)a + 0x28) != *(float*)((char*)b + 0x28))
        return false;
    if (*(float*)((char*)a + 0x2c) != *(float*)((char*)b + 0x2c))
        return false;
    return ((VCoordinateFrame*)a)->equalTo(*(VCoordinateFrame*)b);
}
