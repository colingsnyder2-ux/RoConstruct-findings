// roc 2008-06 0052aca0  unit: seg_00520000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052aca0
//
// 0052aca0  53                   push ebx
// 0052aca1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052aca5  55                   push ebp
// 0052aca6  56                   push esi
// 0052aca7  57                   push edi
// 0052aca8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052acac  8b6f04               mov ebp, dword ptr [edi + 4]
// 0052acaf  81fbf0c99a3b         cmp ebx, 0x3b9ac9f0
// 0052acb5  761c                 jbe 0x52acd3
// 0052acb7  8b07                 mov eax, dword ptr [edi]
// 0052acb9  c7401436000000       mov dword ptr [eax + 0x14], 0x36
// 0052acc0  8b0f                 mov ecx, dword ptr [edi]
// 0052acc2  c7411803000000       mov dword ptr [ecx + 0x18], 3
// 0052acc9  8b17                 mov edx, dword ptr [edi]
// 0052accb  8b02                 mov eax, dword ptr [edx]
// 0052accd  57                   push edi
// 0052acce  ffd0                 call eax
// 0052acd0  83c404               add esp, 4
// 0052acd3  8bc3                 mov eax, ebx
// 0052acd5  83e007               and eax, 7
// 0052acd8  7609                 jbe 0x52ace3
// 0052acda  b908000000           mov ecx, 8
// 0052acdf  2bc8                 sub ecx, eax
// 0052ace1  03d9                 add ebx, ecx
// 0052ace3  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052ace7  85c0                 test eax, eax
// 0052ace9  7c05                 jl 0x52acf0
// 0052aceb  83f802               cmp eax, 2
// 0052acee  7c18                 jl 0x52ad08
// 0052acf0  8b17                 mov edx, dword ptr [edi]
// 0052acf2  c742140e000000       mov dword ptr [edx + 0x14], 0xe
// 0052acf9  8b0f                 mov ecx, dword ptr [edi]
// 0052acfb  894118               mov dword ptr [ecx + 0x18], eax
// 0052acfe  8b17                 mov edx, dword ptr [edi]
// 0052ad00  8b02                 mov eax, dword ptr [edx]
// 0052ad02  57                   push edi
// 0052ad03  ffd0                 call eax
// 0052ad05  83c404               add esp, 4
// 0052ad08  8d4b10               lea ecx, [ebx + 0x10]
// 0052ad0b  51                   push ecx
// 0052ad0c  57                   push edi
// 0052ad0d  e84e5a0000           call 0x530760
// 0052ad12  8bf0                 mov esi, eax
// 0052ad14  83c408               add esp, 8
// 0052ad17  85f6                 test esi, esi
// 0052ad19  751c                 jne 0x52ad37
// 0052ad1b  8b17                 mov edx, dword ptr [edi]
// 0052ad1d  c7421436000000       mov dword ptr [edx + 0x14], 0x36
// 0052ad24  8b07                 mov eax, dword ptr [edi]
// 0052ad26  c7401804000000       mov dword ptr [eax + 0x18], 4
// 0052ad2d  8b0f                 mov ecx, dword ptr [edi]
// 0052ad2f  8b11                 mov edx, dword ptr [ecx]
// 0052ad31  57                   push edi
// 0052ad32  ffd2                 call edx
// 0052ad34  83c404               add esp, 4
// 0052ad37  8d4310               lea eax, [ebx + 0x10]
// 0052ad3a  01454c               add dword ptr [ebp + 0x4c], eax
// 0052ad3d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052ad41  8b4c853c             mov ecx, dword ptr [ebp + eax*4 + 0x3c]
// 0052ad45  895e04               mov dword ptr [esi + 4], ebx
// 0052ad48  890e                 mov dword ptr [esi], ecx
// 0052ad4a  c7460800000000       mov dword ptr [esi + 8], 0
// 0052ad51  8974853c             mov dword ptr [ebp + eax*4 + 0x3c], esi
// 0052ad55  5f                   pop edi
// 0052ad56  8d4610               lea eax, [esi + 0x10]
// 0052ad59  5e                   pop esi
// 0052ad5a  5d                   pop ebp
// 0052ad5b  5b                   pop ebx
// 0052ad5c  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _alloc_large)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
