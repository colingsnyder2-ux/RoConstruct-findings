// from server: 41% by colin
// roc 2007-08 006622e0  unit: CXTPReportRecordItemText  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006622e0
//
// 006622e0  6aff                 push -1
// 006622e2  68a8057600           push 0x7605a8
// 006622e7  64a100000000         mov eax, dword ptr fs:[0]
// 006622ed  50                   push eax
// 006622ee  51                   push ecx
// 006622ef  56                   push esi
// 006622f0  a188518b00           mov eax, dword ptr [0x8b5188]
// 006622f5  33c4                 xor eax, esp
// 006622f7  50                   push eax
// 006622f8  8d44240c             lea eax, [esp + 0xc]
// 006622fc  64a300000000         mov dword ptr fs:[0], eax
// 00662302  8bf1                 mov esi, ecx
// 00662304  89742408             mov dword ptr [esp + 8], esi
// 00662308  e8331cffff           call 0x653f40
// 0066230d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00662311  50                   push eax
// 00662312  8d4e7c               lea ecx, [esi + 0x7c]
// 00662315  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0066231d  c706bc8f7c00         mov dword ptr [esi], 0x7c8fbc
// 00662323  ff15b8dd7700         call dword ptr [0x77ddb8]
// 00662329  8bc6                 mov eax, esi
// 0066232b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066232f  64890d00000000       mov dword ptr fs:[0], ecx
// 00662336  59                   pop ecx
// 00662337  5e                   pop esi
// 00662338  83c410               add esp, 0x10
// 0066233b  c20400               ret 4

struct CXTPReportRecordItemText {
    char pad0[0x7c];
    int m_field7c;
    CXTPReportRecordItemText* construct(unsigned int arg);
};

extern "C" void __stdcall sub_653f40();
extern "C" void __stdcall sub_77ddb8(unsigned int);

CXTPReportRecordItemText* CXTPReportRecordItemText::construct(unsigned int arg)
{
    sub_653f40();
    m_field7c = 0;
    *(void**)this = (void*)0x7c8fbc;
    sub_77ddb8(arg);
    return this;
}
