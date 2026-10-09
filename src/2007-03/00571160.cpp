// roc 2007-03 00571160  unit: seg_00570000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00571160
//
// 00571160  64a100000000         mov eax, dword ptr fs:[0]
// 00571166  6aff                 push -1
// 00571168  6808647500           push 0x756408
// 0057116d  50                   push eax
// 0057116e  64892500000000       mov dword ptr fs:[0], esp
// 00571175  56                   push esi
// 00571176  8bf1                 mov esi, ecx
// 00571178  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00571180  e80bc2ffff           call 0x56d390
// 00571185  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00571189  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057118d  51                   push ecx
// 0057118e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00571192  52                   push edx
// 00571193  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00571197  51                   push ecx
// 00571198  50                   push eax
// 00571199  52                   push edx
// 0057119a  8bce                 mov ecx, esi
// 0057119c  e82f280100           call 0x5839d0
// 005711a1  8b442420             mov eax, dword ptr [esp + 0x20]
// 005711a5  c70630b97a00         mov dword ptr [esi], 0x7ab930
// 005711ab  6a00                 push 0
// 005711ad  894618               mov dword ptr [esi + 0x18], eax
// 005711b0  e83bcf0a00           call 0x61e0f0
// 005711b5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005711b9  83c404               add esp, 4
// 005711bc  8bc6                 mov eax, esi
// 005711be  64890d00000000       mov dword ptr fs:[0], ecx
// 005711c5  5e                   pop esi
// 005711c6  83c40c               add esp, 0xc
// 005711c9  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Decal.cpp (function ??0?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
