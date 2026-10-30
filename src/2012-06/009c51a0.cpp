// roc 2012-06 009c51a0  unit: CXTPControlEdit  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c51a0
//
// 009c51a0  53                   push ebx
// 009c51a1  55                   push ebp
// 009c51a2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 009c51a6  57                   push edi
// 009c51a7  33ff                 xor edi, edi
// 009c51a9  397d0c               cmp dword ptr [ebp + 0xc], edi
// 009c51ac  8bd9                 mov ebx, ecx
// 009c51ae  7e5a                 jle 0x9c520a
// 009c51b0  56                   push esi
// 009c51b1  85ff                 test edi, edi
// 009c51b3  7c5b                 jl 0x9c5210
// 009c51b5  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 009c51b8  7d56                 jge 0x9c5210
// 009c51ba  8b4508               mov eax, dword ptr [ebp + 8]
// 009c51bd  8b34b8               mov esi, dword ptr [eax + edi*4]
// 009c51c0  85f6                 test esi, esi
// 009c51c2  743f                 je 0x9c5203
// 009c51c4  8b0e                 mov ecx, dword ptr [esi]
// 009c51c6  51                   push ecx
// 009c51c7  8bcb                 mov ecx, ebx
// 009c51c9  e802ddfdff           call 0x9a2ed0
// 009c51ce  894638               mov dword ptr [esi + 0x38], eax
// 009c51d1  85c0                 test eax, eax
// 009c51d3  742e                 je 0x9c5203
// 009c51d5  837e0800             cmp dword ptr [esi + 8], 0
// 009c51d9  740a                 je 0x9c51e5
// 009c51db  50                   push eax
// 009c51dc  8bcb                 mov ecx, ebx
// 009c51de  e8cdd1fdff           call 0x9a23b0
// 009c51e3  eb15                 jmp 0x9c51fa
// 009c51e5  8b8ba0000000         mov ecx, dword ptr [ebx + 0xa0]
// 009c51eb  8b10                 mov edx, dword ptr [eax]
// 009c51ed  8b920c020000         mov edx, dword ptr [edx + 0x20c]
// 009c51f3  6a00                 push 0
// 009c51f5  51                   push ecx
// 009c51f6  8bc8                 mov ecx, eax
// 009c51f8  ffd2                 call edx
// 009c51fa  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 009c51fd  56                   push esi
// 009c51fe  e88dddffff           call 0x9c2f90
// 009c5203  47                   inc edi
// 009c5204  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 009c5207  7ca8                 jl 0x9c51b1
// 009c5209  5e                   pop esi
// 009c520a  5f                   pop edi
// 009c520b  5d                   pop ebp
// 009c520c  5b                   pop ebx
// 009c520d  c20400               ret 4
// 009c5210  e8abd1fbff           call 0x9823c0
// copied from an identical function in another client (function ?SetDockState@CXTPCommandBars@@IAEXAAVCXTPDockState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockState.cpp