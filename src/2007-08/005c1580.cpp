// from server: 68% by colin
// roc 2007-08 005c1580  unit: RBX::Lua::LuaArguments  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c1580
//
// 005c1580  83ec0c               sub esp, 0xc
// 005c1583  8b442414             mov eax, dword ptr [esp + 0x14]
// 005c1587  d94124               fld dword ptr [ecx + 0x24]
// 005c158a  d820                 fsub dword ptr [eax]
// 005c158c  56                   push esi
// 005c158d  8b742414             mov esi, dword ptr [esp + 0x14]
// 005c1591  51                   push ecx
// 005c1592  d95c2408             fstp dword ptr [esp + 8]
// 005c1596  d94128               fld dword ptr [ecx + 0x28]
// 005c1599  d86004               fsub dword ptr [eax + 4]
// 005c159c  d95c240c             fstp dword ptr [esp + 0xc]
// 005c15a0  d9412c               fld dword ptr [ecx + 0x2c]
// 005c15a3  8bce                 mov ecx, esi
// 005c15a5  d86008               fsub dword ptr [eax + 8]
// 005c15a8  d95c2410             fstp dword ptr [esp + 0x10]
// 005c15ac  e81f80f4ff           call 0x5095d0
// 005c15b1  d9442404             fld dword ptr [esp + 4]
// 005c15b5  8bc6                 mov eax, esi
// 005c15b7  d95e24               fstp dword ptr [esi + 0x24]
// 005c15ba  d9442408             fld dword ptr [esp + 8]
// 005c15be  d95e28               fstp dword ptr [esi + 0x28]
// 005c15c1  d944240c             fld dword ptr [esp + 0xc]
// 005c15c5  d95e2c               fstp dword ptr [esi + 0x2c]
// 005c15c8  5e                   pop esi
// 005c15c9  83c40c               add esp, 0xc
// 005c15cc  c20800               ret 8

struct LuaArguments {
    char pad[0x24];
    float x;
    float y;
    float z;
    void sub_005c1580(const float* other, int a, int b);
};

extern "C" void __stdcall func_005095d0();

void LuaArguments::sub_005c1580(const float* other, int a, int b)
{
    float dx = x - other[0];
    float dy = y - other[1];
    float dz = z - other[2];
    func_005095d0();
    x = dx;
    y = dy;
    z = dz;
}
