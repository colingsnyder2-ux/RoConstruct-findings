// roc 2007-03 0065c6c0  unit: seg_00650000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065c6c0
//
// 0065c6c0  8b442404             mov eax, dword ptr [esp + 4]
// 0065c6c4  56                   push esi
// 0065c6c5  50                   push eax
// 0065c6c6  8bf1                 mov esi, ecx
// 0065c6c8  e8b91afcff           call 0x61e186
// 0065c6cd  85c0                 test eax, eax
// 0065c6cf  7504                 jne 0x65c6d5
// 0065c6d1  5e                   pop esi
// 0065c6d2  c20400               ret 4
// 0065c6d5  c7865401000000000000 mov dword ptr [esi + 0x154], 0
// 0065c6df  b801000000           mov eax, 1
// 0065c6e4  5e                   pop esi
// 0065c6e5  c20400               ret 4
// copied from an identical function in another client (function ?sub_00682a70@CXTPPropertyGrid@ns_ROCX000017@@QAEHH@Z)

namespace ns_ROCX000017 {
struct CXTPPropertyGrid {
    char pad[0x154];
    int field_154;
    int sub_00682a70(int);
};

extern "C" int __stdcall fn_ROCX000017(int);

int CXTPPropertyGrid::sub_00682a70(int arg)
{
    if (fn_ROCX000017(arg) == 0)
        return 0;
    field_154 = 0;
    return 1;
}
}
