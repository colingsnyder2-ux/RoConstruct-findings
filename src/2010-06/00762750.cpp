// from server: 100% by auto
// roc 2010-06 00762750  unit: RBX::MovingAssemblyStage  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00762750
//
// 00762750  56                   push esi
// 00762751  8bf1                 mov esi, ecx
// 00762753  8b4608               mov eax, dword ptr [esi + 8]
// 00762756  8d0440               lea eax, [eax + eax*2]
// 00762759  57                   push edi
// 0076275a  8b3e                 mov edi, dword ptr [esi]
// 0076275c  03c0                 add eax, eax
// 0076275e  03c0                 add eax, eax
// 00762760  6a10                 push 0x10
// 00762762  50                   push eax
// 00762763  e838b1deff           call 0x54d8a0
// 00762768  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076276c  8906                 mov dword ptr [esi], eax
// 0076276e  8b7608               mov esi, dword ptr [esi + 8]
// 00762771  83c408               add esp, 8
// 00762774  3bce                 cmp ecx, esi
// 00762776  7c02                 jl 0x76277a
// 00762778  8bce                 mov ecx, esi
// 0076277a  8d0c49               lea ecx, [ecx + ecx*2]
// 0076277d  8d1488               lea edx, [eax + ecx*4]
// 00762780  8bcf                 mov ecx, edi
// 00762782  3bc2                 cmp eax, edx
// 00762784  731e                 jae 0x7627a4
// 00762786  85c0                 test eax, eax
// 00762788  7410                 je 0x76279a
// 0076278a  8b31                 mov esi, dword ptr [ecx]
// 0076278c  8930                 mov dword ptr [eax], esi
// 0076278e  8b7104               mov esi, dword ptr [ecx + 4]
// 00762791  897004               mov dword ptr [eax + 4], esi
// 00762794  8b7108               mov esi, dword ptr [ecx + 8]
// 00762797  897008               mov dword ptr [eax + 8], esi
// 0076279a  83c00c               add eax, 0xc
// 0076279d  83c10c               add ecx, 0xc
// 007627a0  3bc2                 cmp eax, edx
// 007627a2  72e2                 jb 0x762786
// 007627a4  57                   push edi
// 007627a5  e816b2deff           call 0x54d9c0
// 007627aa  83c404               add esp, 4
// 007627ad  5f                   pop edi
// 007627ae  5e                   pop esi
// 007627af  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?realloc@?$Array@VLoopBody@GWindow@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
