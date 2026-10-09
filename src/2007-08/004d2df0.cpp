// from server: 68% by colin
// roc 2007-08 004d2df0  unit: G3D::VVector3::?$Table  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d2df0
//
// 004d2df0  d9442404             fld dword ptr [esp + 4]
// 004d2df4  8bc1                 mov eax, ecx
// 004d2df6  33c9                 xor ecx, ecx
// 004d2df8  c70084797900         mov dword ptr [eax], 0x797984
// 004d2dfe  894804               mov dword ptr [eax + 4], ecx
// 004d2e01  d9580c               fstp dword ptr [eax + 0xc]
// 004d2e04  ba01000000           mov edx, 1
// 004d2e09  894808               mov dword ptr [eax + 8], ecx
// 004d2e0c  c7005cf17900         mov dword ptr [eax], 0x79f15c
// 004d2e12  841508d18b00         test byte ptr [0x8bd108], dl
// 004d2e18  7516                 jne 0x4d2e30
// 004d2e1a  091508d18b00         or dword ptr [0x8bd108], edx
// 004d2e20  56                   push esi
// 004d2e21  8b3564e57700         mov esi, dword ptr [0x77e564]
// 004d2e27  dd06                 fld qword ptr [esi]
// 004d2e29  5e                   pop esi
// 004d2e2a  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 004d2e30  dd0500d18b00         fld qword ptr [0x8bd100]
// 004d2e36  d95810               fstp dword ptr [eax + 0x10]
// 004d2e39  c740143cf17900       mov dword ptr [eax + 0x14], 0x79f13c
// 004d2e40  894818               mov dword ptr [eax + 0x18], ecx
// 004d2e43  0115dcfb8b00         add dword ptr [0x8bfbdc], edx
// 004d2e49  c20400               ret 4

struct G3D_VVector3_Table {
    void construct(float);
};

extern double G3D_VVector3_Table_time;
extern int G3D_VVector3_Table_time_init;
extern int G3D_VVector3_Table_count;
extern void* G3D_VVector3_Table_clock;

void G3D_VVector3_Table::construct(float f)
{
    *(int*)((char*)this + 0) = 0x797984;
    *(int*)((char*)this + 4) = 0;
    *(float*)((char*)this + 0xc) = f;
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0) = 0x79f15c;
    if (!(G3D_VVector3_Table_time_init & 1)) {
        G3D_VVector3_Table_time_init |= 1;
        G3D_VVector3_Table_time = *(double*)G3D_VVector3_Table_clock;
    }
    *(float*)((char*)this + 0x10) = (float)G3D_VVector3_Table_time;
    *(int*)((char*)this + 0x14) = 0x79f13c;
    *(int*)((char*)this + 0x18) = 0;
    G3D_VVector3_Table_count += 1;
}
