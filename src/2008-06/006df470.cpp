// roc 2008-06 006df470  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006df470
//
// 006df470  53                   push ebx
// 006df471  55                   push ebp
// 006df472  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006df476  56                   push esi
// 006df477  8b742418             mov esi, dword ptr [esp + 0x18]
// 006df47b  33c9                 xor ecx, ecx
// 006df47d  83fe64               cmp esi, 0x64
// 006df480  0f9dc1               setge cl
// 006df483  57                   push edi
// 006df484  49                   dec ecx
// 006df485  81e17cfcffff         and ecx, 0xfffffc7c
// 006df48b  81c1e8030000         add ecx, 0x3e8
// 006df491  8bc1                 mov eax, ecx
// 006df493  99                   cdq 
// 006df494  2bc2                 sub eax, edx
// 006df496  8bd8                 mov ebx, eax
// 006df498  8bc5                 mov eax, ebp
// 006df49a  c1e810               shr eax, 0x10
// 006df49d  0fb6d0               movzx edx, al
// 006df4a0  8b442414             mov eax, dword ptr [esp + 0x14]
// 006df4a4  c1e810               shr eax, 0x10
// 006df4a7  0fb6c0               movzx eax, al
// 006df4aa  0fafc6               imul eax, esi
// 006df4ad  8bf9                 mov edi, ecx
// 006df4af  2bfe                 sub edi, esi
// 006df4b1  0fafd7               imul edx, edi
// 006df4b4  d1fb                 sar ebx, 1
// 006df4b6  03d3                 add edx, ebx
// 006df4b8  03c2                 add eax, edx
// 006df4ba  99                   cdq 
// 006df4bb  f7f9                 idiv ecx
// 006df4bd  8bd5                 mov edx, ebp
// 006df4bf  c1ea08               shr edx, 8
// 006df4c2  0fb6d2               movzx edx, dl
// 006df4c5  0fafd7               imul edx, edi
// 006df4c8  03d3                 add edx, ebx
// 006df4ca  0fb66c2418           movzx ebp, byte ptr [esp + 0x18]
// 006df4cf  0fafef               imul ebp, edi
// 006df4d2  0fb6c0               movzx eax, al
// 006df4d5  c1e008               shl eax, 8
// 006df4d8  8944241c             mov dword ptr [esp + 0x1c], eax
// 006df4dc  8b442414             mov eax, dword ptr [esp + 0x14]
// 006df4e0  c1e808               shr eax, 8
// 006df4e3  0fb6c0               movzx eax, al
// 006df4e6  0fafc6               imul eax, esi
// 006df4e9  03c2                 add eax, edx
// 006df4eb  99                   cdq 
// 006df4ec  f7f9                 idiv ecx
// 006df4ee  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006df4f2  03eb                 add ebp, ebx
// 006df4f4  5f                   pop edi
// 006df4f5  0fb6c0               movzx eax, al
// 006df4f8  0bd0                 or edx, eax
// 006df4fa  0fb6442410           movzx eax, byte ptr [esp + 0x10]
// 006df4ff  0fafc6               imul eax, esi
// 006df502  03c5                 add eax, ebp
// 006df504  c1e208               shl edx, 8
// 006df507  89542410             mov dword ptr [esp + 0x10], edx
// 006df50b  99                   cdq 
// 006df50c  f7f9                 idiv ecx
// 006df50e  5e                   pop esi
// 006df50f  5d                   pop ebp
// 006df510  5b                   pop ebx
// 006df511  0fb6c8               movzx ecx, al
// 006df514  8b442404             mov eax, dword ptr [esp + 4]
// 006df518  0bc1                 or eax, ecx
// 006df51a  c20c00               ret 0xc
// library xtp-11.2.2/Source\Common\XTPColorManager.cpp (function ?LightColor@CXTPColorManager@@QBEKKKH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPColorManager.cpp
