// from server: 37% by colin
// roc 2007-08 00619990  unit: RBX::PointToPointBreakConnector  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00619990
//
// 00619990  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00619993  8b4108               mov eax, dword ptr [ecx + 8]
// 00619996  d9421c               fld dword ptr [edx + 0x1c]
// 00619999  d8601c               fsub dword ptr [eax + 0x1c]
// 0061999c  83c21c               add edx, 0x1c
// 0061999f  d94204               fld dword ptr [edx + 4]
// 006199a2  83c01c               add eax, 0x1c
// 006199a5  d86004               fsub dword ptr [eax + 4]
// 006199a8  d94208               fld dword ptr [edx + 8]
// 006199ab  d86008               fsub dword ptr [eax + 8]
// 006199ae  d9c2                 fld st(2)
// 006199b0  decb                 fmulp st(3)
// 006199b2  dcc8                 fmul st(0), st(0)
// 006199b4  dec2                 faddp st(2)
// 006199b6  dcc8                 fmul st(0), st(0)
// 006199b8  dec1                 faddp st(1)
// 006199ba  d9fa                 fsqrt 
// 006199bc  d94110               fld dword ptr [ecx + 0x10]
// 006199bf  d8c9                 fmul st(1)
// 006199c1  dec9                 fmulp st(1)
// 006199c3  d80d9c7e7900         fmul dword ptr [0x797e9c]
// 006199c9  c3                   ret 

struct Point {
    char pad0[0x1c];
    float x;
    float y;
    float z;
};

struct RBX_PointToPointBreakConnector {
    char pad0[8];
    Point* point0;
    Point* point1;
    float k;
    float potentialEnergy();
};

float RBX_PointToPointBreakConnector::potentialEnergy()
{
    float dx = point1->x - point0->x;
    float dy = point1->y - point0->y;
    float dz = point1->z - point0->z;
    float dist = dx * dx + dy * dy + dz * dz;
    float len = 0.0f;
    len = dist;
    float result = len;
    result = result * k;
    result = result * 0.5f;
    return result;
}
