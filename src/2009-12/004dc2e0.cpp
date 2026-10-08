// roc 2009-12 004dc2e0  unit: G3D::Shader  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dc2e0
//
// 004dc2e0  53                   push ebx
// 004dc2e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004dc2e5  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 004dc2e9  55                   push ebp
// 004dc2ea  56                   push esi
// 004dc2eb  8bf1                 mov esi, ecx
// 004dc2ed  8b4b14               mov ecx, dword ptr [ebx + 0x14]
// 004dc2f0  57                   push edi
// 004dc2f1  7205                 jb 0x4dc2f8
// 004dc2f3  8b4304               mov eax, dword ptr [ebx + 4]
// 004dc2f6  eb03                 jmp 0x4dc2fb
// 004dc2f8  8d4304               lea eax, [ebx + 4]
// 004dc2fb  51                   push ecx
// 004dc2fc  50                   push eax
// 004dc2fd  e8aee51100           call 0x5fa8b0
// 004dc302  33d2                 xor edx, edx
// 004dc304  8bf8                 mov edi, eax
// 004dc306  f7760c               div dword ptr [esi + 0xc]
// 004dc309  8b4608               mov eax, dword ptr [esi + 8]
// 004dc30c  83c408               add esp, 8
// 004dc30f  8b3490               mov esi, dword ptr [eax + edx*4]
// 004dc312  85f6                 test esi, esi
// 004dc314  7423                 je 0x4dc339
// 004dc316  8b2d7cb69800         mov ebp, dword ptr [0x98b67c]
// 004dc31c  8d642400             lea esp, [esp]
// 004dc320  393e                 cmp dword ptr [esi], edi
// 004dc322  750e                 jne 0x4dc332
// 004dc324  8d4e04               lea ecx, [esi + 4]
// 004dc327  53                   push ebx
// 004dc328  51                   push ecx
// 004dc329  ffd5                 call ebp
// 004dc32b  83c408               add esp, 8
// 004dc32e  84c0                 test al, al
// 004dc330  7507                 jne 0x4dc339
// 004dc332  8b7668               mov esi, dword ptr [esi + 0x68]
// 004dc335  85f6                 test esi, esi
// 004dc337  75e7                 jne 0x4dc320
// 004dc339  5f                   pop edi
// 004dc33a  8d4620               lea eax, [esi + 0x20]
// 004dc33d  5e                   pop esi
// 004dc33e  5d                   pop ebp
// 004dc33f  5b                   pop ebx
// 004dc340  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?get@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VArg@ArgList@GPUProgram@G3D@@@G3D@@QBEAAVArg@ArgList@GPUProgram@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
