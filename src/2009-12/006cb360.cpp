// roc 2009-12 006cb360  unit: RBX::Profiling::Profiler  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006cb360
//
// 006cb360  8b442404             mov eax, dword ptr [esp + 4]
// 006cb364  53                   push ebx
// 006cb365  56                   push esi
// 006cb366  8bf1                 mov esi, ecx
// 006cb368  8b08                 mov ecx, dword ptr [eax]
// 006cb36a  890e                 mov dword ptr [esi], ecx
// 006cb36c  d94004               fld dword ptr [eax + 4]
// 006cb36f  d95e04               fstp dword ptr [esi + 4]
// 006cb372  57                   push edi
// 006cb373  d94008               fld dword ptr [eax + 8]
// 006cb376  8d7838               lea edi, [eax + 0x38]
// 006cb379  d95e08               fstp dword ptr [esi + 8]
// 006cb37c  8d5e38               lea ebx, [esi + 0x38]
// 006cb37f  d9400c               fld dword ptr [eax + 0xc]
// 006cb382  57                   push edi
// 006cb383  d95e0c               fstp dword ptr [esi + 0xc]
// 006cb386  d94010               fld dword ptr [eax + 0x10]
// 006cb389  d95e10               fstp dword ptr [esi + 0x10]
// 006cb38c  d94014               fld dword ptr [eax + 0x14]
// 006cb38f  d95e14               fstp dword ptr [esi + 0x14]
// 006cb392  d94018               fld dword ptr [eax + 0x18]
// 006cb395  d95e18               fstp dword ptr [esi + 0x18]
// 006cb398  d9401c               fld dword ptr [eax + 0x1c]
// 006cb39b  d95e1c               fstp dword ptr [esi + 0x1c]
// 006cb39e  8b5020               mov edx, dword ptr [eax + 0x20]
// 006cb3a1  895620               mov dword ptr [esi + 0x20], edx
// 006cb3a4  8b4824               mov ecx, dword ptr [eax + 0x24]
// 006cb3a7  894e24               mov dword ptr [esi + 0x24], ecx
// 006cb3aa  8b5028               mov edx, dword ptr [eax + 0x28]
// 006cb3ad  895628               mov dword ptr [esi + 0x28], edx
// 006cb3b0  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 006cb3b3  894e2c               mov dword ptr [esi + 0x2c], ecx
// 006cb3b6  8b5030               mov edx, dword ptr [eax + 0x30]
// 006cb3b9  895630               mov dword ptr [esi + 0x30], edx
// 006cb3bc  8b4834               mov ecx, dword ptr [eax + 0x34]
// 006cb3bf  894e34               mov dword ptr [esi + 0x34], ecx
// 006cb3c2  8bcb                 mov ecx, ebx
// 006cb3c4  e83785f2ff           call 0x5f3900
// 006cb3c9  d94724               fld dword ptr [edi + 0x24]
// 006cb3cc  d95b24               fstp dword ptr [ebx + 0x24]
// 006cb3cf  8bc6                 mov eax, esi
// 006cb3d1  d94728               fld dword ptr [edi + 0x28]
// 006cb3d4  d95b28               fstp dword ptr [ebx + 0x28]
// 006cb3d7  d9472c               fld dword ptr [edi + 0x2c]
// 006cb3da  5f                   pop edi
// 006cb3db  5e                   pop esi
// 006cb3dc  d95b2c               fstp dword ptr [ebx + 0x2c]
// 006cb3df  5b                   pop ebx
// 006cb3e0  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ??0Part@RBX@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
