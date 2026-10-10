// from server: 98% by colin
struct GCamera {
    void setCoordinateFrame(float, float, float, float, float, float, float, float, float);
};

extern "C" void __stdcall sub_5095F0(float, float, float, float, float, float, float, float, float);

void GCamera::setCoordinateFrame(float a1, float a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9)
{
    sub_5095F0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
