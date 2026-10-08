// roc 2008-06 005944e0  unit: boost::Vrecursive_mutex::?$sp_counted_impl_p  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005944e0
//
// 005944e0  6aff                 push -1
// 005944e2  68581f7d00           push 0x7d1f58
// 005944e7  64a100000000         mov eax, dword ptr fs:[0]
// 005944ed  50                   push eax
// 005944ee  64892500000000       mov dword ptr fs:[0], esp
// 005944f5  51                   push ecx
// 005944f6  56                   push esi
// 005944f7  57                   push edi
// 005944f8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005944fc  8bf1                 mov esi, ecx
// 005944fe  57                   push edi
// 005944ff  8974240c             mov dword ptr [esp + 0xc], esi
// 00594503  e868faffff           call 0x593f70
// 00594508  8b4618               mov eax, dword ptr [esi + 0x18]
// 0059450b  33c9                 xor ecx, ecx
// 0059450d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00594511  c706d0eb8000         mov dword ptr [esi], 0x80ebd0
// 00594517  3bc1                 cmp eax, ecx
// 00594519  7518                 jne 0x594533
// 0059451b  5f                   pop edi
// 0059451c  894e20               mov dword ptr [esi + 0x20], ecx
// 0059451f  8bc6                 mov eax, esi
// 00594521  5e                   pop esi
// 00594522  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00594526  64890d00000000       mov dword ptr fs:[0], ecx
// 0059452d  83c410               add esp, 0x10
// 00594530  c20400               ret 4
// 00594533  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00594536  51                   push ecx
// 00594537  68f0d8ffff           push 0xffffd8f0
// 0059453c  50                   push eax
// 0059453d  e8eedf0700           call 0x612530
// 00594542  8b4618               mov eax, dword ptr [esi + 0x18]
// 00594545  68f0d8ffff           push 0xffffd8f0
// 0059454a  50                   push eax
// 0059454b  e870cb0700           call 0x6110c0
// 00594550  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00594554  83c414               add esp, 0x14
// 00594557  894620               mov dword ptr [esi + 0x20], eax
// 0059455a  5f                   pop edi
// 0059455b  8bc6                 mov eax, esi
// 0059455d  5e                   pop esi
// 0059455e  64890d00000000       mov dword ptr fs:[0], ecx
// 00594565  83c410               add esp, 0x10
// 00594568  c20400               ret 4
// library rbxgs/script\ThreadRef.cpp (function ??0FunctionRef@Lua@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ThreadRef.cpp
