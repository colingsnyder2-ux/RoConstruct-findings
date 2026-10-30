// roc 2009-12 008ec710  unit: CXTPDialogBar  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ec710
//
// 008ec710  83ec10               sub esp, 0x10
// 008ec713  56                   push esi
// 008ec714  8d442404             lea eax, [esp + 4]
// 008ec718  50                   push eax
// 008ec719  8bf1                 mov esi, ecx
// 008ec71b  e860f5ffff           call 0x8ebc80
// 008ec720  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008ec724  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 008ec728  3b8ebc010000         cmp ecx, dword ptr [esi + 0x1bc]
// 008ec72e  0f8cbf000000         jl 0x8ec7f3
// 008ec734  8b442424             mov eax, dword ptr [esp + 0x24]
// 008ec738  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 008ec73c  3b86c0010000         cmp eax, dword ptr [esi + 0x1c0]
// 008ec742  0f8cab000000         jl 0x8ec7f3
// 008ec748  2b4c240c             sub ecx, dword ptr [esp + 0xc]
// 008ec74c  2b442410             sub eax, dword ptr [esp + 0x10]
// 008ec750  2b4c2404             sub ecx, dword ptr [esp + 4]
// 008ec754  2b442408             sub eax, dword ptr [esp + 8]
// 008ec758  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 008ec75f  7559                 jne 0x8ec7ba
// 008ec761  8b16                 mov edx, dword ptr [esi]
// 008ec763  8b92d0010000         mov edx, dword ptr [edx + 0x1d0]
// 008ec769  6a00                 push 0
// 008ec76b  8986dc010000         mov dword ptr [esi + 0x1dc], eax
// 008ec771  6a00                 push 0
// 008ec773  8d44240c             lea eax, [esp + 0xc]
// 008ec777  898ed8010000         mov dword ptr [esi + 0x1d8], ecx
// 008ec77d  50                   push eax
// 008ec77e  8bce                 mov ecx, esi
// 008ec780  ffd2                 call edx
// 008ec782  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ec786  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008ec78a  8b542420             mov edx, dword ptr [esp + 0x20]
// 008ec78e  6a01                 push 1
// 008ec790  2bc8                 sub ecx, eax
// 008ec792  51                   push ecx
// 008ec793  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008ec797  2bd1                 sub edx, ecx
// 008ec799  52                   push edx
// 008ec79a  50                   push eax
// 008ec79b  51                   push ecx
// 008ec79c  8bce                 mov ecx, esi
// 008ec79e  e88f74f0ff           call 0x7f3c32
// 008ec7a3  8b06                 mov eax, dword ptr [esi]
// 008ec7a5  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 008ec7ab  6a01                 push 1
// 008ec7ad  6a00                 push 0
// 008ec7af  8bce                 mov ecx, esi
// 008ec7b1  ffd2                 call edx
// 008ec7b3  5e                   pop esi
// 008ec7b4  83c410               add esp, 0x10
// 008ec7b7  c21400               ret 0x14
// 008ec7ba  8b542428             mov edx, dword ptr [esp + 0x28]
// 008ec7be  83fa0b               cmp edx, 0xb
// 008ec7c1  741e                 je 0x8ec7e1
// 008ec7c3  83fa0a               cmp edx, 0xa
// 008ec7c6  7419                 je 0x8ec7e1
// 008ec7c8  8986d4010000         mov dword ptr [esi + 0x1d4], eax
// 008ec7ce  8b06                 mov eax, dword ptr [esi]
// 008ec7d0  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 008ec7d6  8bce                 mov ecx, esi
// 008ec7d8  ffd2                 call edx
// 008ec7da  5e                   pop esi
// 008ec7db  83c410               add esp, 0x10
// 008ec7de  c21400               ret 0x14
// 008ec7e1  8b06                 mov eax, dword ptr [esi]
// 008ec7e3  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 008ec7e9  898ed0010000         mov dword ptr [esi + 0x1d0], ecx
// 008ec7ef  8bce                 mov ecx, esi
// 008ec7f1  ffd2                 call edx
// 008ec7f3  5e                   pop esi
// 008ec7f4  83c410               add esp, 0x10
// 008ec7f7  c21400               ret 0x14
// copied from an identical function in another client (function ?OnResize@CXTPDialogBar@@IAEXVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDialogBar.cpp