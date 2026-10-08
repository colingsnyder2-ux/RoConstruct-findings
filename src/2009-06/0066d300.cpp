// roc 2009-06 0066d300  unit: RBX::VHumanoid::?$EventDesc  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066d300
//
// 0066d300  d944240c             fld dword ptr [esp + 0xc]
// 0066d304  56                   push esi
// 0066d305  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066d309  57                   push edi
// 0066d30a  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0066d30e  51                   push ecx
// 0066d30f  8d4624               lea eax, [esi + 0x24]
// 0066d312  d91c24               fstp dword ptr [esp]
// 0066d315  50                   push eax
// 0066d316  8d4f24               lea ecx, [edi + 0x24]
// 0066d319  51                   push ecx
// 0066d31a  e811ffffff           call 0x66d230
// 0066d31f  83c40c               add esp, 0xc
// 0066d322  84c0                 test al, al
// 0066d324  7503                 jne 0x66d329
// 0066d326  5f                   pop edi
// 0066d327  5e                   pop esi
// 0066d328  c3                   ret 
// 0066d329  d9442418             fld dword ptr [esp + 0x18]
// 0066d32d  51                   push ecx
// 0066d32e  d91c24               fstp dword ptr [esp]
// 0066d331  56                   push esi
// 0066d332  57                   push edi
// 0066d333  e858ffffff           call 0x66d290
// 0066d338  83c40c               add esp, 0xc
// 0066d33b  84c0                 test al, al
// 0066d33d  5f                   pop edi
// 0066d33e  0f95c0               setne al
// 0066d341  5e                   pop esi
// 0066d342  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fuzzyEq@Math@RBX@@SA_NABVCoordinateFrame@G3D@@0MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
