// from server: 100% by auto
// roc 2010-06 0077eae0  unit: seg_00770000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077eae0
//
// 0077eae0  8b06                 mov eax, dword ptr [esi]
// 0077eae2  8b403c               mov eax, dword ptr [eax + 0x3c]
// 0077eae5  51                   push ecx
// 0077eae6  52                   push edx
// 0077eae7  85c0                 test eax, eax
// 0077eae9  7521                 jne 0x77eb0c
// 0077eaeb  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0077eaee  687030a500           push 0xa53070
// 0077eaf3  51                   push ecx
// 0077eaf4  e8e742fbff           call 0x732de0
// 0077eaf9  83c410               add esp, 0x10
// 0077eafc  6a00                 push 0
// 0077eafe  50                   push eax
// 0077eaff  8b460c               mov eax, dword ptr [esi + 0xc]
// 0077eb02  50                   push eax
// 0077eb03  e8e8390000           call 0x7824f0
// 0077eb08  83c40c               add esp, 0xc
// 0077eb0b  c3                   ret 
// 0077eb0c  8b5610               mov edx, dword ptr [esi + 0x10]
// 0077eb0f  50                   push eax
// 0077eb10  684830a500           push 0xa53048
// 0077eb15  52                   push edx
// 0077eb16  e8c542fbff           call 0x732de0
// 0077eb1b  83c414               add esp, 0x14
// 0077eb1e  6a00                 push 0
// 0077eb20  50                   push eax
// 0077eb21  8b460c               mov eax, dword ptr [esi + 0xc]
// 0077eb24  50                   push eax
// 0077eb25  e8c6390000           call 0x7824f0
// 0077eb2a  83c40c               add esp, 0xc
// 0077eb2d  c3                   ret 
// library lua-5.1.4/lparser.c (function _errorlimit)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
