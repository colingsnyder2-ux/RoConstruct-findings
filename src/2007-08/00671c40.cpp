// from server: 100% by auto
// roc 2007-08 00671c40  unit: CPropertyGridItemBrickColor  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671c40
//
// 00671c40  56                   push esi
// 00671c41  8bf1                 mov esi, ecx
// 00671c43  8b4608               mov eax, dword ptr [esi + 8]
// 00671c46  85c0                 test eax, eax
// 00671c48  57                   push edi
// 00671c49  741d                 je 0x671c68
// 00671c4b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00671c4f  6a00                 push 0
// 00671c51  51                   push ecx
// 00671c52  ffd0                 call eax
// 00671c54  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00671c58  50                   push eax
// 00671c59  57                   push edi
// 00671c5a  8bce                 mov ecx, esi
// 00671c5c  e8affeffff           call 0x671b10
// 00671c61  8bc7                 mov eax, edi
// 00671c63  5f                   pop edi
// 00671c64  5e                   pop esi
// 00671c65  c20800               ret 8
// 00671c68  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00671c6c  33c0                 xor eax, eax
// 00671c6e  50                   push eax
// 00671c6f  57                   push edi
// 00671c70  8bce                 mov ecx, esi
// 00671c72  e899feffff           call 0x671b10
// 00671c77  8bc7                 mov eax, edi
// 00671c79  5f                   pop edi
// 00671c7a  5e                   pop esi
// 00671c7b  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
