// roc 2007-03 004f3d00  unit: seg_004f0000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f3d00
//
// 004f3d00  56                   push esi
// 004f3d01  57                   push edi
// 004f3d02  8bf1                 mov esi, ecx
// 004f3d04  33ff                 xor edi, edi
// 004f3d06  397e04               cmp dword ptr [esi + 4], edi
// 004f3d09  7e1b                 jle 0x4f3d26
// 004f3d0b  53                   push ebx
// 004f3d0c  33db                 xor ebx, ebx
// 004f3d0e  8bff                 mov edi, edi
// 004f3d10  8b0e                 mov ecx, dword ptr [esi]
// 004f3d12  03cb                 add ecx, ebx
// 004f3d14  ff158ce77700         call dword ptr [0x77e78c]
// 004f3d1a  83c701               add edi, 1
// 004f3d1d  83c31c               add ebx, 0x1c
// 004f3d20  3b7e04               cmp edi, dword ptr [esi + 4]
// 004f3d23  7ceb                 jl 0x4f3d10
// 004f3d25  5b                   pop ebx
// 004f3d26  8b06                 mov eax, dword ptr [esi]
// 004f3d28  50                   push eax
// 004f3d29  e852f6ffff           call 0x4f3380
// 004f3d2e  83c404               add esp, 4
// 004f3d31  5f                   pop edi
// 004f3d32  c70600000000         mov dword ptr [esi], 0
// 004f3d38  c7460400000000       mov dword ptr [esi + 4], 0
// 004f3d3f  c7460800000000       mov dword ptr [esi + 8], 0
// 004f3d46  5e                   pop esi
// 004f3d47  c3                   ret 
// library rbxgs-g3d/G3Dcpp\BinaryOutput.cpp (function ??1?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryOutput.cpp
