// roc 2009-06 00676af0  unit: RBX::Assembly  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00676af0
//
// 00676af0  56                   push esi
// 00676af1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00676af5  57                   push edi
// 00676af6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00676afa  2bf7                 sub esi, edi
// 00676afc  8bc6                 mov eax, esi
// 00676afe  c1f802               sar eax, 2
// 00676b01  83f801               cmp eax, 1
// 00676b04  7e31                 jle 0x676b37
// 00676b06  53                   push ebx
// 00676b07  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00676b0b  8b4437fc             mov eax, dword ptr [edi + esi - 4]
// 00676b0f  8b0f                 mov ecx, dword ptr [edi]
// 00676b11  53                   push ebx
// 00676b12  50                   push eax
// 00676b13  8d56fc               lea edx, [esi - 4]
// 00676b16  c1fa02               sar edx, 2
// 00676b19  52                   push edx
// 00676b1a  6a00                 push 0
// 00676b1c  57                   push edi
// 00676b1d  894c37fc             mov dword ptr [edi + esi - 4], ecx
// 00676b21  e8baf6ffff           call 0x6761e0
// 00676b26  83ee04               sub esi, 4
// 00676b29  8bc6                 mov eax, esi
// 00676b2b  c1f802               sar eax, 2
// 00676b2e  83c414               add esp, 0x14
// 00676b31  83f801               cmp eax, 1
// 00676b34  7fd5                 jg 0x676b0b
// 00676b36  5b                   pop ebx
// 00676b37  5f                   pop edi
// 00676b38  5e                   pop esi
// 00676b39  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Sort_heap@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
