// roc 2011-06 0083edc0  unit: XTP_REPORTRECORDITEM_DRAWARGS  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083edc0
//
// 0083edc0  53                   push ebx
// 0083edc1  56                   push esi
// 0083edc2  57                   push edi
// 0083edc3  8bf9                 mov edi, ecx
// 0083edc5  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0083edc8  33f6                 xor esi, esi
// 0083edca  e8c1a50200           call 0x869390
// 0083edcf  85c0                 test eax, eax
// 0083edd1  7e1c                 jle 0x83edef
// 0083edd3  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0083edd7  56                   push esi
// 0083edd8  e8a3defcff           call 0x80cc80
// 0083eddd  395824               cmp dword ptr [eax + 0x24], ebx
// 0083ede0  740f                 je 0x83edf1
// 0083ede2  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 0083ede5  46                   inc esi
// 0083ede6  e8a5a50200           call 0x869390
// 0083edeb  3bf0                 cmp esi, eax
// 0083eded  7ce8                 jl 0x83edd7
// 0083edef  33c0                 xor eax, eax
// 0083edf1  5f                   pop edi
// 0083edf2  5e                   pop esi
// 0083edf3  5b                   pop ebx
// 0083edf4  c20400               ret 4
// copied from an identical function in another client (function ?find@XTP_REPORTRECORDITEM_METRICS@ns_ROCX000024@@QAEPAXH@Z)

namespace ns_ROCX000024 {
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
