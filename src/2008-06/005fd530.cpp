// from server: 100% by king_originala
// roc 2008-06 005fd530  unit: RBX::Tool  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd530
//
// 005fd530  83ec10               sub esp, 0x10
// 005fd533  d905608b8200         fld dword ptr [0x828b60]
// 005fd539  6a02                 push 2
// 005fd53b  8d442408             lea eax, [esp + 8]
// 005fd53f  d95c2404             fstp dword ptr [esp + 4]
// 005fd543  50                   push eax
// 005fd544  81c1cc010000         add ecx, 0x1cc
// 005fd54a  e8f15cf1ff           call 0x513240
// 005fd54f  d900                 fld dword ptr [eax]
// 005fd551  d90424               fld dword ptr [esp]
// 005fd554  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fd558  dcc9                 fmul st(1), st(0)
// 005fd55a  d9c9                 fxch st(1)
// 005fd55c  d919                 fstp dword ptr [ecx]
// 005fd55e  d94004               fld dword ptr [eax + 4]
// 005fd561  d8c9                 fmul st(1)
// 005fd563  d95904               fstp dword ptr [ecx + 4]
// 005fd566  d84808               fmul dword ptr [eax + 8]
// 005fd569  8bc1                 mov eax, ecx
// 005fd56b  d95908               fstp dword ptr [ecx + 8]
// 005fd56e  83c410               add esp, 0x10
// 005fd571  c20400               ret 4

#pragma float_control(precise, off)

extern const float scale;

struct V {
    float x, y, z;
};

struct B {
    V* get(V*, int);
};

struct S {
    V* f(V*);
};

V* S::f(V* result)
{
    float factor = scale;
    V temporary;
    V* value = ((B*)((char*)this + 460))->get(&temporary, 2);
    result->x = value->x * factor;
    result->y = value->y * factor;
    result->z = value->z * factor;
    return result;
}
