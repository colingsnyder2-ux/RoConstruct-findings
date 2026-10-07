// roc 2011-06 00552d90  unit: G3D::LineSegment  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00552d90
//
// 00552d90  83ec24               sub esp, 0x24
// 00552d93  53                   push ebx
// 00552d94  56                   push esi
// 00552d95  57                   push edi
// 00552d96  8bf1                 mov esi, ecx
// 00552d98  e843e6feff           call 0x5413e0
// 00552d9d  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00552da1  50                   push eax
// 00552da2  8bcb                 mov ecx, ebx
// 00552da4  e8a7d2feff           call 0x540050
// 00552da9  56                   push esi
// 00552daa  8d4c2410             lea ecx, [esp + 0x10]
// 00552dae  e8dde1feff           call 0x540f90
// 00552db3  8bf0                 mov esi, eax
// 00552db5  8bfb                 mov edi, ebx
// 00552db7  b909000000           mov ecx, 9
// 00552dbc  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00552dbe  5f                   pop edi
// 00552dbf  5e                   pop esi
// 00552dc0  8bc3                 mov eax, ebx
// 00552dc2  5b                   pop ebx
// 00552dc3  83c424               add esp, 0x24
// 00552dc6  c20400               ret 4
// library g3d-6.09/G3Dcpp\Quat.cpp (function ?toRotationMatrix@Quat@G3D@@QBE?AVMatrix3@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Quat.cpp
