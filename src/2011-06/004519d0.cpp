// from server: 100% by tester
// roc 2011-06 004519d0  unit: RBX::VGuiMain::?$FactoryProduct  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004519d0
//
// 004519d0  8b442404             mov eax, dword ptr [esp + 4]
// 004519d4  8981f6000000         mov dword ptr [ecx + 0xf6], eax
// 004519da  c20400               ret 4

class VCXTPReportRow
{
public:
    void __thiscall setValue(int);
};

void __thiscall VCXTPReportRow::setValue(int value)
{
    *(int *)((char *)this + 0xf6) = value;
}