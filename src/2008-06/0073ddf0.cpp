// roc 2008-06 0073ddf0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073ddf0
//
// 0073ddf0  83ec10               sub esp, 0x10
// 0073ddf3  56                   push esi
// 0073ddf4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0073ddf8  57                   push edi
// 0073ddf9  8bf9                 mov edi, ecx
// 0073ddfb  8bce                 mov ecx, esi
// 0073ddfd  e87ecafdff           call 0x71a880
// 0073de02  56                   push esi
// 0073de03  85c0                 test eax, eax
// 0073de05  7515                 jne 0x73de1c
// 0073de07  8b442420             mov eax, dword ptr [esp + 0x20]
// 0073de0b  56                   push esi
// 0073de0c  50                   push eax
// 0073de0d  8bcf                 mov ecx, edi
// 0073de0f  e80cffffff           call 0x73dd20
// 0073de14  5f                   pop edi
// 0073de15  5e                   pop esi
// 0073de16  83c410               add esp, 0x10
// 0073de19  c20800               ret 8
// 0073de1c  8d4c240c             lea ecx, [esp + 0xc]
// 0073de20  e80b9dfbff           call 0x6f7b30
// 0073de25  6a0f                 push 0xf
// 0073de27  8bcf                 mov ecx, edi
// 0073de29  8bf0                 mov esi, eax
// 0073de2b  e84002f7ff           call 0x6ae070
// 0073de30  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073de34  50                   push eax
// 0073de35  56                   push esi
// 0073de36  e82335f6ff           call 0x6a135e
// 0073de3b  5f                   pop edi
// 0073de3c  5e                   pop esi
// 0073de3d  83c410               add esp, 0x10
// 0073de40  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?FillDockBar@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
