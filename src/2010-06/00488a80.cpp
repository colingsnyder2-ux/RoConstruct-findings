// from server: 100% by auto
// roc 2010-06 00488a80  unit: G3D::Win32Window  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00488a80
//
// 00488a80  53                   push ebx
// 00488a81  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00488a85  56                   push esi
// 00488a86  8bf1                 mov esi, ecx
// 00488a88  8b06                 mov eax, dword ptr [esi]
// 00488a8a  57                   push edi
// 00488a8b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00488a8f  3bf8                 cmp edi, eax
// 00488a91  720a                 jb 0x488a9d
// 00488a93  8b4e04               mov ecx, dword ptr [esi + 4]
// 00488a96  8d1488               lea edx, [eax + ecx*4]
// 00488a99  3bfa                 cmp edi, edx
// 00488a9b  7268                 jb 0x488b05
// 00488a9d  3bd8                 cmp ebx, eax
// 00488a9f  720a                 jb 0x488aab
// 00488aa1  8b4e04               mov ecx, dword ptr [esi + 4]
// 00488aa4  8d1488               lea edx, [eax + ecx*4]
// 00488aa7  3bda                 cmp ebx, edx
// 00488aa9  725a                 jb 0x488b05
// 00488aab  8b4e04               mov ecx, dword ptr [esi + 4]
// 00488aae  8d5101               lea edx, [ecx + 1]
// 00488ab1  3b5608               cmp edx, dword ptr [esi + 8]
// 00488ab4  7d26                 jge 0x488adc
// 00488ab6  8d0488               lea eax, [eax + ecx*4]
// 00488ab9  85c0                 test eax, eax
// 00488abb  7404                 je 0x488ac1
// 00488abd  d907                 fld dword ptr [edi]
// 00488abf  d918                 fstp dword ptr [eax]
// 00488ac1  8b4604               mov eax, dword ptr [esi + 4]
// 00488ac4  8b0e                 mov ecx, dword ptr [esi]
// 00488ac6  8d448104             lea eax, [ecx + eax*4 + 4]
// 00488aca  85c0                 test eax, eax
// 00488acc  7404                 je 0x488ad2
// 00488ace  d903                 fld dword ptr [ebx]
// 00488ad0  d918                 fstp dword ptr [eax]
// 00488ad2  83460402             add dword ptr [esi + 4], 2
// 00488ad6  5f                   pop edi
// 00488ad7  5e                   pop esi
// 00488ad8  5b                   pop ebx
// 00488ad9  c20800               ret 8
// 00488adc  83c102               add ecx, 2
// 00488adf  6a00                 push 0
// 00488ae1  51                   push ecx
// 00488ae2  8bce                 mov ecx, esi
// 00488ae4  e897feffff           call 0x488980
// 00488ae9  d907                 fld dword ptr [edi]
// 00488aeb  8b5604               mov edx, dword ptr [esi + 4]
// 00488aee  8b06                 mov eax, dword ptr [esi]
// 00488af0  d95c90f8             fstp dword ptr [eax + edx*4 - 8]
// 00488af4  8b4e04               mov ecx, dword ptr [esi + 4]
// 00488af7  8b16                 mov edx, dword ptr [esi]
// 00488af9  d903                 fld dword ptr [ebx]
// 00488afb  5f                   pop edi
// 00488afc  d95c8afc             fstp dword ptr [edx + ecx*4 - 4]
// 00488b00  5e                   pop esi
// 00488b01  5b                   pop ebx
// 00488b02  c20800               ret 8
// 00488b05  f30f1007             movss xmm0, dword ptr [edi]
// 00488b09  8d442410             lea eax, [esp + 0x10]
// 00488b0d  50                   push eax
// 00488b0e  8d4c2418             lea ecx, [esp + 0x18]
// 00488b12  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 00488b18  f30f1003             movss xmm0, dword ptr [ebx]
// 00488b1c  51                   push ecx
// 00488b1d  8bce                 mov ecx, esi
// 00488b1f  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 00488b25  e856ffffff           call 0x488a80
// 00488b2a  5f                   pop edi
// 00488b2b  5e                   pop esi
// 00488b2c  5b                   pop ebx
// 00488b2d  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@M@G3D@@QAEXABM0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
