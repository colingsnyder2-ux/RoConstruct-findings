// roc 2009-12 008d90f0  unit: CXTSplitterWndThemeFactory  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d90f0
//
// 008d90f0  6aff                 push -1
// 008d90f2  6881549600           push 0x965481
// 008d90f7  64a100000000         mov eax, dword ptr fs:[0]
// 008d90fd  50                   push eax
// 008d90fe  56                   push esi
// 008d90ff  57                   push edi
// 008d9100  a10052b600           mov eax, dword ptr [0xb65200]
// 008d9105  33c4                 xor eax, esp
// 008d9107  50                   push eax
// 008d9108  8d44240c             lea eax, [esp + 0xc]
// 008d910c  64a300000000         mov dword ptr fs:[0], eax
// 008d9112  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008d9116  8bc7                 mov eax, edi
// 008d9118  83e801               sub eax, 1
// 008d911b  6a1c                 push 0x1c
// 008d911d  7451                 je 0x8d9170
// 008d911f  83e801               sub eax, 1
// 008d9122  7421                 je 0x8d9145
// 008d9124  e837a7f1ff           call 0x7f3860
// 008d9129  83c404               add esp, 4
// 008d912c  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d9130  c744241402000000     mov dword ptr [esp + 0x14], 2
// 008d9138  85c0                 test eax, eax
// 008d913a  745f                 je 0x8d919b
// 008d913c  8bc8                 mov ecx, eax
// 008d913e  e87dfeffff           call 0x8d8fc0
// 008d9143  eb58                 jmp 0x8d919d
// 008d9145  e816a7f1ff           call 0x7f3860
// 008d914a  8bf0                 mov esi, eax
// 008d914c  83c404               add esp, 4
// 008d914f  8974241c             mov dword ptr [esp + 0x1c], esi
// 008d9153  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008d915b  85f6                 test esi, esi
// 008d915d  743c                 je 0x8d919b
// 008d915f  8bce                 mov ecx, esi
// 008d9161  e85afeffff           call 0x8d8fc0
// 008d9166  c70694aca000         mov dword ptr [esi], 0xa0ac94
// 008d916c  8bc6                 mov eax, esi
// 008d916e  eb2d                 jmp 0x8d919d
// 008d9170  e8eba6f1ff           call 0x7f3860
// 008d9175  8bf0                 mov esi, eax
// 008d9177  83c404               add esp, 4
// 008d917a  8974241c             mov dword ptr [esp + 0x1c], esi
// 008d917e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008d9186  85f6                 test esi, esi
// 008d9188  7411                 je 0x8d919b
// 008d918a  8bce                 mov ecx, esi
// 008d918c  e82ffeffff           call 0x8d8fc0
// 008d9191  c70680aca000         mov dword ptr [esi], 0xa0ac80
// 008d9197  8bc6                 mov eax, esi
// 008d9199  eb02                 jmp 0x8d919d
// 008d919b  33c0                 xor eax, eax
// 008d919d  897808               mov dword ptr [eax + 8], edi
// 008d91a0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d91a4  64890d00000000       mov dword ptr fs:[0], ecx
// 008d91ab  59                   pop ecx
// 008d91ac  5f                   pop edi
// 008d91ad  5e                   pop esi
// 008d91ae  83c40c               add esp, 0xc
// 008d91b1  c20400               ret 4
// copied from an identical function in another client (function ?CreateTheme@CXTSplitterWndThemeFactory@@UAEPAVCXTThemeManagerStyle@@W4XTThemeStyle@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTSplitterWndTheme.cpp