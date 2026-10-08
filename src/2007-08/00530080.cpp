// roc 2007-08 00530080  unit: RBX::VModelInstance::?$FactoryProduct  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00530080
//
// 00530080  8b442404             mov eax, dword ptr [esp + 4]
// 00530084  53                   push ebx
// 00530085  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00530089  56                   push esi
// 0053008a  8bf1                 mov esi, ecx
// 0053008c  8906                 mov dword ptr [esi], eax
// 0053008e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00530092  d900                 fld dword ptr [eax]
// 00530094  57                   push edi
// 00530095  d95e04               fstp dword ptr [esi + 4]
// 00530098  8d7e38               lea edi, [esi + 0x38]
// 0053009b  d94004               fld dword ptr [eax + 4]
// 0053009e  53                   push ebx
// 0053009f  d95e08               fstp dword ptr [esi + 8]
// 005300a2  8bcf                 mov ecx, edi
// 005300a4  d94008               fld dword ptr [eax + 8]
// 005300a7  33c0                 xor eax, eax
// 005300a9  d95e0c               fstp dword ptr [esi + 0xc]
// 005300ac  d944241c             fld dword ptr [esp + 0x1c]
// 005300b0  d95e10               fstp dword ptr [esi + 0x10]
// 005300b3  d9442420             fld dword ptr [esp + 0x20]
// 005300b7  d95e14               fstp dword ptr [esi + 0x14]
// 005300ba  d9442424             fld dword ptr [esp + 0x24]
// 005300be  d95e18               fstp dword ptr [esi + 0x18]
// 005300c1  d9442428             fld dword ptr [esp + 0x28]
// 005300c5  d95e1c               fstp dword ptr [esi + 0x1c]
// 005300c8  894634               mov dword ptr [esi + 0x34], eax
// 005300cb  894630               mov dword ptr [esi + 0x30], eax
// 005300ce  89462c               mov dword ptr [esi + 0x2c], eax
// 005300d1  894628               mov dword ptr [esi + 0x28], eax
// 005300d4  894624               mov dword ptr [esi + 0x24], eax
// 005300d7  894620               mov dword ptr [esi + 0x20], eax
// 005300da  e8f194fdff           call 0x5095d0
// 005300df  d94324               fld dword ptr [ebx + 0x24]
// 005300e2  d95f24               fstp dword ptr [edi + 0x24]
// 005300e5  8bc6                 mov eax, esi
// 005300e7  d94328               fld dword ptr [ebx + 0x28]
// 005300ea  d95f28               fstp dword ptr [edi + 0x28]
// 005300ed  d9432c               fld dword ptr [ebx + 0x2c]
// 005300f0  d95f2c               fstp dword ptr [edi + 0x2c]
// 005300f3  5f                   pop edi
// 005300f4  5e                   pop esi
// 005300f5  5b                   pop ebx
// 005300f6  c21c00               ret 0x1c
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0Part@RBX@@QAE@W4PartType@01@ABVVector3@G3D@@VColor4@4@ABVCoordinateFrame@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
