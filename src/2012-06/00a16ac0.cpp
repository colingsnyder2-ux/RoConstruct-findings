// from server: 100% by auto
// roc 2012-06 00a16ac0  unit: CXTPKeyboardManager  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a16ac0
//
// 00a16ac0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a16ac4  0faf442410           imul eax, dword ptr [esp + 0x10]
// 00a16ac9  8a542418             mov dl, byte ptr [esp + 0x18]
// 00a16acd  03c0                 add eax, eax
// 00a16acf  80c9ff               or cl, 0xff
// 00a16ad2  03c0                 add eax, eax
// 00a16ad4  2aca                 sub cl, dl
// 00a16ad6  85c0                 test eax, eax
// 00a16ad8  7e47                 jle 0xa16b21
// 00a16ada  53                   push ebx
// 00a16adb  55                   push ebp
// 00a16adc  0fb6e9               movzx ebp, cl
// 00a16adf  0fb6ca               movzx ecx, dl
// 00a16ae2  56                   push esi
// 00a16ae3  8b742420             mov esi, dword ptr [esp + 0x20]
// 00a16ae7  57                   push edi
// 00a16ae8  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a16aec  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a16af0  8bf8                 mov edi, eax
// 00a16af2  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a16af6  eb08                 jmp 0xa16b00
// 00a16af8  8da42400000000       lea esp, [esp]
// 00a16aff  90                   nop 
// 00a16b00  0fb616               movzx edx, byte ptr [esi]
// 00a16b03  0fb619               movzx ebx, byte ptr [ecx]
// 00a16b06  0faf542428           imul edx, dword ptr [esp + 0x28]
// 00a16b0b  0fafdd               imul ebx, ebp
// 00a16b0e  03d3                 add edx, ebx
// 00a16b10  c1fa08               sar edx, 8
// 00a16b13  8810                 mov byte ptr [eax], dl
// 00a16b15  40                   inc eax
// 00a16b16  41                   inc ecx
// 00a16b17  46                   inc esi
// 00a16b18  83ef01               sub edi, 1
// 00a16b1b  75e3                 jne 0xa16b00
// 00a16b1d  5f                   pop edi
// 00a16b1e  5e                   pop esi
// 00a16b1f  5d                   pop ebp
// 00a16b20  5b                   pop ebx
// 00a16b21  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?AlphaBlendU@CXTPCommandBarAnimation@@IAEXPAE0HH0E@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBarAnimation.cpp
