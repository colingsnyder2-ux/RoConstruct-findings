// roc 2009-06 007fe550  unit: CXTSplitterWndThemeFactory  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007fe550
//
// 007fe550  6aff                 push -1
// 007fe552  68c11d8800           push 0x881dc1
// 007fe557  64a100000000         mov eax, dword ptr fs:[0]
// 007fe55d  50                   push eax
// 007fe55e  56                   push esi
// 007fe55f  57                   push edi
// 007fe560  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007fe565  33c4                 xor eax, esp
// 007fe567  50                   push eax
// 007fe568  8d44240c             lea eax, [esp + 0xc]
// 007fe56c  64a300000000         mov dword ptr fs:[0], eax
// 007fe572  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007fe576  8bc7                 mov eax, edi
// 007fe578  83e801               sub eax, 1
// 007fe57b  6a1c                 push 0x1c
// 007fe57d  7451                 je 0x7fe5d0
// 007fe57f  83e801               sub eax, 1
// 007fe582  7421                 je 0x7fe5a5
// 007fe584  e8afa4f1ff           call 0x718a38
// 007fe589  83c404               add esp, 4
// 007fe58c  8944241c             mov dword ptr [esp + 0x1c], eax
// 007fe590  c744241402000000     mov dword ptr [esp + 0x14], 2
// 007fe598  85c0                 test eax, eax
// 007fe59a  745f                 je 0x7fe5fb
// 007fe59c  8bc8                 mov ecx, eax
// 007fe59e  e87dfeffff           call 0x7fe420
// 007fe5a3  eb58                 jmp 0x7fe5fd
// 007fe5a5  e88ea4f1ff           call 0x718a38
// 007fe5aa  8bf0                 mov esi, eax
// 007fe5ac  83c404               add esp, 4
// 007fe5af  8974241c             mov dword ptr [esp + 0x1c], esi
// 007fe5b3  c744241401000000     mov dword ptr [esp + 0x14], 1
// 007fe5bb  85f6                 test esi, esi
// 007fe5bd  743c                 je 0x7fe5fb
// 007fe5bf  8bce                 mov ecx, esi
// 007fe5c1  e85afeffff           call 0x7fe420
// 007fe5c6  c70624a89000         mov dword ptr [esi], 0x90a824
// 007fe5cc  8bc6                 mov eax, esi
// 007fe5ce  eb2d                 jmp 0x7fe5fd
// 007fe5d0  e863a4f1ff           call 0x718a38
// 007fe5d5  8bf0                 mov esi, eax
// 007fe5d7  83c404               add esp, 4
// 007fe5da  8974241c             mov dword ptr [esp + 0x1c], esi
// 007fe5de  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007fe5e6  85f6                 test esi, esi
// 007fe5e8  7411                 je 0x7fe5fb
// 007fe5ea  8bce                 mov ecx, esi
// 007fe5ec  e82ffeffff           call 0x7fe420
// 007fe5f1  c70610a89000         mov dword ptr [esi], 0x90a810
// 007fe5f7  8bc6                 mov eax, esi
// 007fe5f9  eb02                 jmp 0x7fe5fd
// 007fe5fb  33c0                 xor eax, eax
// 007fe5fd  897808               mov dword ptr [eax + 8], edi
// 007fe600  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007fe604  64890d00000000       mov dword ptr fs:[0], ecx
// 007fe60b  59                   pop ecx
// 007fe60c  5f                   pop edi
// 007fe60d  5e                   pop esi
// 007fe60e  83c40c               add esp, 0xc
// 007fe611  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTSplitterWndThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTSplitterWndTheme.cpp