// roc 2010-06 0084ec00  unit: CXTPReportPaintManager  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0084ec00
//
// 0084ec00  8b8944020000         mov ecx, dword ptr [ecx + 0x244]
// 0084ec06  83e1fb               and ecx, 0xfffffffb
// 0084ec09  33c0                 xor eax, eax
// 0084ec0b  83f908               cmp ecx, 8
// 0084ec0e  771b                 ja 0x84ec2b
// 0084ec10  ff248d2cec8400       jmp dword ptr [ecx*4 + 0x84ec2c]
// 0084ec17  33c0                 xor eax, eax
// 0084ec19  c3                   ret 
// 0084ec1a  b801000000           mov eax, 1
// 0084ec1f  c3                   ret 
// 0084ec20  b802000000           mov eax, 2
// 0084ec25  c3                   ret 
// 0084ec26  b808000000           mov eax, 8
// 0084ec2b  c3                   ret 
// 0084ec2c  17                   pop ss
// 0084ec2d  ec                   in al, dx
// 0084ec2e  8400                 test byte ptr [eax], al
// 0084ec30  1aec                 sbb ch, ah
// 0084ec32  8400                 test byte ptr [eax], al
// 0084ec34  20ec                 and ah, ch
// 0084ec36  8400                 test byte ptr [eax], al
// 0084ec38  2bec                 sub ebp, esp
// 0084ec3a  8400                 test byte ptr [eax], al
// 0084ec3c  2bec                 sub ebp, esp
// 0084ec3e  8400                 test byte ptr [eax], al
// 0084ec40  2bec                 sub ebp, esp
// 0084ec42  8400                 test byte ptr [eax], al
// 0084ec44  2bec                 sub ebp, esp
// 0084ec46  8400                 test byte ptr [eax], al
// 0084ec48  2bec                 sub ebp, esp
// 0084ec4a  8400                 test byte ptr [eax], al
// 0084ec4c  26ec                 in al, dx
// 0084ec4e  8400                 test byte ptr [eax], al
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?GetFooterRowsDividerHeight@CXTPReportPaintManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
