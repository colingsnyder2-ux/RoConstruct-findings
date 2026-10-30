// roc 2009-12 0086edf0  unit: CXTPResourceManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086edf0
//
// 0086edf0  8b5108               mov edx, dword ptr [ecx + 8]
// 0086edf3  56                   push esi
// 0086edf4  33c0                 xor eax, eax
// 0086edf6  57                   push edi
// 0086edf7  85d2                 test edx, edx
// 0086edf9  7e1a                 jle 0x86ee15
// 0086edfb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0086edff  90                   nop 
// 0086ee00  85c0                 test eax, eax
// 0086ee02  7c19                 jl 0x86ee1d
// 0086ee04  3bc2                 cmp eax, edx
// 0086ee06  7d15                 jge 0x86ee1d
// 0086ee08  8b7904               mov edi, dword ptr [ecx + 4]
// 0086ee0b  3b3487               cmp esi, dword ptr [edi + eax*4]
// 0086ee0e  7408                 je 0x86ee18
// 0086ee10  40                   inc eax
// 0086ee11  3bc2                 cmp eax, edx
// 0086ee13  7ceb                 jl 0x86ee00
// 0086ee15  83c8ff               or eax, 0xffffffff
// 0086ee18  5f                   pop edi
// 0086ee19  5e                   pop esi
// 0086ee1a  c20400               ret 4
// 0086ee1d  e8ea4cf8ff           call 0x7f3b0c
// copied from an identical function in another client (function ?Find@CHookSink@CXTPHookManager@@QAEHPAVCXTPHookManagerHookAble@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPHookManager.cpp