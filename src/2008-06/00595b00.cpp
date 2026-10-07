// roc 2008-06 00595b00  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595b00
//
// 00595b00  6aff                 push -1
// 00595b02  68d8207d00           push 0x7d20d8
// 00595b07  64a100000000         mov eax, dword ptr fs:[0]
// 00595b0d  50                   push eax
// 00595b0e  64892500000000       mov dword ptr fs:[0], esp
// 00595b15  51                   push ecx
// 00595b16  56                   push esi
// 00595b17  8bf1                 mov esi, ecx
// 00595b19  57                   push edi
// 00595b1a  89742408             mov dword ptr [esp + 8], esi
// 00595b1e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00595b26  e8451a0100           call 0x5a7570
// 00595b2b  8bf8                 mov edi, eax
// 00595b2d  85ff                 test edi, edi
// 00595b2f  7411                 je 0x595b42
// 00595b31  6a00                 push 0
// 00595b33  8bce                 mov ecx, esi
// 00595b35  e8761b0100           call 0x5a76b0
// 00595b3a  57                   push edi
// 00595b3b  8bce                 mov ecx, esi
// 00595b3d  e8ae140100           call 0x5a6ff0
// 00595b42  8bce                 mov ecx, esi
// 00595b44  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00595b4c  e8af190100           call 0x5a7500
// 00595b51  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00595b55  5f                   pop edi
// 00595b56  5e                   pop esi
// 00595b57  64890d00000000       mov dword ptr fs:[0], ecx
// 00595b5e  83c410               add esp, 0x10
// 00595b61  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??1?$thread_specific_ptr@VContext@Security@RBX@@@boost@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
