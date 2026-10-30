// roc 2009-12 00834dd0  unit: CXTTreeViewBase  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00834dd0
//
// 00834dd0  6aff                 push -1
// 00834dd2  6868c09500           push 0x95c068
// 00834dd7  64a100000000         mov eax, dword ptr fs:[0]
// 00834ddd  50                   push eax
// 00834dde  51                   push ecx
// 00834ddf  56                   push esi
// 00834de0  57                   push edi
// 00834de1  a10052b600           mov eax, dword ptr [0xb65200]
// 00834de6  33c4                 xor eax, esp
// 00834de8  50                   push eax
// 00834de9  8d442410             lea eax, [esp + 0x10]
// 00834ded  64a300000000         mov dword ptr fs:[0], eax
// 00834df3  8bf1                 mov esi, ecx
// 00834df5  8974240c             mov dword ptr [esp + 0xc], esi
// 00834df9  e84af3fbff           call 0x7f4148
// 00834dfe  c706046a9f00         mov dword ptr [esi], 0x9f6a04
// 00834e04  8d7e54               lea edi, [esi + 0x54]
// 00834e07  8bcf                 mov ecx, edi
// 00834e09  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00834e11  e88ae4ffff           call 0x8332a0
// 00834e16  c706ac6f9f00         mov dword ptr [esi], 0x9f6fac
// 00834e1c  c707246f9f00         mov dword ptr [edi], 0x9f6f24
// 00834e22  c6869000000001       mov byte ptr [esi + 0x90], 1
// 00834e29  8bc6                 mov eax, esi
// 00834e2b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00834e2f  64890d00000000       mov dword ptr fs:[0], ecx
// 00834e36  59                   pop ecx
// 00834e37  5f                   pop edi
// 00834e38  5e                   pop esi
// 00834e39  83c410               add esp, 0x10
// 00834e3c  c3                   ret 
// copied from an identical function in another client (function ??0CXTTreeCtrlBase@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTTreeCtrlView.cpp