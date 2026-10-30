// roc 2009-12 0089aaa0  unit: CXTPReportPaintManager  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089aaa0
//
// 0089aaa0  8b8944020000         mov ecx, dword ptr [ecx + 0x244]
// 0089aaa6  83e1fb               and ecx, 0xfffffffb
// 0089aaa9  33c0                 xor eax, eax
// 0089aaab  83f908               cmp ecx, 8
// 0089aaae  771b                 ja 0x89aacb
// 0089aab0  ff248dccaa8900       jmp dword ptr [ecx*4 + 0x89aacc]
// 0089aab7  33c0                 xor eax, eax
// 0089aab9  c3                   ret 
// 0089aaba  b801000000           mov eax, 1
// 0089aabf  c3                   ret 
// 0089aac0  b802000000           mov eax, 2
// 0089aac5  c3                   ret 
// 0089aac6  b808000000           mov eax, 8
// 0089aacb  c3                   ret 
// 0089aacc  b7aa                 mov bh, 0xaa
// 0089aace  8900                 mov dword ptr [eax], eax
// 0089aad0  baaa8900c0           mov edx, 0xc00089aa
// 0089aad5  aa                   stosb byte ptr es:[edi], al
// 0089aad6  8900                 mov dword ptr [eax], eax
// 0089aad8  cb                   retf 
// 0089aad9  aa                   stosb byte ptr es:[edi], al
// 0089aada  8900                 mov dword ptr [eax], eax
// 0089aadc  cb                   retf 
// 0089aadd  aa                   stosb byte ptr es:[edi], al
// 0089aade  8900                 mov dword ptr [eax], eax
// 0089aae0  cb                   retf 
// 0089aae1  aa                   stosb byte ptr es:[edi], al
// 0089aae2  8900                 mov dword ptr [eax], eax
// 0089aae4  cb                   retf 
// 0089aae5  aa                   stosb byte ptr es:[edi], al
// 0089aae6  8900                 mov dword ptr [eax], eax
// 0089aae8  cb                   retf 
// 0089aae9  aa                   stosb byte ptr es:[edi], al
// 0089aaea  8900                 mov dword ptr [eax], eax
// copied from an identical function in another client (function ?GetFooterRowsDividerHeight@CXTPReportPaintManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp