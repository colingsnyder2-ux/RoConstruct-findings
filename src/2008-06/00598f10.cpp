// roc 2008-06 00598f10  unit: RBX::PartInstance  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598f10
//
// 00598f10  8b442404             mov eax, dword ptr [esp + 4]
// 00598f14  53                   push ebx
// 00598f15  56                   push esi
// 00598f16  8bf1                 mov esi, ecx
// 00598f18  8b08                 mov ecx, dword ptr [eax]
// 00598f1a  890e                 mov dword ptr [esi], ecx
// 00598f1c  d94004               fld dword ptr [eax + 4]
// 00598f1f  d95e04               fstp dword ptr [esi + 4]
// 00598f22  57                   push edi
// 00598f23  d94008               fld dword ptr [eax + 8]
// 00598f26  8d7838               lea edi, [eax + 0x38]
// 00598f29  d95e08               fstp dword ptr [esi + 8]
// 00598f2c  8d5e38               lea ebx, [esi + 0x38]
// 00598f2f  d9400c               fld dword ptr [eax + 0xc]
// 00598f32  57                   push edi
// 00598f33  d95e0c               fstp dword ptr [esi + 0xc]
// 00598f36  d94010               fld dword ptr [eax + 0x10]
// 00598f39  d95e10               fstp dword ptr [esi + 0x10]
// 00598f3c  d94014               fld dword ptr [eax + 0x14]
// 00598f3f  d95e14               fstp dword ptr [esi + 0x14]
// 00598f42  d94018               fld dword ptr [eax + 0x18]
// 00598f45  d95e18               fstp dword ptr [esi + 0x18]
// 00598f48  d9401c               fld dword ptr [eax + 0x1c]
// 00598f4b  d95e1c               fstp dword ptr [esi + 0x1c]
// 00598f4e  8b5020               mov edx, dword ptr [eax + 0x20]
// 00598f51  895620               mov dword ptr [esi + 0x20], edx
// 00598f54  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00598f57  894e24               mov dword ptr [esi + 0x24], ecx
// 00598f5a  8b5028               mov edx, dword ptr [eax + 0x28]
// 00598f5d  895628               mov dword ptr [esi + 0x28], edx
// 00598f60  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00598f63  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00598f66  8b5030               mov edx, dword ptr [eax + 0x30]
// 00598f69  895630               mov dword ptr [esi + 0x30], edx
// 00598f6c  8b4834               mov ecx, dword ptr [eax + 0x34]
// 00598f6f  894e34               mov dword ptr [esi + 0x34], ecx
// 00598f72  8bcb                 mov ecx, ebx
// 00598f74  e8a7a2f7ff           call 0x513220
// 00598f79  d94724               fld dword ptr [edi + 0x24]
// 00598f7c  d95b24               fstp dword ptr [ebx + 0x24]
// 00598f7f  8bc6                 mov eax, esi
// 00598f81  d94728               fld dword ptr [edi + 0x28]
// 00598f84  d95b28               fstp dword ptr [ebx + 0x28]
// 00598f87  d9472c               fld dword ptr [edi + 0x2c]
// 00598f8a  5f                   pop edi
// 00598f8b  5e                   pop esi
// 00598f8c  d95b2c               fstp dword ptr [ebx + 0x2c]
// 00598f8f  5b                   pop ebx
// 00598f90  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ??0Part@RBX@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
