// roc 2007-03 004f0ab0  unit: seg_004f0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f0ab0
//
// 004f0ab0  53                   push ebx
// 004f0ab1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004f0ab5  56                   push esi
// 004f0ab6  57                   push edi
// 004f0ab7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004f0abb  2bfb                 sub edi, ebx
// 004f0abd  c1ff02               sar edi, 2
// 004f0ac0  8bc7                 mov eax, edi
// 004f0ac2  99                   cdq 
// 004f0ac3  2bc2                 sub eax, edx
// 004f0ac5  8bf0                 mov esi, eax
// 004f0ac7  d1fe                 sar esi, 1
// 004f0ac9  85f6                 test esi, esi
// 004f0acb  7e1e                 jle 0x4f0aeb
// 004f0acd  55                   push ebp
// 004f0ace  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004f0ad2  8b44b3fc             mov eax, dword ptr [ebx + esi*4 - 4]
// 004f0ad6  83ee01               sub esi, 1
// 004f0ad9  55                   push ebp
// 004f0ada  50                   push eax
// 004f0adb  57                   push edi
// 004f0adc  56                   push esi
// 004f0add  53                   push ebx
// 004f0ade  e8adfeffff           call 0x4f0990
// 004f0ae3  83c414               add esp, 0x14
// 004f0ae6  85f6                 test esi, esi
// 004f0ae8  7fe8                 jg 0x4f0ad2
// 004f0aea  5d                   pop ebp
// 004f0aeb  5f                   pop edi
// 004f0aec  5e                   pop esi
// 004f0aed  5b                   pop ebx
// 004f0aee  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Make_heap@PAPAVMotorJoint@RBX@@HPAV12@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
