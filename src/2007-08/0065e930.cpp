// from server: 74% by colin
// roc 2007-08 0065e930  unit: CXTPReportColumn  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e930
//
// 0065e930  837c240400           cmp dword ptr [esp + 4], 0
// 0065e935  7409                 je 0x65e940
// 0065e937  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0065e93a  894840               mov dword ptr [eax + 0x40], ecx
// 0065e93d  c20400               ret 4
// 0065e940  e85bfcffff           call 0x65e5a0
// 0065e945  85c0                 test eax, eax
// 0065e947  740a                 je 0x65e953
// 0065e949  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0065e94c  c7414000000000       mov dword ptr [ecx + 0x40], 0
// 0065e953  c20400               ret 4

struct CXTPReportColumn {
    char pad[0x40];
    void* field_40;
    char pad2[0x10];
    void* field_54;
    void SetVisible(int bVisible);
};

extern "C" int __stdcall sub_65e5a0();

void CXTPReportColumn::SetVisible(int bVisible)
{
    if (bVisible != 0)
    {
        void* p = field_54;
        *(void**)((char*)p + 0x40) = this;
    }
    else
    {
        if (sub_65e5a0() != 0)
        {
            void* p = field_54;
            *(void**)((char*)p + 0x40) = 0;
        }
    }
}
