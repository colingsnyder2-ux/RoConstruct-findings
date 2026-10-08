// roc 2007-03 004d3b30  unit: seg_004d0000  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004d3b30
//
// 004d3b30  d9ee                 fldz 
// 004d3b32  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d3b36  83ec08               sub esp, 8
// 004d3b39  d911                 fst dword ptr [ecx]
// 004d3b3b  53                   push ebx
// 004d3b3c  d95104               fst dword ptr [ecx + 4]
// 004d3b3f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004d3b43  d95108               fst dword ptr [ecx + 8]
// 004d3b46  56                   push esi
// 004d3b47  d9590c               fstp dword ptr [ecx + 0xc]
// 004d3b4a  57                   push edi
// 004d3b4b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004d3b4f  d94704               fld dword ptr [edi + 4]
// 004d3b52  8d5704               lea edx, [edi + 4]
// 004d3b55  d94304               fld dword ptr [ebx + 4]
// 004d3b58  8d7304               lea esi, [ebx + 4]
// 004d3b5b  ded9                 fcompp 
// 004d3b5d  dfe0                 fnstsw ax
// 004d3b5f  f6c441               test ah, 0x41
// 004d3b62  8bc2                 mov eax, edx
// 004d3b64  7402                 je 0x4d3b68
// 004d3b66  8bc6                 mov eax, esi
// 004d3b68  d900                 fld dword ptr [eax]
// 004d3b6a  d95c2418             fstp dword ptr [esp + 0x18]
// 004d3b6e  d907                 fld dword ptr [edi]
// 004d3b70  d903                 fld dword ptr [ebx]
// 004d3b72  ded9                 fcompp 
// 004d3b74  dfe0                 fnstsw ax
// 004d3b76  f6c441               test ah, 0x41
// 004d3b79  8bc7                 mov eax, edi
// 004d3b7b  7402                 je 0x4d3b7f
// 004d3b7d  8bc3                 mov eax, ebx
// 004d3b7f  d900                 fld dword ptr [eax]
// 004d3b81  d919                 fstp dword ptr [ecx]
// 004d3b83  d9442418             fld dword ptr [esp + 0x18]
// 004d3b87  d95904               fstp dword ptr [ecx + 4]
// 004d3b8a  d906                 fld dword ptr [esi]
// 004d3b8c  d902                 fld dword ptr [edx]
// 004d3b8e  ded9                 fcompp 
// 004d3b90  dfe0                 fnstsw ax
// 004d3b92  f6c441               test ah, 0x41
// 004d3b95  7402                 je 0x4d3b99
// 004d3b97  8bd6                 mov edx, esi
// 004d3b99  d902                 fld dword ptr [edx]
// 004d3b9b  d95c2418             fstp dword ptr [esp + 0x18]
// 004d3b9f  d903                 fld dword ptr [ebx]
// 004d3ba1  d907                 fld dword ptr [edi]
// 004d3ba3  ded9                 fcompp 
// 004d3ba5  dfe0                 fnstsw ax
// 004d3ba7  f6c441               test ah, 0x41
// 004d3baa  7402                 je 0x4d3bae
// 004d3bac  8bfb                 mov edi, ebx
// 004d3bae  d907                 fld dword ptr [edi]
// 004d3bb0  5f                   pop edi
// 004d3bb1  d95c2408             fstp dword ptr [esp + 8]
// 004d3bb5  5e                   pop esi
// 004d3bb6  d9442404             fld dword ptr [esp + 4]
// 004d3bba  8bc1                 mov eax, ecx
// 004d3bbc  d95908               fstp dword ptr [ecx + 8]
// 004d3bbf  5b                   pop ebx
// 004d3bc0  d944240c             fld dword ptr [esp + 0xc]
// 004d3bc4  d9590c               fstp dword ptr [ecx + 0xc]
// 004d3bc7  83c408               add esp, 8
// 004d3bca  c3                   ret 
// library rbxgs/gui\GUI.cpp (function ?xyxy@Rect2D@G3D@@SA?AV12@ABVVector2@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GUI.cpp
