// roc 2008-06 005841e0  unit: RBX::ModelInstance  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005841e0
//
// 005841e0  83ec30               sub esp, 0x30
// 005841e3  55                   push ebp
// 005841e4  8be9                 mov ebp, ecx
// 005841e6  8b8508010000         mov eax, dword ptr [ebp + 0x108]
// 005841ec  85c0                 test eax, eax
// 005841ee  0f847c000000         je 0x584270
// 005841f4  53                   push ebx
// 005841f5  8b5810               mov ebx, dword ptr [eax + 0x10]
// 005841f8  2b580c               sub ebx, dword ptr [eax + 0xc]
// 005841fb  c1fb03               sar ebx, 3
// 005841fe  85db                 test ebx, ebx
// 00584200  7e6d                 jle 0x58426f
// 00584202  8b859c010000         mov eax, dword ptr [ebp + 0x19c]
// 00584208  56                   push esi
// 00584209  50                   push eax
// 0058420a  8d4c2410             lea ecx, [esp + 0x10]
// 0058420e  51                   push ecx
// 0058420f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00584213  e8e824efff           call 0x476700
// 00584218  33f6                 xor esi, esi
// 0058421a  85db                 test ebx, ebx
// 0058421c  7e50                 jle 0x58426e
// 0058421e  57                   push edi
// 0058421f  90                   nop 
// 00584220  8bbd08010000         mov edi, dword ptr [ebp + 0x108]
// 00584226  8b5710               mov edx, dword ptr [edi + 0x10]
// 00584229  2b570c               sub edx, dword ptr [edi + 0xc]
// 0058422c  c1fa03               sar edx, 3
// 0058422f  3bf2                 cmp esi, edx
// 00584231  7206                 jb 0x584239
// 00584233  ff1590288000         call dword ptr [0x802890]
// 00584239  8b470c               mov eax, dword ptr [edi + 0xc]
// 0058423c  8b04f0               mov eax, dword ptr [eax + esi*8]
// 0058423f  6a00                 push 0
// 00584241  681c7f9400           push 0x947f1c
// 00584246  687c909200           push 0x92907c
// 0058424b  6a00                 push 0
// 0058424d  50                   push eax
// 0058424e  e873d51100           call 0x6a17c6
// 00584253  83c414               add esp, 0x14
// 00584256  85c0                 test eax, eax
// 00584258  740e                 je 0x584268
// 0058425a  8b10                 mov edx, dword ptr [eax]
// 0058425c  8b5264               mov edx, dword ptr [edx + 0x64]
// 0058425f  8d4c2410             lea ecx, [esp + 0x10]
// 00584263  51                   push ecx
// 00584264  8bc8                 mov ecx, eax
// 00584266  ffd2                 call edx
// 00584268  46                   inc esi
// 00584269  3bf3                 cmp esi, ebx
// 0058426b  7cb3                 jl 0x584220
// 0058426d  5f                   pop edi
// 0058426e  5e                   pop esi
// 0058426f  5b                   pop ebx
// 00584270  5d                   pop ebp
// 00584271  83c430               add esp, 0x30
// 00584274  c20400               ret 4
// library openrbx-client/App\v8datamodel\ModelInstance.cpp (function ?legacyTraverseState@ModelInstance@RBX@@MAEXABVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/ModelInstance.cpp
