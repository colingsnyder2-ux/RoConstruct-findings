// from server: 45% by colin
struct GrabTool {
    char pad[0x18];
    int field_18;
    int method(int);
};

extern "C" int __stdcall sub_5E3F80(int, int);
extern "C" int __stdcall sub_5E37A0(int);
extern "C" int __stdcall sub_464EC0(int, int);
extern "C" int __stdcall sub_625370(int, int, int, int, int);
extern "C" void __stdcall sub_62FC62(int);

int GrabTool::method(int arg)
{
    int local1 = 0;
    int local2 = 0;
    int local3 = 0;
    int local4 = 0;
    int local5 = 0;
    int local6 = 0;
    int local7 = 0;
    int result = 0;

    int v = sub_5E3F80(arg, (int)&local1);
    if (v != 0) {
        local4 = 0;
        local5 = 0;
        local6 = 0;
        local7 = 0;
        int a = sub_5E37A0(v);
        local7 = a;
        sub_464EC0((int)&local4, (int)&local7);
        result = sub_625370(v, (int)&local1, (int)&local4, arg, field_18);
        if (local7 != 0) {
            sub_62FC62(local7);
        }
    }
    return result;
}
