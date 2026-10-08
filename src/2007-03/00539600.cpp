// roc 2007-03 00539600  unit: seg_00530000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00539600
//
// 00539600  56                   push esi
// 00539601  8bf1                 mov esi, ecx
// 00539603  e8383c0300           call 0x56d240
// 00539608  6a08                 push 8
// 0053960a  8906                 mov dword ptr [esi], eax
// 0053960c  e8f74a0e00           call 0x61e108
// 00539611  83c404               add esp, 4
// 00539614  85c0                 test eax, eax
// 00539616  7411                 je 0x539629
// 00539618  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053961c  c7003c987800         mov dword ptr [eax], 0x78983c
// 00539622  8a11                 mov dl, byte ptr [ecx]
// 00539624  885004               mov byte ptr [eax + 4], dl
// 00539627  eb02                 jmp 0x53962b
// 00539629  33c0                 xor eax, eax
// 0053962b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0053962e  85c9                 test ecx, ecx
// 00539630  894604               mov dword ptr [esi + 4], eax
// 00539633  7408                 je 0x53963d
// 00539635  8b01                 mov eax, dword ptr [ecx]
// 00539637  8b10                 mov edx, dword ptr [eax]
// 00539639  6a01                 push 1
// 0053963b  ffd2                 call edx
// 0053963d  8bc6                 mov eax, esi
// 0053963f  5e                   pop esi
// 00539640  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4_N@Value@Reflection@RBX@@QAEAAV012@AB_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
