// from server: 36% by colin
struct CXTAuxData {
    void init();
};

extern "C" void __stdcall sub_697720();
extern "C" void __stdcall sub_630D23(void*);

static unsigned int g_flag_8C90D8;
static char g_obj_8C8F80;

void CXTAuxData::init()
{
    if (!(g_flag_8C90D8 & 1)) {
        g_flag_8C90D8 |= 1;
        sub_697720();
        sub_630D23((void*)0x77CC60);
    }
}
