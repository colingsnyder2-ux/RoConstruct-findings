// from server: 100% by auto
// roc 2012-06 009ca010  unit: ATL::CRegObject  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ca010
//
// 009ca010  56                   push esi
// 009ca011  57                   push edi
// 009ca012  8bf9                 mov edi, ecx
// 009ca014  8b470c               mov eax, dword ptr [edi + 0xc]
// 009ca017  85c0                 test eax, eax
// 009ca019  7423                 je 0x9ca03e
// 009ca01b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009ca01f  8b5104               mov edx, dword ptr [ecx + 4]
// 009ca022  8b09                 mov ecx, dword ptr [ecx]
// 009ca024  6a00                 push 0
// 009ca026  52                   push edx
// 009ca027  51                   push ecx
// 009ca028  ffd0                 call eax
// 009ca02a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009ca02e  50                   push eax
// 009ca02f  56                   push esi
// 009ca030  8bcf                 mov ecx, edi
// 009ca032  e8f9feffff           call 0x9c9f30
// 009ca037  5f                   pop edi
// 009ca038  8bc6                 mov eax, esi
// 009ca03a  5e                   pop esi
// 009ca03b  c20800               ret 8
// 009ca03e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009ca042  33c0                 xor eax, eax
// 009ca044  50                   push eax
// 009ca045  56                   push esi
// 009ca046  8bcf                 mov ecx, edi
// 009ca048  e8e3feffff           call 0x9c9f30
// 009ca04d  5f                   pop edi
// 009ca04e  8bc6                 mov eax, esi
// 009ca050  5e                   pop esi
// 009ca051  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@ABUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
