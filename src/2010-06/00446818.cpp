// roc 2010-06 00446818  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 220 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00446818
//
// 00446818  6a00                 push 0
// 0044681a  6a00                 push 0
// 0044681c  e891213600           call 0x7a89b2
// 00446821  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00446824  8bcb                 mov ecx, ebx
// 00446826  2bc8                 sub ecx, eax
// 00446828  c1f902               sar ecx, 2
// 0044682b  3bcf                 cmp ecx, edi
// 0044682d  736e                 jae 0x44689d
// 0044682f  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00446832  8b0a                 mov ecx, dword ptr [edx]
// 00446834  894d10               mov dword ptr [ebp + 0x10], ecx
// 00446837  8d0cbd00000000       lea ecx, [edi*4]
// 0044683e  894d14               mov dword ptr [ebp + 0x14], ecx
// 00446841  03c8                 add ecx, eax
// 00446843  51                   push ecx
// 00446844  53                   push ebx
// 00446845  50                   push eax
// 00446846  8bce                 mov ecx, esi
// 00446848  e8a3302c00           call 0x7098f0
// 0044684d  8b4610               mov eax, dword ptr [esi + 0x10]
// 00446850  8bc8                 mov ecx, eax
// 00446852  2b4d0c               sub ecx, dword ptr [ebp + 0xc]
// 00446855  8d5510               lea edx, [ebp + 0x10]
// 00446858  c1f902               sar ecx, 2
// 0044685b  52                   push edx
// 0044685c  2bf9                 sub edi, ecx
// 0044685e  57                   push edi
// 0044685f  50                   push eax
// 00446860  8bce                 mov ecx, esi
// 00446862  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00446869  e822072c00           call 0x706f90
// 0044686e  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00446871  014610               add dword ptr [esi + 0x10], eax
// 00446874  8b7610               mov esi, dword ptr [esi + 0x10]
// 00446877  8d5510               lea edx, [ebp + 0x10]
// 0044687a  52                   push edx
// 0044687b  2bf0                 sub esi, eax
// 0044687d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00446880  56                   push esi
// 00446881  50                   push eax
// 00446882  e839960c00           call 0x50fec0
// 00446887  83c40c               add esp, 0xc
// 0044688a  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0044688d  64890d00000000       mov dword ptr fs:[0], ecx
// 00446894  5f                   pop edi
// 00446895  5e                   pop esi
// 00446896  5b                   pop ebx
// 00446897  8be5                 mov esp, ebp
// 00446899  5d                   pop ebp
// 0044689a  c21000               ret 0x10
// 0044689d  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004468a0  8b11                 mov edx, dword ptr [ecx]
// 004468a2  8d04bd00000000       lea eax, [edi*4]
// 004468a9  53                   push ebx
// 004468aa  8bfb                 mov edi, ebx
// 004468ac  2bf8                 sub edi, eax
// 004468ae  53                   push ebx
// 004468af  57                   push edi
// 004468b0  8bce                 mov ecx, esi
// 004468b2  895510               mov dword ptr [ebp + 0x10], edx
// 004468b5  894514               mov dword ptr [ebp + 0x14], eax
// 004468b8  e833302c00           call 0x7098f0
// 004468bd  53                   push ebx
// 004468be  894610               mov dword ptr [esi + 0x10], eax
// 004468c1  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004468c4  57                   push edi
// 004468c5  50                   push eax
// 004468c6  e855f9ffff           call 0x446220
// 004468cb  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004468ce  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004468d1  8d4d10               lea ecx, [ebp + 0x10]
// 004468d4  51                   push ecx
// 004468d5  03d0                 add edx, eax
// 004468d7  52                   push edx
// 004468d8  50                   push eax
// 004468d9  e8e2950c00           call 0x50fec0
// 004468de  83c418               add esp, 0x18
// 004468e1  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004468e4  5f                   pop edi
// 004468e5  5e                   pop esi
// 004468e6  64890d00000000       mov dword ptr fs:[0], ecx
// 004468ed  5b                   pop ebx
// 004468ee  8be5                 mov esp, ebp
// 004468f0  5d                   pop ebp
// 004468f1  c21000               ret 0x10
// library rbxgs/v8datamodel\BrickColor.cpp (function __catch$?_Insert_n@?$vector@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@std@@IAEXV?$_Vector_const_iterator@VBrickColor@RBX@@V?$allocator@VBrickColor@RBX@@@std@@@2@IABVBrickColor@RBX@@@Z$2)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
