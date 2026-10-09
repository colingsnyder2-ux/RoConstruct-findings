// roc 2007-03 005af070  unit: seg_005a0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005af070
//
// 005af070  8b442404             mov eax, dword ptr [esp + 4]
// 005af074  3b4808               cmp ecx, dword ptr [eax + 8]
// 005af077  7506                 jne 0x5af07f
// 005af079  8b4010               mov eax, dword ptr [eax + 0x10]
// 005af07c  c20400               ret 4
// 005af07f  8b4014               mov eax, dword ptr [eax + 0x14]
// 005af082  c20400               ret 4
// copied from an identical function in another client (function ?getSomething@Geometry@ns_ROCX000001@@QAEHPAX@Z)

namespace ns_ROCX000001 {
struct Geometry {
    int getSomething(void* arg);
};

int Geometry::getSomething(void* arg)
{
    int* p = (int*)arg;
    if ((int)this == p[2])
        return p[4];
    return p[5];
}
}
