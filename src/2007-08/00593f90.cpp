// roc 2007-08 00593f90  unit: RBX::ResizeTool  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593f90
//
// 00593f90  6aff                 push -1
// 00593f92  681bb67500           push 0x75b61b
// 00593f97  64a100000000         mov eax, dword ptr fs:[0]
// 00593f9d  50                   push eax
// 00593f9e  64892500000000       mov dword ptr fs:[0], esp
// 00593fa5  51                   push ecx
// 00593fa6  56                   push esi
// 00593fa7  6a4c                 push 0x4c
// 00593fa9  8bf1                 mov esi, ecx
// 00593fab  e846bf0900           call 0x62fef6
// 00593fb0  83c404               add esp, 4
// 00593fb3  89442404             mov dword ptr [esp + 4], eax
// 00593fb7  85c0                 test eax, eax
// 00593fb9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00593fc1  741b                 je 0x593fde
// 00593fc3  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00593fc6  51                   push ecx
// 00593fc7  8bc8                 mov ecx, eax
// 00593fc9  e812ffffff           call 0x593ee0
// 00593fce  5e                   pop esi
// 00593fcf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00593fd3  64890d00000000       mov dword ptr fs:[0], ecx
// 00593fda  83c410               add esp, 0x10
// 00593fdd  c3                   ret 
// 00593fde  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00593fe2  33c0                 xor eax, eax
// 00593fe4  5e                   pop esi
// 00593fe5  64890d00000000       mov dword ptr fs:[0], ecx
// 00593fec  83c410               add esp, 0x10
// 00593fef  c3                   ret 
// library rbxgs/tool\NullTool.cpp (function ?isSticky@NewNullTool@RBX@@EBEPAVMouseCommand@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/NullTool.cpp
