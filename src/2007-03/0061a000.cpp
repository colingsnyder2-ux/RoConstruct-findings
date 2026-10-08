// roc 2007-03 0061a000  unit: seg_00610000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061a000
//
// 0061a000  51                   push ecx
// 0061a001  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0061a005  8bc2                 mov eax, edx
// 0061a007  56                   push esi
// 0061a008  c744240400000000     mov dword ptr [esp + 4], 0
// 0061a010  8d7001               lea esi, [eax + 1]
// 0061a013  8a08                 mov cl, byte ptr [eax]
// 0061a015  83c001               add eax, 1
// 0061a018  84c9                 test cl, cl
// 0061a01a  75f7                 jne 0x61a013
// 0061a01c  2bc6                 sub eax, esi
// 0061a01e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061a022  03c2                 add eax, edx
// 0061a024  50                   push eax
// 0061a025  52                   push edx
// 0061a026  8bce                 mov ecx, esi
// 0061a028  e863feffff           call 0x619e90
// 0061a02d  8bc6                 mov eax, esi
// 0061a02f  5e                   pop esi
// 0061a030  59                   pop ecx
// 0061a031  c3                   ret 
// library rbxgs-net/Player.cpp (function ??$is_any_of@$$BY01$$CBD@algorithm@boost@@YA?AU?$is_any_ofF@D@detail@01@AAY01$$CBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
