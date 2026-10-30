// roc 2007-03 00719cb0  unit: seg_00710000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00719cb0
//
// 00719cb0  56                   push esi
// 00719cb1  57                   push edi
// 00719cb2  8b3dbced7700         mov edi, dword ptr [0x77edbc]
// 00719cb8  6a2d                 push 0x2d
// 00719cba  ffd7                 call edi
// 00719cbc  8b742410             mov esi, dword ptr [esp + 0x10]
// 00719cc0  03c0                 add eax, eax
// 00719cc2  3906                 cmp dword ptr [esi], eax
// 00719cc4  7d08                 jge 0x719cce
// 00719cc6  6a2d                 push 0x2d
// 00719cc8  ffd7                 call edi
// 00719cca  03c0                 add eax, eax
// 00719ccc  8906                 mov dword ptr [esi], eax
// 00719cce  8b06                 mov eax, dword ptr [esi]
// 00719cd0  8a4c240c             mov cl, byte ptr [esp + 0xc]
// 00719cd4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00719cd8  99                   cdq 
// 00719cd9  2bc2                 sub eax, edx
// 00719cdb  d1f8                 sar eax, 1
// 00719cdd  83c801               or eax, 1
// 00719ce0  f6c120               test cl, 0x20
// 00719ce3  8907                 mov dword ptr [edi], eax
// 00719ce5  7438                 je 0x719d1f
// 00719ce7  f6c140               test cl, 0x40
// 00719cea  741e                 je 0x719d0a
// 00719cec  8b36                 mov esi, dword ptr [esi]
// 00719cee  8d0cf6               lea ecx, [esi + esi*8]
// 00719cf1  b867666666           mov eax, 0x66666667
// 00719cf6  f7e9                 imul ecx
// 00719cf8  c1fa03               sar edx, 3
// 00719cfb  8bc2                 mov eax, edx
// 00719cfd  c1e81f               shr eax, 0x1f
// 00719d00  03c2                 add eax, edx
// 00719d02  83c801               or eax, 1
// 00719d05  8907                 mov dword ptr [edi], eax
// 00719d07  5f                   pop edi
// 00719d08  5e                   pop esi
// 00719d09  c3                   ret 
// 00719d0a  8d0c00               lea ecx, [eax + eax]
// 00719d0d  b8398ee338           mov eax, 0x38e38e39
// 00719d12  f7e9                 imul ecx
// 00719d14  d1fa                 sar edx, 1
// 00719d16  8bca                 mov ecx, edx
// 00719d18  c1e91f               shr ecx, 0x1f
// 00719d1b  03ca                 add ecx, edx
// 00719d1d  010e                 add dword ptr [esi], ecx
// 00719d1f  5f                   pop edi
// 00719d20  5e                   pop esi
// 00719d21  c3                   ret 
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinObjectTrackBar.cpp (function ?ValidateThumbHeight@@YAXKAAH0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinObjectTrackBar.cpp
