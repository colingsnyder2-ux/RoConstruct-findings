// from server: 46% by colin
struct CXTPControlTabWorkspace {
    char pad_0x0[0xc0];
    int field_0xc0;
    int field_0xc4;
    int field_0xc8;
    int field_0xcc;
    char pad_0xd0[0x98];
    int field_0x168;
    int method(int);
};

int CXTPControlTabWorkspace::method(int arg)
{
    int* p = (int*)field_0x168;
    int* vt = *(int**)p;
    int result = ((int (__thiscall*)(int*))vt[0x2c / 4])(p);
    if (result == 0) {
        return ((int (__thiscall*)(CXTPControlTabWorkspace*, int))0x63a660)(this, arg);
    }
    int* obj = (int*)result;
    int* objVt = *(int**)obj;
    int local[4];
    local[0] = field_0xc0;
    local[1] = field_0xc4;
    local[2] = field_0xc8;
    local[3] = field_0xcc;
    return ((int (__thiscall*)(int*, int*, int))objVt[0x58 / 4])(obj, local, arg);
}
