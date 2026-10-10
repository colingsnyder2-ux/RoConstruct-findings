// roc 2008-06 00792960  unit: CXTCaptionButton  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792960
//
// 00792960  83ec40               sub esp, 0x40
// 00792963  56                   push esi
// 00792964  57                   push edi
// 00792965  6a30                 push 0x30
// 00792967  8d44241c             lea eax, [esp + 0x1c]
// 0079296b  6a00                 push 0
// 0079296d  50                   push eax
// 0079296e  8bf1                 mov esi, ecx
// 00792970  e88fedf0ff           call 0x6a1704
// 00792975  83c40c               add esp, 0xc
// 00792978  8bce                 mov ecx, esi
// 0079297a  c744241804000000     mov dword ptr [esp + 0x18], 4
// 00792982  e8ff980200           call 0x7bc286
// 00792987  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0079298a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0079298e  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00792996  ff15102e8000         call dword ptr [0x802e10]
// 0079299c  3bc7                 cmp eax, edi
// 0079299e  7505                 jne 0x7929a5
// 007929a0  834c242810           or dword ptr [esp + 0x28], 0x10
// 007929a5  83bea400000000       cmp dword ptr [esi + 0xa4], 0
// 007929ac  7405                 je 0x7929b3
// 007929ae  834c242801           or dword ptr [esp + 0x28], 1
// 007929b3  6a00                 push 0
// 007929b5  6a00                 push 0
// 007929b7  6829010000           push 0x129
// 007929bc  57                   push edi
// 007929bd  ff15142e8000         call dword ptr [0x802e14]
// 007929c3  a802                 test al, 2
// 007929c5  7408                 je 0x7929cf
// 007929c7  814c242800010000     or dword ptr [esp + 0x28], 0x100
// 007929cf  a801                 test al, 1
// 007929d1  7408                 je 0x7929db
// 007929d3  814c242800020000     or dword ptr [esp + 0x28], 0x200
// 007929db  8bce                 mov ecx, esi
// 007929dd  e874980200           call 0x7bc256
// 007929e2  85c0                 test eax, eax
// 007929e4  7505                 jne 0x7929eb
// 007929e6  834c242804           or dword ptr [esp + 0x28], 4
// 007929eb  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007929ef  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007929f2  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007929f6  85c0                 test eax, eax
// 007929f8  7506                 jne 0x792a00
// 007929fa  89442430             mov dword ptr [esp + 0x30], eax
// 007929fe  eb07                 jmp 0x792a07
// 00792a00  8b5004               mov edx, dword ptr [eax + 4]
// 00792a03  89542430             mov dword ptr [esp + 0x30], edx
// 00792a07  56                   push esi
// 00792a08  8d4c240c             lea ecx, [esp + 0xc]
// 00792a0c  e81f51f6ff           call 0x6f7b30
// 00792a11  8b08                 mov ecx, dword ptr [eax]
// 00792a13  894c2434             mov dword ptr [esp + 0x34], ecx
// 00792a17  8b5004               mov edx, dword ptr [eax + 4]
// 00792a1a  89542438             mov dword ptr [esp + 0x38], edx
// 00792a1e  8b4808               mov ecx, dword ptr [eax + 8]
// 00792a21  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00792a25  8b500c               mov edx, dword ptr [eax + 0xc]
// 00792a28  8b06                 mov eax, dword ptr [esi]
// 00792a2a  8d4c2418             lea ecx, [esp + 0x18]
// 00792a2e  89542440             mov dword ptr [esp + 0x40], edx
// 00792a32  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 00792a38  51                   push ecx
// 00792a39  8bce                 mov ecx, esi
// 00792a3b  ffd2                 call edx
// 00792a3d  5f                   pop edi
// 00792a3e  5e                   pop esi
// 00792a3f  83c440               add esp, 0x40
// 00792a42  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Controls\XTButton.cpp (function ?OnDraw@CXTButton@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTButton.cpp
