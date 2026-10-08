// roc 2009-12 0060bc90  unit: seg_00600000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060bc90
//
// 0060bc90  8b442408             mov eax, dword ptr [esp + 8]
// 0060bc94  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060bc98  8b542410             mov edx, dword ptr [esp + 0x10]
// 0060bc9c  53                   push ebx
// 0060bc9d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0060bca1  56                   push esi
// 0060bca2  8d3481               lea esi, [ecx + eax*4]
// 0060bca5  8b442414             mov eax, dword ptr [esp + 0x14]
// 0060bca9  57                   push edi
// 0060bcaa  8d3c90               lea edi, [eax + edx*4]
// 0060bcad  85db                 test ebx, ebx
// 0060bcaf  7e20                 jle 0x60bcd1
// 0060bcb1  55                   push ebp
// 0060bcb2  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0060bcb6  8b06                 mov eax, dword ptr [esi]
// 0060bcb8  8b0f                 mov ecx, dword ptr [edi]
// 0060bcba  55                   push ebp
// 0060bcbb  50                   push eax
// 0060bcbc  51                   push ecx
// 0060bcbd  83c604               add esi, 4
// 0060bcc0  83c704               add edi, 4
// 0060bcc3  e81e901e00           call 0x7f4ce6
// 0060bcc8  4b                   dec ebx
// 0060bcc9  83c40c               add esp, 0xc
// 0060bccc  85db                 test ebx, ebx
// 0060bcce  7fe6                 jg 0x60bcb6
// 0060bcd0  5d                   pop ebp
// 0060bcd1  5f                   pop edi
// 0060bcd2  5e                   pop esi
// 0060bcd3  5b                   pop ebx
// 0060bcd4  c3                   ret 
// library jpeg-6b/jutils.c (function _jcopy_sample_rows)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
