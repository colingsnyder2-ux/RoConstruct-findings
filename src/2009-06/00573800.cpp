// from server: 100% by auto
// roc 2009-06 00573800  unit: G3D::GCamera  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00573800
//
// 00573800  6aff                 push -1
// 00573802  6868058600           push 0x860568
// 00573807  64a100000000         mov eax, dword ptr fs:[0]
// 0057380d  50                   push eax
// 0057380e  64892500000000       mov dword ptr fs:[0], esp
// 00573815  51                   push ecx
// 00573816  56                   push esi
// 00573817  8bf1                 mov esi, ecx
// 00573819  89742404             mov dword ptr [esp + 4], esi
// 0057381d  8d4e0c               lea ecx, [esi + 0xc]
// 00573820  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00573828  e8d3fdffff           call 0x573600
// 0057382d  8b06                 mov eax, dword ptr [esi]
// 0057382f  50                   push eax
// 00573830  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00573838  e8537affff           call 0x56b290
// 0057383d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00573841  83c404               add esp, 4
// 00573844  c70600000000         mov dword ptr [esi], 0
// 0057384a  c7460400000000       mov dword ptr [esi + 4], 0
// 00573851  c7460800000000       mov dword ptr [esi + 8], 0
// 00573858  5e                   pop esi
// 00573859  64890d00000000       mov dword ptr fs:[0], ecx
// 00573860  83c410               add esp, 0x10
// 00573863  c3                   ret 
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ??1Frustum@GCamera@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
