// roc 2007-03 00666460  unit: seg_00660000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00666460
//
// 00666460  8b442404             mov eax, dword ptr [esp + 4]
// 00666464  c7412c01000000       mov dword ptr [ecx + 0x2c], 1
// 0066646b  8b5028               mov edx, dword ptr [eax + 0x28]
// 0066646e  895128               mov dword ptr [ecx + 0x28], edx
// 00666471  8b5020               mov edx, dword ptr [eax + 0x20]
// 00666474  895120               mov dword ptr [ecx + 0x20], edx
// 00666477  8b5030               mov edx, dword ptr [eax + 0x30]
// 0066647a  895130               mov dword ptr [ecx + 0x30], edx
// 0066647d  8b5038               mov edx, dword ptr [eax + 0x38]
// 00666480  895138               mov dword ptr [ecx + 0x38], edx
// 00666483  8b403c               mov eax, dword ptr [eax + 0x3c]
// 00666486  89413c               mov dword ptr [ecx + 0x3c], eax
// 00666489  c20400               ret 4
// copied from an identical function in another client (function ?assign@CXTPPropExchange@ns_ROCX000000@@QAEXPAU12@@Z)

namespace ns_ROCX000000 {
struct CXTPPropExchange
{
    char pad[0x20];
    int field_20;
    int field_24;
    int field_28;
    int field_2c;
    int field_30;
    int field_34;
    int field_38;
    int field_3c;
    void assign(CXTPPropExchange* other);
};

void CXTPPropExchange::assign(CXTPPropExchange* other)
{
    field_2c = 1;
    field_28 = other->field_28;
    field_20 = other->field_20;
    field_30 = other->field_30;
    field_38 = other->field_38;
    field_3c = other->field_3c;
}
}
