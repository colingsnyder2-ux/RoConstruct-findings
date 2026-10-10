// from server: 36% by colin
struct Peer {
    char pad0[0x2a8];
    unsigned int count;
    void** list;
    char pad2[0x714 - 0x2ac];
    void* field714;
    void method(const char* data, int length, int priority, int reliability, char orderingChannel);
};

extern "C" void* __stdcall sub_4c4700(const char* str);
extern "C" void __stdcall sub_4a3590(void* dest, const char* src);
extern "C" void __stdcall sub_49f820(void* p);
extern "C" void __stdcall sub_49fd90(void* p, const void* src, int a, int b);
extern "C" void __stdcall sub_49fe90(void* p, const void* src, int len);
extern "C" void __stdcall sub_49f930(void* p);
extern "C" void __stdcall sub_4c48b0(void* p, void* a, int b, int c, const char* d, int e);

void Peer::method(const char* data, int length, int priority, int reliability, char orderingChannel) {
    if (!((bool (__thiscall*)(void*))((*(void***)this)[0x2c / 4]))(this))
        return;
    if (!data)
        return;
    char c = data[0];
    if (c < '0' || c > '2') {
        data = (const char*)sub_4c4700(data);
    }
    char buf[0x20];
    sub_4a3590(buf, data);
    *(unsigned short*)buf = (unsigned short)length;
    sub_49f820(buf + 4);
    *(int*)(buf + 0x14) = 0;
    buf[4] = 0x1a;
    sub_49fd90(buf + 0x10, buf, 8, 1);
    if (priority > 0) {
        sub_49fe90(buf + 0x10, (const void*)reliability, priority);
    } else {
        buf[4] = 0;
        sub_49fd90(buf + 0x10, buf, 8, 1);
    }
    unsigned int i = 0;
    while (i < count) {
        void* obj = list[i];
        void (*fn)(void*, int, int, int, int) = (void (*)(void*, int, int, int, int))((*(void***)obj)[0x20 / 4]);
        fn(obj, *(int*)(buf + 0x10), *(int*)(buf + 0x14), *(int*)(buf + 0x18), *(int*)(buf + 0x1c));
        i++;
    }
    int a = *(int*)(buf + 0x10);
    int b = *(int*)(buf + 0x14);
    void* p = ((void**)field714)[length];
    sub_4c48b0((void*)0x8befe9, p, b, (a + 7) >> 3, data, orderingChannel);
    sub_49f930(buf + 0x10);
}
