// roc 2007-08 0056cef0  unit: RBX::Lua::FunctionRef  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056cef0
//
// 0056cef0  6aff                 push -1
// 0056cef2  68f8487500           push 0x7548f8
// 0056cef7  64a100000000         mov eax, dword ptr fs:[0]
// 0056cefd  50                   push eax
// 0056cefe  64892500000000       mov dword ptr fs:[0], esp
// 0056cf05  51                   push ecx
// 0056cf06  56                   push esi
// 0056cf07  57                   push edi
// 0056cf08  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0056cf0c  8bf1                 mov esi, ecx
// 0056cf0e  57                   push edi
// 0056cf0f  8974240c             mov dword ptr [esp + 0xc], esi
// 0056cf13  e808fbffff           call 0x56ca20
// 0056cf18  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056cf1b  33c9                 xor ecx, ecx
// 0056cf1d  3bc1                 cmp eax, ecx
// 0056cf1f  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056cf23  c70608727800         mov dword ptr [esi], 0x787208
// 0056cf29  7518                 jne 0x56cf43
// 0056cf2b  5f                   pop edi
// 0056cf2c  894e20               mov dword ptr [esi + 0x20], ecx
// 0056cf2f  8bc6                 mov eax, esi
// 0056cf31  5e                   pop esi
// 0056cf32  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056cf36  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cf3d  83c410               add esp, 0x10
// 0056cf40  c20400               ret 4
// 0056cf43  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0056cf46  51                   push ecx
// 0056cf47  68f0d8ffff           push 0xffffd8f0
// 0056cf4c  50                   push eax
// 0056cf4d  e84e0f0500           call 0x5bdea0
// 0056cf52  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056cf55  68f0d8ffff           push 0xffffd8f0
// 0056cf5a  50                   push eax
// 0056cf5b  e8001e0500           call 0x5bed60
// 0056cf60  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056cf64  83c414               add esp, 0x14
// 0056cf67  894620               mov dword ptr [esi + 0x20], eax
// 0056cf6a  5f                   pop edi
// 0056cf6b  8bc6                 mov eax, esi
// 0056cf6d  5e                   pop esi
// 0056cf6e  64890d00000000       mov dword ptr fs:[0], ecx
// 0056cf75  83c410               add esp, 0x10
// 0056cf78  c20400               ret 4
// library rbxgs/script\ThreadRef.cpp (function ??0FunctionRef@Lua@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
