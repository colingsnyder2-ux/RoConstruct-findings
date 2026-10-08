// from server: 95% by colin
// roc 2007-08 0065e9a0  unit: CXTPReportColumn  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e9a0
//
// 0065e9a0  56                   push esi
// 0065e9a1  8bf1                 mov esi, ecx
// 0065e9a3  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0065e9a6  e8b54a0700           call 0x6d3460
// 0065e9ab  85c0                 test eax, eax
// 0065e9ad  741d                 je 0x65e9cc
// 0065e9af  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0065e9b2  6a00                 push 0
// 0065e9b4  e8974b0700           call 0x6d3550
// 0065e9b9  3bc6                 cmp eax, esi
// 0065e9bb  750f                 jne 0x65e9cc
// 0065e9bd  8bce                 mov ecx, esi
// 0065e9bf  e85cfdffff           call 0x65e720
// 0065e9c4  8bc8                 mov ecx, eax
// 0065e9c6  5e                   pop esi
// 0065e9c7  e9b47dffff           jmp 0x656780
// 0065e9cc  33c0                 xor eax, eax
// 0065e9ce  5e                   pop esi
// 0065e9cf  c3                   ret 

struct CXTPReportColumn;

struct CXTPReportColumn
{
    char pad[0x54];
    void* p54;
    int f1();
    int f2();
    int f3();
    int f4();
};

extern "C" int __fastcall sub_6d3460(void*);
extern "C" int __fastcall sub_6d3550(void*, int);
extern "C" int __fastcall sub_656780(int);

int CXTPReportColumn::f1()
{
    if (sub_6d3460(p54))
    {
        if (sub_6d3550(p54, 0) == (int)this)
        {
            return sub_656780(f2());
        }
    }
    return 0;
}
