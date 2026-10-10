// from server: 53% by colin
struct CXTPPropExchange {
    char pad[0x24];
    int field24;
    void* method(int);
};

extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void* __cdecl sub_73846C(void*, unsigned int);
extern "C" void* __cdecl sub_738466(void*, void*, int, int, int);
extern "C" void* __cdecl sub_7389CA(void*, int, int, int);
extern "C" void* __cdecl sub_685880(void*, int, int*, int*);

void* CXTPPropExchange::method(int arg) {
    void* result;
    void* v1;
    void* v2;
    void* v3;
    void* v4;
    int local1;
    int local2;

    if (field24 == 0) {
        v1 = sub_62FEF6(0x28);
        if (v1 != 0) {
            v2 = sub_73846C(v1, 0x400);
        } else {
            v2 = 0;
        }
        v3 = sub_62FEF6(0x48);
        if (v3 != 0) {
            result = sub_738466(v3, v2, 0, 0x1000, 0);
        } else {
            result = 0;
        }
        return result;
    } else {
        local1 = 0;
        local2 = 0;
        sub_685880(this, arg, &local1, &local2);
        if (local1 == 0) {
            return 0;
        }
        v4 = sub_62FEF6(0x28);
        if (v4 != 0) {
            result = sub_7389CA(v4, local1, local2, 0);
        } else {
            result = 0;
        }
        v3 = sub_62FEF6(0x48);
        if (v3 != 0) {
            result = sub_738466(v3, result, 1, 0x1000, 0);
        } else {
            result = 0;
        }
        return result;
    }
}
