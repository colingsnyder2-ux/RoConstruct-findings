// from server: 55% by atomic.potato
struct CXTPScrollBase {
    int GetStyle();
};

int CXTPScrollBase::GetStyle()
{
    int v = *(int*)((char*)this + 0x64);
    if (v != 0)
        return v;

    int* p = *(int**)this;
    int (*fn)(void) = *(int (**)(void))((char*)p + 0x24);
    int* obj = (int*)fn();
    int* q = *(int**)((char*)obj + 0x2c);
    int* r = *(int**)q;
    int (*fn2)(void) = *(int (**)(void))((char*)r + 0xdc);
    int result = fn2();
    if (result == 0)
        return 2;

    result -= 5;
    int one = 1;
    if (one < result)
        result = 5;
    else
        result = 5;
    return result;
}
