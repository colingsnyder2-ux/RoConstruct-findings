// from server: 70% by colin
// roc 2007-08 006b3830  unit: CXTPControlGallery  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3830
//
// 006b3830  8b442408             mov eax, dword ptr [esp + 8]
// 006b3834  56                   push esi
// 006b3835  57                   push edi
// 006b3836  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006b383a  50                   push eax
// 006b383b  57                   push edi
// 006b383c  8bf1                 mov esi, ecx
// 006b383e  e86dd8fbff           call 0x6710b0
// 006b3843  8b8ffc010000         mov ecx, dword ptr [edi + 0x1fc]
// 006b3849  898efc010000         mov dword ptr [esi + 0x1fc], ecx
// 006b384f  8b9704020000         mov edx, dword ptr [edi + 0x204]
// 006b3855  899604020000         mov dword ptr [esi + 0x204], edx
// 006b385b  8b8700020000         mov eax, dword ptr [edi + 0x200]
// 006b3861  898600020000         mov dword ptr [esi + 0x200], eax
// 006b3867  8b9708020000         mov edx, dword ptr [edi + 0x208]
// 006b386d  8d8708020000         lea eax, [edi + 0x208]
// 006b3873  8d8e08020000         lea ecx, [esi + 0x208]
// 006b3879  8911                 mov dword ptr [ecx], edx
// 006b387b  8b5004               mov edx, dword ptr [eax + 4]
// 006b387e  895104               mov dword ptr [ecx + 4], edx
// 006b3881  8b5008               mov edx, dword ptr [eax + 8]
// 006b3884  895108               mov dword ptr [ecx + 8], edx
// 006b3887  8b400c               mov eax, dword ptr [eax + 0xc]
// 006b388a  5f                   pop edi
// 006b388b  89410c               mov dword ptr [ecx + 0xc], eax
// 006b388e  5e                   pop esi
// 006b388f  c20800               ret 8

struct CXTPControlGallery
{
    char pad[0x1fc];
    int field_1fc;
    int field_200;
    int field_204;
    int field_208;
    int field_20c;
    int field_210;
    int field_214;
    void CopyFrom(CXTPControlGallery* other, int arg);
};

extern "C" void __stdcall sub_006710b0(CXTPControlGallery* self, CXTPControlGallery* other, int arg);

void CXTPControlGallery::CopyFrom(CXTPControlGallery* other, int arg)
{
    sub_006710b0(this, other, arg);
    field_1fc = other->field_1fc;
    field_204 = other->field_204;
    field_200 = other->field_200;
    field_208 = other->field_208;
    field_20c = other->field_20c;
    field_210 = other->field_210;
    field_214 = other->field_214;
}
