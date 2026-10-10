// from server: 72% by colin
struct S {
    char pad0[0x2c];
    int field2c;
    char pad30[0xc];
    int field3c;
    char pad40[0x4];
    unsigned short* field44;
    int field48;
    int field4c;
    char pad50[0xc];
    int field5c;
    int field60;
    char pad64[0x4];
    int field68;
    int field6c;
    char pad70[0x4];
    int field74;
    int field78;
    int field7c;
    int field80;
    int field84;
    char pad88[0x4];
    int field8c;
    int field90;
    void f();
};

extern "C" void* __cdecl memset(void*, int, unsigned int);

void S::f()
{
    int a = field2c;
    int c = field4c;
    unsigned short* d = field44;
    a += a;
    field3c = a;
    d[c - 1] = 0;
    memset(field44, 0, (field4c + field4c - 2) * 2);
    int e = field84;
    e = e + e * 2;
    e += e;
    unsigned short v1 = *(unsigned short*)((char*)0x7e5612 + e + e);
    e += e;
    field80 = v1;
    unsigned short v2 = *(unsigned short*)((char*)0x7e5610 + e);
    field8c = v2;
    unsigned short v3 = *(unsigned short*)((char*)0x7e5614 + e);
    field90 = v3;
    unsigned short v4 = *(unsigned short*)((char*)0x7e5616 + e);
    field6c = 0;
    field5c = 0;
    field74 = 0;
    field68 = 0;
    field48 = 0;
    field7c = v4;
    field78 = 2;
    field60 = 2;
}
