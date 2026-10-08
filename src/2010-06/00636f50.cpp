// roc 2010-06 00636f50  unit: RBX::Profiling::Profiler  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00636f50
//
// 00636f50  8b442404             mov eax, dword ptr [esp + 4]
// 00636f54  53                   push ebx
// 00636f55  56                   push esi
// 00636f56  8bf1                 mov esi, ecx
// 00636f58  8b08                 mov ecx, dword ptr [eax]
// 00636f5a  890e                 mov dword ptr [esi], ecx
// 00636f5c  d94004               fld dword ptr [eax + 4]
// 00636f5f  d95e04               fstp dword ptr [esi + 4]
// 00636f62  57                   push edi
// 00636f63  d94008               fld dword ptr [eax + 8]
// 00636f66  8d7838               lea edi, [eax + 0x38]
// 00636f69  d95e08               fstp dword ptr [esi + 8]
// 00636f6c  8d5e38               lea ebx, [esi + 0x38]
// 00636f6f  d9400c               fld dword ptr [eax + 0xc]
// 00636f72  57                   push edi
// 00636f73  d95e0c               fstp dword ptr [esi + 0xc]
// 00636f76  d94010               fld dword ptr [eax + 0x10]
// 00636f79  d95e10               fstp dword ptr [esi + 0x10]
// 00636f7c  d94014               fld dword ptr [eax + 0x14]
// 00636f7f  d95e14               fstp dword ptr [esi + 0x14]
// 00636f82  d94018               fld dword ptr [eax + 0x18]
// 00636f85  d95e18               fstp dword ptr [esi + 0x18]
// 00636f88  d9401c               fld dword ptr [eax + 0x1c]
// 00636f8b  d95e1c               fstp dword ptr [esi + 0x1c]
// 00636f8e  8b5020               mov edx, dword ptr [eax + 0x20]
// 00636f91  895620               mov dword ptr [esi + 0x20], edx
// 00636f94  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00636f97  894e24               mov dword ptr [esi + 0x24], ecx
// 00636f9a  8b5028               mov edx, dword ptr [eax + 0x28]
// 00636f9d  895628               mov dword ptr [esi + 0x28], edx
// 00636fa0  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00636fa3  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00636fa6  8b5030               mov edx, dword ptr [eax + 0x30]
// 00636fa9  895630               mov dword ptr [esi + 0x30], edx
// 00636fac  8b4834               mov ecx, dword ptr [eax + 0x34]
// 00636faf  894e34               mov dword ptr [esi + 0x34], ecx
// 00636fb2  8bcb                 mov ecx, ebx
// 00636fb4  e8b7f0f1ff           call 0x556070
// 00636fb9  d94724               fld dword ptr [edi + 0x24]
// 00636fbc  d95b24               fstp dword ptr [ebx + 0x24]
// 00636fbf  8bc6                 mov eax, esi
// 00636fc1  d94728               fld dword ptr [edi + 0x28]
// 00636fc4  d95b28               fstp dword ptr [ebx + 0x28]
// 00636fc7  d9472c               fld dword ptr [edi + 0x2c]
// 00636fca  5f                   pop edi
// 00636fcb  5e                   pop esi
// 00636fcc  d95b2c               fstp dword ptr [ebx + 0x2c]
// 00636fcf  5b                   pop ebx
// 00636fd0  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ??0Part@RBX@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
