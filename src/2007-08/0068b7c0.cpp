// from server: 100% by auto
// roc 2007-08 0068b7c0  unit: CXTPTabClientWnd  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068b7c0
//
// 0068b7c0  56                   push esi
// 0068b7c1  8bf1                 mov esi, ecx
// 0068b7c3  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0068b7ca  57                   push edi
// 0068b7cb  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0068b7cf  7455                 je 0x68b826
// 0068b7d1  8b4704               mov eax, dword ptr [edi + 4]
// 0068b7d4  3d01020000           cmp eax, 0x201
// 0068b7d9  741c                 je 0x68b7f7
// 0068b7db  3d04020000           cmp eax, 0x204
// 0068b7e0  7415                 je 0x68b7f7
// 0068b7e2  3d07020000           cmp eax, 0x207
// 0068b7e7  740e                 je 0x68b7f7
// 0068b7e9  3d03020000           cmp eax, 0x203
// 0068b7ee  7407                 je 0x68b7f7
// 0068b7f0  3d06020000           cmp eax, 0x206
// 0068b7f5  752f                 jne 0x68b826
// 0068b7f7  8b0f                 mov ecx, dword ptr [edi]
// 0068b7f9  3b4e20               cmp ecx, dword ptr [esi + 0x20]
// 0068b7fc  7528                 jne 0x68b826
// 0068b7fe  8b570c               mov edx, dword ptr [edi + 0xc]
// 0068b801  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0068b807  52                   push edx
// 0068b808  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0068b80b  50                   push eax
// 0068b80c  6868280000           push 0x2868
// 0068b811  52                   push edx
// 0068b812  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0068b818  85c0                 test eax, eax
// 0068b81a  740a                 je 0x68b826
// 0068b81c  5f                   pop edi
// 0068b81d  b801000000           mov eax, 1
// 0068b822  5e                   pop esi
// 0068b823  c20400               ret 4
// 0068b826  57                   push edi
// 0068b827  8bce                 mov ecx, esi
// 0068b829  e8404afaff           call 0x63026e
// 0068b82e  5f                   pop edi
// 0068b82f  5e                   pop esi
// 0068b830  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?PreTranslateMessage@CXTPTabClientWnd@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
