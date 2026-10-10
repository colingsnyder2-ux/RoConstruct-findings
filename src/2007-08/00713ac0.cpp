// from server: 36% by colin
struct CXTCaptionThemeFactory
{
    void construct();
};

extern "C" void __stdcall sub_691950();
extern "C" void __stdcall sub_6684A0();

void CXTCaptionThemeFactory::construct()
{
    sub_691950();
    *(int*)((char*)this + 0x14) = 0;
    *(int*)this = 0x7dea9c;
    sub_6684A0();
    sub_6684A0();
}
