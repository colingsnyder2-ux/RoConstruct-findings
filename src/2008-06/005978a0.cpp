// roc 2008-06 005978a0  unit: RBX::VDecal::?$FactoryProduct  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005978a0
//
// 005978a0  64a100000000         mov eax, dword ptr fs:[0]
// 005978a6  6aff                 push -1
// 005978a8  68483a7d00           push 0x7d3a48
// 005978ad  50                   push eax
// 005978ae  64892500000000       mov dword ptr fs:[0], esp
// 005978b5  56                   push esi
// 005978b6  8bf1                 mov esi, ecx
// 005978b8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005978c0  e8bb54fdff           call 0x56cd80
// 005978c5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005978c9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005978cd  51                   push ecx
// 005978ce  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005978d2  52                   push edx
// 005978d3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005978d7  51                   push ecx
// 005978d8  50                   push eax
// 005978d9  52                   push edx
// 005978da  8bce                 mov ecx, esi
// 005978dc  e86f4dfdff           call 0x56c650
// 005978e1  8b442420             mov eax, dword ptr [esp + 0x20]
// 005978e5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005978e9  c70694248300         mov dword ptr [esi], 0x832494
// 005978ef  894618               mov dword ptr [esi + 0x18], eax
// 005978f2  8bc6                 mov eax, esi
// 005978f4  64890d00000000       mov dword ptr fs:[0], ecx
// 005978fb  5e                   pop esi
// 005978fc  83c40c               add esp, 0xc
// 005978ff  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Decal.cpp (function ??0?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
