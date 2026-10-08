// from server: 100% by auto
// roc 2008-06 006ad410  unit: CXTPControl  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ad410
//
// 006ad410  83ec10               sub esp, 0x10
// 006ad413  56                   push esi
// 006ad414  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006ad418  57                   push edi
// 006ad419  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006ad41d  8d442408             lea eax, [esp + 8]
// 006ad421  50                   push eax
// 006ad422  6a64                 push 0x64
// 006ad424  56                   push esi
// 006ad425  8bcf                 mov ecx, edi
// 006ad427  e824e6ffff           call 0x6aba50
// 006ad42c  85c0                 test eax, eax
// 006ad42e  7517                 jne 0x6ad447
// 006ad430  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 006ad436  8b5620               mov edx, dword ptr [esi + 0x20]
// 006ad439  50                   push eax
// 006ad43a  51                   push ecx
// 006ad43b  6811010000           push 0x111
// 006ad440  52                   push edx
// 006ad441  ff15142e8000         call dword ptr [0x802e14]
// 006ad447  5f                   pop edi
// 006ad448  5e                   pop esi
// 006ad449  83c410               add esp, 0x10
// 006ad44c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifyExecute@@YAXPAVCXTPControl@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
