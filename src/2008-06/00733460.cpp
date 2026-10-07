// roc 2008-06 00733460  unit: XTPPaintThemes::CXTPDefaultTheme  size: 270 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00733460
//
// 00733460  837c241800           cmp dword ptr [esp + 0x18], 0
// 00733465  56                   push esi
// 00733466  57                   push edi
// 00733467  8bf9                 mov edi, ecx
// 00733469  0f8588000000         jne 0x7334f7
// 0073346f  6aff                 push -1
// 00733471  6aff                 push -1
// 00733473  8d442418             lea eax, [esp + 0x18]
// 00733477  50                   push eax
// 00733478  ff15282d8000         call dword ptr [0x802d28]
// 0073347e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00733482  83f802               cmp eax, 2
// 00733485  7409                 je 0x733490
// 00733487  83f803               cmp eax, 3
// 0073348a  7404                 je 0x733490
// 0073348c  33c9                 xor ecx, ecx
// 0073348e  eb05                 jmp 0x733495
// 00733490  b901000000           mov ecx, 1
// 00733495  83f802               cmp eax, 2
// 00733498  7409                 je 0x7334a3
// 0073349a  83f803               cmp eax, 3
// 0073349d  7404                 je 0x7334a3
// 0073349f  33c0                 xor eax, eax
// 007334a1  eb05                 jmp 0x7334a8
// 007334a3  b801000000           mov eax, 1
// 007334a8  33d2                 xor edx, edx
// 007334aa  85c9                 test ecx, ecx
// 007334ac  0f94c2               sete dl
// 007334af  33c9                 xor ecx, ecx
// 007334b1  85c0                 test eax, eax
// 007334b3  0f94c1               sete cl
// 007334b6  8d149510000000       lea edx, [edx*4 + 0x10]
// 007334bd  52                   push edx
// 007334be  8b542414             mov edx, dword ptr [esp + 0x14]
// 007334c2  8d0c8d10000000       lea ecx, [ecx*4 + 0x10]
// 007334c9  51                   push ecx
// 007334ca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007334ce  83ec10               sub esp, 0x10
// 007334d1  8bc4                 mov eax, esp
// 007334d3  8910                 mov dword ptr [eax], edx
// 007334d5  8b542430             mov edx, dword ptr [esp + 0x30]
// 007334d9  894804               mov dword ptr [eax + 4], ecx
// 007334dc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007334e0  895008               mov dword ptr [eax + 8], edx
// 007334e3  8b542424             mov edx, dword ptr [esp + 0x24]
// 007334e7  89480c               mov dword ptr [eax + 0xc], ecx
// 007334ea  52                   push edx
// 007334eb  8bcf                 mov ecx, edi
// 007334ed  e87eadf7ff           call 0x6ae270
// 007334f2  5f                   pop edi
// 007334f3  5e                   pop esi
// 007334f4  c21c00               ret 0x1c
// 007334f7  837c242400           cmp dword ptr [esp + 0x24], 0
// 007334fc  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00733500  742c                 je 0x73352e
// 00733502  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00733506  8b542414             mov edx, dword ptr [esp + 0x14]
// 0073350a  6a14                 push 0x14
// 0073350c  6a10                 push 0x10
// 0073350e  83ec10               sub esp, 0x10
// 00733511  8bc4                 mov eax, esp
// 00733513  8908                 mov dword ptr [eax], ecx
// 00733515  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00733519  895004               mov dword ptr [eax + 4], edx
// 0073351c  8b542434             mov edx, dword ptr [esp + 0x34]
// 00733520  894808               mov dword ptr [eax + 8], ecx
// 00733523  56                   push esi
// 00733524  8bcf                 mov ecx, edi
// 00733526  89500c               mov dword ptr [eax + 0xc], edx
// 00733529  e842adf7ff           call 0x6ae270
// 0073352e  6aff                 push -1
// 00733530  6aff                 push -1
// 00733532  8d442418             lea eax, [esp + 0x18]
// 00733536  50                   push eax
// 00733537  ff15282d8000         call dword ptr [0x802d28]
// 0073353d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00733541  8b542414             mov edx, dword ptr [esp + 0x14]
// 00733545  6a0f                 push 0xf
// 00733547  6a0f                 push 0xf
// 00733549  83ec10               sub esp, 0x10
// 0073354c  8bc4                 mov eax, esp
// 0073354e  8908                 mov dword ptr [eax], ecx
// 00733550  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00733554  895004               mov dword ptr [eax + 4], edx
// 00733557  8b542434             mov edx, dword ptr [esp + 0x34]
// 0073355b  894808               mov dword ptr [eax + 8], ecx
// 0073355e  56                   push esi
// 0073355f  8bcf                 mov ecx, edi
// 00733561  89500c               mov dword ptr [eax + 0xc], edx
// 00733564  e807adf7ff           call 0x6ae270
// 00733569  5f                   pop edi
// 0073356a  5e                   pop esi
// 0073356b  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawControlEditFrame@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
