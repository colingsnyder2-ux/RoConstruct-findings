// roc 2011-06 00851c20  unit: CSourceStream  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851c20
//
// 00851c20  56                   push esi
// 00851c21  57                   push edi
// 00851c22  8bf9                 mov edi, ecx
// 00851c24  8b470c               mov eax, dword ptr [edi + 0xc]
// 00851c27  85c0                 test eax, eax
// 00851c29  7423                 je 0x851c4e
// 00851c2b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00851c2f  8b5104               mov edx, dword ptr [ecx + 4]
// 00851c32  8b09                 mov ecx, dword ptr [ecx]
// 00851c34  6a00                 push 0
// 00851c36  52                   push edx
// 00851c37  51                   push ecx
// 00851c38  ffd0                 call eax
// 00851c3a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00851c3e  50                   push eax
// 00851c3f  56                   push esi
// 00851c40  8bcf                 mov ecx, edi
// 00851c42  e8c9fdffff           call 0x851a10
// 00851c47  5f                   pop edi
// 00851c48  8bc6                 mov eax, esi
// 00851c4a  5e                   pop esi
// 00851c4b  c20800               ret 8
// 00851c4e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00851c52  33c0                 xor eax, eax
// 00851c54  50                   push eax
// 00851c55  56                   push esi
// 00851c56  8bcf                 mov ecx, edi
// 00851c58  e8b3fdffff           call 0x851a10
// 00851c5d  5f                   pop edi
// 00851c5e  8bc6                 mov eax, esi
// 00851c60  5e                   pop esi
// 00851c61  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@ABUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
