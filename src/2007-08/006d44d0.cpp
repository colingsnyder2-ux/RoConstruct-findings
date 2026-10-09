// from server: 100% by colin
// roc 2007-08 006d44d0  unit: CXTPReportRow_Batch  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d44d0
//
// 006d44d0  56                   push esi
// 006d44d1  57                   push edi
// 006d44d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d44d6  8b4724               mov eax, dword ptr [edi + 0x24]
// 006d44d9  8bf1                 mov esi, ecx
// 006d44db  894624               mov dword ptr [esi + 0x24], eax
// 006d44de  8b4720               mov eax, dword ptr [edi + 0x20]
// 006d44e1  894620               mov dword ptr [esi + 0x20], eax
// 006d44e4  83c004               add eax, 4
// 006d44e7  50                   push eax
// 006d44e8  ff15ecd27700         call dword ptr [0x77d2ec]
// 006d44ee  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 006d44f1  894e2c               mov dword ptr [esi + 0x2c], ecx
// 006d44f4  8b5730               mov edx, dword ptr [edi + 0x30]
// 006d44f7  895630               mov dword ptr [esi + 0x30], edx
// 006d44fa  8b4734               mov eax, dword ptr [edi + 0x34]
// 006d44fd  894634               mov dword ptr [esi + 0x34], eax
// 006d4500  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 006d4503  894e38               mov dword ptr [esi + 0x38], ecx
// 006d4506  8b5728               mov edx, dword ptr [edi + 0x28]
// 006d4509  895628               mov dword ptr [esi + 0x28], edx
// 006d450c  8b4768               mov eax, dword ptr [edi + 0x68]
// 006d450f  894668               mov dword ptr [esi + 0x68], eax
// 006d4512  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 006d4515  894e54               mov dword ptr [esi + 0x54], ecx
// 006d4518  8b5758               mov edx, dword ptr [edi + 0x58]
// 006d451b  5f                   pop edi
// 006d451c  895658               mov dword ptr [esi + 0x58], edx
// 006d451f  5e                   pop esi
// 006d4520  c20400               ret 4

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
