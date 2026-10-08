// roc 2007-08 004ae220  unit: std::X::$$A6AXXZV?$allocator::V?$function::?$holder  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ae220
//
// 004ae220  56                   push esi
// 004ae221  6a08                 push 8
// 004ae223  8bf1                 mov esi, ecx
// 004ae225  e8cc1c1800           call 0x62fef6
// 004ae22a  83c404               add esp, 4
// 004ae22d  85c0                 test eax, eax
// 004ae22f  7411                 je 0x4ae242
// 004ae231  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ae235  c700fca57800         mov dword ptr [eax], 0x78a5fc
// 004ae23b  8a11                 mov dl, byte ptr [ecx]
// 004ae23d  885004               mov byte ptr [eax + 4], dl
// 004ae240  eb02                 jmp 0x4ae244
// 004ae242  33c0                 xor eax, eax
// 004ae244  8b0e                 mov ecx, dword ptr [esi]
// 004ae246  85c9                 test ecx, ecx
// 004ae248  8906                 mov dword ptr [esi], eax
// 004ae24a  7408                 je 0x4ae254
// 004ae24c  8b01                 mov eax, dword ptr [ecx]
// 004ae24e  8b10                 mov edx, dword ptr [eax]
// 004ae250  6a01                 push 1
// 004ae252  ffd2                 call edx
// 004ae254  8bc6                 mov eax, esi
// 004ae256  5e                   pop esi
// 004ae257  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4_N@any@boost@@QAEAAV01@AB_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
