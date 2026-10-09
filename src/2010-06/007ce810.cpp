// roc 2010-06 007ce810  unit: XTP_REPORTRECORDITEM_METRICS  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ce810
//
// 007ce810  53                   push ebx
// 007ce811  56                   push esi
// 007ce812  57                   push edi
// 007ce813  8bf9                 mov edi, ecx
// 007ce815  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 007ce818  33f6                 xor esi, esi
// 007ce81a  e881f9ffff           call 0x7ce1a0
// 007ce81f  85c0                 test eax, eax
// 007ce821  7e1c                 jle 0x7ce83f
// 007ce823  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007ce827  56                   push esi
// 007ce828  e8a3340300           call 0x801cd0
// 007ce82d  395824               cmp dword ptr [eax + 0x24], ebx
// 007ce830  740f                 je 0x7ce841
// 007ce832  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 007ce835  46                   inc esi
// 007ce836  e865f9ffff           call 0x7ce1a0
// 007ce83b  3bf0                 cmp esi, eax
// 007ce83d  7ce8                 jl 0x7ce827
// 007ce83f  33c0                 xor eax, eax
// 007ce841  5f                   pop edi
// 007ce842  5e                   pop esi
// 007ce843  5b                   pop ebx
// 007ce844  c20400               ret 4
// copied from an identical function in another client (function ?find@XTP_REPORTRECORDITEM_METRICS@ns_ROCX00007b@@QAEPAXH@Z)

namespace ns_ROCX00007b {
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
