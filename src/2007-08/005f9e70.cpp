// from server: 76% by colin
struct S {
    char pad[0xec];
    int field_ec;
    int f();
};

int S::f()
{
    int* p = *(int**)((char*)this + 0xec);
    *(int*)((char*)this + 0x00) = 0x7c1f34;
    *(int*)((char*)this + 0x04) = 0x7c1f2c;
    *(int*)((char*)this + 0x10) = 0x7c1f24;
    *(int*)((char*)this + 0x14) = 0x7c1f14;
    *(int*)((char*)this + 0x2c) = 0x7c1f04;
    *(int*)((char*)this + 0x44) = 0x7c1ef4;
    *(int*)((char*)this + 0x5c) = 0x7c1ee4;
    *(int*)((char*)this + 0x74) = 0x7c1ed4;
    *(int*)((char*)this + 0x8c) = 0x7c1ec4;
    *(int*)((char*)this + 0xe8) = 0x7c1eb8;
    *(int*)((char*)this + 0x158) = 0x7c1ea8;
    *(int*)((char*)this + 0x170) = 0x7c1e9c;
    *(int*)((char*)this + 0x17c) = 0x7c1e84;
    *(int*)((char*)p + 4 + (int)this + 0xec) = 0x7c1e78;
    p = *(int**)((char*)this + 0xec);
    *(int*)((char*)p + 8 + (int)this + 0xec) = 0x7c1e70;
    p = *(int**)((char*)this + 0xec);
    *(int*)((char*)p + 12 + (int)this + 0xec) = 0x7c1e54;
    p = *(int**)((char*)this + 0xec);
    p = *(int**)((char*)p + 4);
    *(int*)((char*)p + (int)this + 0xe8) = (int)p - 0x198;
    p = *(int**)((char*)this + 0xec);
    p = *(int**)((char*)p + 8);
    *(int*)((char*)p + (int)this + 0xe8) = (int)p - 0x1a0;
    p = *(int**)((char*)this + 0xec);
    p = *(int**)((char*)p + 12);
    *(int*)((char*)p + (int)this + 0xe8) = (int)p - 0x1a8;
    return ((int (*)())0x576480)();
}
