// from server: 86% by colin
struct ModelInstance {
    char pad[0x9c];
    int field_9c;
    char pad2[0xbc - 0x9c - 4];
    int field_bc;
    int sub_52ff30();
    void sub_5bafa0(int);
    void sub_530de0(int);
};

extern "C" int __cdecl sub_630d36(int, int, int, int, int);
extern unsigned char byte_8c0e09;

void ModelInstance::sub_530de0(int a1) {
    int v = *(int*)((char*)this - 0x9c);
    ModelInstance* self = (ModelInstance*)((char*)this - 0x158);
    int r = sub_630d36(v, 0, 0x898fc0, 0x881f4c, 0);
    if (r != 0) {
        int saved = *(int*)((char*)self + 0xbc);
        if (self->sub_52ff30() != saved) {
            goto check;
        }
    }
    if (byte_8c0e09 == 0) {
        return;
    }
check:
    self->sub_5bafa0(a1);
}
