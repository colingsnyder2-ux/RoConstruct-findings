// from server: 60% by colin
// roc 2007-08 0060db40  unit: RBX::Ball  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060db40
//
// 0060db40  d94104               fld dword ptr [ecx + 4]
// 0060db43  d80d9c7e7900         fmul dword ptr [0x797e9c]
// 0060db49  d9c0                 fld st(0)
// 0060db4b  d8c9                 fmul st(1)
// 0060db4d  dec9                 fmulp st(1)
// 0060db4f  d80d782f7c00         fmul dword ptr [0x7c2f78]
// 0060db55  c3                   ret 

struct Ball {
    float realRadius;
    float getVolume() const;
};

float Ball::getVolume() const
{
    return realRadius * realRadius * realRadius * 4.1887903f;
}
