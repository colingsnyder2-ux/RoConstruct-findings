// from server: 86% by colin
// roc 2007-08 0069bac0  unit: CXTPPropertyGridView  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069bac0
//
// 0069bac0  53                   push ebx
// 0069bac1  55                   push ebp
// 0069bac2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0069bac6  56                   push esi
// 0069bac7  8bd9                 mov ebx, ecx
// 0069bac9  8b8db8000000         mov ecx, dword ptr [ebp + 0xb8]
// 0069bacf  57                   push edi
// 0069bad0  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0069bad4  33f6                 xor esi, esi
// 0069bad6  397128               cmp dword ptr [ecx + 0x28], esi
// 0069bad9  897c2418             mov dword ptr [esp + 0x18], edi
// 0069badd  7e23                 jle 0x69bb02
// 0069badf  90                   nop 
// 0069bae0  56                   push esi
// 0069bae1  e81ad5ffff           call 0x699000
// 0069bae6  8d4f01               lea ecx, [edi + 1]
// 0069bae9  51                   push ecx
// 0069baea  50                   push eax
// 0069baeb  8bcb                 mov ecx, ebx
// 0069baed  e8defeffff           call 0x69b9d0
// 0069baf2  8b8db8000000         mov ecx, dword ptr [ebp + 0xb8]
// 0069baf8  83c601               add esi, 1
// 0069bafb  03f8                 add edi, eax
// 0069bafd  3b7128               cmp esi, dword ptr [ecx + 0x28]
// 0069bb00  7cde                 jl 0x69bae0
// 0069bb02  8bc7                 mov eax, edi
// 0069bb04  2b442418             sub eax, dword ptr [esp + 0x18]
// 0069bb08  5f                   pop edi
// 0069bb09  5e                   pop esi
// 0069bb0a  5d                   pop ebp
// 0069bb0b  5b                   pop ebx
// 0069bb0c  c20800               ret 8

struct CXTPPropertyGridView
{
    int sub_69B9D0(int, int);
    int sub_69BAC0(int, int);
};

struct Inner
{
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    int field_28;
    int sub_699000(int);
};

int CXTPPropertyGridView::sub_69BAC0(int a, int b)
{
    Inner* inner = *(Inner**)(a + 0xb8);
    int start = b;
    int total = b;
    int i = 0;
    while (i < inner->field_28)
    {
        int item = inner->sub_699000(i);
        total += this->sub_69B9D0(item, total + 1);
        inner = *(Inner**)(a + 0xb8);
        i++;
    }
    return total - start;
}
