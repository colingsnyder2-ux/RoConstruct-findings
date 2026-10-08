// roc 2012-06 007bd1f0  unit: RBX::Geometry  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007bd1f0
//
// 007bd1f0  d944240c             fld dword ptr [esp + 0xc]
// 007bd1f4  56                   push esi
// 007bd1f5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007bd1f9  57                   push edi
// 007bd1fa  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007bd1fe  51                   push ecx
// 007bd1ff  8d4624               lea eax, [esi + 0x24]
// 007bd202  d91c24               fstp dword ptr [esp]
// 007bd205  50                   push eax
// 007bd206  8d4f24               lea ecx, [edi + 0x24]
// 007bd209  51                   push ecx
// 007bd20a  e8e1feffff           call 0x7bd0f0
// 007bd20f  83c40c               add esp, 0xc
// 007bd212  84c0                 test al, al
// 007bd214  7503                 jne 0x7bd219
// 007bd216  5f                   pop edi
// 007bd217  5e                   pop esi
// 007bd218  c3                   ret 
// 007bd219  d9442418             fld dword ptr [esp + 0x18]
// 007bd21d  51                   push ecx
// 007bd21e  d91c24               fstp dword ptr [esp]
// 007bd221  56                   push esi
// 007bd222  57                   push edi
// 007bd223  e838ffffff           call 0x7bd160
// 007bd228  83c40c               add esp, 0xc
// 007bd22b  84c0                 test al, al
// 007bd22d  5f                   pop edi
// 007bd22e  0f95c0               setne al
// 007bd231  5e                   pop esi
// 007bd232  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fuzzyEq@Math@RBX@@SA_NABVCoordinateFrame@G3D@@0MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
