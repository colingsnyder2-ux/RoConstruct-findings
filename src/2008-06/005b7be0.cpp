// roc 2008-06 005b7be0  unit: VStockSound::?$FactoryProduct  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b7be0
//
// 005b7be0  64a100000000         mov eax, dword ptr fs:[0]
// 005b7be6  6aff                 push -1
// 005b7be8  68483a7d00           push 0x7d3a48
// 005b7bed  50                   push eax
// 005b7bee  64892500000000       mov dword ptr fs:[0], esp
// 005b7bf5  56                   push esi
// 005b7bf6  8bf1                 mov esi, ecx
// 005b7bf8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005b7c00  e87b51fbff           call 0x56cd80
// 005b7c05  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005b7c09  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005b7c0d  51                   push ecx
// 005b7c0e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005b7c12  52                   push edx
// 005b7c13  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005b7c17  51                   push ecx
// 005b7c18  50                   push eax
// 005b7c19  52                   push edx
// 005b7c1a  8bce                 mov ecx, esi
// 005b7c1c  e82f4afbff           call 0x56c650
// 005b7c21  8b442420             mov eax, dword ptr [esp + 0x20]
// 005b7c25  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b7c29  c70610788300         mov dword ptr [esi], 0x837810
// 005b7c2f  894618               mov dword ptr [esi + 0x18], eax
// 005b7c32  8bc6                 mov eax, esi
// 005b7c34  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7c3b  5e                   pop esi
// 005b7c3c  83c40c               add esp, 0xc
// 005b7c3f  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Decal.cpp (function ??0?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
