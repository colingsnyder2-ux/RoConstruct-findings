// roc 2007-08 006b86f0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b86f0
//
// 006b86f0  837c241800           cmp dword ptr [esp + 0x18], 0
// 006b86f5  56                   push esi
// 006b86f6  57                   push edi
// 006b86f7  8bf9                 mov edi, ecx
// 006b86f9  0f8588000000         jne 0x6b8787
// 006b86ff  6aff                 push -1
// 006b8701  6aff                 push -1
// 006b8703  8d442418             lea eax, [esp + 0x18]
// 006b8707  50                   push eax
// 006b8708  ff1590ed7700         call dword ptr [0x77ed90]
// 006b870e  8b442424             mov eax, dword ptr [esp + 0x24]
// 006b8712  83f802               cmp eax, 2
// 006b8715  7409                 je 0x6b8720
// 006b8717  83f803               cmp eax, 3
// 006b871a  7404                 je 0x6b8720
// 006b871c  33c9                 xor ecx, ecx
// 006b871e  eb05                 jmp 0x6b8725
// 006b8720  b901000000           mov ecx, 1
// 006b8725  83f802               cmp eax, 2
// 006b8728  7409                 je 0x6b8733
// 006b872a  83f803               cmp eax, 3
// 006b872d  7404                 je 0x6b8733
// 006b872f  33c0                 xor eax, eax
// 006b8731  eb05                 jmp 0x6b8738
// 006b8733  b801000000           mov eax, 1
// 006b8738  33d2                 xor edx, edx
// 006b873a  85c9                 test ecx, ecx
// 006b873c  0f94c2               sete dl
// 006b873f  33c9                 xor ecx, ecx
// 006b8741  85c0                 test eax, eax
// 006b8743  0f94c1               sete cl
// 006b8746  8d149510000000       lea edx, [edx*4 + 0x10]
// 006b874d  52                   push edx
// 006b874e  8b542414             mov edx, dword ptr [esp + 0x14]
// 006b8752  8d0c8d10000000       lea ecx, [ecx*4 + 0x10]
// 006b8759  51                   push ecx
// 006b875a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006b875e  83ec10               sub esp, 0x10
// 006b8761  8bc4                 mov eax, esp
// 006b8763  8910                 mov dword ptr [eax], edx
// 006b8765  8b542430             mov edx, dword ptr [esp + 0x30]
// 006b8769  894804               mov dword ptr [eax + 4], ecx
// 006b876c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006b8770  895008               mov dword ptr [eax + 8], edx
// 006b8773  8b542424             mov edx, dword ptr [esp + 0x24]
// 006b8777  89480c               mov dword ptr [eax + 0xc], ecx
// 006b877a  52                   push edx
// 006b877b  8bcf                 mov ecx, edi
// 006b877d  e8ee47f8ff           call 0x63cf70
// 006b8782  5f                   pop edi
// 006b8783  5e                   pop esi
// 006b8784  c21c00               ret 0x1c
// 006b8787  837c242400           cmp dword ptr [esp + 0x24], 0
// 006b878c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006b8790  742c                 je 0x6b87be
// 006b8792  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006b8796  8b542414             mov edx, dword ptr [esp + 0x14]
// 006b879a  6a14                 push 0x14
// 006b879c  6a10                 push 0x10
// 006b879e  83ec10               sub esp, 0x10
// 006b87a1  8bc4                 mov eax, esp
// 006b87a3  8908                 mov dword ptr [eax], ecx
// 006b87a5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006b87a9  895004               mov dword ptr [eax + 4], edx
// 006b87ac  8b542434             mov edx, dword ptr [esp + 0x34]
// 006b87b0  894808               mov dword ptr [eax + 8], ecx
// 006b87b3  56                   push esi
// 006b87b4  8bcf                 mov ecx, edi
// 006b87b6  89500c               mov dword ptr [eax + 0xc], edx
// 006b87b9  e8b247f8ff           call 0x63cf70
// 006b87be  6aff                 push -1
// 006b87c0  6aff                 push -1
// 006b87c2  8d442418             lea eax, [esp + 0x18]
// 006b87c6  50                   push eax
// 006b87c7  ff1590ed7700         call dword ptr [0x77ed90]
// 006b87cd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006b87d1  8b542414             mov edx, dword ptr [esp + 0x14]
// 006b87d5  6a0f                 push 0xf
// 006b87d7  6a0f                 push 0xf
// 006b87d9  83ec10               sub esp, 0x10
// 006b87dc  8bc4                 mov eax, esp
// 006b87de  8908                 mov dword ptr [eax], ecx
// 006b87e0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006b87e4  895004               mov dword ptr [eax + 4], edx
// 006b87e7  8b542434             mov edx, dword ptr [esp + 0x34]
// 006b87eb  894808               mov dword ptr [eax + 8], ecx
// 006b87ee  56                   push esi
// 006b87ef  8bcf                 mov ecx, edi
// 006b87f1  89500c               mov dword ptr [eax + 0xc], edx
// 006b87f4  e87747f8ff           call 0x63cf70
// 006b87f9  5f                   pop edi
// 006b87fa  5e                   pop esi
// 006b87fb  c21c00               ret 0x1c
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawControlEditFrame@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDefaultTheme.cpp
