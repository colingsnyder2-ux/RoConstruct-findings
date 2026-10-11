// from server: 37% by atomic.potato
struct S {
    char pad0[0x14];
    int* field14;
    char pad18[0xC];
    int* field24;
    char pad28[0xC];
    int* field34;
    char pad38[0xC];
    void* field44;
    int field48;
    int field4C;
    int method();
};

extern "C" int __stdcall pubsync(void*);

int S::method()
{
    int result = 1;
    int diff = *field24 - *field14;
    if (diff > 0) {
        int v48 = field48;
        int v4C = field4C;
        *field14 = v48;
        *field24 = v48;
        *field34 = v4C + v48 - v48;
    }
    if (field44 != 0) {
        if (pubsync(field44) == -1)
            result = 0;
    }
    return result;
}
