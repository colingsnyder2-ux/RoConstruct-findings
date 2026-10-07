// roc 2011-06 00851ba0  unit: CSourceStream  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851ba0
//
// 00851ba0  56                   push esi
// 00851ba1  8bf1                 mov esi, ecx
// 00851ba3  8b4608               mov eax, dword ptr [esi + 8]
// 00851ba6  57                   push edi
// 00851ba7  85c0                 test eax, eax
// 00851ba9  741d                 je 0x851bc8
// 00851bab  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00851baf  6a00                 push 0
// 00851bb1  51                   push ecx
// 00851bb2  ffd0                 call eax
// 00851bb4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00851bb8  50                   push eax
// 00851bb9  57                   push edi
// 00851bba  8bce                 mov ecx, esi
// 00851bbc  e8affeffff           call 0x851a70
// 00851bc1  8bc7                 mov eax, edi
// 00851bc3  5f                   pop edi
// 00851bc4  5e                   pop esi
// 00851bc5  c20800               ret 8
// 00851bc8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00851bcc  33c0                 xor eax, eax
// 00851bce  50                   push eax
// 00851bcf  57                   push edi
// 00851bd0  8bce                 mov ecx, esi
// 00851bd2  e899feffff           call 0x851a70
// 00851bd7  8bc7                 mov eax, edi
// 00851bd9  5f                   pop edi
// 00851bda  5e                   pop esi
// 00851bdb  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
