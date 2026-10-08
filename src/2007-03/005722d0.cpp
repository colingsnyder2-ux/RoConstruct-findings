// roc 2007-03 005722d0  unit: seg_00570000  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005722d0
//
// 005722d0  8b442404             mov eax, dword ptr [esp + 4]
// 005722d4  53                   push ebx
// 005722d5  56                   push esi
// 005722d6  8bf1                 mov esi, ecx
// 005722d8  8b08                 mov ecx, dword ptr [eax]
// 005722da  890e                 mov dword ptr [esi], ecx
// 005722dc  d94004               fld dword ptr [eax + 4]
// 005722df  d95e04               fstp dword ptr [esi + 4]
// 005722e2  57                   push edi
// 005722e3  d94008               fld dword ptr [eax + 8]
// 005722e6  8d7838               lea edi, [eax + 0x38]
// 005722e9  d95e08               fstp dword ptr [esi + 8]
// 005722ec  8d5e38               lea ebx, [esi + 0x38]
// 005722ef  d9400c               fld dword ptr [eax + 0xc]
// 005722f2  57                   push edi
// 005722f3  d95e0c               fstp dword ptr [esi + 0xc]
// 005722f6  d94010               fld dword ptr [eax + 0x10]
// 005722f9  d95e10               fstp dword ptr [esi + 0x10]
// 005722fc  d94014               fld dword ptr [eax + 0x14]
// 005722ff  d95e14               fstp dword ptr [esi + 0x14]
// 00572302  d94018               fld dword ptr [eax + 0x18]
// 00572305  d95e18               fstp dword ptr [esi + 0x18]
// 00572308  d9401c               fld dword ptr [eax + 0x1c]
// 0057230b  d95e1c               fstp dword ptr [esi + 0x1c]
// 0057230e  8b5020               mov edx, dword ptr [eax + 0x20]
// 00572311  895620               mov dword ptr [esi + 0x20], edx
// 00572314  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00572317  894e24               mov dword ptr [esi + 0x24], ecx
// 0057231a  8b5028               mov edx, dword ptr [eax + 0x28]
// 0057231d  895628               mov dword ptr [esi + 0x28], edx
// 00572320  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00572323  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00572326  8b5030               mov edx, dword ptr [eax + 0x30]
// 00572329  895630               mov dword ptr [esi + 0x30], edx
// 0057232c  8b4834               mov ecx, dword ptr [eax + 0x34]
// 0057232f  894e34               mov dword ptr [esi + 0x34], ecx
// 00572332  8bcb                 mov ecx, ebx
// 00572334  e847c6f8ff           call 0x4fe980
// 00572339  d94724               fld dword ptr [edi + 0x24]
// 0057233c  d95b24               fstp dword ptr [ebx + 0x24]
// 0057233f  8bc6                 mov eax, esi
// 00572341  d94728               fld dword ptr [edi + 0x28]
// 00572344  d95b28               fstp dword ptr [ebx + 0x28]
// 00572347  d9472c               fld dword ptr [edi + 0x2c]
// 0057234a  5f                   pop edi
// 0057234b  5e                   pop esi
// 0057234c  d95b2c               fstp dword ptr [ebx + 0x2c]
// 0057234f  5b                   pop ebx
// 00572350  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ??0Part@RBX@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
