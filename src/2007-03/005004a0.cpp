// roc 2007-03 005004a0  unit: seg_00500000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005004a0
//
// 005004a0  8b442404             mov eax, dword ptr [esp + 4]
// 005004a4  53                   push ebx
// 005004a5  56                   push esi
// 005004a6  57                   push edi
// 005004a7  8bd9                 mov ebx, ecx
// 005004a9  33ff                 xor edi, edi
// 005004ab  2bd8                 sub ebx, eax
// 005004ad  8bf0                 mov esi, eax
// 005004af  90                   nop 
// 005004b0  33d2                 xor edx, edx
// 005004b2  8bce                 mov ecx, esi
// 005004b4  d9040b               fld dword ptr [ebx + ecx]
// 005004b7  d901                 fld dword ptr [ecx]
// 005004b9  dae9                 fucompp 
// 005004bb  dfe0                 fnstsw ax
// 005004bd  f6c444               test ah, 0x44
// 005004c0  7a1e                 jp 0x5004e0
// 005004c2  83c201               add edx, 1
// 005004c5  83c104               add ecx, 4
// 005004c8  83fa04               cmp edx, 4
// 005004cb  7ce7                 jl 0x5004b4
// 005004cd  83c701               add edi, 1
// 005004d0  83c610               add esi, 0x10
// 005004d3  83ff04               cmp edi, 4
// 005004d6  7cd8                 jl 0x5004b0
// 005004d8  5f                   pop edi
// 005004d9  5e                   pop esi
// 005004da  b001                 mov al, 1
// 005004dc  5b                   pop ebx
// 005004dd  c20400               ret 4
// 005004e0  5f                   pop edi
// 005004e1  5e                   pop esi
// 005004e2  32c0                 xor al, al
// 005004e4  5b                   pop ebx
// 005004e5  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Matrix4.cpp (function ??8Matrix4@G3D@@QBE_NABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Matrix4.cpp
