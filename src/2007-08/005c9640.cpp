// from server: 68% by colin
// roc 2007-08 005c9640  unit: lua_exception  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9640
//
// 005c9640  83ec10               sub esp, 0x10
// 005c9643  56                   push esi
// 005c9644  8b742418             mov esi, dword ptr [esp + 0x18]
// 005c9648  8d442404             lea eax, [esp + 4]
// 005c964c  50                   push eax
// 005c964d  6a01                 push 1
// 005c964f  56                   push esi
// 005c9650  e8bb5dffff           call 0x5bf410
// 005c9655  dd1c24               fstp qword ptr [esp]
// 005c9658  ff1510e87700         call dword ptr [0x77e810]
// 005c965e  dd5c2418             fstp qword ptr [esp + 0x18]
// 005c9662  dd442410             fld qword ptr [esp + 0x10]
// 005c9666  83c404               add esp, 4
// 005c9669  dd1c24               fstp qword ptr [esp]
// 005c966c  56                   push esi
// 005c966d  e8fe44ffff           call 0x5bdb70
// 005c9672  dd442418             fld qword ptr [esp + 0x18]
// 005c9676  83c404               add esp, 4
// 005c9679  dd1c24               fstp qword ptr [esp]
// 005c967c  56                   push esi
// 005c967d  e8ee44ffff           call 0x5bdb70
// 005c9682  83c40c               add esp, 0xc
// 005c9685  b802000000           mov eax, 2
// 005c968a  5e                   pop esi
// 005c968b  83c410               add esp, 0x10
// 005c968e  c3                   ret 

extern "C" double __cdecl modf(double, double*);
extern "C" double __cdecl lua_Number_convert(int, int, double*);
extern "C" void __cdecl lua_pushnumber(int, double);

struct lua_exception {
    int f(int);
};

int lua_exception::f(int a)
{
    double ipart;
    double d;
    d = lua_Number_convert(a, 1, &ipart);
    d = modf(d, &ipart);
    lua_pushnumber(a, ipart);
    lua_pushnumber(a, d);
    return 2;
}
