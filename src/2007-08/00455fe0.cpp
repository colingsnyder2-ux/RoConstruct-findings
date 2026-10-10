// from server: 83% by colin
// roc 2007-08 00455fe0  unit: seg_00455000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00455fe0

struct ToggleIDEModeVerb {
    char pad[0x10];
    double field_0x10;
    bool method();
};

extern "C" void __cdecl func_004ffef0();
extern "C" void* __cdecl func_0062ff02();
extern double g_00792af8;

bool ToggleIDEModeVerb::method()
{
    func_004ffef0();
    if (field_0x10 + g_00792af8 < field_0x10 + g_00792af8)
        return false;
    char* p = (char*)func_0062ff02();
    p = *(char**)(p + 4);
    p = *(char**)(p + 0x20);
    return *(unsigned char*)(p + 0xed) == 0;
}
