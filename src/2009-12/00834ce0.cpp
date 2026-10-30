// roc 2009-12 00834ce0  unit: CTreeCtrl  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00834ce0
//
// 00834ce0  6aff                 push -1
// 00834ce2  6808c09500           push 0x95c008
// 00834ce7  64a100000000         mov eax, dword ptr fs:[0]
// 00834ced  50                   push eax
// 00834cee  51                   push ecx
// 00834cef  56                   push esi
// 00834cf0  57                   push edi
// 00834cf1  a10052b600           mov eax, dword ptr [0xb65200]
// 00834cf6  33c4                 xor eax, esp
// 00834cf8  50                   push eax
// 00834cf9  8d442410             lea eax, [esp + 0x10]
// 00834cfd  64a300000000         mov dword ptr fs:[0], eax
// 00834d03  8bf1                 mov esi, ecx
// 00834d05  8974240c             mov dword ptr [esp + 0xc], esi
// 00834d09  6800008050           push 0x50800000
// 00834d0e  68e06c9f00           push 0x9f6ce0
// 00834d13  e85a1a0f00           call 0x926772
// 00834d18  c7064c6b9f00         mov dword ptr [esi], 0x9f6b4c
// 00834d1e  8d7e60               lea edi, [esi + 0x60]
// 00834d21  8bcf                 mov ecx, edi
// 00834d23  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00834d2b  e870e5ffff           call 0x8332a0
// 00834d30  c7067c6d9f00         mov dword ptr [esi], 0x9f6d7c
// 00834d36  c707f46c9f00         mov dword ptr [edi], 0x9f6cf4
// 00834d3c  c6869c00000001       mov byte ptr [esi + 0x9c], 1
// 00834d43  8bc6                 mov eax, esi
// 00834d45  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00834d49  64890d00000000       mov dword ptr fs:[0], ecx
// 00834d50  59                   pop ecx
// 00834d51  5f                   pop edi
// 00834d52  5e                   pop esi
// 00834d53  83c410               add esp, 0x10
// 00834d56  c3                   ret 
// copied from an identical function in another client (function ??0CXTTreeViewBase@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTTreeCtrlView.cpp