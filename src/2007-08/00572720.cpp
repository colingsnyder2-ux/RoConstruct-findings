// roc 2007-08 00572720  unit: RBX::VDecal::?$FactoryProduct  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00572720
//
// 00572720  64a100000000         mov eax, dword ptr fs:[0]
// 00572726  6aff                 push -1
// 00572728  6848117500           push 0x751148
// 0057272d  50                   push eax
// 0057272e  64892500000000       mov dword ptr fs:[0], esp
// 00572735  56                   push esi
// 00572736  8bf1                 mov esi, ecx
// 00572738  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00572740  e84bb2ffff           call 0x56d990
// 00572745  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00572749  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057274d  51                   push ecx
// 0057274e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00572752  52                   push edx
// 00572753  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00572757  51                   push ecx
// 00572758  50                   push eax
// 00572759  52                   push edx
// 0057275a  8bce                 mov ecx, esi
// 0057275c  e87f4c0100           call 0x5873e0
// 00572761  8b442420             mov eax, dword ptr [esp + 0x20]
// 00572765  c70694a27a00         mov dword ptr [esi], 0x7aa294
// 0057276b  6a00                 push 0
// 0057276d  894618               mov dword ptr [esi + 0x18], eax
// 00572770  e8edd40b00           call 0x62fc62
// 00572775  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00572779  83c404               add esp, 4
// 0057277c  8bc6                 mov eax, esi
// 0057277e  64890d00000000       mov dword ptr fs:[0], ecx
// 00572785  5e                   pop esi
// 00572786  83c40c               add esp, 0xc
// 00572789  c21400               ret 0x14
// library openrbx-client/App\v8datamodel\Decal.cpp (function ??0?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@IAE@AAVClassDescriptor@12@PBD1V?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@VTextureId@RBX@@@Reflection@RBX@@@std@@W4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
