// from server: 100% by auto
// roc 2008-06 0047bbf0  unit: CInstanceRecord::CNameItem  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047bbf0
//
// 0047bbf0  56                   push esi
// 0047bbf1  57                   push edi
// 0047bbf2  8bf1                 mov esi, ecx
// 0047bbf4  33ff                 xor edi, edi
// 0047bbf6  397e04               cmp dword ptr [esi + 4], edi
// 0047bbf9  7e1b                 jle 0x47bc16
// 0047bbfb  53                   push ebx
// 0047bbfc  33db                 xor ebx, ebx
// 0047bbfe  8bff                 mov edi, edi
// 0047bc00  8b0e                 mov ecx, dword ptr [esi]
// 0047bc02  03cb                 add ecx, ebx
// 0047bc04  e867deffff           call 0x479a70
// 0047bc09  47                   inc edi
// 0047bc0a  81c360070000         add ebx, 0x760
// 0047bc10  3b7e04               cmp edi, dword ptr [esi + 4]
// 0047bc13  7ceb                 jl 0x47bc00
// 0047bc15  5b                   pop ebx
// 0047bc16  8b06                 mov eax, dword ptr [esi]
// 0047bc18  50                   push eax
// 0047bc19  e802c10800           call 0x507d20
// 0047bc1e  83c404               add esp, 4
// 0047bc21  5f                   pop edi
// 0047bc22  c70600000000         mov dword ptr [esi], 0
// 0047bc28  c7460400000000       mov dword ptr [esi + 4], 0
// 0047bc2f  c7460800000000       mov dword ptr [esi + 8], 0
// 0047bc36  5e                   pop esi
// 0047bc37  c3                   ret 
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??1?$Array@VRenderState@RenderDevice@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
