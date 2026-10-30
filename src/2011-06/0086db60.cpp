// roc 2011-06 0086db60  unit: CXTPStatusBar  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086db60
//
// 0086db60  56                   push esi
// 0086db61  57                   push edi
// 0086db62  8bf1                 mov esi, ecx
// 0086db64  33ff                 xor edi, edi
// 0086db66  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 0086db6c  7e25                 jle 0x86db93
// 0086db6e  8bff                 mov edi, edi
// 0086db70  85ff                 test edi, edi
// 0086db72  7c46                 jl 0x86dbba
// 0086db74  3bbea0000000         cmp edi, dword ptr [esi + 0xa0]
// 0086db7a  7d3e                 jge 0x86dbba
// 0086db7c  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0086db82  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0086db85  e850caf9ff           call 0x80a5da
// 0086db8a  47                   inc edi
// 0086db8b  3bbea0000000         cmp edi, dword ptr [esi + 0xa0]
// 0086db91  7cdd                 jl 0x86db70
// 0086db93  6aff                 push -1
// 0086db95  6a00                 push 0
// 0086db97  8d8e98000000         lea ecx, [esi + 0x98]
// 0086db9d  e89e0ffdff           call 0x83eb40
// 0086dba2  6a01                 push 1
// 0086dba4  6a01                 push 1
// 0086dba6  8bce                 mov ecx, esi
// 0086dba8  c786bc00000000000000 mov dword ptr [esi + 0xbc], 0
// 0086dbb2  e8a9f9ffff           call 0x86d560
// 0086dbb7  5f                   pop edi
// 0086dbb8  5e                   pop esi
// 0086dbb9  c3                   ret 
// 0086dbba  e84bc7f9ff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveAll@CXTPStatusBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp