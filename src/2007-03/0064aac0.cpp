// roc 2007-03 0064aac0  unit: seg_00640000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064aac0
//
// 0064aac0  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0064aac3  e8b81b0700           call 0x6bc680
// 0064aac8  8b4024               mov eax, dword ptr [eax + 0x24]
// 0064aacb  c3                   ret 
// copied from an identical function in another client (function ?getValue@CXTPReportColumn@ns_ROCX000008@@QAEHXZ)

namespace ns_ROCX000008 {
struct Inner {
    char pad[0x24];
    int value;
};

struct CXTPReportColumn {
    char pad[0x54];
    Inner* inner;
    int getValue();
};

extern "C" Inner* __fastcall get_inner(Inner* self);

int CXTPReportColumn::getValue()
{
    return get_inner(inner)->value;
}
}
