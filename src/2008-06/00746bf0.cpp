// from server: 100% by auto
// roc 2008-06 00746bf0  unit: CXTPFormulaMulDivC  size: 365 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00746bf0
//
// 00746bf0  6aff                 push -1
// 00746bf2  68827f7e00           push 0x7e7f82
// 00746bf7  64a100000000         mov eax, dword ptr fs:[0]
// 00746bfd  50                   push eax
// 00746bfe  51                   push ecx
// 00746bff  56                   push esi
// 00746c00  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 00746c05  33c4                 xor eax, esp
// 00746c07  50                   push eax
// 00746c08  8d44240c             lea eax, [esp + 0xc]
// 00746c0c  64a300000000         mov dword ptr fs:[0], eax
// 00746c12  8bf1                 mov esi, ecx
// 00746c14  89742408             mov dword ptr [esp + 8], esi
// 00746c18  c706bc3c8600         mov dword ptr [esi], 0x863cbc
// 00746c1e  8b8ee4020000         mov ecx, dword ptr [esi + 0x2e4]
// 00746c24  c74424140f000000     mov dword ptr [esp + 0x14], 0xf
// 00746c2c  85c9                 test ecx, ecx
// 00746c2e  740f                 je 0x746c3f
// 00746c30  e8af9ff5ff           call 0x6a0be4
// 00746c35  c786e402000000000000 mov dword ptr [esi + 0x2e4], 0
// 00746c3f  8d8ed8020000         lea ecx, [esi + 0x2d8]
// 00746c45  c64424140e           mov byte ptr [esp + 0x14], 0xe
// 00746c4a  e8411dfdff           call 0x718990
// 00746c4f  8d8ecc020000         lea ecx, [esi + 0x2cc]
// 00746c55  c64424140d           mov byte ptr [esp + 0x14], 0xd
// 00746c5a  e8311dfdff           call 0x718990
// 00746c5f  8d8ec0020000         lea ecx, [esi + 0x2c0]
// 00746c65  c64424140c           mov byte ptr [esp + 0x14], 0xc
// 00746c6a  e8211dfdff           call 0x718990
// 00746c6f  8d8e9c020000         lea ecx, [esi + 0x29c]
// 00746c75  c64424140b           mov byte ptr [esp + 0x14], 0xb
// 00746c7a  c70168e08000         mov dword ptr [ecx], 0x80e068
// 00746c80  e81ba5ccff           call 0x4111a0
// 00746c85  8d8e94020000         lea ecx, [esi + 0x294]
// 00746c8b  c64424140a           mov byte ptr [esp + 0x14], 0xa
// 00746c90  c70168e08000         mov dword ptr [ecx], 0x80e068
// 00746c96  e805a5ccff           call 0x4111a0
// 00746c9b  8d8e8c020000         lea ecx, [esi + 0x28c]
// 00746ca1  c644241409           mov byte ptr [esp + 0x14], 9
// 00746ca6  c70168e08000         mov dword ptr [ecx], 0x80e068
// 00746cac  e8efa4ccff           call 0x4111a0
// 00746cb1  8d8e70020000         lea ecx, [esi + 0x270]
// 00746cb7  c644241408           mov byte ptr [esp + 0x14], 8
// 00746cbc  e869a1f5ff           call 0x6a0e2a
// 00746cc1  8d8e20020000         lea ecx, [esi + 0x220]
// 00746cc7  ff15143f8000         call dword ptr [0x803f14]
// 00746ccd  8d8e1c020000         lea ecx, [esi + 0x21c]
// 00746cd3  ff15143f8000         call dword ptr [0x803f14]
// 00746cd9  8d8e18020000         lea ecx, [esi + 0x218]
// 00746cdf  ff15143f8000         call dword ptr [0x803f14]
// 00746ce5  8d8e14020000         lea ecx, [esi + 0x214]
// 00746ceb  ff15143f8000         call dword ptr [0x803f14]
// 00746cf1  8d4e38               lea ecx, [esi + 0x38]
// 00746cf4  c644241403           mov byte ptr [esp + 0x14], 3
// 00746cf9  c70128b28100         mov dword ptr [ecx], 0x81b228
// 00746cff  e89ca4ccff           call 0x4111a0
// 00746d04  8d4e30               lea ecx, [esi + 0x30]
// 00746d07  c644241402           mov byte ptr [esp + 0x14], 2
// 00746d0c  c70128b28100         mov dword ptr [ecx], 0x81b228
// 00746d12  e889a4ccff           call 0x4111a0
// 00746d17  8d4e28               lea ecx, [esi + 0x28]
// 00746d1a  c644241401           mov byte ptr [esp + 0x14], 1
// 00746d1f  c70128b28100         mov dword ptr [ecx], 0x81b228
// 00746d25  e876a4ccff           call 0x4111a0
// 00746d2a  8d4e20               lea ecx, [esi + 0x20]
// 00746d2d  c644241400           mov byte ptr [esp + 0x14], 0
// 00746d32  c70128b28100         mov dword ptr [ecx], 0x81b228
// 00746d38  e863a4ccff           call 0x4111a0
// 00746d3d  8bce                 mov ecx, esi
// 00746d3f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00746d47  e8eaa3f5ff           call 0x6a1136
// 00746d4c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00746d50  64890d00000000       mov dword ptr fs:[0], ecx
// 00746d57  59                   pop ecx
// 00746d58  5e                   pop esi
// 00746d59  83c410               add esp, 0x10
// 00746d5c  c3                   ret 
// library xtp-11.2.2-lib-strlen/Source\ReportControl\XTPReportPaintManager.cpp (function ??1CXTPReportPaintManager@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp
