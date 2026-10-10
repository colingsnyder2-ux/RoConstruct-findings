// from server: 47% by colin
struct CXTPControl {
    char pad[0xd8];
    void* field_d8;
    char pad2[0xe4 - 0xdc];
    void* field_e4;
    void sub_639db0();
    void sub_63a700(int);
};

extern "C" {
    __declspec(dllimport) void* __stdcall sub_77ddb8(void*);
    __declspec(dllimport) int __stdcall sub_77e160(void*, int, int);
    __declspec(dllimport) void* __stdcall sub_77e11c(void*, void*, int);
    __declspec(dllimport) void* __stdcall sub_77dd98(void*);
    __declspec(dllimport) int __stdcall sub_77dcb8(void*, void*);
    __declspec(dllimport) void* __stdcall sub_77d434(void*, void*);
    __declspec(dllimport) void* __stdcall sub_77d55c(void*, int);
    __declspec(dllimport) void* __stdcall sub_77ddbc(void*);
}

void CXTPControl::sub_63a700(int a1)
{
    char buf[0x1c];
    int v2;
    int v3;
    int v4;

    sub_77ddb8(buf);
    v2 = 0;
    v3 = sub_77e160(buf, 9, 0);
    if (v3 == -1) {
        sub_77e11c(buf, buf, v3 + 1);
        v4 = 1;
        if (sub_77dcb8(&field_e4, sub_77dd98(buf)) != 0) {
            sub_77d434(&field_e4, buf);
            v2 = 1;
        }
        sub_77d55c(buf, v3);
        v4 = 0;
        sub_77ddbc(buf);
    }
    if (sub_77dcb8(&field_d8, sub_77dd98(buf)) != 0) {
        sub_77d434(&field_d8, buf);
        sub_639db0();
    } else if (v2 != 0) {
        sub_639db0();
    }
    sub_77ddbc(buf);
}
