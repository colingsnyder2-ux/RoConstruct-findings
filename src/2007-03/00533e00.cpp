// roc 2007-03 00533e00  unit: seg_00530000  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00533e00
//
// 00533e00  8b442404             mov eax, dword ptr [esp + 4]
// 00533e04  53                   push ebx
// 00533e05  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00533e09  56                   push esi
// 00533e0a  8bf1                 mov esi, ecx
// 00533e0c  8906                 mov dword ptr [esi], eax
// 00533e0e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00533e12  d900                 fld dword ptr [eax]
// 00533e14  57                   push edi
// 00533e15  d95e04               fstp dword ptr [esi + 4]
// 00533e18  8d7e38               lea edi, [esi + 0x38]
// 00533e1b  d94004               fld dword ptr [eax + 4]
// 00533e1e  53                   push ebx
// 00533e1f  d95e08               fstp dword ptr [esi + 8]
// 00533e22  8bcf                 mov ecx, edi
// 00533e24  d94008               fld dword ptr [eax + 8]
// 00533e27  33c0                 xor eax, eax
// 00533e29  d95e0c               fstp dword ptr [esi + 0xc]
// 00533e2c  d944241c             fld dword ptr [esp + 0x1c]
// 00533e30  d95e10               fstp dword ptr [esi + 0x10]
// 00533e33  d9442420             fld dword ptr [esp + 0x20]
// 00533e37  d95e14               fstp dword ptr [esi + 0x14]
// 00533e3a  d9442424             fld dword ptr [esp + 0x24]
// 00533e3e  d95e18               fstp dword ptr [esi + 0x18]
// 00533e41  d9442428             fld dword ptr [esp + 0x28]
// 00533e45  d95e1c               fstp dword ptr [esi + 0x1c]
// 00533e48  894634               mov dword ptr [esi + 0x34], eax
// 00533e4b  894630               mov dword ptr [esi + 0x30], eax
// 00533e4e  89462c               mov dword ptr [esi + 0x2c], eax
// 00533e51  894628               mov dword ptr [esi + 0x28], eax
// 00533e54  894624               mov dword ptr [esi + 0x24], eax
// 00533e57  894620               mov dword ptr [esi + 0x20], eax
// 00533e5a  e821abfcff           call 0x4fe980
// 00533e5f  d94324               fld dword ptr [ebx + 0x24]
// 00533e62  d95f24               fstp dword ptr [edi + 0x24]
// 00533e65  8bc6                 mov eax, esi
// 00533e67  d94328               fld dword ptr [ebx + 0x28]
// 00533e6a  d95f28               fstp dword ptr [edi + 0x28]
// 00533e6d  d9432c               fld dword ptr [ebx + 0x2c]
// 00533e70  d95f2c               fstp dword ptr [edi + 0x2c]
// 00533e73  5f                   pop edi
// 00533e74  5e                   pop esi
// 00533e75  5b                   pop ebx
// 00533e76  c21c00               ret 0x1c
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0Part@RBX@@QAE@W4PartType@01@ABVVector3@G3D@@VColor4@4@ABVCoordinateFrame@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
