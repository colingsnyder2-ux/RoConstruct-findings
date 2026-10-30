// roc 2012-06 00a68830  unit: PAVCXTShadowWnd::?$CList  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68830
//
// 00a68830  6aff                 push -1
// 00a68832  683385ae00           push 0xae8533
// 00a68837  64a100000000         mov eax, dword ptr fs:[0]
// 00a6883d  50                   push eax
// 00a6883e  51                   push ecx
// 00a6883f  56                   push esi
// 00a68840  57                   push edi
// 00a68841  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a68846  33c4                 xor eax, esp
// 00a68848  50                   push eax
// 00a68849  8d442410             lea eax, [esp + 0x10]
// 00a6884d  64a300000000         mov dword ptr fs:[0], eax
// 00a68853  8bf1                 mov esi, ecx
// 00a68855  8974240c             mov dword ptr [esp + 0xc], esi
// 00a68859  837e2800             cmp dword ptr [esi + 0x28], 0
// 00a6885d  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00a68865  7425                 je 0xa6888c
// 00a68867  8d7e1c               lea edi, [esi + 0x1c]
// 00a6886a  8d9b00000000         lea ebx, [ebx]
// 00a68870  8bcf                 mov ecx, edi
// 00a68872  e89972ffff           call 0xa5fb10
// 00a68877  85c0                 test eax, eax
// 00a68879  740b                 je 0xa68886
// 00a6887b  8b10                 mov edx, dword ptr [eax]
// 00a6887d  8bc8                 mov ecx, eax
// 00a6887f  8b4204               mov eax, dword ptr [edx + 4]
// 00a68882  6a01                 push 1
// 00a68884  ffd0                 call eax
// 00a68886  837e2800             cmp dword ptr [esi + 0x28], 0
// 00a6888a  75e4                 jne 0xa68870
// 00a6888c  8d4e1c               lea ecx, [esi + 0x1c]
// 00a6888f  c644241800           mov byte ptr [esp + 0x18], 0
// 00a68894  e8f7feffff           call 0xa68790
// 00a68899  8bce                 mov ecx, esi
// 00a6889b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00a688a3  e8e8feffff           call 0xa68790
// 00a688a8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a688ac  64890d00000000       mov dword ptr fs:[0], ecx
// 00a688b3  59                   pop ecx
// 00a688b4  5f                   pop edi
// 00a688b5  5e                   pop esi
// 00a688b6  83c410               add esp, 0x10
// 00a688b9  c3                   ret 
// copied from an identical function in another client (function ??1CXTShadowsManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp