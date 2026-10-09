// from server: 97% by colin
// roc 2007-08 0067d8b0  unit: CXTPControlSelector  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067d8b0
//
// 0067d8b0  8b442408             mov eax, dword ptr [esp + 8]
// 0067d8b4  56                   push esi
// 0067d8b5  57                   push edi
// 0067d8b6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0067d8ba  50                   push eax
// 0067d8bb  57                   push edi
// 0067d8bc  8bf1                 mov esi, ecx
// 0067d8be  e83df2fbff           call 0x63cb00
// 0067d8c3  8b8f68010000         mov ecx, dword ptr [edi + 0x168]
// 0067d8c9  898e68010000         mov dword ptr [esi + 0x168], ecx
// 0067d8cf  8b976c010000         mov edx, dword ptr [edi + 0x16c]
// 0067d8d5  89966c010000         mov dword ptr [esi + 0x16c], edx
// 0067d8db  8b8770010000         mov eax, dword ptr [edi + 0x170]
// 0067d8e1  898670010000         mov dword ptr [esi + 0x170], eax
// 0067d8e7  8b8f74010000         mov ecx, dword ptr [edi + 0x174]
// 0067d8ed  898e74010000         mov dword ptr [esi + 0x174], ecx
// 0067d8f3  8b9780010000         mov edx, dword ptr [edi + 0x180]
// 0067d8f9  899680010000         mov dword ptr [esi + 0x180], edx
// 0067d8ff  8b8784010000         mov eax, dword ptr [edi + 0x184]
// 0067d905  5f                   pop edi
// 0067d906  898684010000         mov dword ptr [esi + 0x184], eax
// 0067d90c  5e                   pop esi
// 0067d90d  c20800               ret 8

struct CXTPControlSelector {
    char pad[0x168];
    int field_168;
    int field_16c;
    int field_170;
    int field_174;
    char pad2[8];
    int field_180;
    int field_184;

    void func_0067d8b0(CXTPControlSelector* other, int arg);
};

extern "C" void __stdcall sub_0063cb00(CXTPControlSelector* other, int arg);

void CXTPControlSelector::func_0067d8b0(CXTPControlSelector* other, int arg)
{
    sub_0063cb00(other, arg);
    this->field_168 = other->field_168;
    this->field_16c = other->field_16c;
    this->field_170 = other->field_170;
    this->field_174 = other->field_174;
    this->field_180 = other->field_180;
    this->field_184 = other->field_184;
}
