// from server: 86% by colin
struct XTP_REPORTRECORDITEM_DRAWARGS {
    char pad[0x2c0];
    int field_2c0;
    int IsValid(void* arg);
};

int XTP_REPORTRECORDITEM_DRAWARGS::IsValid(void* arg) {
    int result;
    if (field_2c0 != 0) {
        int* obj = (int*)(*(int (__thiscall**)(void*))(*(int*)this + 0x18c))(this);
        int r = (*(int (__thiscall**)(void*))(*(int*)obj + 0x164))(obj);
        if (r != 0) {
            result = 1;
        } else {
            result = 0;
        }
    } else {
        result = 0;
    }
    return (*(int (__thiscall**)(void*, int))(*(int*)arg))(arg, result);
}
