// from server: 100% by auto
// roc 2011-06 00897910  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00897910
//
// 00897910  83ec10               sub esp, 0x10
// 00897913  56                   push esi
// 00897914  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00897918  57                   push edi
// 00897919  8bf9                 mov edi, ecx
// 0089791b  8bce                 mov ecx, esi
// 0089791d  e8fea90000           call 0x8a2320
// 00897922  56                   push esi
// 00897923  85c0                 test eax, eax
// 00897925  7515                 jne 0x89793c
// 00897927  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089792b  56                   push esi
// 0089792c  50                   push eax
// 0089792d  8bcf                 mov ecx, edi
// 0089792f  e80cffffff           call 0x897840
// 00897934  5f                   pop edi
// 00897935  5e                   pop esi
// 00897936  83c410               add esp, 0x10
// 00897939  c20800               ret 8
// 0089793c  8d4c240c             lea ecx, [esp + 0xc]
// 00897940  e84b54fcff           call 0x85cd90
// 00897945  6a0f                 push 0xf
// 00897947  8bcf                 mov ecx, edi
// 00897949  8bf0                 mov esi, eax
// 0089794b  e8607cf7ff           call 0x80f5b0
// 00897950  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00897954  50                   push eax
// 00897955  56                   push esi
// 00897956  e8c534f7ff           call 0x80ae20
// 0089795b  5f                   pop edi
// 0089795c  5e                   pop esi
// 0089795d  83c410               add esp, 0x10
// 00897960  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPNativeXPTheme.cpp (function ?FillDockBar@CXTPNativeXPTheme@@MAEXPAVCDC@@PAVCXTPDockBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPNativeXPTheme.cpp
