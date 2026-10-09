// from server: 44% by colin
// roc 2007-08 006625b0  unit: CXTPReportRecordItemPreview  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006625b0
//
// 006625b0  6aff                 push -1
// 006625b2  68a8057600           push 0x7605a8
// 006625b7  64a100000000         mov eax, dword ptr fs:[0]
// 006625bd  50                   push eax
// 006625be  51                   push ecx
// 006625bf  56                   push esi
// 006625c0  a188518b00           mov eax, dword ptr [0x8b5188]
// 006625c5  33c4                 xor eax, esp
// 006625c7  50                   push eax
// 006625c8  8d44240c             lea eax, [esp + 0xc]
// 006625cc  64a300000000         mov dword ptr fs:[0], eax
// 006625d2  8bf1                 mov esi, ecx
// 006625d4  89742408             mov dword ptr [esp + 8], esi
// 006625d8  e86319ffff           call 0x653f40
// 006625dd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006625e1  50                   push eax
// 006625e2  8d4e7c               lea ecx, [esi + 0x7c]
// 006625e5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006625ed  c7064c927c00         mov dword ptr [esi], 0x7c924c
// 006625f3  ff15b8dd7700         call dword ptr [0x77ddb8]
// 006625f9  8bc6                 mov eax, esi
// 006625fb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006625ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00662606  59                   pop ecx
// 00662607  5e                   pop esi
// 00662608  83c410               add esp, 0x10
// 0066260b  c20400               ret 4

extern "C" int __stdcall sub_77ddb8(int);

struct CXTPReportRecordItemPreview {
    void sub_653f40();
    int sub_6625b0(int);
};

int CXTPReportRecordItemPreview::sub_6625b0(int a)
{
    sub_653f40();
    *(int*)this = 0x7c924c;
    *(int*)((char*)this + 0x7c) = 0;
    sub_77ddb8(a);
    return (int)this;
}
