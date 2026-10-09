// roc 2007-03 00642070  unit: seg_00640000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00642070
//
// 00642070  53                   push ebx
// 00642071  56                   push esi
// 00642072  57                   push edi
// 00642073  8bf9                 mov edi, ecx
// 00642075  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00642078  33f6                 xor esi, esi
// 0064207a  e8612ffeff           call 0x624fe0
// 0064207f  85c0                 test eax, eax
// 00642081  7e1e                 jle 0x6420a1
// 00642083  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00642087  56                   push esi
// 00642088  e8c3ffffff           call 0x642050
// 0064208d  395824               cmp dword ptr [eax + 0x24], ebx
// 00642090  7411                 je 0x6420a3
// 00642092  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00642095  83c601               add esi, 1
// 00642098  e8432ffeff           call 0x624fe0
// 0064209d  3bf0                 cmp esi, eax
// 0064209f  7ce6                 jl 0x642087
// 006420a1  33c0                 xor eax, eax
// 006420a3  5f                   pop edi
// 006420a4  5e                   pop esi
// 006420a5  5b                   pop ebx
// 006420a6  c20400               ret 4
// copied from an identical function in another client (function ?find@XTP_REPORTRECORDITEM_METRICS@ns_ROCX00000b@@QAEPAXH@Z)

namespace ns_ROCX00000b {
struct XTP_REPORTRECORDITEM_METRICS
{
    char pad[0x28];
    void* field_28;
    void* find(int index);
};

extern "C" int __fastcall sub_653870(void* p);
extern "C" void* __stdcall sub_699220(int index);

void* XTP_REPORTRECORDITEM_METRICS::find(int index)
{
    int count = sub_653870(field_28);
    int i = 0;
    if (count > 0)
    {
        do
        {
            void* item = sub_699220(i);
            if (*(int*)((char*)item + 0x24) == index)
                return item;
            i++;
        } while (i < sub_653870(field_28));
    }
    return 0;
}
}
