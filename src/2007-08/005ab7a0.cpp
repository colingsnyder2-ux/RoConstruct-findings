// from server: 30% by colin
// roc 2007-08 005ab7a0  unit: RBX::World  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ab7a0
//
// 005ab7a0  8b442404             mov eax, dword ptr [esp + 4]
// 005ab7a4  d900                 fld dword ptr [eax]
// 005ab7a6  d9e0                 fchs 
// 005ab7a8  d94008               fld dword ptr [eax + 8]
// 005ab7ab  d9e0                 fchs 
// 005ab7ad  d9f3                 fpatan 
// 005ab7af  c3                   ret 

struct Vector2f {
    float x;
    float y;
};

extern "C" float __cdecl atan2f(float y, float x);

float computeAngle(const Vector2f& v)
{
    float a = -v.x;
    float b = -v.y;
    return atan2f(b, a);
}
