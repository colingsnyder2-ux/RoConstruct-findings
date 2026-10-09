// roc 2007-03 005aefa0  unit: seg_005a0000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005aefa0
//
// 005aefa0  8b442404             mov eax, dword ptr [esp + 4]
// 005aefa4  8b542408             mov edx, dword ptr [esp + 8]
// 005aefa8  3954817c             cmp dword ptr [ecx + eax*4 + 0x7c], edx
// 005aefac  7404                 je 0x5aefb2
// 005aefae  8954817c             mov dword ptr [ecx + eax*4 + 0x7c], edx
// 005aefb2  c20800               ret 8
// copied from an identical function in another client (function ?setValue@Geometry@ns_ROCX00001e@@QAEXHH@Z)

namespace ns_ROCX00001e {
struct Geometry {
    char pad[0x7c];
    int params[1];
    void setValue(int index, int value);
};

void Geometry::setValue(int index, int value)
{
    if (params[index] != value)
        params[index] = value;
}
}
