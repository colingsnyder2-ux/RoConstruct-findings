// roc 2007-03 006be200  unit: seg_006b0000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006be200
//
// 006be200  56                   push esi
// 006be201  57                   push edi
// 006be202  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006be206  8b4724               mov eax, dword ptr [edi + 0x24]
// 006be209  8bf1                 mov esi, ecx
// 006be20b  894624               mov dword ptr [esi + 0x24], eax
// 006be20e  8b4720               mov eax, dword ptr [edi + 0x20]
// 006be211  894620               mov dword ptr [esi + 0x20], eax
// 006be214  83c004               add eax, 4
// 006be217  50                   push eax
// 006be218  ff15acd27700         call dword ptr [0x77d2ac]
// 006be21e  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 006be221  894e2c               mov dword ptr [esi + 0x2c], ecx
// 006be224  8b5730               mov edx, dword ptr [edi + 0x30]
// 006be227  895630               mov dword ptr [esi + 0x30], edx
// 006be22a  8b4734               mov eax, dword ptr [edi + 0x34]
// 006be22d  894634               mov dword ptr [esi + 0x34], eax
// 006be230  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 006be233  894e38               mov dword ptr [esi + 0x38], ecx
// 006be236  8b5728               mov edx, dword ptr [edi + 0x28]
// 006be239  895628               mov dword ptr [esi + 0x28], edx
// 006be23c  8b4768               mov eax, dword ptr [edi + 0x68]
// 006be23f  894668               mov dword ptr [esi + 0x68], eax
// 006be242  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 006be245  894e54               mov dword ptr [esi + 0x54], ecx
// 006be248  8b5758               mov edx, dword ptr [edi + 0x58]
// 006be24b  5f                   pop edi
// 006be24c  895658               mov dword ptr [esi + 0x58], edx
// 006be24f  5e                   pop esi
// 006be250  c20400               ret 4
// copied from an identical function in another client (function ?assign@CXTPReportRow_Batch@ns_ROCX000022@@QAEXPAU12@@Z)

namespace ns_ROCX000022 {
extern "C" long (__stdcall *InterlockedIncrement)(long volatile*);

struct CXTPReportRow_Batch
{
    char pad_0000[0x20];
    int* field_20;
    int field_24;
    int field_28;
    int field_2c;
    int field_30;
    int field_34;
    int field_38;
    char pad_003c[0x18];
    int field_54;
    int field_58;
    char pad_005c[0x0c];
    int field_68;

    void assign(CXTPReportRow_Batch* other);
};

void CXTPReportRow_Batch::assign(CXTPReportRow_Batch* other)
{
    field_24 = other->field_24;
    field_20 = other->field_20;
    InterlockedIncrement((long*)(field_20 + 1));
    field_2c = other->field_2c;
    field_30 = other->field_30;
    field_34 = other->field_34;
    field_38 = other->field_38;
    field_28 = other->field_28;
    field_68 = other->field_68;
    field_54 = other->field_54;
    field_58 = other->field_58;
}
}
