// roc 2007-03 00460cd0  unit: seg_00460000  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00460cd0
//
// 00460cd0  56                   push esi
// 00460cd1  8bf1                 mov esi, ecx
// 00460cd3  8b4608               mov eax, dword ptr [esi + 8]
// 00460cd6  8d0440               lea eax, [eax + eax*2]
// 00460cd9  57                   push edi
// 00460cda  8b3e                 mov edi, dword ptr [esi]
// 00460cdc  03c0                 add eax, eax
// 00460cde  03c0                 add eax, eax
// 00460ce0  6a10                 push 0x10
// 00460ce2  50                   push eax
// 00460ce3  e8e82e0900           call 0x4f3bd0
// 00460ce8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00460cec  8906                 mov dword ptr [esi], eax
// 00460cee  8b7608               mov esi, dword ptr [esi + 8]
// 00460cf1  83c408               add esp, 8
// 00460cf4  3bce                 cmp ecx, esi
// 00460cf6  7c02                 jl 0x460cfa
// 00460cf8  8bce                 mov ecx, esi
// 00460cfa  8d0c49               lea ecx, [ecx + ecx*2]
// 00460cfd  8d1488               lea edx, [eax + ecx*4]
// 00460d00  3bc2                 cmp eax, edx
// 00460d02  8bcf                 mov ecx, edi
// 00460d04  731e                 jae 0x460d24
// 00460d06  85c0                 test eax, eax
// 00460d08  7410                 je 0x460d1a
// 00460d0a  8b31                 mov esi, dword ptr [ecx]
// 00460d0c  8930                 mov dword ptr [eax], esi
// 00460d0e  8b7104               mov esi, dword ptr [ecx + 4]
// 00460d11  897004               mov dword ptr [eax + 4], esi
// 00460d14  8b7108               mov esi, dword ptr [ecx + 8]
// 00460d17  897008               mov dword ptr [eax + 8], esi
// 00460d1a  83c00c               add eax, 0xc
// 00460d1d  83c10c               add ecx, 0xc
// 00460d20  3bc2                 cmp eax, edx
// 00460d22  72e2                 jb 0x460d06
// 00460d24  57                   push edi
// 00460d25  e856260900           call 0x4f3380
// 00460d2a  83c404               add esp, 4
// 00460d2d  5f                   pop edi
// 00460d2e  5e                   pop esi
// 00460d2f  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\GWindow.cpp (function ?realloc@?$Array@VLoopBody@GWindow@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/GWindow.cpp
