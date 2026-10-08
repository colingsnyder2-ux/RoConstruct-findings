// from server: 100% by auto
// roc 2007-08 00474fc0  unit: CInstanceRecord::CNameItem  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474fc0
//
// 00474fc0  56                   push esi
// 00474fc1  8bf1                 mov esi, ecx
// 00474fc3  8b4608               mov eax, dword ptr [esi + 8]
// 00474fc6  57                   push edi
// 00474fc7  8b3e                 mov edi, dword ptr [esi]
// 00474fc9  03c0                 add eax, eax
// 00474fcb  6a10                 push 0x10
// 00474fcd  50                   push eax
// 00474fce  e88db00800           call 0x500060
// 00474fd3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00474fd7  8906                 mov dword ptr [esi], eax
// 00474fd9  8b7608               mov esi, dword ptr [esi + 8]
// 00474fdc  83c408               add esp, 8
// 00474fdf  3bce                 cmp ecx, esi
// 00474fe1  7d02                 jge 0x474fe5
// 00474fe3  8bf1                 mov esi, ecx
// 00474fe5  8d1470               lea edx, [eax + esi*2]
// 00474fe8  3bc2                 cmp eax, edx
// 00474fea  8bcf                 mov ecx, edi
// 00474fec  7316                 jae 0x475004
// 00474fee  8bff                 mov edi, edi
// 00474ff0  85c0                 test eax, eax
// 00474ff2  7406                 je 0x474ffa
// 00474ff4  668b31               mov si, word ptr [ecx]
// 00474ff7  668930               mov word ptr [eax], si
// 00474ffa  83c002               add eax, 2
// 00474ffd  83c102               add ecx, 2
// 00475000  3bc2                 cmp eax, edx
// 00475002  72ec                 jb 0x474ff0
// 00475004  57                   push edi
// 00475005  e806a80800           call 0x4ff810
// 0047500a  83c404               add esp, 4
// 0047500d  5f                   pop edi
// 0047500e  5e                   pop esi
// 0047500f  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?realloc@?$Array@G@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
