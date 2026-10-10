// roc 2008-06 0079f7b0  unit: CXTPDialogBar  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079f7b0
//
// 0079f7b0  83ec10               sub esp, 0x10
// 0079f7b3  56                   push esi
// 0079f7b4  8d442404             lea eax, [esp + 4]
// 0079f7b8  50                   push eax
// 0079f7b9  8bf1                 mov esi, ecx
// 0079f7bb  e880f5ffff           call 0x79ed40
// 0079f7c0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079f7c4  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 0079f7c8  3b8ebc010000         cmp ecx, dword ptr [esi + 0x1bc]
// 0079f7ce  0f8cbf000000         jl 0x79f893
// 0079f7d4  8b442424             mov eax, dword ptr [esp + 0x24]
// 0079f7d8  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 0079f7dc  3b86c0010000         cmp eax, dword ptr [esi + 0x1c0]
// 0079f7e2  0f8cab000000         jl 0x79f893
// 0079f7e8  2b4c240c             sub ecx, dword ptr [esp + 0xc]
// 0079f7ec  2b442410             sub eax, dword ptr [esp + 0x10]
// 0079f7f0  2b4c2404             sub ecx, dword ptr [esp + 4]
// 0079f7f4  2b442408             sub eax, dword ptr [esp + 8]
// 0079f7f8  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 0079f7ff  7559                 jne 0x79f85a
// 0079f801  8b16                 mov edx, dword ptr [esi]
// 0079f803  8b92d0010000         mov edx, dword ptr [edx + 0x1d0]
// 0079f809  6a00                 push 0
// 0079f80b  8986dc010000         mov dword ptr [esi + 0x1dc], eax
// 0079f811  6a00                 push 0
// 0079f813  8d44240c             lea eax, [esp + 0xc]
// 0079f817  898ed8010000         mov dword ptr [esi + 0x1d8], ecx
// 0079f81d  50                   push eax
// 0079f81e  8bce                 mov ecx, esi
// 0079f820  ffd2                 call edx
// 0079f822  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0079f826  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0079f82a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0079f82e  6a01                 push 1
// 0079f830  2bc8                 sub ecx, eax
// 0079f832  51                   push ecx
// 0079f833  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079f837  2bd1                 sub edx, ecx
// 0079f839  52                   push edx
// 0079f83a  50                   push eax
// 0079f83b  51                   push ecx
// 0079f83c  8bce                 mov ecx, esi
// 0079f83e  e80912f0ff           call 0x6a0a4c
// 0079f843  8b06                 mov eax, dword ptr [esi]
// 0079f845  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 0079f84b  6a01                 push 1
// 0079f84d  6a00                 push 0
// 0079f84f  8bce                 mov ecx, esi
// 0079f851  ffd2                 call edx
// 0079f853  5e                   pop esi
// 0079f854  83c410               add esp, 0x10
// 0079f857  c21400               ret 0x14
// 0079f85a  8b542428             mov edx, dword ptr [esp + 0x28]
// 0079f85e  83fa0b               cmp edx, 0xb
// 0079f861  741e                 je 0x79f881
// 0079f863  83fa0a               cmp edx, 0xa
// 0079f866  7419                 je 0x79f881
// 0079f868  8986d4010000         mov dword ptr [esi + 0x1d4], eax
// 0079f86e  8b06                 mov eax, dword ptr [esi]
// 0079f870  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 0079f876  8bce                 mov ecx, esi
// 0079f878  ffd2                 call edx
// 0079f87a  5e                   pop esi
// 0079f87b  83c410               add esp, 0x10
// 0079f87e  c21400               ret 0x14
// 0079f881  8b06                 mov eax, dword ptr [esi]
// 0079f883  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 0079f889  898ed0010000         mov dword ptr [esi + 0x1d0], ecx
// 0079f88f  8bce                 mov ecx, esi
// 0079f891  ffd2                 call edx
// 0079f893  5e                   pop esi
// 0079f894  83c410               add esp, 0x10
// 0079f897  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDialogBar.cpp (function ?OnResize@CXTPDialogBar@@IAEXVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDialogBar.cpp
