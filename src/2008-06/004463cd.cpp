// roc 2008-06 004463cd  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 220 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004463cd
//
// 004463cd  6a00                 push 0
// 004463cf  6a00                 push 0
// 004463d1  e8b6b12500           call 0x6a158c
// 004463d6  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004463d9  8bcf                 mov ecx, edi
// 004463db  2bc8                 sub ecx, eax
// 004463dd  c1f902               sar ecx, 2
// 004463e0  3bcb                 cmp ecx, ebx
// 004463e2  736e                 jae 0x446452
// 004463e4  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004463e7  8b0a                 mov ecx, dword ptr [edx]
// 004463e9  894d10               mov dword ptr [ebp + 0x10], ecx
// 004463ec  8d0c9d00000000       lea ecx, [ebx*4]
// 004463f3  894d14               mov dword ptr [ebp + 0x14], ecx
// 004463f6  03c8                 add ecx, eax
// 004463f8  51                   push ecx
// 004463f9  57                   push edi
// 004463fa  50                   push eax
// 004463fb  8bce                 mov ecx, esi
// 004463fd  e8defcffff           call 0x4460e0
// 00446402  8b4610               mov eax, dword ptr [esi + 0x10]
// 00446405  8bc8                 mov ecx, eax
// 00446407  2b4d0c               sub ecx, dword ptr [ebp + 0xc]
// 0044640a  8d5510               lea edx, [ebp + 0x10]
// 0044640d  c1f902               sar ecx, 2
// 00446410  52                   push edx
// 00446411  2bd9                 sub ebx, ecx
// 00446413  53                   push ebx
// 00446414  50                   push eax
// 00446415  8bce                 mov ecx, esi
// 00446417  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0044641e  e85d941200           call 0x56f880
// 00446423  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00446426  014610               add dword ptr [esi + 0x10], eax
// 00446429  8b7610               mov esi, dword ptr [esi + 0x10]
// 0044642c  8d5510               lea edx, [ebp + 0x10]
// 0044642f  52                   push edx
// 00446430  2bf0                 sub esi, eax
// 00446432  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00446435  56                   push esi
// 00446436  50                   push eax
// 00446437  e804d81100           call 0x563c40
// 0044643c  83c40c               add esp, 0xc
// 0044643f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00446442  64890d00000000       mov dword ptr fs:[0], ecx
// 00446449  5f                   pop edi
// 0044644a  5e                   pop esi
// 0044644b  5b                   pop ebx
// 0044644c  8be5                 mov esp, ebp
// 0044644e  5d                   pop ebp
// 0044644f  c21000               ret 0x10
// 00446452  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00446455  8b11                 mov edx, dword ptr [ecx]
// 00446457  8d049d00000000       lea eax, [ebx*4]
// 0044645e  57                   push edi
// 0044645f  8bdf                 mov ebx, edi
// 00446461  2bd8                 sub ebx, eax
// 00446463  57                   push edi
// 00446464  53                   push ebx
// 00446465  8bce                 mov ecx, esi
// 00446467  895510               mov dword ptr [ebp + 0x10], edx
// 0044646a  894514               mov dword ptr [ebp + 0x14], eax
// 0044646d  e86efcffff           call 0x4460e0
// 00446472  57                   push edi
// 00446473  894610               mov dword ptr [esi + 0x10], eax
// 00446476  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00446479  53                   push ebx
// 0044647a  50                   push eax
// 0044647b  e8b0eb1c00           call 0x615030
// 00446480  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00446483  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00446486  8d4d10               lea ecx, [ebp + 0x10]
// 00446489  51                   push ecx
// 0044648a  03d0                 add edx, eax
// 0044648c  52                   push edx
// 0044648d  50                   push eax
// 0044648e  e8add71100           call 0x563c40
// 00446493  83c418               add esp, 0x18
// 00446496  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00446499  5f                   pop edi
// 0044649a  5e                   pop esi
// 0044649b  64890d00000000       mov dword ptr fs:[0], ecx
// 004464a2  5b                   pop ebx
// 004464a3  8be5                 mov esp, ebp
// 004464a5  5d                   pop ebp
// 004464a6  c21000               ret 0x10
// library rbxgs/v8datamodel\BrickColor.cpp (function __catch$?_Insert_n@?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@IAEXV?$_Vector_const_iterator@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@2@IABVBrickColor@RBX@@@Z$2)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
