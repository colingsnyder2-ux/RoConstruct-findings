// roc 2009-06 00610e40  unit: RBX::VModelInstance::?$FactoryProduct  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00610e40
//
// 00610e40  8b442404             mov eax, dword ptr [esp + 4]
// 00610e44  53                   push ebx
// 00610e45  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00610e49  56                   push esi
// 00610e4a  8bf1                 mov esi, ecx
// 00610e4c  8906                 mov dword ptr [esi], eax
// 00610e4e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00610e52  d900                 fld dword ptr [eax]
// 00610e54  57                   push edi
// 00610e55  d95e04               fstp dword ptr [esi + 4]
// 00610e58  8d7e38               lea edi, [esi + 0x38]
// 00610e5b  d94004               fld dword ptr [eax + 4]
// 00610e5e  53                   push ebx
// 00610e5f  d95e08               fstp dword ptr [esi + 8]
// 00610e62  8bcf                 mov ecx, edi
// 00610e64  d94008               fld dword ptr [eax + 8]
// 00610e67  33c0                 xor eax, eax
// 00610e69  d95e0c               fstp dword ptr [esi + 0xc]
// 00610e6c  d944241c             fld dword ptr [esp + 0x1c]
// 00610e70  d95e10               fstp dword ptr [esi + 0x10]
// 00610e73  d9442420             fld dword ptr [esp + 0x20]
// 00610e77  d95e14               fstp dword ptr [esi + 0x14]
// 00610e7a  d9442424             fld dword ptr [esp + 0x24]
// 00610e7e  d95e18               fstp dword ptr [esi + 0x18]
// 00610e81  d9442428             fld dword ptr [esp + 0x28]
// 00610e85  d95e1c               fstp dword ptr [esi + 0x1c]
// 00610e88  894634               mov dword ptr [esi + 0x34], eax
// 00610e8b  894630               mov dword ptr [esi + 0x30], eax
// 00610e8e  89462c               mov dword ptr [esi + 0x2c], eax
// 00610e91  894628               mov dword ptr [esi + 0x28], eax
// 00610e94  894624               mov dword ptr [esi + 0x24], eax
// 00610e97  894620               mov dword ptr [esi + 0x20], eax
// 00610e9a  e8e190e8ff           call 0x499f80
// 00610e9f  d94324               fld dword ptr [ebx + 0x24]
// 00610ea2  d95f24               fstp dword ptr [edi + 0x24]
// 00610ea5  8bc6                 mov eax, esi
// 00610ea7  d94328               fld dword ptr [ebx + 0x28]
// 00610eaa  d95f28               fstp dword ptr [edi + 0x28]
// 00610ead  d9432c               fld dword ptr [ebx + 0x2c]
// 00610eb0  d95f2c               fstp dword ptr [edi + 0x2c]
// 00610eb3  5f                   pop edi
// 00610eb4  5e                   pop esi
// 00610eb5  5b                   pop ebx
// 00610eb6  c21c00               ret 0x1c
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0Part@RBX@@QAE@W4PartType@01@ABVVector3@G3D@@VColor4@4@ABVCoordinateFrame@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
