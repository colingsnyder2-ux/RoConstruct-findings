// from server: 100% by auto
// roc 2008-06 006607d0  unit: RBX::FilterStairs  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006607d0
//
// 006607d0  8b06                 mov eax, dword ptr [esi]
// 006607d2  8b403c               mov eax, dword ptr [eax + 0x3c]
// 006607d5  51                   push ecx
// 006607d6  52                   push edx
// 006607d7  85c0                 test eax, eax
// 006607d9  7521                 jne 0x6607fc
// 006607db  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006607de  68f8c48400           push 0x84c4f8
// 006607e3  51                   push ecx
// 006607e4  e8d722fcff           call 0x622ac0
// 006607e9  83c410               add esp, 0x10
// 006607ec  6a00                 push 0
// 006607ee  50                   push eax
// 006607ef  8b460c               mov eax, dword ptr [esi + 0xc]
// 006607f2  50                   push eax
// 006607f3  e878390000           call 0x664170
// 006607f8  83c40c               add esp, 0xc
// 006607fb  c3                   ret 
// 006607fc  8b5610               mov edx, dword ptr [esi + 0x10]
// 006607ff  50                   push eax
// 00660800  68d0c48400           push 0x84c4d0
// 00660805  52                   push edx
// 00660806  e8b522fcff           call 0x622ac0
// 0066080b  83c414               add esp, 0x14
// 0066080e  6a00                 push 0
// 00660810  50                   push eax
// 00660811  8b460c               mov eax, dword ptr [esi + 0xc]
// 00660814  50                   push eax
// 00660815  e856390000           call 0x664170
// 0066081a  83c40c               add esp, 0xc
// 0066081d  c3                   ret 
// library lua-5.1.4/lparser.c (function _errorlimit)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
