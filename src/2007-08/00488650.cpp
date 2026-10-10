// from server: 48% by colin
struct CRenderSettings;

struct RESOLUTIONENTRY
{
    int width;
    int height;
    int a;
    int b;
    int c;
};

struct GetSetImpl
{
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;

    RESOLUTIONENTRY getFullscreenSize(int, int, int, int, int);
};

extern "C" void __cdecl sub_413C00();
extern "C" void __cdecl sub_414170();

RESOLUTIONENTRY GetSetImpl::getFullscreenSize(int a1, int a2, int a3, int a4, int a5)
{
    RESOLUTIONENTRY result;
    if (this->field0 == 0)
    {
        sub_413C00();
        sub_414170();
    }
    RESOLUTIONENTRY* p = (RESOLUTIONENTRY*)((int (__cdecl*)(int, int, int, int, int, RESOLUTIONENTRY*))this->field8)(a1, a2, a3, a4, a5, &result);
    return *p;
}
