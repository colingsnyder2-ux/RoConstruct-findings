// roc 2009-06 004aab70  unit: G3D::H_N::?$Table  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004aab70
//
// 004aab70  83ec0c               sub esp, 0xc
// 004aab73  56                   push esi
// 004aab74  8bf1                 mov esi, ecx
// 004aab76  8b4604               mov eax, dword ptr [esi + 4]
// 004aab79  3b4608               cmp eax, dword ptr [esi + 8]
// 004aab7c  8b0e                 mov ecx, dword ptr [esi]
// 004aab7e  7d28                 jge 0x4aaba8
// 004aab80  8d0440               lea eax, [eax + eax*2]
// 004aab83  8d0481               lea eax, [ecx + eax*4]
// 004aab86  85c0                 test eax, eax
// 004aab88  7414                 je 0x4aab9e
// 004aab8a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004aab8e  8b11                 mov edx, dword ptr [ecx]
// 004aab90  8910                 mov dword ptr [eax], edx
// 004aab92  8b5104               mov edx, dword ptr [ecx + 4]
// 004aab95  895004               mov dword ptr [eax + 4], edx
// 004aab98  8b4908               mov ecx, dword ptr [ecx + 8]
// 004aab9b  894808               mov dword ptr [eax + 8], ecx
// 004aab9e  ff4604               inc dword ptr [esi + 4]
// 004aaba1  5e                   pop esi
// 004aaba2  83c40c               add esp, 0xc
// 004aaba5  c20400               ret 4
// 004aaba8  57                   push edi
// 004aaba9  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004aabad  3bf9                 cmp edi, ecx
// 004aabaf  7232                 jb 0x4aabe3
// 004aabb1  8d1440               lea edx, [eax + eax*2]
// 004aabb4  8d0c91               lea ecx, [ecx + edx*4]
// 004aabb7  3bf9                 cmp edi, ecx
// 004aabb9  7328                 jae 0x4aabe3
// 004aabbb  8b17                 mov edx, dword ptr [edi]
// 004aabbd  8b4f08               mov ecx, dword ptr [edi + 8]
// 004aabc0  8b4704               mov eax, dword ptr [edi + 4]
// 004aabc3  89542408             mov dword ptr [esp + 8], edx
// 004aabc7  8d542408             lea edx, [esp + 8]
// 004aabcb  894c2410             mov dword ptr [esp + 0x10], ecx
// 004aabcf  52                   push edx
// 004aabd0  8bce                 mov ecx, esi
// 004aabd2  89442410             mov dword ptr [esp + 0x10], eax
// 004aabd6  e895ffffff           call 0x4aab70
// 004aabdb  5f                   pop edi
// 004aabdc  5e                   pop esi
// 004aabdd  83c40c               add esp, 0xc
// 004aabe0  c20400               ret 4
// 004aabe3  6a00                 push 0
// 004aabe5  40                   inc eax
// 004aabe6  50                   push eax
// 004aabe7  8bce                 mov ecx, esi
// 004aabe9  e8f2f9ffff           call 0x4aa5e0
// 004aabee  8b4604               mov eax, dword ptr [esi + 4]
// 004aabf1  8b0e                 mov ecx, dword ptr [esi]
// 004aabf3  8b17                 mov edx, dword ptr [edi]
// 004aabf5  8d0440               lea eax, [eax + eax*2]
// 004aabf8  8d4481f4             lea eax, [ecx + eax*4 - 0xc]
// 004aabfc  8910                 mov dword ptr [eax], edx
// 004aabfe  8b4f04               mov ecx, dword ptr [edi + 4]
// 004aac01  894804               mov dword ptr [eax + 4], ecx
// 004aac04  8b5708               mov edx, dword ptr [edi + 8]
// 004aac07  5f                   pop edi
// 004aac08  895008               mov dword ptr [eax + 8], edx
// 004aac0b  5e                   pop esi
// 004aac0c  83c40c               add esp, 0xc
// 004aac0f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?append@?$Array@VLoopBody@GWindow@G3D@@@G3D@@QAEXABVLoopBody@GWindow@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
