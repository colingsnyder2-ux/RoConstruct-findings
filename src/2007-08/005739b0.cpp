// roc 2007-08 005739b0  unit: RBX::PartInstance  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005739b0
//
// 005739b0  8b442404             mov eax, dword ptr [esp + 4]
// 005739b4  53                   push ebx
// 005739b5  56                   push esi
// 005739b6  8bf1                 mov esi, ecx
// 005739b8  8b08                 mov ecx, dword ptr [eax]
// 005739ba  890e                 mov dword ptr [esi], ecx
// 005739bc  d94004               fld dword ptr [eax + 4]
// 005739bf  d95e04               fstp dword ptr [esi + 4]
// 005739c2  57                   push edi
// 005739c3  d94008               fld dword ptr [eax + 8]
// 005739c6  8d7838               lea edi, [eax + 0x38]
// 005739c9  d95e08               fstp dword ptr [esi + 8]
// 005739cc  8d5e38               lea ebx, [esi + 0x38]
// 005739cf  d9400c               fld dword ptr [eax + 0xc]
// 005739d2  57                   push edi
// 005739d3  d95e0c               fstp dword ptr [esi + 0xc]
// 005739d6  d94010               fld dword ptr [eax + 0x10]
// 005739d9  d95e10               fstp dword ptr [esi + 0x10]
// 005739dc  d94014               fld dword ptr [eax + 0x14]
// 005739df  d95e14               fstp dword ptr [esi + 0x14]
// 005739e2  d94018               fld dword ptr [eax + 0x18]
// 005739e5  d95e18               fstp dword ptr [esi + 0x18]
// 005739e8  d9401c               fld dword ptr [eax + 0x1c]
// 005739eb  d95e1c               fstp dword ptr [esi + 0x1c]
// 005739ee  8b5020               mov edx, dword ptr [eax + 0x20]
// 005739f1  895620               mov dword ptr [esi + 0x20], edx
// 005739f4  8b4824               mov ecx, dword ptr [eax + 0x24]
// 005739f7  894e24               mov dword ptr [esi + 0x24], ecx
// 005739fa  8b5028               mov edx, dword ptr [eax + 0x28]
// 005739fd  895628               mov dword ptr [esi + 0x28], edx
// 00573a00  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00573a03  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00573a06  8b5030               mov edx, dword ptr [eax + 0x30]
// 00573a09  895630               mov dword ptr [esi + 0x30], edx
// 00573a0c  8b4834               mov ecx, dword ptr [eax + 0x34]
// 00573a0f  894e34               mov dword ptr [esi + 0x34], ecx
// 00573a12  8bcb                 mov ecx, ebx
// 00573a14  e8b75bf9ff           call 0x5095d0
// 00573a19  d94724               fld dword ptr [edi + 0x24]
// 00573a1c  d95b24               fstp dword ptr [ebx + 0x24]
// 00573a1f  8bc6                 mov eax, esi
// 00573a21  d94728               fld dword ptr [edi + 0x28]
// 00573a24  d95b28               fstp dword ptr [ebx + 0x28]
// 00573a27  d9472c               fld dword ptr [edi + 0x2c]
// 00573a2a  5f                   pop edi
// 00573a2b  5e                   pop esi
// 00573a2c  d95b2c               fstp dword ptr [ebx + 0x2c]
// 00573a2f  5b                   pop ebx
// 00573a30  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ??0Part@RBX@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
