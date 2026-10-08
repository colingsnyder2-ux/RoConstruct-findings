// from server: 100% by auto
// roc 2010-06 00498710  unit: G3D::Shader  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00498710
//
// 00498710  53                   push ebx
// 00498711  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00498715  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00498719  55                   push ebp
// 0049871a  56                   push esi
// 0049871b  8bf1                 mov esi, ecx
// 0049871d  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 00498720  57                   push edi
// 00498721  7205                 jb 0x498728
// 00498723  8b4304               mov eax, dword ptr [ebx + 4]
// 00498726  eb03                 jmp 0x49872b
// 00498728  8d4304               lea eax, [ebx + 4]
// 0049872b  51                   push ecx
// 0049872c  50                   push eax
// 0049872d  e8ceef0b00           call 0x557700
// 00498732  33d2                 xor edx, edx
// 00498734  8bf8                 mov edi, eax
// 00498736  f7760c               div dword ptr [esi + 0xc]
// 00498739  8b4608               mov eax, dword ptr [esi + 8]
// 0049873c  83c408               add esp, 8
// 0049873f  8b3490               mov esi, dword ptr [eax + edx*4]
// 00498742  85f6                 test esi, esi
// 00498744  7423                 je 0x498769
// 00498746  8b2d8ca49e00         mov ebp, dword ptr [0x9ea48c]
// 0049874c  8d642400             lea esp, [esp]
// 00498750  393e                 cmp dword ptr [esi], edi
// 00498752  750e                 jne 0x498762
// 00498754  8d4e04               lea ecx, [esi + 4]
// 00498757  53                   push ebx
// 00498758  51                   push ecx
// 00498759  ffd5                 call ebp
// 0049875b  83c408               add esp, 8
// 0049875e  84c0                 test al, al
// 00498760  7507                 jne 0x498769
// 00498762  8b7668               mov esi, dword ptr [esi + 0x68]
// 00498765  85f6                 test esi, esi
// 00498767  75e7                 jne 0x498750
// 00498769  5f                   pop edi
// 0049876a  8d4620               lea eax, [esi + 0x20]
// 0049876d  5e                   pop esi
// 0049876e  5d                   pop ebp
// 0049876f  5b                   pop ebx
// 00498770  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?get@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QBEAAVArg@ArgList@GPUProgram@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
