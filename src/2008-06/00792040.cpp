// from server: 30% by colin
struct CXTCaptionThemeFactory {
    int field0;
    int field4;
    int field8;
};

extern "C" void* __cdecl func_006a0920(unsigned int size);
extern "C" void __fastcall func_00791360(void* self);
extern "C" void __fastcall func_007913f0(void* self);

CXTCaptionThemeFactory* __stdcall func_00792040(int type)
{
    CXTCaptionThemeFactory* result;
    if (type != 1) {
        result = (CXTCaptionThemeFactory*)func_006a0920(0x2c);
        if (result != 0) {
            func_00791360(result);
            *(void**)result = (void*)0x86b0a4;
        }
    } else if (type == 2) {
        result = (CXTCaptionThemeFactory*)func_006a0920(0x2c);
        if (result != 0) {
            func_007913f0(result);
        }
    } else {
        result = (CXTCaptionThemeFactory*)func_006a0920(0x2c);
        if (result != 0) {
            func_00791360(result);
        }
    }
    result->field8 = type;
    return result;
}
