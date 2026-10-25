// from server: 100% by colin
// roc 2008-06 00649130  unit: RBX::Block  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00649130
//
// 00649130  83ec0c               sub esp, 0xc
// 00649133  d94110               fld dword ptr [ecx + 0x10]
// 00649136  56                   push esi
// 00649137  8b742414             mov esi, dword ptr [esp + 0x14]
// 0064913b  dcc8                 fmul st(0), st(0)
// 0064913d  8d442404             lea eax, [esp + 4]
// 00649141  50                   push eax
// 00649142  d84c241c             fmul dword ptr [esp + 0x1c]
// 00649146  56                   push esi
// 00649147  d80d182a8300         fmul dword ptr [0x832a18]
// 0064914d  d954240c             fst dword ptr [esp + 0xc]
// 00649151  d9542410             fst dword ptr [esp + 0x10]
// 00649155  d95c2414             fstp dword ptr [esp + 0x14]
// 00649159  e8724af9ff           call 0x5ddbd0
// 0064915e  83c408               add esp, 8
// 00649161  8bc6                 mov eax, esi
// 00649163  5e                   pop esi
// 00649164  83c40c               add esp, 0xc
// 00649167  c20800               ret 8

struct Result;

struct Vector3 {
    float x, y, z;
};

extern const float scale;
extern "C" void __cdecl buildResult(Result*, const Vector3*);

struct S {
    char pad[16];
    float size;
    Result* f(Result* result, float mass);
};

#pragma float_control(precise, off, push)

Result* S::f(Result* result, float mass)
{
    Vector3 diagonal;
    diagonal.z = diagonal.y = diagonal.x = scale * (mass * (size * size));
    buildResult(result, &diagonal);
    return result;
}

#pragma float_control(pop)
