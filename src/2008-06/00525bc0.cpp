// from server: 100% by colin
// roc 2008-06 00525bc0  unit: seg_00520000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00525bc0
//
// 00525bc0  51                   push ecx
// 00525bc1  85f6                 test esi, esi
// 00525bc3  7504                 jne 0x525bc9
// 00525bc5  33c0                 xor eax, eax
// 00525bc7  59                   pop ecx
// 00525bc8  c3                   ret 
// 00525bc9  56                   push esi
// 00525bca  6a01                 push 1
// 00525bcc  8d442408             lea eax, [esp + 8]
// 00525bd0  6a04                 push 4
// 00525bd2  50                   push eax
// 00525bd3  c7442410d2040000     mov dword ptr [esp + 0x10], 0x4d2
// 00525bdb  ff15d0278000         call dword ptr [0x8027d0]
// 00525be1  83c410               add esp, 0x10
// 00525be4  83f801               cmp eax, 1
// 00525be7  75dc                 jne 0x525bc5
// 00525be9  57                   push edi
// 00525bea  8b3db8278000         mov edi, dword ptr [0x8027b8]
// 00525bf0  6a00                 push 0
// 00525bf2  6a00                 push 0
// 00525bf4  56                   push esi
// 00525bf5  ffd7                 call edi
// 00525bf7  83c40c               add esp, 0xc
// 00525bfa  85c0                 test eax, eax
// 00525bfc  7518                 jne 0x525c16
// 00525bfe  56                   push esi
// 00525bff  6a01                 push 1
// 00525c01  8d4c240c             lea ecx, [esp + 0xc]
// 00525c05  6a04                 push 4
// 00525c07  51                   push ecx
// 00525c08  ff15c0278000         call dword ptr [0x8027c0]
// 00525c0e  83c410               add esp, 0x10
// 00525c11  83f801               cmp eax, 1
// 00525c14  7405                 je 0x525c1b
// 00525c16  33c0                 xor eax, eax
// 00525c18  5f                   pop edi
// 00525c19  59                   pop ecx
// 00525c1a  c3                   ret 
// 00525c1b  6a00                 push 0
// 00525c1d  6a00                 push 0
// 00525c1f  56                   push esi
// 00525c20  ffd7                 call edi
// 00525c22  83c40c               add esp, 0xc
// 00525c25  b801000000           mov eax, 1
// 00525c2a  5f                   pop edi
// 00525c2b  59                   pop ecx
// 00525c2c  c3                   ret 
// library g3d-6.09-ijg-dll/jutils.c (function _isFileGood)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-ijg-dll jutils.c
