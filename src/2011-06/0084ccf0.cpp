// roc 2011-06 0084ccf0  unit: CXTPToolBar::PAVCToolBarInfo::?$CArray  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084ccf0
//
// 0084ccf0  53                   push ebx
// 0084ccf1  55                   push ebp
// 0084ccf2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0084ccf6  57                   push edi
// 0084ccf7  33ff                 xor edi, edi
// 0084ccf9  397d0c               cmp dword ptr [ebp + 0xc], edi
// 0084ccfc  8bd9                 mov ebx, ecx
// 0084ccfe  7e5a                 jle 0x84cd5a
// 0084cd00  56                   push esi
// 0084cd01  85ff                 test edi, edi
// 0084cd03  7c5b                 jl 0x84cd60
// 0084cd05  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 0084cd08  7d56                 jge 0x84cd60
// 0084cd0a  8b4508               mov eax, dword ptr [ebp + 8]
// 0084cd0d  8b34b8               mov esi, dword ptr [eax + edi*4]
// 0084cd10  85f6                 test esi, esi
// 0084cd12  743f                 je 0x84cd53
// 0084cd14  8b0e                 mov ecx, dword ptr [esi]
// 0084cd16  51                   push ecx
// 0084cd17  8bcb                 mov ecx, ebx
// 0084cd19  e8e2dbfdff           call 0x82a900
// 0084cd1e  894638               mov dword ptr [esi + 0x38], eax
// 0084cd21  85c0                 test eax, eax
// 0084cd23  742e                 je 0x84cd53
// 0084cd25  837e0800             cmp dword ptr [esi + 8], 0
// 0084cd29  740a                 je 0x84cd35
// 0084cd2b  50                   push eax
// 0084cd2c  8bcb                 mov ecx, ebx
// 0084cd2e  e84dd0fdff           call 0x829d80
// 0084cd33  eb15                 jmp 0x84cd4a
// 0084cd35  8b8ba0000000         mov ecx, dword ptr [ebx + 0xa0]
// 0084cd3b  8b10                 mov edx, dword ptr [eax]
// 0084cd3d  8b920c020000         mov edx, dword ptr [edx + 0x20c]
// 0084cd43  6a00                 push 0
// 0084cd45  51                   push ecx
// 0084cd46  8bc8                 mov ecx, eax
// 0084cd48  ffd2                 call edx
// 0084cd4a  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0084cd4d  56                   push esi
// 0084cd4e  e88dddffff           call 0x84aae0
// 0084cd53  47                   inc edi
// 0084cd54  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 0084cd57  7ca8                 jl 0x84cd01
// 0084cd59  5e                   pop esi
// 0084cd5a  5f                   pop edi
// 0084cd5b  5d                   pop ebp
// 0084cd5c  5b                   pop ebx
// 0084cd5d  c20400               ret 4
// 0084cd60  e8a5d5fbff           call 0x80a30a
// copied from an identical function in another client (function ?SetDockState@CXTPCommandBars@@IAEXAAVCXTPDockState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockState.cpp