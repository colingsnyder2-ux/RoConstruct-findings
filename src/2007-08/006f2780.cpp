// from server: 46% by colin
struct CXTPGraphicBitmapPng
{
    void dtor();
};

extern "C" void* __stdcall sub_006e4440();
extern "C" void __stdcall sub_006f2630();
extern "C" void __stdcall sub_007383dc();
extern "C" void __stdcall sub_0073872a();

void CXTPGraphicBitmapPng::dtor()
{
    *(int*)this = 0x7db6ec;

    int* p1 = *(int**)((char*)this + 0x7c);
    if (p1)
    {
        (*(void(__thiscall**)(int*, int))(*p1 + 4))(p1, 1);
    }

    int* p2 = *(int**)((char*)this + 0x78);
    if (p2)
    {
        (*(void(__thiscall**)(int*, int))(*p2 + 4))(p2, 1);
    }

    while (*(int*)((char*)this + 0x8c))
    {
        int* p3 = (int*)sub_006e4440();
        if (p3)
        {
            (*(void(__thiscall**)(int*, int))(*p3 + 4))(p3, 1);
        }
    }

    while (*(int*)((char*)this + 0xa8))
    {
        int* p4 = (int*)sub_006e4440();
        if (p4)
        {
            (*(void(__thiscall**)(int*, int))(*p4 + 4))(p4, 1);
        }
    }

    sub_006f2630();
    sub_006f2630();
    sub_007383dc();
    sub_0073872a();
}
