// roc 2012-06 00a10e20  unit: XTPPaintThemes::CXTPOfficeTheme  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a10e20
//
// 00a10e20  8b542408             mov edx, dword ptr [esp + 8]
// 00a10e24  6a10                 push 0x10
// 00a10e26  6a10                 push 0x10
// 00a10e28  83ec10               sub esp, 0x10
// 00a10e2b  8bc4                 mov eax, esp
// 00a10e2d  8910                 mov dword ptr [eax], edx
// 00a10e2f  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a10e33  895004               mov dword ptr [eax + 4], edx
// 00a10e36  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a10e3a  895008               mov dword ptr [eax + 8], edx
// 00a10e3d  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a10e41  89500c               mov dword ptr [eax + 0xc], edx
// 00a10e44  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a10e48  50                   push eax
// 00a10e49  e8426cf7ff           call 0x987a90
// 00a10e4e  c21c00               ret 0x1c
// library xtp-13.2.1/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawStatusBarPaneBorder@CXTPOfficeTheme@@MAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/CommandBars/XTPOfficeTheme.cpp
