// roc 2010-06 00894060  unit: CXTPRichRender::XTextHost  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00894060
//
// 00894060  56                   push esi
// 00894061  8bf1                 mov esi, ecx
// 00894063  e8168d0e00           call 0x97cd7e
// 00894068  33c0                 xor eax, eax
// 0089406a  894620               mov dword ptr [esi + 0x20], eax
// 0089406d  894624               mov dword ptr [esi + 0x24], eax
// 00894070  894630               mov dword ptr [esi + 0x30], eax
// 00894073  89462c               mov dword ptr [esi + 0x2c], eax
// 00894076  894634               mov dword ptr [esi + 0x34], eax
// 00894079  c706bc00a700         mov dword ptr [esi], 0xa700bc
// 0089407f  8bc6                 mov eax, esi
// 00894081  5e                   pop esi
// 00894082  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ??0CXTPOffice2007Image@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
