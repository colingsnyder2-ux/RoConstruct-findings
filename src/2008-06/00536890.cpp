// roc 2008-06 00536890  unit: seg_00530000  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00536890
//
// 00536890  83ec10               sub esp, 0x10
// 00536893  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00536897  8b81a8010000         mov eax, dword ptr [ecx + 0x1a8]
// 0053689d  8b4018               mov eax, dword ptr [eax + 0x18]
// 005368a0  8b5004               mov edx, dword ptr [eax + 4]
// 005368a3  56                   push esi
// 005368a4  8b715c               mov esi, dword ptr [ecx + 0x5c]
// 005368a7  57                   push edi
// 005368a8  8b38                 mov edi, dword ptr [eax]
// 005368aa  8b4008               mov eax, dword ptr [eax + 8]
// 005368ad  8944240c             mov dword ptr [esp + 0xc], eax
// 005368b1  8b442428             mov eax, dword ptr [esp + 0x28]
// 005368b5  89542408             mov dword ptr [esp + 8], edx
// 005368b9  89742410             mov dword ptr [esp + 0x10], esi
// 005368bd  85c0                 test eax, eax
// 005368bf  7e79                 jle 0x53693a
// 005368c1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005368c5  53                   push ebx
// 005368c6  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005368ca  2bd9                 sub ebx, ecx
// 005368cc  55                   push ebp
// 005368cd  894c2424             mov dword ptr [esp + 0x24], ecx
// 005368d1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005368d5  89442430             mov dword ptr [esp + 0x30], eax
// 005368d9  8da42400000000       lea esp, [esp]
// 005368e0  8b040b               mov eax, dword ptr [ebx + ecx]
// 005368e3  8b11                 mov edx, dword ptr [ecx]
// 005368e5  85f6                 test esi, esi
// 005368e7  7641                 jbe 0x53692a
// 005368e9  8da42400000000       lea esp, [esp]
// 005368f0  0fb608               movzx ecx, byte ptr [eax]
// 005368f3  0fb65801             movzx ebx, byte ptr [eax + 1]
// 005368f7  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005368fb  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 005368ff  0fb60c39             movzx ecx, byte ptr [ecx + edi]
// 00536903  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00536907  40                   inc eax
// 00536908  03cb                 add ecx, ebx
// 0053690a  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0053690e  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00536912  40                   inc eax
// 00536913  03cb                 add ecx, ebx
// 00536915  880a                 mov byte ptr [edx], cl
// 00536917  40                   inc eax
// 00536918  42                   inc edx
// 00536919  83ee01               sub esi, 1
// 0053691c  75d2                 jne 0x5368f0
// 0053691e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00536922  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00536926  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0053692a  83c104               add ecx, 4
// 0053692d  836c243001           sub dword ptr [esp + 0x30], 1
// 00536932  894c2424             mov dword ptr [esp + 0x24], ecx
// 00536936  75a8                 jne 0x5368e0
// 00536938  5d                   pop ebp
// 00536939  5b                   pop ebx
// 0053693a  5f                   pop edi
// 0053693b  5e                   pop esi
// 0053693c  83c410               add esp, 0x10
// 0053693f  c3                   ret 
// library jpeg-6b/jquant1.c (function _color_quantize3)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
