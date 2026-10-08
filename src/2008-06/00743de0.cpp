// from server: 100% by auto
// roc 2008-06 00743de0  unit: CXTPControlEditCtrl  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00743de0
//
// 00743de0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00743de4  0faf442410           imul eax, dword ptr [esp + 0x10]
// 00743de9  8a542418             mov dl, byte ptr [esp + 0x18]
// 00743ded  03c0                 add eax, eax
// 00743def  80c9ff               or cl, 0xff
// 00743df2  03c0                 add eax, eax
// 00743df4  2aca                 sub cl, dl
// 00743df6  85c0                 test eax, eax
// 00743df8  7e47                 jle 0x743e41
// 00743dfa  53                   push ebx
// 00743dfb  55                   push ebp
// 00743dfc  0fb6e9               movzx ebp, cl
// 00743dff  0fb6ca               movzx ecx, dl
// 00743e02  56                   push esi
// 00743e03  8b742420             mov esi, dword ptr [esp + 0x20]
// 00743e07  57                   push edi
// 00743e08  894c2428             mov dword ptr [esp + 0x28], ecx
// 00743e0c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00743e10  8bf8                 mov edi, eax
// 00743e12  8b442414             mov eax, dword ptr [esp + 0x14]
// 00743e16  eb08                 jmp 0x743e20
// 00743e18  8da42400000000       lea esp, [esp]
// 00743e1f  90                   nop 
// 00743e20  0fb616               movzx edx, byte ptr [esi]
// 00743e23  0fb619               movzx ebx, byte ptr [ecx]
// 00743e26  0faf542428           imul edx, dword ptr [esp + 0x28]
// 00743e2b  0fafdd               imul ebx, ebp
// 00743e2e  03d3                 add edx, ebx
// 00743e30  c1fa08               sar edx, 8
// 00743e33  8810                 mov byte ptr [eax], dl
// 00743e35  40                   inc eax
// 00743e36  41                   inc ecx
// 00743e37  46                   inc esi
// 00743e38  83ef01               sub edi, 1
// 00743e3b  75e3                 jne 0x743e20
// 00743e3d  5f                   pop edi
// 00743e3e  5e                   pop esi
// 00743e3f  5d                   pop ebp
// 00743e40  5b                   pop ebx
// 00743e41  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?AlphaBlendU@CXTPCommandBarAnimation@@IAEXPAE0HH0E@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBarAnimation.cpp
