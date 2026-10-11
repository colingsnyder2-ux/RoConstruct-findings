// from server: 35% by colin
struct StreamBuf {
    char pad0[0x14];
    int* field14;
    char pad18[0xC];
    int* field24;
    char pad28[0xC];
    int* field34;
    char pad38[0xC];
    int field44;
    int field48;
    int field4C;

    bool sync();
};

extern "C" int __stdcall pubsync(void*);

bool StreamBuf::sync()
{
    int* p14 = field14;
    int diff = *field24 - *p14;
    bool result = true;
    if (diff > 0) {
        int v48 = field48;
        int v4C = field4C;
        *p14 = v48;
        int* p24 = field24;
        int sum = v4C + v48;
        *p24 = v48;
        int* p34 = field34;
        *p34 = sum - v48;
    }
    int v44 = field44;
    if (v44 != 0) {
        if (pubsync((void*)v44) == -1)
            result = false;
    }
    return result;
}
