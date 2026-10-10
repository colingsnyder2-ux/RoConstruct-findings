// from server: 46% by colin
struct CSelectionPropGrid {
    char pad[0xd8];
    void* field_d8;
    bool func_00430ee0(unsigned char arg);
};

extern "C" {
    void* __stdcall sub_6330e0(void* self, const char* name, int flags);
    void* __stdcall sub_6332e0(void* self, const char* name, int a, int b);
    void* __stdcall sub_643c10(void* self, int a, int b);
    void* __stdcall sub_635950(void* self, const char* name, int a);
    void* __stdcall sub_64ee00(void* self, int a);
    void __stdcall sub_430a60(void* self, void* a, void* b);
}

bool CSelectionPropGrid::func_00430ee0(unsigned char arg)
{
    void* p = sub_6330e0(field_d8, (const char*)0x78b100, 0x80);
    if (p != 0)
        return false;

    sub_643c10(p, 0x1700, 0);

    void* v1 = sub_6332e0(field_d8, (const char*)0x78b0f4, 0, 0);
    if (v1 == 0)
        return false;

    typedef bool (__stdcall *fn1)(void*, int, unsigned char);
    fn1 f1 = *(fn1*)(*(int*)v1 + 0x14c);
    if (!f1(v1, 0x80, arg))
        return false;

    void* v2 = sub_6332e0(field_d8, (const char*)0x78b0ec, 0, 0);
    if (v2 == 0)
        return false;

    fn1 f2 = *(fn1*)(*(int*)v2 + 0x14c);
    if (!f2(v2, 0x87, arg))
        return false;

    void* v3 = sub_6332e0(field_d8, (const char*)0x78b0e4, 0, 0);
    if (v3 == 0)
        return false;

    fn1 f3 = *(fn1*)(*(int*)v3 + 0x14c);
    if (!f3(v3, 0x89, arg))
        return false;

    void* v4 = sub_6332e0(field_d8, (const char*)0x78b0dc, 0, 0);
    if (v4 == 0)
        return false;

    fn1 f4 = *(fn1*)(*(int*)v4 + 0x14c);
    if (!f4(v4, 0x91, arg))
        return false;

    void* v5 = sub_6332e0(field_d8, (const char*)0x78b0d4, 1, 0);
    if (v5 == 0)
        return false;

    fn1 f5 = *(fn1*)(*(int*)v5 + 0x14c);
    if (!f5(v5, 0x96, arg))
        return false;

    sub_64ee00(v5, 0x73);

    typedef void (__stdcall *fn2)(void*, int);
    fn2 f6 = *(fn2*)(*(int*)v5 + 0x15c);
    f6(v5, 0);

    sub_430a60(this, v2, v3);
    sub_430a60(this, v1, v3);

    sub_635950(field_d8, (const char*)0x886a08, 0x1a);

    *(int*)(*(int*)((char*)field_d8 + 0x74) + 0x20) = 1;
    *(int*)0x8b565c = 0x1194;
    *(int*)(*(int*)((char*)field_d8 + 0x74) + 0x2c) = 1;

    return true;
}
