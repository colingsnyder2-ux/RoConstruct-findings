// roc 2009-12 0089aa50  unit: CXTPReportPaintManager  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089aa50
//
// 0089aa50  8b8940020000         mov ecx, dword ptr [ecx + 0x240]
// 0089aa56  83e1fb               and ecx, 0xfffffffb
// 0089aa59  33c0                 xor eax, eax
// 0089aa5b  83f908               cmp ecx, 8
// 0089aa5e  771b                 ja 0x89aa7b
// 0089aa60  ff248d7caa8900       jmp dword ptr [ecx*4 + 0x89aa7c]
// 0089aa67  33c0                 xor eax, eax
// 0089aa69  c3                   ret 
// 0089aa6a  b801000000           mov eax, 1
// 0089aa6f  c3                   ret 
// 0089aa70  b802000000           mov eax, 2
// 0089aa75  c3                   ret 
// 0089aa76  b808000000           mov eax, 8
// 0089aa7b  c3                   ret 
// 0089aa7c  67aa                 stosb byte ptr es:[di], al
// 0089aa7e  8900                 mov dword ptr [eax], eax
// 0089aa80  6aaa                 push -0x56
// 0089aa82  8900                 mov dword ptr [eax], eax
// 0089aa84  70aa                 jo 0x89aa30
// 0089aa86  8900                 mov dword ptr [eax], eax
// 0089aa88  7baa                 jnp 0x89aa34
// 0089aa8a  8900                 mov dword ptr [eax], eax
// 0089aa8c  7baa                 jnp 0x89aa38
// 0089aa8e  8900                 mov dword ptr [eax], eax
// 0089aa90  7baa                 jnp 0x89aa3c
// 0089aa92  8900                 mov dword ptr [eax], eax
// 0089aa94  7baa                 jnp 0x89aa40
// 0089aa96  8900                 mov dword ptr [eax], eax
// 0089aa98  7baa                 jnp 0x89aa44
// 0089aa9a  8900                 mov dword ptr [eax], eax
// 0089aa9c  76aa                 jbe 0x89aa48
// 0089aa9e  8900                 mov dword ptr [eax], eax
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?GetHeaderRowsDividerHeight@CXTPReportPaintManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
