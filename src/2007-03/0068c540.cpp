// roc 2007-03 0068c540  unit: seg_00680000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068c540
//
// 0068c540  8b5108               mov edx, dword ptr [ecx + 8]
// 0068c543  56                   push esi
// 0068c544  33c0                 xor eax, eax
// 0068c546  85d2                 test edx, edx
// 0068c548  57                   push edi
// 0068c549  7e1c                 jle 0x68c567
// 0068c54b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0068c54f  90                   nop 
// 0068c550  85c0                 test eax, eax
// 0068c552  7c1b                 jl 0x68c56f
// 0068c554  3bc2                 cmp eax, edx
// 0068c556  7d17                 jge 0x68c56f
// 0068c558  8b7904               mov edi, dword ptr [ecx + 4]
// 0068c55b  3b3487               cmp esi, dword ptr [edi + eax*4]
// 0068c55e  740a                 je 0x68c56a
// 0068c560  83c001               add eax, 1
// 0068c563  3bc2                 cmp eax, edx
// 0068c565  7ce9                 jl 0x68c550
// 0068c567  83c8ff               or eax, 0xffffffff
// 0068c56a  5f                   pop edi
// 0068c56b  5e                   pop esi
// 0068c56c  c20400               ret 4
// 0068c56f  e83a1ef9ff           call 0x61e3ae
// copied from an identical function in another client (function ?Find@CHookSink@CXTPHookManager@@QAEHPAVCXTPHookManagerHookAble@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPHookManager.cpp