// roc 2009-12 0060c5c0  unit: seg_00600000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060c5c0
//
// 0060c5c0  83ec24               sub esp, 0x24
// 0060c5c3  53                   push ebx
// 0060c5c4  56                   push esi
// 0060c5c5  57                   push edi
// 0060c5c6  8bf1                 mov esi, ecx
// 0060c5c8  e87383feff           call 0x5f4940
// 0060c5cd  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0060c5d1  50                   push eax
// 0060c5d2  8bcb                 mov ecx, ebx
// 0060c5d4  e82773feff           call 0x5f3900
// 0060c5d9  56                   push esi
// 0060c5da  8d4c2410             lea ecx, [esp + 0x10]
// 0060c5de  e84d7ffeff           call 0x5f4530
// 0060c5e3  8bf0                 mov esi, eax
// 0060c5e5  8bfb                 mov edi, ebx
// 0060c5e7  b909000000           mov ecx, 9
// 0060c5ec  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0060c5ee  5f                   pop edi
// 0060c5ef  5e                   pop esi
// 0060c5f0  8bc3                 mov eax, ebx
// 0060c5f2  5b                   pop ebx
// 0060c5f3  83c424               add esp, 0x24
// 0060c5f6  c20400               ret 4
// library g3d-6.09/G3Dcpp\Quat.cpp (function ?toRotationMatrix@Quat@G3D@@QBE?AVMatrix3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Quat.cpp
