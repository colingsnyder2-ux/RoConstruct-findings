// roc 2012-06 009ff330  unit: XTPPaintThemes::CXTPDefaultTheme  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ff330
//
// 009ff330  837c241800           cmp dword ptr [esp + 0x18], 0
// 009ff335  56                   push esi
// 009ff336  57                   push edi
// 009ff337  8bf9                 mov edi, ecx
// 009ff339  0f8588000000         jne 0x9ff3c7
// 009ff33f  6aff                 push -1
// 009ff341  6aff                 push -1
// 009ff343  8d442418             lea eax, [esp + 0x18]
// 009ff347  50                   push eax
// 009ff348  ff154c3bb200         call dword ptr [0xb23b4c]
// 009ff34e  8b442424             mov eax, dword ptr [esp + 0x24]
// 009ff352  83f802               cmp eax, 2
// 009ff355  7409                 je 0x9ff360
// 009ff357  83f803               cmp eax, 3
// 009ff35a  7404                 je 0x9ff360
// 009ff35c  33c9                 xor ecx, ecx
// 009ff35e  eb05                 jmp 0x9ff365
// 009ff360  b901000000           mov ecx, 1
// 009ff365  83f802               cmp eax, 2
// 009ff368  7409                 je 0x9ff373
// 009ff36a  83f803               cmp eax, 3
// 009ff36d  7404                 je 0x9ff373
// 009ff36f  33c0                 xor eax, eax
// 009ff371  eb05                 jmp 0x9ff378
// 009ff373  b801000000           mov eax, 1
// 009ff378  33d2                 xor edx, edx
// 009ff37a  85c9                 test ecx, ecx
// 009ff37c  0f94c2               sete dl
// 009ff37f  33c9                 xor ecx, ecx
// 009ff381  85c0                 test eax, eax
// 009ff383  0f94c1               sete cl
// 009ff386  8d149510000000       lea edx, [edx*4 + 0x10]
// 009ff38d  52                   push edx
// 009ff38e  8b542414             mov edx, dword ptr [esp + 0x14]
// 009ff392  8d0c8d10000000       lea ecx, [ecx*4 + 0x10]
// 009ff399  51                   push ecx
// 009ff39a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009ff39e  83ec10               sub esp, 0x10
// 009ff3a1  8bc4                 mov eax, esp
// 009ff3a3  8910                 mov dword ptr [eax], edx
// 009ff3a5  8b542430             mov edx, dword ptr [esp + 0x30]
// 009ff3a9  894804               mov dword ptr [eax + 4], ecx
// 009ff3ac  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009ff3b0  895008               mov dword ptr [eax + 8], edx
// 009ff3b3  8b542424             mov edx, dword ptr [esp + 0x24]
// 009ff3b7  89480c               mov dword ptr [eax + 0xc], ecx
// 009ff3ba  52                   push edx
// 009ff3bb  8bcf                 mov ecx, edi
// 009ff3bd  e8ce86f8ff           call 0x987a90
// 009ff3c2  5f                   pop edi
// 009ff3c3  5e                   pop esi
// 009ff3c4  c21c00               ret 0x1c
// 009ff3c7  837c242400           cmp dword ptr [esp + 0x24], 0
// 009ff3cc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009ff3d0  742c                 je 0x9ff3fe
// 009ff3d2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009ff3d6  8b542414             mov edx, dword ptr [esp + 0x14]
// 009ff3da  6a14                 push 0x14
// 009ff3dc  6a10                 push 0x10
// 009ff3de  83ec10               sub esp, 0x10
// 009ff3e1  8bc4                 mov eax, esp
// 009ff3e3  8908                 mov dword ptr [eax], ecx
// 009ff3e5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009ff3e9  895004               mov dword ptr [eax + 4], edx
// 009ff3ec  8b542434             mov edx, dword ptr [esp + 0x34]
// 009ff3f0  894808               mov dword ptr [eax + 8], ecx
// 009ff3f3  56                   push esi
// 009ff3f4  8bcf                 mov ecx, edi
// 009ff3f6  89500c               mov dword ptr [eax + 0xc], edx
// 009ff3f9  e89286f8ff           call 0x987a90
// 009ff3fe  6aff                 push -1
// 009ff400  6aff                 push -1
// 009ff402  8d442418             lea eax, [esp + 0x18]
// 009ff406  50                   push eax
// 009ff407  ff154c3bb200         call dword ptr [0xb23b4c]
// 009ff40d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009ff411  8b542414             mov edx, dword ptr [esp + 0x14]
// 009ff415  6a0f                 push 0xf
// 009ff417  6a0f                 push 0xf
// 009ff419  83ec10               sub esp, 0x10
// 009ff41c  8bc4                 mov eax, esp
// 009ff41e  8908                 mov dword ptr [eax], ecx
// 009ff420  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009ff424  895004               mov dword ptr [eax + 4], edx
// 009ff427  8b542434             mov edx, dword ptr [esp + 0x34]
// 009ff42b  894808               mov dword ptr [eax + 8], ecx
// 009ff42e  56                   push esi
// 009ff42f  8bcf                 mov ecx, edi
// 009ff431  89500c               mov dword ptr [eax + 0xc], edx
// 009ff434  e85786f8ff           call 0x987a90
// 009ff439  5f                   pop edi
// 009ff43a  5e                   pop esi
// 009ff43b  c21c00               ret 0x1c
// library xtp-13.2.1/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawControlEditFrame@CXTPDefaultTheme@@MAEXPAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/CommandBars/XTPDefaultTheme.cpp
