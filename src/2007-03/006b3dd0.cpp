// roc 2007-03 006b3dd0  unit: seg_006b0000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b3dd0
//
// 006b3dd0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b3dd4  0faf442410           imul eax, dword ptr [esp + 0x10]
// 006b3dd9  8a542418             mov dl, byte ptr [esp + 0x18]
// 006b3ddd  03c0                 add eax, eax
// 006b3ddf  80c9ff               or cl, 0xff
// 006b3de2  03c0                 add eax, eax
// 006b3de4  2aca                 sub cl, dl
// 006b3de6  85c0                 test eax, eax
// 006b3de8  7e4d                 jle 0x6b3e37
// 006b3dea  53                   push ebx
// 006b3deb  55                   push ebp
// 006b3dec  0fb6e9               movzx ebp, cl
// 006b3def  0fb6ca               movzx ecx, dl
// 006b3df2  56                   push esi
// 006b3df3  8b742420             mov esi, dword ptr [esp + 0x20]
// 006b3df7  57                   push edi
// 006b3df8  894c2428             mov dword ptr [esp + 0x28], ecx
// 006b3dfc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006b3e00  8bf8                 mov edi, eax
// 006b3e02  8b442414             mov eax, dword ptr [esp + 0x14]
// 006b3e06  eb08                 jmp 0x6b3e10
// 006b3e08  8da42400000000       lea esp, [esp]
// 006b3e0f  90                   nop 
// 006b3e10  0fb616               movzx edx, byte ptr [esi]
// 006b3e13  0fb619               movzx ebx, byte ptr [ecx]
// 006b3e16  0faf542428           imul edx, dword ptr [esp + 0x28]
// 006b3e1b  0fafdd               imul ebx, ebp
// 006b3e1e  03d3                 add edx, ebx
// 006b3e20  c1fa08               sar edx, 8
// 006b3e23  8810                 mov byte ptr [eax], dl
// 006b3e25  83c001               add eax, 1
// 006b3e28  83c101               add ecx, 1
// 006b3e2b  83c601               add esi, 1
// 006b3e2e  83ef01               sub edi, 1
// 006b3e31  75dd                 jne 0x6b3e10
// 006b3e33  5f                   pop edi
// 006b3e34  5e                   pop esi
// 006b3e35  5d                   pop ebp
// 006b3e36  5b                   pop ebx
// 006b3e37  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?AlphaBlendU@CXTPCommandBarAnimation@@IAEXPAE0HH0E@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBarAnimation.cpp
