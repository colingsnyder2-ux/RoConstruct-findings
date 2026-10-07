// roc 2007-08 00648460  unit: CXTPCommandBar  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00648460
//
// 00648460  51                   push ecx
// 00648461  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00648465  56                   push esi
// 00648466  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0064846a  6840ab7800           push 0x78ab40
// 0064846f  50                   push eax
// 00648470  56                   push esi
// 00648471  c644241089           mov byte ptr [esp + 0x10], 0x89
// 00648476  c644241150           mov byte ptr [esp + 0x11], 0x50
// 0064847b  c64424124e           mov byte ptr [esp + 0x12], 0x4e
// 00648480  c644241347           mov byte ptr [esp + 0x13], 0x47
// 00648485  ff15d0d27700         call dword ptr [0x77d2d0]
// 0064848b  85c0                 test eax, eax
// 0064848d  7505                 jne 0x648494
// 0064848f  33c0                 xor eax, eax
// 00648491  5e                   pop esi
// 00648492  59                   pop ecx
// 00648493  c3                   ret 
// 00648494  50                   push eax
// 00648495  56                   push esi
// 00648496  ff15d4d27700         call dword ptr [0x77d2d4]
// 0064849c  85c0                 test eax, eax
// 0064849e  74ef                 je 0x64848f
// 006484a0  57                   push edi
// 006484a1  50                   push eax
// 006484a2  be04000000           mov esi, 4
// 006484a7  8d7c240c             lea edi, [esp + 0xc]
// 006484ab  ff1568d27700         call dword ptr [0x77d268]
// 006484b1  8b08                 mov ecx, dword ptr [eax]
// 006484b3  3b0f                 cmp ecx, dword ptr [edi]
// 006484b5  7512                 jne 0x6484c9
// 006484b7  83ee04               sub esi, 4
// 006484ba  83c704               add edi, 4
// 006484bd  83c004               add eax, 4
// 006484c0  83fe04               cmp esi, 4
// 006484c3  73ec                 jae 0x6484b1
// 006484c5  85f6                 test esi, esi
// 006484c7  7468                 je 0x648531
// 006484c9  0fb608               movzx ecx, byte ptr [eax]
// 006484cc  0fb617               movzx edx, byte ptr [edi]
// 006484cf  2bca                 sub ecx, edx
// 006484d1  7545                 jne 0x648518
// 006484d3  83ee01               sub esi, 1
// 006484d6  83c701               add edi, 1
// 006484d9  83c001               add eax, 1
// 006484dc  85f6                 test esi, esi
// 006484de  7451                 je 0x648531
// 006484e0  0fb608               movzx ecx, byte ptr [eax]
// 006484e3  0fb617               movzx edx, byte ptr [edi]
// 006484e6  2bca                 sub ecx, edx
// 006484e8  752e                 jne 0x648518
// 006484ea  83ee01               sub esi, 1
// 006484ed  83c701               add edi, 1
// 006484f0  83c001               add eax, 1
// 006484f3  85f6                 test esi, esi
// 006484f5  743a                 je 0x648531
// 006484f7  0fb608               movzx ecx, byte ptr [eax]
// 006484fa  0fb617               movzx edx, byte ptr [edi]
// 006484fd  2bca                 sub ecx, edx
// 006484ff  7517                 jne 0x648518
// 00648501  83ee01               sub esi, 1
// 00648504  83c701               add edi, 1
// 00648507  83c001               add eax, 1
// 0064850a  85f6                 test esi, esi
// 0064850c  7423                 je 0x648531
// 0064850e  0fb608               movzx ecx, byte ptr [eax]
// 00648511  0fb607               movzx eax, byte ptr [edi]
// 00648514  2bc8                 sub ecx, eax
// 00648516  7419                 je 0x648531
// 00648518  85c9                 test ecx, ecx
// 0064851a  b801000000           mov eax, 1
// 0064851f  7f12                 jg 0x648533
// 00648521  83c8ff               or eax, 0xffffffff
// 00648524  33c9                 xor ecx, ecx
// 00648526  85c0                 test eax, eax
// 00648528  0f94c1               sete cl
// 0064852b  5f                   pop edi
// 0064852c  5e                   pop esi
// 0064852d  8bc1                 mov eax, ecx
// 0064852f  59                   pop ecx
// 00648530  c3                   ret 
// 00648531  33c0                 xor eax, eax
// 00648533  33c9                 xor ecx, ecx
// 00648535  85c0                 test eax, eax
// 00648537  0f94c1               sete cl
// 0064853a  5f                   pop edi
// 0064853b  5e                   pop esi
// 0064853c  8bc1                 mov eax, ecx
// 0064853e  59                   pop ecx
// 0064853f  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?IsPngBitmapResource@CXTPImageManagerIcon@@SAHPAUHINSTANCE__@@PBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
