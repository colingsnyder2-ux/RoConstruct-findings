// from server: 71% by colin
// roc 2007-08 006daf90  unit: CXTPReportControl::CReportDropTarget  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006daf90
//
// 006daf90  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006daf94  56                   push esi
// 006daf95  57                   push edi
// 006daf96  8bf1                 mov esi, ecx
// 006daf98  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006daf9c  50                   push eax
// 006daf9d  51                   push ecx
// 006daf9e  8bce                 mov ecx, esi
// 006dafa0  e86bfeffff           call 0x6dae10
// 006dafa5  8bf8                 mov edi, eax
// 006dafa7  85ff                 test edi, edi
// 006dafa9  741a                 je 0x6dafc5
// 006dafab  8d4e54               lea ecx, [esi + 0x54]
// 006dafae  e88d550000           call 0x6e0540
// 006dafb3  8b10                 mov edx, dword ptr [eax]
// 006dafb5  83c720               add edi, 0x20
// 006dafb8  57                   push edi
// 006dafb9  8bc8                 mov ecx, eax
// 006dafbb  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 006dafc1  6a02                 push 2
// 006dafc3  ffd0                 call eax
// 006dafc5  5f                   pop edi
// 006dafc6  5e                   pop esi
// 006dafc7  c20c00               ret 0xc

struct CXTPReportControl
{
    int sub_6DAE10(int, int);
    int sub_6E0540();
    int sub_6DAF90(int, int, int);
};

int CXTPReportControl::sub_6DAF90(int a, int b, int c)
{
    int result = sub_6DAE10(b, c);
    if (result != 0)
    {
        int* p = (int*)sub_6E0540();
        int (*fn)(int*, int) = (int (*)(int*, int))*(int*)(*p + 0x140);
        fn(p, 2);
    }
    return result;
}
