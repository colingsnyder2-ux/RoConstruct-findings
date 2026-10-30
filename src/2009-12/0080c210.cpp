// roc 2009-12 0080c210  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080c210
//
// 0080c210  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0080c213  83ec18               sub esp, 0x18
// 0080c216  56                   push esi
// 0080c217  85c0                 test eax, eax
// 0080c219  7416                 je 0x80c231
// 0080c21b  8b742420             mov esi, dword ptr [esp + 0x20]
// 0080c21f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0080c222  56                   push esi
// 0080c223  e8a8ceffff           call 0x8090d0
// 0080c228  8bc6                 mov eax, esi
// 0080c22a  5e                   pop esi
// 0080c22b  83c418               add esp, 0x18
// 0080c22e  c20400               ret 4
// 0080c231  8b01                 mov eax, dword ptr [ecx]
// 0080c233  85c0                 test eax, eax
// 0080c235  7417                 je 0x80c24e
// 0080c237  8b742420             mov esi, dword ptr [esp + 0x20]
// 0080c23b  50                   push eax
// 0080c23c  56                   push esi
// 0080c23d  e89ee9ffff           call 0x80abe0
// 0080c242  83c408               add esp, 8
// 0080c245  8bc6                 mov eax, esi
// 0080c247  5e                   pop esi
// 0080c248  83c418               add esp, 0x18
// 0080c24b  c20400               ret 4
// 0080c24e  8b4904               mov ecx, dword ptr [ecx + 4]
// 0080c251  85c9                 test ecx, ecx
// 0080c253  742a                 je 0x80c27f
// 0080c255  8d442404             lea eax, [esp + 4]
// 0080c259  50                   push eax
// 0080c25a  6a18                 push 0x18
// 0080c25c  51                   push ecx
// 0080c25d  ff155cb19800         call dword ptr [0x98b15c]
// 0080c263  85c0                 test eax, eax
// 0080c265  7418                 je 0x80c27f
// 0080c267  8b442420             mov eax, dword ptr [esp + 0x20]
// 0080c26b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0080c26f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0080c273  8908                 mov dword ptr [eax], ecx
// 0080c275  895004               mov dword ptr [eax + 4], edx
// 0080c278  5e                   pop esi
// 0080c279  83c418               add esp, 0x18
// 0080c27c  c20400               ret 4
// 0080c27f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0080c283  c70000000000         mov dword ptr [eax], 0
// 0080c289  c7400400000000       mov dword ptr [eax + 4], 0
// 0080c290  5e                   pop esi
// 0080c291  83c418               add esp, 0x18
// 0080c294  c20400               ret 4
// copied from an identical function in another client (function ?_GetExtent@CXTPImageManagerIconHandle@@ABE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp