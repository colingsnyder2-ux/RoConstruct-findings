// roc 2009-06 0065bd00  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065bd00
//
// 0065bd00  8b442404             mov eax, dword ptr [esp + 4]
// 0065bd04  53                   push ebx
// 0065bd05  56                   push esi
// 0065bd06  8bf1                 mov esi, ecx
// 0065bd08  8b08                 mov ecx, dword ptr [eax]
// 0065bd0a  890e                 mov dword ptr [esi], ecx
// 0065bd0c  d94004               fld dword ptr [eax + 4]
// 0065bd0f  d95e04               fstp dword ptr [esi + 4]
// 0065bd12  57                   push edi
// 0065bd13  d94008               fld dword ptr [eax + 8]
// 0065bd16  8d7838               lea edi, [eax + 0x38]
// 0065bd19  d95e08               fstp dword ptr [esi + 8]
// 0065bd1c  8d5e38               lea ebx, [esi + 0x38]
// 0065bd1f  d9400c               fld dword ptr [eax + 0xc]
// 0065bd22  57                   push edi
// 0065bd23  d95e0c               fstp dword ptr [esi + 0xc]
// 0065bd26  d94010               fld dword ptr [eax + 0x10]
// 0065bd29  d95e10               fstp dword ptr [esi + 0x10]
// 0065bd2c  d94014               fld dword ptr [eax + 0x14]
// 0065bd2f  d95e14               fstp dword ptr [esi + 0x14]
// 0065bd32  d94018               fld dword ptr [eax + 0x18]
// 0065bd35  d95e18               fstp dword ptr [esi + 0x18]
// 0065bd38  d9401c               fld dword ptr [eax + 0x1c]
// 0065bd3b  d95e1c               fstp dword ptr [esi + 0x1c]
// 0065bd3e  8b5020               mov edx, dword ptr [eax + 0x20]
// 0065bd41  895620               mov dword ptr [esi + 0x20], edx
// 0065bd44  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0065bd47  894e24               mov dword ptr [esi + 0x24], ecx
// 0065bd4a  8b5028               mov edx, dword ptr [eax + 0x28]
// 0065bd4d  895628               mov dword ptr [esi + 0x28], edx
// 0065bd50  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0065bd53  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0065bd56  8b5030               mov edx, dword ptr [eax + 0x30]
// 0065bd59  895630               mov dword ptr [esi + 0x30], edx
// 0065bd5c  8b4834               mov ecx, dword ptr [eax + 0x34]
// 0065bd5f  894e34               mov dword ptr [esi + 0x34], ecx
// 0065bd62  8bcb                 mov ecx, ebx
// 0065bd64  e817e2e3ff           call 0x499f80
// 0065bd69  d94724               fld dword ptr [edi + 0x24]
// 0065bd6c  d95b24               fstp dword ptr [ebx + 0x24]
// 0065bd6f  8bc6                 mov eax, esi
// 0065bd71  d94728               fld dword ptr [edi + 0x28]
// 0065bd74  d95b28               fstp dword ptr [ebx + 0x28]
// 0065bd77  d9472c               fld dword ptr [edi + 0x2c]
// 0065bd7a  5f                   pop edi
// 0065bd7b  5e                   pop esi
// 0065bd7c  d95b2c               fstp dword ptr [ebx + 0x2c]
// 0065bd7f  5b                   pop ebx
// 0065bd80  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ??0Part@RBX@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
