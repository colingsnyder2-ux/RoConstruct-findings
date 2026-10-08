// from server: 95% by colin
// roc 2007-08 00661850  unit: PAVCXTPReportRecord::?$CArray  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00661850
//
// 00661850  53                   push ebx
// 00661851  56                   push esi
// 00661852  57                   push edi
// 00661853  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00661857  8bf1                 mov esi, ecx
// 00661859  8b5e28               mov ebx, dword ptr [esi + 0x28]
// 0066185c  8d4e20               lea ecx, [esi + 0x20]
// 0066185f  57                   push edi
// 00661860  53                   push ebx
// 00661861  e8aa100700           call 0x6d2910
// 00661866  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0066186a  8bc7                 mov eax, edi
// 0066186c  7506                 jne 0x661874
// 0066186e  895f4c               mov dword ptr [edi + 0x4c], ebx
// 00661871  897750               mov dword ptr [edi + 0x50], esi
// 00661874  5f                   pop edi
// 00661875  5e                   pop esi
// 00661876  5b                   pop ebx
// 00661877  c20400               ret 4

struct CArray {
    char pad[0x20];
    int field_20;
    char pad2[0x4];
    int field_28;
    char pad3[0x10];
    int field_3c;
    char pad4[0xc];
    int field_4c;
    int field_50;
    void InsertAt(int, int);
    void* func(int);
};

void* CArray::func(int arg)
{
    int* p = (int*)arg;
    int val = field_28;
    ((CArray*)((char*)this + 0x20))->InsertAt(val, arg);
    if (field_3c == 0) {
        p[0x13] = val;
        p[0x14] = (int)this;
    }
    return p;
}
