// from server: 92% by colin
// roc 2007-08 00506e80  unit: G3D::GCamera  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00506e80
//
// 00506e80  8b442404             mov eax, dword ptr [esp + 4]
// 00506e84  50                   push eax
// 00506e85  e816fdffff           call 0x506ba0
// 00506e8a  d94008               fld dword ptr [eax + 8]
// 00506e8d  d820                 fsub dword ptr [eax]
// 00506e8f  d95c2404             fstp dword ptr [esp + 4]
// 00506e93  d84c2404             fmul dword ptr [esp + 4]
// 00506e97  d9400c               fld dword ptr [eax + 0xc]
// 00506e9a  d86004               fsub dword ptr [eax + 4]
// 00506e9d  d95c2404             fstp dword ptr [esp + 4]
// 00506ea1  d8742404             fdiv dword ptr [esp + 4]
// 00506ea5  d95c2404             fstp dword ptr [esp + 4]
// 00506ea9  d9442404             fld dword ptr [esp + 4]
// 00506ead  c20400               ret 4

struct GCamera {
    float field0;
    float field4;
    float field8;
    float fieldC;
    float getAspectRatio(int arg);
};

extern "C" GCamera* __cdecl sub_506ba0(int);

float GCamera::getAspectRatio(int arg)
{
    GCamera* p = sub_506ba0(arg);
    float w = p->field8 - p->field0;
    float h = p->fieldC - p->field4;
    return w / h;
}
