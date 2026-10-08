// from server: 100% by colin
// roc 2007-08 00653eb0  unit: XTP_REPORTRECORDITEM_METRICS  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653eb0
//
// 00653eb0  53                   push ebx
// 00653eb1  56                   push esi
// 00653eb2  57                   push edi
// 00653eb3  8bf9                 mov edi, ecx
// 00653eb5  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00653eb8  33f6                 xor esi, esi
// 00653eba  e8b1f9ffff           call 0x653870
// 00653ebf  85c0                 test eax, eax
// 00653ec1  7e1e                 jle 0x653ee1
// 00653ec3  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00653ec7  56                   push esi
// 00653ec8  e853530400           call 0x699220
// 00653ecd  395824               cmp dword ptr [eax + 0x24], ebx
// 00653ed0  7411                 je 0x653ee3
// 00653ed2  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00653ed5  83c601               add esi, 1
// 00653ed8  e893f9ffff           call 0x653870
// 00653edd  3bf0                 cmp esi, eax
// 00653edf  7ce6                 jl 0x653ec7
// 00653ee1  33c0                 xor eax, eax
// 00653ee3  5f                   pop edi
// 00653ee4  5e                   pop esi
// 00653ee5  5b                   pop ebx
// 00653ee6  c20400               ret 4

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
