// roc 2010-06 007eb4d0  unit: CXTPToolBar::PAVCToolBarInfo::?$CArray  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007eb4d0
//
// 007eb4d0  53                   push ebx
// 007eb4d1  55                   push ebp
// 007eb4d2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 007eb4d6  57                   push edi
// 007eb4d7  33ff                 xor edi, edi
// 007eb4d9  397d0c               cmp dword ptr [ebp + 0xc], edi
// 007eb4dc  8bd9                 mov ebx, ecx
// 007eb4de  7e5a                 jle 0x7eb53a
// 007eb4e0  56                   push esi
// 007eb4e1  85ff                 test edi, edi
// 007eb4e3  7c5b                 jl 0x7eb540
// 007eb4e5  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 007eb4e8  7d56                 jge 0x7eb540
// 007eb4ea  8b4508               mov eax, dword ptr [ebp + 8]
// 007eb4ed  8b34b8               mov esi, dword ptr [eax + edi*4]
// 007eb4f0  85f6                 test esi, esi
// 007eb4f2  743f                 je 0x7eb533
// 007eb4f4  8b0e                 mov ecx, dword ptr [esi]
// 007eb4f6  51                   push ecx
// 007eb4f7  8bcb                 mov ecx, ebx
// 007eb4f9  e832d9fdff           call 0x7c8e30
// 007eb4fe  894638               mov dword ptr [esi + 0x38], eax
// 007eb501  85c0                 test eax, eax
// 007eb503  742e                 je 0x7eb533
// 007eb505  837e0800             cmp dword ptr [esi + 8], 0
// 007eb509  740a                 je 0x7eb515
// 007eb50b  50                   push eax
// 007eb50c  8bcb                 mov ecx, ebx
// 007eb50e  e8fdcdfdff           call 0x7c8310
// 007eb513  eb15                 jmp 0x7eb52a
// 007eb515  8b8ba0000000         mov ecx, dword ptr [ebx + 0xa0]
// 007eb51b  8b10                 mov edx, dword ptr [eax]
// 007eb51d  8b920c020000         mov edx, dword ptr [edx + 0x20c]
// 007eb523  6a00                 push 0
// 007eb525  51                   push ecx
// 007eb526  8bc8                 mov ecx, eax
// 007eb528  ffd2                 call edx
// 007eb52a  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007eb52d  56                   push esi
// 007eb52e  e88dddffff           call 0x7e92c0
// 007eb533  47                   inc edi
// 007eb534  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 007eb537  7ca8                 jl 0x7eb4e1
// 007eb539  5e                   pop esi
// 007eb53a  5f                   pop edi
// 007eb53b  5d                   pop ebp
// 007eb53c  5b                   pop ebx
// 007eb53d  c20400               ret 4
// 007eb540  e807c7fbff           call 0x7a7c4c
// copied from an identical function in another client (function ?SetDockState@CXTPCommandBars@@IAEXAAVCXTPDockState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockState.cpp