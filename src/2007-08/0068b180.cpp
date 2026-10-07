// roc 2007-08 0068b180  unit: CXTPTabClientWnd  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068b180
//
// 0068b180  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0068b184  56                   push esi
// 0068b185  57                   push edi
// 0068b186  e8e51f0700           call 0x6fd170
// 0068b18b  8b3dd8ec7700         mov edi, dword ptr [0x77ecd8]
// 0068b191  6a00                 push 0
// 0068b193  6a00                 push 0
// 0068b195  8bf0                 mov esi, eax
// 0068b197  6860280000           push 0x2860
// 0068b19c  56                   push esi
// 0068b19d  ffd7                 call edi
// 0068b19f  85c0                 test eax, eax
// 0068b1a1  7541                 jne 0x68b1e4
// 0068b1a3  50                   push eax
// 0068b1a4  50                   push eax
// 0068b1a5  6a7f                 push 0x7f
// 0068b1a7  56                   push esi
// 0068b1a8  ffd7                 call edi
// 0068b1aa  85c0                 test eax, eax
// 0068b1ac  7536                 jne 0x68b1e4
// 0068b1ae  50                   push eax
// 0068b1af  6a01                 push 1
// 0068b1b1  6a7f                 push 0x7f
// 0068b1b3  56                   push esi
// 0068b1b4  ffd7                 call edi
// 0068b1b6  85c0                 test eax, eax
// 0068b1b8  752a                 jne 0x68b1e4
// 0068b1ba  8b3dbcec7700         mov edi, dword ptr [0x77ecbc]
// 0068b1c0  6ade                 push -0x22
// 0068b1c2  56                   push esi
// 0068b1c3  ffd7                 call edi
// 0068b1c5  85c0                 test eax, eax
// 0068b1c7  751b                 jne 0x68b1e4
// 0068b1c9  6af2                 push -0xe
// 0068b1cb  56                   push esi
// 0068b1cc  ffd7                 call edi
// 0068b1ce  85c0                 test eax, eax
// 0068b1d0  7512                 jne 0x68b1e4
// 0068b1d2  e82b4dfaff           call 0x62ff02
// 0068b1d7  68057f0000           push 0x7f05
// 0068b1dc  6a00                 push 0
// 0068b1de  ff15d0ed7700         call dword ptr [0x77edd0]
// 0068b1e4  5f                   pop edi
// 0068b1e5  5e                   pop esi
// 0068b1e6  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetItemIcon@CXTPTabClientWnd@@MBEPAUHICON__@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
