// roc 2009-06 00695250  unit: RBX::Lua::FunctionRef  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00695250
//
// 00695250  56                   push esi
// 00695251  8bf1                 mov esi, ecx
// 00695253  8b4620               mov eax, dword ptr [esi + 0x20]
// 00695256  85c0                 test eax, eax
// 00695258  741d                 je 0x695277
// 0069525a  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0069525d  85c9                 test ecx, ecx
// 0069525f  7416                 je 0x695277
// 00695261  50                   push eax
// 00695262  68f0d8ffff           push 0xffffd8f0
// 00695267  51                   push ecx
// 00695268  e8e3540200           call 0x6ba750
// 0069526d  83c40c               add esp, 0xc
// 00695270  c7462000000000       mov dword ptr [esi + 0x20], 0
// 00695277  8b4618               mov eax, dword ptr [esi + 0x18]
// 0069527a  85c0                 test eax, eax
// 0069527c  7420                 je 0x69529e
// 0069527e  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00695281  51                   push ecx
// 00695282  68f0d8ffff           push 0xffffd8f0
// 00695287  50                   push eax
// 00695288  e8c3540200           call 0x6ba750
// 0069528d  83c40c               add esp, 0xc
// 00695290  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00695297  c7461800000000       mov dword ptr [esi + 0x18], 0
// 0069529e  5e                   pop esi
// 0069529f  c3                   ret 
// library rbxgs/script\ThreadRef.cpp (function ?removeRef@FunctionRef@Lua@RBX@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
