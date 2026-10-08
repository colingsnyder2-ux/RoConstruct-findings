// roc 2011-06 0080e920  unit: CXTPControl  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080e920
//
// 0080e920  83ec10               sub esp, 0x10
// 0080e923  56                   push esi
// 0080e924  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0080e928  57                   push edi
// 0080e929  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0080e92d  8d442408             lea eax, [esp + 8]
// 0080e931  50                   push eax
// 0080e932  6a64                 push 0x64
// 0080e934  56                   push esi
// 0080e935  8bcf                 mov ecx, edi
// 0080e937  e8d4e5ffff           call 0x80cf10
// 0080e93c  85c0                 test eax, eax
// 0080e93e  7517                 jne 0x80e957
// 0080e940  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 0080e946  8b5620               mov edx, dword ptr [esi + 0x20]
// 0080e949  50                   push eax
// 0080e94a  51                   push ecx
// 0080e94b  6811010000           push 0x111
// 0080e950  52                   push edx
// 0080e951  ff15c019a400         call dword ptr [0xa419c0]
// 0080e957  5f                   pop edi
// 0080e958  5e                   pop esi
// 0080e959  83c410               add esp, 0x10
// 0080e95c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifyExecute@@YAXPAVCXTPControl@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
