// from server: 34% by colin
// roc 2007-08 0054e050  unit: std::D::V?$allocator::U?$basic_zlib_decompressor::?$stream_buffer  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e050
//
// 0054e050  8b442408             mov eax, dword ptr [esp + 8]
// 0054e054  53                   push ebx
// 0054e055  56                   push esi
// 0054e056  8b742418             mov esi, dword ptr [esp + 0x18]
// 0054e05a  03c6                 add eax, esi
// 0054e05c  57                   push edi
// 0054e05d  99                   cdq 
// 0054e05e  8bf8                 mov edi, eax
// 0054e060  8bda                 mov ebx, edx
// 0054e062  8bc6                 mov eax, esi
// 0054e064  99                   cdq 
// 0054e065  2bf8                 sub edi, eax
// 0054e067  1bda                 sbb ebx, edx
// 0054e069  8b542410             mov edx, dword ptr [esp + 0x10]
// 0054e06d  6a03                 push 3
// 0054e06f  03fe                 add edi, esi
// 0054e071  135c2424             adc ebx, dword ptr [esp + 0x24]
// 0054e075  6a00                 push 0
// 0054e077  53                   push ebx
// 0054e078  57                   push edi
// 0054e079  52                   push edx
// 0054e07a  e801feffff           call 0x54de80
// 0054e07f  5f                   pop edi
// 0054e080  5e                   pop esi
// 0054e081  5b                   pop ebx

extern "C" int __cdecl sub_0054DE80(int, int, int, int, int);

int __cdecl sub_0054E050(int a1, int a2, int a3, int a4)
{
    int eax = a4;
    int esi = a3;
    eax += esi;
    int edi = eax;
    int ebx = eax >> 31;
    eax = esi;
    int edx = esi >> 31;
    edi -= eax;
    ebx -= edx;
    int edx2 = a2;
    edi += esi;
    ebx += a1;
    return sub_0054DE80(edx2, edi, ebx, 0, 3);
}
