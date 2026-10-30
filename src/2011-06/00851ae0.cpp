// from server: 100% by auto
// roc 2011-06 00851ae0  unit: CSourceStream  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851ae0
//
// 00851ae0  56                   push esi
// 00851ae1  8bf1                 mov esi, ecx
// 00851ae3  8b4604               mov eax, dword ptr [esi + 4]
// 00851ae6  57                   push edi
// 00851ae7  85c0                 test eax, eax
// 00851ae9  741d                 je 0x851b08
// 00851aeb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00851aef  6a00                 push 0
// 00851af1  51                   push ecx
// 00851af2  ffd0                 call eax
// 00851af4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00851af8  50                   push eax
// 00851af9  57                   push edi
// 00851afa  8bce                 mov ecx, esi
// 00851afc  e86fffffff           call 0x851a70
// 00851b01  8bc7                 mov eax, edi
// 00851b03  5f                   pop edi
// 00851b04  5e                   pop esi
// 00851b05  c20800               ret 8
// 00851b08  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00851b0c  33c0                 xor eax, eax
// 00851b0e  50                   push eax
// 00851b0f  57                   push edi
// 00851b10  8bce                 mov ecx, esi
// 00851b12  e859ffffff           call 0x851a70
// 00851b17  8bc7                 mov eax, edi
// 00851b19  5f                   pop edi
// 00851b1a  5e                   pop esi
// 00851b1b  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
