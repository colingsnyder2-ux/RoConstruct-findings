// from server: 100% by auto
// roc 2007-08 00478570  unit: CInstanceRecord::CNameItem  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00478570
//
// 00478570  56                   push esi
// 00478571  57                   push edi
// 00478572  8bf1                 mov esi, ecx
// 00478574  33ff                 xor edi, edi
// 00478576  397e04               cmp dword ptr [esi + 4], edi
// 00478579  7e1d                 jle 0x478598
// 0047857b  53                   push ebx
// 0047857c  33db                 xor ebx, ebx
// 0047857e  8bff                 mov edi, edi
// 00478580  8b0e                 mov ecx, dword ptr [esi]
// 00478582  03cb                 add ecx, ebx
// 00478584  e8d7e2ffff           call 0x476860
// 00478589  83c701               add edi, 1
// 0047858c  81c360070000         add ebx, 0x760
// 00478592  3b7e04               cmp edi, dword ptr [esi + 4]
// 00478595  7ce9                 jl 0x478580
// 00478597  5b                   pop ebx
// 00478598  8b06                 mov eax, dword ptr [esi]
// 0047859a  50                   push eax
// 0047859b  e870720800           call 0x4ff810
// 004785a0  83c404               add esp, 4
// 004785a3  5f                   pop edi
// 004785a4  c70600000000         mov dword ptr [esi], 0
// 004785aa  c7460400000000       mov dword ptr [esi + 4], 0
// 004785b1  c7460800000000       mov dword ptr [esi + 8], 0
// 004785b8  5e                   pop esi
// 004785b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??1?$Array@VRenderState@RenderDevice@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
