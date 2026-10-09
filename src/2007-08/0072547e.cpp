// from server: 70% by colin
// roc 2007-08 0072547e  unit: CXTIconHandle  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0072547e
//
// 0072547e  56                   push esi
// 0072547f  8bf1                 mov esi, ecx
// 00725481  57                   push edi
// 00725482  8d7e10               lea edi, [esi + 0x10]
// 00725485  8bcf                 mov ecx, edi
// 00725487  e824c4cdff           call 0x4018b0
// 0072548c  832600               and dword ptr [esi], 0
// 0072548f  8bcf                 mov ecx, edi
// 00725491  c7460400004000       mov dword ptr [esi + 4], 0x400000
// 00725498  c7460804778700       mov dword ptr [esi + 8], 0x877704
// 0072549f  c7460c18778700       mov dword ptr [esi + 0xc], 0x877718
// 007254a6  e825c4cdff           call 0x4018d0
// 007254ab  85c0                 test eax, eax
// 007254ad  7d09                 jge 0x7254b8
// 007254af  c60598be8b0001       mov byte ptr [0x8bbe98], 1
// 007254b6  eb06                 jmp 0x7254be
// 007254b8  c70628000000         mov dword ptr [esi], 0x28
// 007254be  5f                   pop edi
// 007254bf  8bc6                 mov eax, esi
// 007254c1  5e                   pop esi
// 007254c2  c3                   ret 

struct CXTIconHandle {
    int field0;
    int field4;
    int field8;
    int fieldC;
    char pad10[0x10];
    int field20;
    int field24;
    int field28;
    int field2C;

    CXTIconHandle();
};

extern "C" int __stdcall sub_4018B0(int);
extern "C" int __stdcall sub_4018D0(int);

extern unsigned char g_8bbe98;

CXTIconHandle::CXTIconHandle()
{
    sub_4018B0((int)(this->pad10));
    this->field0 = 0;
    this->field4 = 0x400000;
    this->field8 = 0x877704;
    this->fieldC = 0x877718;
    if (sub_4018D0((int)(this->pad10)) < 0)
    {
        g_8bbe98 = 1;
    }
    else
    {
        this->field0 = 0x28;
    }
}
