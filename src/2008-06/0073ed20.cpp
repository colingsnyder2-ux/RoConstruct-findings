// roc 2008-06 0073ed20  unit: XTPPaintThemes::CXTPOfficeTheme  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073ed20
//
// 0073ed20  8b542408             mov edx, dword ptr [esp + 8]
// 0073ed24  6a10                 push 0x10
// 0073ed26  6a10                 push 0x10
// 0073ed28  83ec10               sub esp, 0x10
// 0073ed2b  8bc4                 mov eax, esp
// 0073ed2d  8910                 mov dword ptr [eax], edx
// 0073ed2f  8b542424             mov edx, dword ptr [esp + 0x24]
// 0073ed33  895004               mov dword ptr [eax + 4], edx
// 0073ed36  8b542428             mov edx, dword ptr [esp + 0x28]
// 0073ed3a  895008               mov dword ptr [eax + 8], edx
// 0073ed3d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0073ed41  89500c               mov dword ptr [eax + 0xc], edx
// 0073ed44  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073ed48  50                   push eax
// 0073ed49  e822f5f6ff           call 0x6ae270
// 0073ed4e  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawStatusBarPaneBorder@CXTPOfficeTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
