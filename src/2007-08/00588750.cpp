// roc 2007-08 00588750  unit: RBX::SoundChannel  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588750
//
// 00588750  64a100000000         mov eax, dword ptr fs:[0]
// 00588756  6aff                 push -1
// 00588758  6848117500           push 0x751148
// 0058875d  50                   push eax
// 0058875e  64892500000000       mov dword ptr fs:[0], esp
// 00588765  56                   push esi
// 00588766  8bf1                 mov esi, ecx
// 00588768  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00588770  e81b52feff           call 0x56d990
// 00588775  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00588779  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0058877d  51                   push ecx
// 0058877e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00588782  52                   push edx
// 00588783  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00588787  51                   push ecx
// 00588788  50                   push eax
// 00588789  52                   push edx
// 0058878a  8bce                 mov ecx, esi
// 0058878c  e84fecffff           call 0x5873e0
// 00588791  8b442420             mov eax, dword ptr [esp + 0x20]
// 00588795  c70614ec7a00         mov dword ptr [esi], 0x7aec14
// 0058879b  6a00                 push 0
// 0058879d  894618               mov dword ptr [esi + 0x18], eax
// 005887a0  e8bd740a00           call 0x62fc62
// 005887a5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005887a9  83c404               add esp, 4
// 005887ac  8bc6                 mov eax, esi
// 005887ae  64890d00000000       mov dword ptr fs:[0], ecx
// 005887b5  5e                   pop esi
// 005887b6  83c40c               add esp, 0xc
// 005887b9  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Decal.cpp (function ??0?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
