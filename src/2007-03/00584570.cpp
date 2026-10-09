// roc 2007-03 00584570  unit: seg_00580000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00584570
//
// 00584570  64a100000000         mov eax, dword ptr fs:[0]
// 00584576  6aff                 push -1
// 00584578  6808647500           push 0x756408
// 0058457d  50                   push eax
// 0058457e  64892500000000       mov dword ptr fs:[0], esp
// 00584585  56                   push esi
// 00584586  8bf1                 mov esi, ecx
// 00584588  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00584590  e8fb8dfeff           call 0x56d390
// 00584595  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00584599  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0058459d  51                   push ecx
// 0058459e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005845a2  52                   push edx
// 005845a3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005845a7  51                   push ecx
// 005845a8  50                   push eax
// 005845a9  52                   push edx
// 005845aa  8bce                 mov ecx, esi
// 005845ac  e81ff4ffff           call 0x5839d0
// 005845b1  8b442420             mov eax, dword ptr [esp + 0x20]
// 005845b5  c70600fc7a00         mov dword ptr [esi], 0x7afc00
// 005845bb  6a00                 push 0
// 005845bd  894618               mov dword ptr [esi + 0x18], eax
// 005845c0  e82b9b0900           call 0x61e0f0
// 005845c5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005845c9  83c404               add esp, 4
// 005845cc  8bc6                 mov eax, esi
// 005845ce  64890d00000000       mov dword ptr fs:[0], ecx
// 005845d5  5e                   pop esi
// 005845d6  83c40c               add esp, 0xc
// 005845d9  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Decal.cpp (function ??0?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
