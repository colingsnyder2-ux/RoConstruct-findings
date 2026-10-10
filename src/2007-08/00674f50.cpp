// from server: 58% by colin
extern "C" {
    int __stdcall IsWindow(void*);
    int __stdcall IsWindowEnabled(void*);
    int __stdcall MessageBoxA(void*, const char*, const char*, unsigned int);
    int __stdcall EnableWindow(void*, int);
}

extern void* __cdecl func_0062ff02();

struct Helper {
    void func_00738748(int);
};

struct CXTPCustomizeSheet {
    char pad[0x20];
    void* field_20;
    char pad2[0x94];
    void* field_b8;
    int func_00674f50(int, int);
};

int CXTPCustomizeSheet::func_00674f50(int arg1, int arg2)
{
    void* v1;
    void* v2;
    void* v3;
    void* v4;
    int result;
    int flag;

    v1 = (void*)((char*)func_0062ff02() + 4);
    ((Helper*)v1)->func_00738748(0);

    v2 = *(void**)((char*)this + 0xb8);
    v2 = *(void**)((char*)v2 + 0xa0);
    v3 = *(void**)((char*)this + 0x20);
    if (v2 == 0) {
        v4 = 0;
    } else {
        v4 = *(void**)((char*)v2 + 0x20);
    }

    EnableWindow(v3, 0);

    flag = 0;
    if (v4 != 0) {
        if (IsWindow(v4) != 0) {
            EnableWindow(v4, 0);
            flag = 1;
        }
    }

    v1 = (void*)((char*)func_0062ff02() + 4);
    v1 = *(void**)((char*)v1 + 0x50);
    result = MessageBoxA(v3, (const char*)v1, (const char*)arg2, arg1);

    if (flag != 0) {
        EnableWindow(v4, 1);
    }

    if (IsWindowEnabled(v3) != 0) {
        EnableWindow(v3, 1);
    }

    v1 = (void*)((char*)func_0062ff02() + 4);
    ((Helper*)v1)->func_00738748(1);

    return result;
}
