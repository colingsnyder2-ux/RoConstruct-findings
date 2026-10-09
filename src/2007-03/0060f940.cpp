// roc 2007-03 0060f940  unit: seg_00600000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0060f940
//
// 0060f940  837c240400           cmp dword ptr [esp + 4], 0
// 0060f945  750a                 jne 0x60f951
// 0060f947  8b442408             mov eax, dword ptr [esp + 8]
// 0060f94b  894108               mov dword ptr [ecx + 8], eax
// 0060f94e  c20800               ret 8
// 0060f951  8b542408             mov edx, dword ptr [esp + 8]
// 0060f955  89510c               mov dword ptr [ecx + 0xc], edx
// 0060f958  c20800               ret 8
// copied from an identical function in another client (function ?set@Edge@ns_ROCX000009@@QAEXHH@Z)

namespace ns_ROCX000009 {
struct Edge {
    int field0;
    int field4;
    int field8;
    int fieldC;
    void set(int flag, int value);
};

void Edge::set(int flag, int value)
{
    if (flag == 0)
        field8 = value;
    else
        fieldC = value;
}
}
