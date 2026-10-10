// from server: 51% by colin
struct S_func_0061c140 {
    char pad[0x108];
    int field_108;
    int f(int, int, int);
};

extern "C" int __stdcall sub_0061bdc0(int, int);
extern "C" int __stdcall sub_005d58d0(int);

int S_func_0061c140::f(int a1, int a2, int a3)
{
    sub_0061bdc0(a1, a2);
    field_108 = 0;
    *(int*)((char*)this + 0x00) = 0x7c41ec;
    *(int*)((char*)this + 0x04) = 0x7c41e0;
    *(int*)((char*)this + 0x10) = 0x7c41d8;
    *(int*)((char*)this + 0x14) = 0x7c41c8;
    *(int*)((char*)this + 0x2c) = 0x7c41b8;
    *(int*)((char*)this + 0x44) = 0x7c41a8;
    *(int*)((char*)this + 0x5c) = 0x7c4198;
    *(int*)((char*)this + 0x74) = 0x7c4188;
    *(int*)((char*)this + 0x8c) = 0x7c4178;
    *(int*)((char*)this + 0xe8) = 0x7c4170;
    sub_005d58d0((int)((char*)this + 0x108));
    return (int)this;
}
