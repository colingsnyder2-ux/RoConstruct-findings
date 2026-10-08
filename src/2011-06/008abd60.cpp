// roc 2011-06 008abd60  unit: CXTPReportPaintManager  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008abd60
//
// 008abd60  8b8944020000         mov ecx, dword ptr [ecx + 0x244]
// 008abd66  83e1fb               and ecx, 0xfffffffb
// 008abd69  33c0                 xor eax, eax
// 008abd6b  83f908               cmp ecx, 8
// 008abd6e  771b                 ja 0x8abd8b
// 008abd70  ff248d8cbd8a00       jmp dword ptr [ecx*4 + 0x8abd8c]
// 008abd77  33c0                 xor eax, eax
// 008abd79  c3                   ret 
// 008abd7a  b801000000           mov eax, 1
// 008abd7f  c3                   ret 
// 008abd80  b802000000           mov eax, 2
// 008abd85  c3                   ret 
// 008abd86  b808000000           mov eax, 8
// 008abd8b  c3                   ret 
// 008abd8c  77bd                 ja 0x8abd4b
// 008abd8e  8a00                 mov al, byte ptr [eax]
// 008abd90  7abd                 jp 0x8abd4f
// 008abd92  8a00                 mov al, byte ptr [eax]
// 008abd94  80bd8a008bbd8a       cmp byte ptr [ebp - 0x4274ff76], 0x8a
// 008abd9b  008bbd8a008b         add byte ptr [ebx - 0x74ff7543], cl
// 008abda1  bd8a008bbd           mov ebp, 0xbd8b008a
// 008abda6  8a00                 mov al, byte ptr [eax]
// 008abda8  8bbd8a0086bd         mov edi, dword ptr [ebp - 0x4279ff76]
// 008abdae  8a00                 mov al, byte ptr [eax]
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?GetFooterRowsDividerHeight@CXTPReportPaintManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
