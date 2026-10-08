// from server: 100% by auto
// roc 2007-08 00628f10  unit: RBX::AssemblyStage  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628f10
//
// 00628f10  56                   push esi
// 00628f11  8b742408             mov esi, dword ptr [esp + 8]
// 00628f15  8b460c               mov eax, dword ptr [esi + 0xc]
// 00628f18  57                   push edi
// 00628f19  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00628f1c  c74620ffffffff       mov dword ptr [esi + 0x20], 0xffffffff
// 00628f23  8b4808               mov ecx, dword ptr [eax + 8]
// 00628f26  51                   push ecx
// 00628f27  681680ff7f           push 0x7fff8016
// 00628f2c  e8affdffff           call 0x628ce0
// 00628f31  57                   push edi
// 00628f32  8d542418             lea edx, [esp + 0x18]
// 00628f36  52                   push edx
// 00628f37  56                   push esi
// 00628f38  89442420             mov dword ptr [esp + 0x20], eax
// 00628f3c  e8dff8ffff           call 0x628820
// 00628f41  8b442420             mov eax, dword ptr [esp + 0x20]
// 00628f45  83c414               add esp, 0x14
// 00628f48  5f                   pop edi
// 00628f49  5e                   pop esi
// 00628f4a  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_jump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
