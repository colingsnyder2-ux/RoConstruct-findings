// roc 2008-06 00432140  unit: CMainFrame  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432140
//
// 00432140  53                   push ebx
// 00432141  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00432145  55                   push ebp
// 00432146  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0043214a  56                   push esi
// 0043214b  8b742410             mov esi, dword ptr [esp + 0x10]
// 0043214f  8d863ddcffff         lea eax, [esi - 0x23c3]
// 00432155  57                   push edi
// 00432156  8bf9                 mov edi, ecx
// 00432158  83f803               cmp eax, 3
// 0043215b  7731                 ja 0x43218e
// 0043215d  8b8fe8000000         mov ecx, dword ptr [edi + 0xe8]
// 00432163  51                   push ecx
// 00432164  e801ef2600           call 0x6a106a
// 00432169  85c0                 test eax, eax
// 0043216b  7421                 je 0x43218e
// 0043216d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00432171  8b10                 mov edx, dword ptr [eax]
// 00432173  8b5214               mov edx, dword ptr [edx + 0x14]
// 00432176  53                   push ebx
// 00432177  55                   push ebp
// 00432178  51                   push ecx
// 00432179  56                   push esi
// 0043217a  8bc8                 mov ecx, eax
// 0043217c  ffd2                 call edx
// 0043217e  85c0                 test eax, eax
// 00432180  740c                 je 0x43218e
// 00432182  5f                   pop edi
// 00432183  5e                   pop esi
// 00432184  5d                   pop ebp
// 00432185  b801000000           mov eax, 1
// 0043218a  5b                   pop ebx
// 0043218b  c21000               ret 0x10
// 0043218e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00432192  53                   push ebx
// 00432193  55                   push ebp
// 00432194  50                   push eax
// 00432195  56                   push esi
// 00432196  8bcf                 mov ecx, edi
// 00432198  e837ee2600           call 0x6a0fd4
// 0043219d  5f                   pop edi
// 0043219e  5e                   pop esi
// 0043219f  5d                   pop ebp
// 004321a0  5b                   pop ebx
// 004321a1  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPFrameWnd.cpp (function ?OnCmdMsg@CXTPMDIFrameWnd@@UAEHIHPAXPAUAFX_CMDHANDLERINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPFrameWnd.cpp
