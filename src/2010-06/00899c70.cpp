// roc 2010-06 00899c70  unit: CXTColorSelectorCtrl  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00899c70
//
// 00899c70  6aff                 push -1
// 00899c72  68c3bf9b00           push 0x9bbfc3
// 00899c77  64a100000000         mov eax, dword ptr fs:[0]
// 00899c7d  50                   push eax
// 00899c7e  51                   push ecx
// 00899c7f  56                   push esi
// 00899c80  57                   push edi
// 00899c81  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00899c86  33c4                 xor eax, esp
// 00899c88  50                   push eax
// 00899c89  8d442410             lea eax, [esp + 0x10]
// 00899c8d  64a300000000         mov dword ptr fs:[0], eax
// 00899c93  8bf1                 mov esi, ecx
// 00899c95  8974240c             mov dword ptr [esp + 0xc], esi
// 00899c99  8d7e54               lea edi, [esi + 0x54]
// 00899c9c  c7061409a700         mov dword ptr [esi], 0xa70914
// 00899ca2  c7070009a700         mov dword ptr [edi], 0xa70900
// 00899ca8  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00899cb0  e8bbfbffff           call 0x899870
// 00899cb5  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00899cbb  85c9                 test ecx, ecx
// 00899cbd  740f                 je 0x899cce
// 00899cbf  e858e2f0ff           call 0x7a7f1c
// 00899cc4  c7869c00000000000000 mov dword ptr [esi + 0x9c], 0
// 00899cce  8bcf                 mov ecx, edi
// 00899cd0  c644241800           mov byte ptr [esp + 0x18], 0
// 00899cd5  e88644f7ff           call 0x80e160
// 00899cda  8bce                 mov ecx, esi
// 00899cdc  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00899ce4  e887320e00           call 0x97cf70
// 00899ce9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00899ced  64890d00000000       mov dword ptr fs:[0], ecx
// 00899cf4  59                   pop ecx
// 00899cf5  5f                   pop edi
// 00899cf6  5e                   pop esi
// 00899cf7  83c410               add esp, 0x10
// 00899cfa  c3                   ret 
// copied from an identical function in another client (function ??1CXTButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp