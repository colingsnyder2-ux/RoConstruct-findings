// roc 2007-03 00686850  unit: seg_00680000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686850
//
// 00686850  56                   push esi
// 00686851  8bf1                 mov esi, ecx
// 00686853  8b4608               mov eax, dword ptr [esi + 8]
// 00686856  85c0                 test eax, eax
// 00686858  57                   push edi
// 00686859  741d                 je 0x686878
// 0068685b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0068685f  6a00                 push 0
// 00686861  51                   push ecx
// 00686862  ffd0                 call eax
// 00686864  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00686868  50                   push eax
// 00686869  57                   push edi
// 0068686a  8bce                 mov ecx, esi
// 0068686c  e8effdffff           call 0x686660
// 00686871  8bc7                 mov eax, edi
// 00686873  5f                   pop edi
// 00686874  5e                   pop esi
// 00686875  c20800               ret 8
// 00686878  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0068687c  33c0                 xor eax, eax
// 0068687e  50                   push eax
// 0068687f  57                   push edi
// 00686880  8bce                 mov ecx, esi
// 00686882  e8d9fdffff           call 0x686660
// 00686887  8bc7                 mov eax, edi
// 00686889  5f                   pop edi
// 0068688a  5e                   pop esi
// 0068688b  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
