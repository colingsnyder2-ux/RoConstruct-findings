// roc 2007-08 004e0180  unit: RBX::Render::Mesh::Level  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e0180
//
// 004e0180  d9ee                 fldz 
// 004e0182  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e0186  83ec08               sub esp, 8
// 004e0189  d911                 fst dword ptr [ecx]
// 004e018b  53                   push ebx
// 004e018c  d95104               fst dword ptr [ecx + 4]
// 004e018f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004e0193  d95108               fst dword ptr [ecx + 8]
// 004e0196  56                   push esi
// 004e0197  d9590c               fstp dword ptr [ecx + 0xc]
// 004e019a  57                   push edi
// 004e019b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004e019f  d94704               fld dword ptr [edi + 4]
// 004e01a2  8d5704               lea edx, [edi + 4]
// 004e01a5  d94304               fld dword ptr [ebx + 4]
// 004e01a8  8d7304               lea esi, [ebx + 4]
// 004e01ab  ded9                 fcompp 
// 004e01ad  dfe0                 fnstsw ax
// 004e01af  f6c441               test ah, 0x41
// 004e01b2  8bc2                 mov eax, edx
// 004e01b4  7402                 je 0x4e01b8
// 004e01b6  8bc6                 mov eax, esi
// 004e01b8  d900                 fld dword ptr [eax]
// 004e01ba  d95c2418             fstp dword ptr [esp + 0x18]
// 004e01be  d907                 fld dword ptr [edi]
// 004e01c0  d903                 fld dword ptr [ebx]
// 004e01c2  ded9                 fcompp 
// 004e01c4  dfe0                 fnstsw ax
// 004e01c6  f6c441               test ah, 0x41
// 004e01c9  8bc7                 mov eax, edi
// 004e01cb  7402                 je 0x4e01cf
// 004e01cd  8bc3                 mov eax, ebx
// 004e01cf  d900                 fld dword ptr [eax]
// 004e01d1  d919                 fstp dword ptr [ecx]
// 004e01d3  d9442418             fld dword ptr [esp + 0x18]
// 004e01d7  d95904               fstp dword ptr [ecx + 4]
// 004e01da  d906                 fld dword ptr [esi]
// 004e01dc  d902                 fld dword ptr [edx]
// 004e01de  ded9                 fcompp 
// 004e01e0  dfe0                 fnstsw ax
// 004e01e2  f6c441               test ah, 0x41
// 004e01e5  7402                 je 0x4e01e9
// 004e01e7  8bd6                 mov edx, esi
// 004e01e9  d902                 fld dword ptr [edx]
// 004e01eb  d95c2418             fstp dword ptr [esp + 0x18]
// 004e01ef  d903                 fld dword ptr [ebx]
// 004e01f1  d907                 fld dword ptr [edi]
// 004e01f3  ded9                 fcompp 
// 004e01f5  dfe0                 fnstsw ax
// 004e01f7  f6c441               test ah, 0x41
// 004e01fa  7402                 je 0x4e01fe
// 004e01fc  8bfb                 mov edi, ebx
// 004e01fe  d907                 fld dword ptr [edi]
// 004e0200  5f                   pop edi
// 004e0201  d95c2408             fstp dword ptr [esp + 8]
// 004e0205  5e                   pop esi
// 004e0206  d9442404             fld dword ptr [esp + 4]
// 004e020a  8bc1                 mov eax, ecx
// 004e020c  d95908               fstp dword ptr [ecx + 8]
// 004e020f  5b                   pop ebx
// 004e0210  d944240c             fld dword ptr [esp + 0xc]
// 004e0214  d9590c               fstp dword ptr [ecx + 0xc]
// 004e0217  83c408               add esp, 8
// 004e021a  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?xyxy@Rect2D@G3D@@SA?AV12@ABVVector2@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
