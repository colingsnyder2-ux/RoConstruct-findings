// from server: 92% by colin
// roc 2007-08 0060b1c0  unit: RBX::GlueJoint  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060b1c0
//
// 0060b1c0  8b4104               mov eax, dword ptr [ecx + 4]
// 0060b1c3  8b4020               mov eax, dword ptr [eax + 0x20]
// 0060b1c6  85c0                 test eax, eax
// 0060b1c8  742b                 je 0x60b1f5
// 0060b1ca  d9407c               fld dword ptr [eax + 0x7c]
// 0060b1cd  d9ee                 fldz 
// 0060b1cf  d99080000000         fst dword ptr [eax + 0x80]
// 0060b1d5  d99088000000         fst dword ptr [eax + 0x88]
// 0060b1db  d9c9                 fxch st(1)
// 0060b1dd  d99884000000         fstp dword ptr [eax + 0x84]
// 0060b1e3  d9908c000000         fst dword ptr [eax + 0x8c]
// 0060b1e9  d99090000000         fst dword ptr [eax + 0x90]
// 0060b1ef  d99894000000         fstp dword ptr [eax + 0x94]
// 0060b1f5  c3                   ret 

struct GlueJoint {
    char pad0[4];
    void* field4;
    void reset();
};

void GlueJoint::reset()
{
    void* p = *(void**)((char*)field4 + 0x20);
    if (p) {
        float v = *(float*)((char*)p + 0x7c);
        *(float*)((char*)p + 0x80) = 0.0f;
        *(float*)((char*)p + 0x88) = 0.0f;
        *(float*)((char*)p + 0x84) = v;
        *(float*)((char*)p + 0x8c) = 0.0f;
        *(float*)((char*)p + 0x90) = 0.0f;
        *(float*)((char*)p + 0x94) = 0.0f;
    }
}
