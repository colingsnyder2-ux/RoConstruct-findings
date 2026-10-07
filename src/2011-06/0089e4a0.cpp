// roc 2011-06 0089e4a0  unit: CXTPKeyboardManager  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089e4a0
//
// 0089e4a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0089e4a4  0faf442410           imul eax, dword ptr [esp + 0x10]
// 0089e4a9  8a542418             mov dl, byte ptr [esp + 0x18]
// 0089e4ad  03c0                 add eax, eax
// 0089e4af  80c9ff               or cl, 0xff
// 0089e4b2  03c0                 add eax, eax
// 0089e4b4  2aca                 sub cl, dl
// 0089e4b6  85c0                 test eax, eax
// 0089e4b8  7e47                 jle 0x89e501
// 0089e4ba  53                   push ebx
// 0089e4bb  55                   push ebp
// 0089e4bc  0fb6e9               movzx ebp, cl
// 0089e4bf  0fb6ca               movzx ecx, dl
// 0089e4c2  56                   push esi
// 0089e4c3  8b742420             mov esi, dword ptr [esp + 0x20]
// 0089e4c7  57                   push edi
// 0089e4c8  894c2428             mov dword ptr [esp + 0x28], ecx
// 0089e4cc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089e4d0  8bf8                 mov edi, eax
// 0089e4d2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089e4d6  eb08                 jmp 0x89e4e0
// 0089e4d8  8da42400000000       lea esp, [esp]
// 0089e4df  90                   nop 
// 0089e4e0  0fb616               movzx edx, byte ptr [esi]
// 0089e4e3  0fb619               movzx ebx, byte ptr [ecx]
// 0089e4e6  0faf542428           imul edx, dword ptr [esp + 0x28]
// 0089e4eb  0fafdd               imul ebx, ebp
// 0089e4ee  03d3                 add edx, ebx
// 0089e4f0  c1fa08               sar edx, 8
// 0089e4f3  8810                 mov byte ptr [eax], dl
// 0089e4f5  40                   inc eax
// 0089e4f6  41                   inc ecx
// 0089e4f7  46                   inc esi
// 0089e4f8  83ef01               sub edi, 1
// 0089e4fb  75e3                 jne 0x89e4e0
// 0089e4fd  5f                   pop edi
// 0089e4fe  5e                   pop esi
// 0089e4ff  5d                   pop ebp
// 0089e500  5b                   pop ebx
// 0089e501  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?AlphaBlendU@CXTPCommandBarAnimation@@IAEXPAE0HH0E@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBarAnimation.cpp
