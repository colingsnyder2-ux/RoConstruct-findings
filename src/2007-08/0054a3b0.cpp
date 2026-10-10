// from server: 50% by colin
struct VServiceProvider {
    char pad[0x140];
    void* list;
    int count;
};

extern "C" void __fastcall sub_54A220(VServiceProvider* self);
extern "C" void* __fastcall sub_604E20(void* self);

void __fastcall VServiceProvider_ctor(VServiceProvider* self)
{
    sub_54A220(self);

    *(int*)((char*)self + 0xe8) = 0x7a71c0;
    *(int*)((char*)self + 0xf0) = 0;
    *(int*)((char*)self + 0xf4) = 0;
    *(int*)((char*)self + 0xf8) = 0;
    *(int*)((char*)self + 0xfc) = 0;
    *(int*)((char*)self + 0x100) = 0x7a71d0;
    *(int*)((char*)self + 0x108) = 0;
    *(int*)((char*)self + 0x10c) = 0;
    *(int*)((char*)self + 0x110) = 0;
    *(int*)((char*)self + 0x114) = 0;
    *(int*)((char*)self + 0x118) = 0x7a71e0;
    *(int*)((char*)self + 0x120) = 0;
    *(int*)((char*)self + 0x124) = 0;
    *(int*)((char*)self + 0x128) = 0;
    *(int*)((char*)self + 0x12c) = 0;

    *(int*)((char*)self + 0x00) = 0x7a7424;
    *(int*)((char*)self + 0x04) = 0x7a741c;
    *(int*)((char*)self + 0x10) = 0x7a7414;
    *(int*)((char*)self + 0x14) = 0x7a7404;
    *(int*)((char*)self + 0x2c) = 0x7a73f4;
    *(int*)((char*)self + 0x44) = 0x7a73e4;
    *(int*)((char*)self + 0x5c) = 0x7a73d4;
    *(int*)((char*)self + 0x74) = 0x7a73c4;
    *(int*)((char*)self + 0x8c) = 0x7a73b4;
    *(int*)((char*)self + 0xe8) = 0x7a73a4;
    *(int*)((char*)self + 0x100) = 0x7a7394;
    *(int*)((char*)self + 0x118) = 0x7a7384;

    *(int*)((char*)self + 0x134) = 0;
    *(int*)((char*)self + 0x138) = 0;
    *(int*)((char*)self + 0x13c) = 0;

    void* node = sub_604E20((char*)self + 0x140);
    *(void**)((char*)self + 0x144) = node;
    *(char*)((char*)node + 0x19) = 1;
    node = *(void**)((char*)self + 0x144);
    *(void**)((char*)node + 4) = node;
    node = *(void**)((char*)self + 0x144);
    *(void**)node = node;
    node = *(void**)((char*)self + 0x144);
    *(void**)((char*)node + 8) = node;
    *(int*)((char*)self + 0x148) = 0;
}
