// roc 2012-06 00986c30  unit: CXTPControl  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00986c30
//
// 00986c30  83ec10               sub esp, 0x10
// 00986c33  56                   push esi
// 00986c34  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00986c38  57                   push edi
// 00986c39  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00986c3d  8d442408             lea eax, [esp + 8]
// 00986c41  50                   push eax
// 00986c42  6a64                 push 0x64
// 00986c44  56                   push esi
// 00986c45  8bcf                 mov ecx, edi
// 00986c47  e864e5ffff           call 0x9851b0
// 00986c4c  85c0                 test eax, eax
// 00986c4e  7517                 jne 0x986c67
// 00986c50  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 00986c56  8b5620               mov edx, dword ptr [esi + 0x20]
// 00986c59  50                   push eax
// 00986c5a  51                   push ecx
// 00986c5b  6811010000           push 0x111
// 00986c60  52                   push edx
// 00986c61  ff15043cb200         call dword ptr [0xb23c04]
// 00986c67  5f                   pop edi
// 00986c68  5e                   pop esi
// 00986c69  83c410               add esp, 0x10
// 00986c6c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifyExecute@@YAXPAVCXTPControl@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
