// from server: 36% by colin
// roc 2007-08 0054fc70  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054fc70
//
// 0054fc70  8b442408             mov eax, dword ptr [esp + 8]
// 0054fc74  53                   push ebx
// 0054fc75  56                   push esi
// 0054fc76  8b742418             mov esi, dword ptr [esp + 0x18]
// 0054fc7a  03c6                 add eax, esi
// 0054fc7c  57                   push edi
// 0054fc7d  99                   cdq 
// 0054fc7e  8bf8                 mov edi, eax
// 0054fc80  8bda                 mov ebx, edx
// 0054fc82  8bc6                 mov eax, esi
// 0054fc84  99                   cdq 
// 0054fc85  2bf8                 sub edi, eax
// 0054fc87  1bda                 sbb ebx, edx
// 0054fc89  8b542410             mov edx, dword ptr [esp + 0x10]
// 0054fc8d  6a03                 push 3
// 0054fc8f  03fe                 add edi, esi
// 0054fc91  135c2424             adc ebx, dword ptr [esp + 0x24]
// 0054fc95  6a00                 push 0
// 0054fc97  53                   push ebx
// 0054fc98  57                   push edi
// 0054fc99  52                   push edx
// 0054fc9a  e8f1eaffff           call 0x54e790
// 0054fc9f  5f                   pop edi
// 0054fca0  5e                   pop esi
// 0054fca1  5b                   pop ebx

extern "C" int __cdecl sub_54E790(int, int, int, int, int);

int __cdecl sub_54FC70(int a, int b, int c, int d)
{
    int sum = a + d;
    int lo = sum;
    int hi = sum >> 31;
    int t = d;
    int tlo = t;
    int thi = t >> 31;
    lo -= tlo;
    hi -= thi;
    lo += d;
    hi += c;
    return sub_54E790(b, lo, hi, 0, 3);
}
