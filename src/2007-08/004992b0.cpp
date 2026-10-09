// from server: 83% by colin
// roc 2007-08 004992b0  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004992b0

extern "C" void __stdcall sub_48D750();
extern "C" void __stdcall sub_494E80();
extern "C" void __stdcall sub_4991B0();
extern "C" void __stdcall sub_499230();
extern "C" void __stdcall sub_498F60();

struct RBX_NetworkSettings_String {
    void __thiscall assign(const char*);
};

extern RBX_NetworkSettings_String g_8BE4B0;

void __cdecl sub_4992B0(const char* name)
{
    g_8BE4B0.assign(name);
    sub_4991B0();
    sub_499230();
    sub_48D750();
    sub_494E80();
    sub_498F60();
}
