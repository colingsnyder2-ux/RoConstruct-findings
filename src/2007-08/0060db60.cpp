// from server: 100% by colin
// roc 2007-08 0060db60  unit: RBX::Ball  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060db60
//
// 0060db60  d94104               fld dword ptr [ecx + 4]
// 0060db63  d80d9c7e7900         fmul dword ptr [0x797e9c]
// 0060db69  d95910               fstp dword ptr [ecx + 0x10]
// 0060db6c  c3                   ret 

struct Ball {
    int vtbl;
    float realRadius;
    int pad1;
    int pad2;
    float value;
    void compute();
};

extern float G;

void Ball::compute()
{
    value = realRadius * G;
}
