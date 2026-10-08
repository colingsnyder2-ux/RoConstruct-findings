// roc 2009-06 007bfc50  unit: CXTPReportPaintManager  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007bfc50
//
// 007bfc50  8b8940020000         mov ecx, dword ptr [ecx + 0x240]
// 007bfc56  83e1fb               and ecx, 0xfffffffb
// 007bfc59  33c0                 xor eax, eax
// 007bfc5b  83f908               cmp ecx, 8
// 007bfc5e  771b                 ja 0x7bfc7b
// 007bfc60  ff248d7cfc7b00       jmp dword ptr [ecx*4 + 0x7bfc7c]
// 007bfc67  33c0                 xor eax, eax
// 007bfc69  c3                   ret 
// 007bfc6a  b801000000           mov eax, 1
// 007bfc6f  c3                   ret 
// 007bfc70  b802000000           mov eax, 2
// 007bfc75  c3                   ret 
// 007bfc76  b808000000           mov eax, 8
// 007bfc7b  c3                   ret 
// 007bfc7c  67fc                 cld 
// 007bfc7e  7b00                 jnp 0x7bfc80
// 007bfc80  6afc                 push -4
// 007bfc82  7b00                 jnp 0x7bfc84
// 007bfc84  70fc                 jo 0x7bfc82
// 007bfc86  7b00                 jnp 0x7bfc88
// 007bfc88  7bfc                 jnp 0x7bfc86
// 007bfc8a  7b00                 jnp 0x7bfc8c
// 007bfc8c  7bfc                 jnp 0x7bfc8a
// 007bfc8e  7b00                 jnp 0x7bfc90
// 007bfc90  7bfc                 jnp 0x7bfc8e
// 007bfc92  7b00                 jnp 0x7bfc94
// 007bfc94  7bfc                 jnp 0x7bfc92
// 007bfc96  7b00                 jnp 0x7bfc98
// 007bfc98  7bfc                 jnp 0x7bfc96
// 007bfc9a  7b00                 jnp 0x7bfc9c
// 007bfc9c  76fc                 jbe 0x7bfc9a
// 007bfc9e  7b00                 jnp 0x7bfca0
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?GetHeaderRowsDividerHeight@CXTPReportPaintManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
