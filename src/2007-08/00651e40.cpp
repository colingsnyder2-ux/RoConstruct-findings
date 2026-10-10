// from server: 86% by colin
struct XTP_REPORTRECORDITEM_DRAWARGS
{
    int m(void* p);
};

int XTP_REPORTRECORDITEM_DRAWARGS::m(void* p)
{
    int r;
    if (*(int*)((char*)this + 0x2bc) != 0)
    {
        int* q = (int*)(*(int (__thiscall**)(void*))(*(int*)this + 0x18c))(this);
        if ((*(int (__thiscall**)(void*))(*(int*)q + 0x15c))(q) != 0)
            r = 1;
        else
            r = 0;
    }
    else
    {
        r = 0;
    }
    return (*(int (__thiscall**)(void*, int))(*(int*)p))(p, r);
}
