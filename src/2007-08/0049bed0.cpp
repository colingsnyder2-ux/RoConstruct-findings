// from server: 41% by colin
struct VClient {
    char pad0[0xfc];
    int field_fc;
    char pad100[0x14];
    int field_114;
    char pad118[0x4];
    int field_11c;
    int field_120;
    int field_124;
    int field_128;
    int field_12c;
};

struct String {
    char data[0x1c];
    String(const char*);
    ~String();
};

extern "C" void __stdcall sub_49B570();
extern "C" void __stdcall sub_4A3F30();
extern "C" void __stdcall sub_4AA740();
extern "C" void __stdcall sub_541BF0();

VClient* VClient_ctor(VClient* self) {
    sub_49B570();
    sub_4A3F30();
    self->field_114 = 0x79bf34;
    *(int*)((char*)self + 0x00) = 0x79c1b4;
    *(int*)((char*)self + 0x04) = 0x79c1ac;
    *(int*)((char*)self + 0x10) = 0x79c1a4;
    *(int*)((char*)self + 0x14) = 0x79c194;
    *(int*)((char*)self + 0x2c) = 0x79c184;
    *(int*)((char*)self + 0x44) = 0x79c174;
    *(int*)((char*)self + 0x5c) = 0x79c164;
    *(int*)((char*)self + 0x74) = 0x79c154;
    *(int*)((char*)self + 0x8c) = 0x79c144;
    *(int*)((char*)self + 0xe8) = 0x79c114;
    *(int*)((char*)self + 0xec) = 0x79c108;
    self->field_fc = 0x79c0fc;
    self->field_114 = 0x79c0f0;
    self->field_11c = 0;
    self->field_120 = 0;
    self->field_124 = 0;
    self->field_128 = 0;
    self->field_12c = 0;
    String s("NetworkClient");
    sub_541BF0();
    sub_4AA740();
    return self;
}
