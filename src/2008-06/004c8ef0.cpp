// from server: 41% by colin
struct DirectPhysicsReceiver {
    char pad[0x0c];
    int field_0c;
    char pad2[0x30 - 0x10];
    int field_30;
    int sub_4c8e40(int, int);
    int method(int, int);
};

extern "C" void* __cdecl sub_6a0920(unsigned int);
extern "C" void __cdecl sub_6a067a(void*);

int DirectPhysicsReceiver::method(int a, int b)
{
    void* mem = sub_6a0920(0x298);
    int r = sub_4c8e40(b, (int)mem);
    if (r == (int)mem) {
        field_30 += 1;
        *(int*)a = r;
        *(char*)(a + 4) = 1;
        return a;
    }
    sub_6a067a(mem);
    *(int*)a = r;
    *(char*)(a + 4) = 0;
    return a;
}
