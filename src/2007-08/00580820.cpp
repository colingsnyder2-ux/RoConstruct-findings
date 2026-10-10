// from server: 18% by colin
extern "C" {
    int __stdcall sub_77E674(int, int, void*);
    void* __stdcall sub_77E540(void*, void*);
    void* __stdcall sub_77E494(void*);
    int __stdcall sub_77E498(void*);
    void __stdcall sub_77E678(void*);
    void* __stdcall sub_77E710(void*, const char*);
}

struct Log {
    char pad[4];
    int field4;
    char pad2[0x14];
    int field1C;
};

void __stdcall sub_4F3940(void*);

void* __cdecl func_00580820(void* arg0)
{
    char buf[0xA0];
    void* p;
    int v;
    void* q;
    int r;

    sub_77E674(3, 1, buf + 0x14);
    v = *(int*)(buf + 0x0C);
    v = *(int*)(v + 4);
    *(unsigned int*)(buf + v + 0x1C) &= 0xFFFFFFFE;
    q = (void*)(buf + v + 0x0C);
    v = *(int*)(*(int*)(buf + 0x0C) + 4);
    q = (void*)(buf + v + 0x0C);
    *(int*)((char*)q + 0x14) = 10;
    *(int*)(buf + 0xA4) = 0;
    p = sub_77E540(buf + 0x18, arg0);
    r = *(int*)(*(int*)(*(int*)p + 4) + (int)p + 8);
    if ((r & 6) == 0) {
        p = sub_77E494(buf);
        r = *(int*)(*(int*)(*(int*)p + 4) + (int)p + 8);
        if ((r & 6) != 0) {
            if (sub_77E498(buf + 0x0C) == -1) {
                sub_77E678(buf + 0x10);
                return arg0;
            }
        }
    }
    sub_77E710(buf, "bad lexical cast: source type value could not be interpreted as target");
    *(int*)(buf + 4) = 0x79F584;
    *(int*)(buf + 0x10) = 0x8827F8;
    *(int*)(buf + 0x14) = 0x8A21D4;
    sub_4F3940(buf + 4);
    return 0;
}
