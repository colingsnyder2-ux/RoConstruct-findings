// from server: 100% by colin
// roc 2007-08 0065e720  unit: CXTPReportColumn  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e720
//
// 0065e720  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0065e723  e8384d0700           call 0x6d3460
// 0065e728  8b4024               mov eax, dword ptr [eax + 0x24]
// 0065e72b  c3                   ret 

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
