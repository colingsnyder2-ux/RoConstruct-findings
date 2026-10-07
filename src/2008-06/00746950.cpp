// roc 2008-06 00746950  unit: CXTPReportPaintManager  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00746950
//
// 00746950  8b8940020000         mov ecx, dword ptr [ecx + 0x240]
// 00746956  83e1fb               and ecx, 0xfffffffb
// 00746959  33c0                 xor eax, eax
// 0074695b  83f908               cmp ecx, 8
// 0074695e  771b                 ja 0x74697b
// 00746960  ff248d7c697400       jmp dword ptr [ecx*4 + 0x74697c]
// 00746967  33c0                 xor eax, eax
// 00746969  c3                   ret 
// 0074696a  b801000000           mov eax, 1
// 0074696f  c3                   ret 
// 00746970  b802000000           mov eax, 2
// 00746975  c3                   ret 
// 00746976  b808000000           mov eax, 8
// 0074697b  c3                   ret 
// 0074697c  676974006a697400     imul esi, dword ptr [si], 0x74696a
// 00746984  7069                 jo 0x7469ef
// 00746986  7400                 je 0x746988
// 00746988  7b69                 jnp 0x7469f3
// 0074698a  7400                 je 0x74698c
// 0074698c  7b69                 jnp 0x7469f7
// 0074698e  7400                 je 0x746990
// 00746990  7b69                 jnp 0x7469fb
// 00746992  7400                 je 0x746994
// 00746994  7b69                 jnp 0x7469ff
// 00746996  7400                 je 0x746998
// 00746998  7b69                 jnp 0x746a03
// 0074699a  7400                 je 0x74699c
// 0074699c  7669                 jbe 0x746a07
// 0074699e  7400                 je 0x7469a0
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?GetHeaderRowsDividerHeight@CXTPReportPaintManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
