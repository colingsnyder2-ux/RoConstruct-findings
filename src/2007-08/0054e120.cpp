// from server: 60% by colin
struct StreamBuffer {
    char pad[0x28];
    int field_28;
    int field_2c;
};

struct String {
    char pad[0x1c];
    String(const char*);
    ~String();
};

extern "C" void __stdcall sub_412dc0(void*, String*);

struct Decompressor {
    StreamBuffer* field_0;
    char pad[0x24];
    int field_28;
    int field_2c;
    void construct(StreamBuffer*);
};

void Decompressor::construct(StreamBuffer* other) {
    String str("gzip error");
    sub_412dc0(this, &str);
    field_0 = (StreamBuffer*)0x7a783c;
    str.~String();
    field_0 = (StreamBuffer*)0x7a7af4;
    field_28 = 1;
    field_2c = other->field_28;
}
