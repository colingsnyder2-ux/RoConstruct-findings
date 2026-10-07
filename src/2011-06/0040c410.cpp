// roc 2011-06 0040c410  unit: boost::gregorian::Ubad_month::?$error_info_injector  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040c410
//
// 0040c410  56                   push esi
// 0040c411  6a08                 push 8
// 0040c413  8bf1                 mov esi, ecx
// 0040c415  e844dc3f00           call 0x80a05e
// 0040c41a  83c404               add esp, 4
// 0040c41d  85c0                 test eax, eax
// 0040c41f  7411                 je 0x40c432
// 0040c421  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040c425  c7005cc1a500         mov dword ptr [eax], 0xa5c15c
// 0040c42b  8a11                 mov dl, byte ptr [ecx]
// 0040c42d  885004               mov byte ptr [eax + 4], dl
// 0040c430  eb02                 jmp 0x40c434
// 0040c432  33c0                 xor eax, eax
// 0040c434  8d542408             lea edx, [esp + 8]
// 0040c438  8bc8                 mov ecx, eax
// 0040c43a  3bd6                 cmp edx, esi
// 0040c43c  7404                 je 0x40c442
// 0040c43e  8b0e                 mov ecx, dword ptr [esi]
// 0040c440  8906                 mov dword ptr [esi], eax
// 0040c442  85c9                 test ecx, ecx
// 0040c444  7408                 je 0x40c44e
// 0040c446  8b01                 mov eax, dword ptr [ecx]
// 0040c448  8b10                 mov edx, dword ptr [eax]
// 0040c44a  6a01                 push 1
// 0040c44c  ffd2                 call edx
// 0040c44e  8bc6                 mov eax, esi
// 0040c450  5e                   pop esi
// 0040c451  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4_N@any@boost@@QAEAAV01@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
