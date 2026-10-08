// from server: 77% by colin
// roc 2007-08 0065e710  unit: CXTPReportColumn  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e710
//
// 0065e710  51                   push ecx
// 0065e711  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0065e714  e8574d0700           call 0x6d3470
// 0065e719  c3                   ret 

struct CXTPReportColumn;

struct Inner_0065e710
{
    void Method_006d3470();
};

struct CXTPReportColumn
{
    char pad[0x54];
    Inner_0065e710* field_0x54;
    void func_0065e710();
};

void CXTPReportColumn::func_0065e710()
{
    field_0x54->Method_006d3470();
}
