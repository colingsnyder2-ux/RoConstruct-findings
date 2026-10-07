// roc 2011-06 00851be0  unit: CSourceStream  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851be0
//
// 00851be0  56                   push esi
// 00851be1  8bf1                 mov esi, ecx
// 00851be3  8b4604               mov eax, dword ptr [esi + 4]
// 00851be6  57                   push edi
// 00851be7  85c0                 test eax, eax
// 00851be9  741d                 je 0x851c08
// 00851beb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00851bef  6a00                 push 0
// 00851bf1  51                   push ecx
// 00851bf2  ffd0                 call eax
// 00851bf4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00851bf8  50                   push eax
// 00851bf9  57                   push edi
// 00851bfa  8bce                 mov ecx, esi
// 00851bfc  e80ffeffff           call 0x851a10
// 00851c01  8bc7                 mov eax, edi
// 00851c03  5f                   pop edi
// 00851c04  5e                   pop esi
// 00851c05  c20800               ret 8
// 00851c08  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00851c0c  33c0                 xor eax, eax
// 00851c0e  50                   push eax
// 00851c0f  57                   push edi
// 00851c10  8bce                 mov ecx, esi
// 00851c12  e8f9fdffff           call 0x851a10
// 00851c17  8bc7                 mov eax, edi
// 00851c19  5f                   pop edi
// 00851c1a  5e                   pop esi
// 00851c1b  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
