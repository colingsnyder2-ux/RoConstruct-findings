// roc 2009-12 005f3450  unit: seg_005f0000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f3450
//
// 005f3450  6aff                 push -1
// 005f3452  6801f59300           push 0x93f501
// 005f3457  64a100000000         mov eax, dword ptr fs:[0]
// 005f345d  50                   push eax
// 005f345e  64892500000000       mov dword ptr fs:[0], esp
// 005f3465  51                   push ecx
// 005f3466  33c0                 xor eax, eax
// 005f3468  890424               mov dword ptr [esp], eax
// 005f346b  56                   push esi
// 005f346c  8b742418             mov esi, dword ptr [esp + 0x18]
// 005f3470  894604               mov dword ptr [esi + 4], eax
// 005f3473  894608               mov dword ptr [esi + 8], eax
// 005f3476  8906                 mov dword ptr [esi], eax
// 005f3478  894610               mov dword ptr [esi + 0x10], eax
// 005f347b  894614               mov dword ptr [esi + 0x14], eax
// 005f347e  89460c               mov dword ptr [esi + 0xc], eax
// 005f3481  89442410             mov dword ptr [esp + 0x10], eax
// 005f3485  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f3489  56                   push esi
// 005f348a  50                   push eax
// 005f348b  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005f3493  e888f5ffff           call 0x5f2a20
// 005f3498  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f349c  8bc6                 mov eax, esi
// 005f349e  5e                   pop esi
// 005f349f  64890d00000000       mov dword ptr fs:[0], ecx
// 005f34a6  83c410               add esp, 0x10
// 005f34a9  c20800               ret 8
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?frustum@GCamera@G3D@@QBE?AVFrustum@12@ABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
