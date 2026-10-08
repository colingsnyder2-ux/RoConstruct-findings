// from server: 100% by colin
// roc 2007-08 00684e60  unit: CXTPPropExchange  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684e60
//
// 00684e60  8b442404             mov eax, dword ptr [esp + 4]
// 00684e64  c7412c01000000       mov dword ptr [ecx + 0x2c], 1
// 00684e6b  8b5028               mov edx, dword ptr [eax + 0x28]
// 00684e6e  895128               mov dword ptr [ecx + 0x28], edx
// 00684e71  8b5020               mov edx, dword ptr [eax + 0x20]
// 00684e74  895120               mov dword ptr [ecx + 0x20], edx
// 00684e77  8b5030               mov edx, dword ptr [eax + 0x30]
// 00684e7a  895130               mov dword ptr [ecx + 0x30], edx
// 00684e7d  8b5038               mov edx, dword ptr [eax + 0x38]
// 00684e80  895138               mov dword ptr [ecx + 0x38], edx
// 00684e83  8b403c               mov eax, dword ptr [eax + 0x3c]
// 00684e86  89413c               mov dword ptr [ecx + 0x3c], eax
// 00684e89  c20400               ret 4

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
