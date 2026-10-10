// from server: 24% by colin
struct RakPeer {
    int field0;
    unsigned char field4;
    unsigned char field5;
    unsigned short field8;
    unsigned short field10;
    int field0x120;
    unsigned short field0x124;
    int field0x22c;
    int field0x230;
    int field0x234;
    int field0x238;
    unsigned char field0x254;
    int field0x264;
    int field0x2a8;
    int field0x2ac;
    int field0x2cc;
    int field0x6d4;
    int field0x6d8;
    int field0x6dc;
    int field0x6e0;
    int field0x710;
    int field0x714;
    int field0x718;
    double field0x730;
    unsigned short field0x738;
    unsigned short field0x73a;
    int sub_4ba930();
    int sub_4c45c0(int, int, int);
    int sub_4c4970(int*);
    int sub_4c4a10(int);
    int sub_4c4b70(double, int, int, int);
    int sub_4ca670(int);
    int sub_4c37f0();

    int func_004c3890(int a1, int a2, unsigned short a3, int a4);
};

extern "C" {
    int __stdcall closesocket(int);
    unsigned int __stdcall inet_addr(const char*);
    unsigned int __stdcall _beginthreadex(void*, unsigned int, unsigned int (__stdcall*)(void*), void*, unsigned int, unsigned int*);
    void* __cdecl operator_new(unsigned int);
    void __cdecl operator_delete(void*);
    void* __cdecl memset(void*, int, unsigned int);
    void* __cdecl memcpy(void*, const void*, unsigned int);
    int __cdecl _except_handler4_common();
}

int RakPeer::sub_4c37f0()
{
    return 0;
}

int RakPeer::sub_4ba930()
{
    return 0;
}

int RakPeer::sub_4c45c0(int a1, int a2, int a3)
{
    return 0;
}

int RakPeer::sub_4c4970(int* a1)
{
    return 0;
}

int RakPeer::sub_4c4a10(int a1)
{
    return 0;
}

int RakPeer::sub_4c4b70(double a1, int a2, int a3, int a4)
{
    return 0;
}

int RakPeer::sub_4ca670(int a1)
{
    return 0;
}

int RakPeer::func_004c3890(int a1, int a2, unsigned short a3, int a4)
{
    int i;
    int j;
    int count;
    int* arr;
    int result;
    int tmp;
    int local;

    if (((unsigned char (__thiscall*)(void))*(void**)(*(int*)this + 0x2c))() != 0) {
        return 0;
    }
    if (a1 == 0) {
        return 0;
    }
    if (a2 < 1) {
        return 0;
    }
    if (a3 == 0) {
        return 0;
    }

    for (i = 0; (unsigned int)i < (unsigned int)field0x718; i++) {
        closesocket(*(int*)(field0x714 + i * 4));
    }
    if (field0x714 != 0) {
        operator_delete((void*)field0x714);
    }
    field0x718 = 0;
    field0x714 = (int)operator_new((unsigned int)a2 * 4);
    for (i = 0; i < a2; i++) {
        tmp = sub_4c45c0(a3, 1, a1 + 2);
        *(int*)(field0x714 + i * 4) = tmp;
        if (*(int*)(field0x714 + i * 4) == -1) {
            for (j = 0; j < i; j++) {
                closesocket(*(int*)(field0x714 + j * 4));
            }
            if (field0x714 != 0) {
                operator_delete((void*)field0x714);
            }
            field0x718 = 0;
            field0x714 = 0;
            return 0;
        }
        a1 += 0x22;
    }

    field0x718 = a2;

    if (field8 == 0) {
        if (field10 > a3) {
            field10 = a3;
        }
        field8 = a3;
        count = (int)a3;
        arr = (int*)operator_new((unsigned int)count * 0x840 + 4);
        if (arr == 0) {
            field0x22c = 0;
        } else {
            *arr = count;
            field0x22c = (int)(arr + 1);
        }
        for (i = 0; i < (int)field8; i++) {
            *(unsigned char*)(field0x22c + i * 0x840) = 0;
            *(int*)(field0x22c + i * 0x840 + 4) = *(int*)0x892f5c;
            *(unsigned short*)(field0x22c + i * 0x840 + 8) = *(unsigned short*)0x892f60;
            sub_4c4b70(field0x730, field0x738, field0x73a, field0x22c + i * 0x840 + 0x18);
        }
        if (field0x238 != 0) {
            if (field0x238 > 0x200) {
                operator_delete((void*)field0x230);
                field0x238 = 0;
                field0x230 = 0;
            }
            field0x234 = 0;
        }
    }

    if (field4 != 0) {
        memset((void*)((char*)this + 0x2cc), 0, 0x400);
        field0x710 = a4;
        field0x6e0 = 0;
        field0x6dc = 0;
        field0x6d8 = 0;
        field0x6d4 = 0;
        field0x254 = 0;
        field4 = 0;
        sub_4ba930();
        sub_4c4970(&local);
        sub_4c4a10(*(int*)field0x714);
        field0x124 = (unsigned short)result;
        if (a1 + 2 != 0 && *(char*)(a1 + 2) != 0) {
            field0x120 = inet_addr((const char*)(a1 + 2));
        } else {
            field0x120 = inet_addr((const char*)&local);
        }
        if (field5 == 0) {
            field0x264 = _beginthreadex(0, 0x200000, (unsigned int (__stdcall*)(void*))0x4c37f0, this, 0, 0);
            if (field0x264 == 0) {
                return 0;
            }
        }
        while (field5 == 0) {
            sub_4ca670(10);
        }
    }

    for (i = 0; (unsigned int)i < (unsigned int)field0x2ac; i++) {
        (*(void (__thiscall**)(int, int))(*(int*)(field0x2a8 + i * 4) + 0xc))(*(int*)(field0x2a8 + i * 4), (int)this);
    }

    return 1;
}
