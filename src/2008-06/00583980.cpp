// roc 2008-06 00583980  unit: RBX::VModelInstance::?$FactoryProduct  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00583980
//
// 00583980  8b442404             mov eax, dword ptr [esp + 4]
// 00583984  53                   push ebx
// 00583985  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00583989  56                   push esi
// 0058398a  8bf1                 mov esi, ecx
// 0058398c  8906                 mov dword ptr [esi], eax
// 0058398e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00583992  d900                 fld dword ptr [eax]
// 00583994  57                   push edi
// 00583995  d95e04               fstp dword ptr [esi + 4]
// 00583998  8d7e38               lea edi, [esi + 0x38]
// 0058399b  d94004               fld dword ptr [eax + 4]
// 0058399e  53                   push ebx
// 0058399f  d95e08               fstp dword ptr [esi + 8]
// 005839a2  8bcf                 mov ecx, edi
// 005839a4  d94008               fld dword ptr [eax + 8]
// 005839a7  33c0                 xor eax, eax
// 005839a9  d95e0c               fstp dword ptr [esi + 0xc]
// 005839ac  d944241c             fld dword ptr [esp + 0x1c]
// 005839b0  d95e10               fstp dword ptr [esi + 0x10]
// 005839b3  d9442420             fld dword ptr [esp + 0x20]
// 005839b7  d95e14               fstp dword ptr [esi + 0x14]
// 005839ba  d9442424             fld dword ptr [esp + 0x24]
// 005839be  d95e18               fstp dword ptr [esi + 0x18]
// 005839c1  d9442428             fld dword ptr [esp + 0x28]
// 005839c5  d95e1c               fstp dword ptr [esi + 0x1c]
// 005839c8  894634               mov dword ptr [esi + 0x34], eax
// 005839cb  894630               mov dword ptr [esi + 0x30], eax
// 005839ce  89462c               mov dword ptr [esi + 0x2c], eax
// 005839d1  894628               mov dword ptr [esi + 0x28], eax
// 005839d4  894624               mov dword ptr [esi + 0x24], eax
// 005839d7  894620               mov dword ptr [esi + 0x20], eax
// 005839da  e841f8f8ff           call 0x513220
// 005839df  d94324               fld dword ptr [ebx + 0x24]
// 005839e2  d95f24               fstp dword ptr [edi + 0x24]
// 005839e5  8bc6                 mov eax, esi
// 005839e7  d94328               fld dword ptr [ebx + 0x28]
// 005839ea  d95f28               fstp dword ptr [edi + 0x28]
// 005839ed  d9432c               fld dword ptr [ebx + 0x2c]
// 005839f0  d95f2c               fstp dword ptr [edi + 0x2c]
// 005839f3  5f                   pop edi
// 005839f4  5e                   pop esi
// 005839f5  5b                   pop ebx
// 005839f6  c21c00               ret 0x1c
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0Part@RBX@@QAE@W4PartType@01@ABVVector3@G3D@@VColor4@4@ABVCoordinateFrame@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
