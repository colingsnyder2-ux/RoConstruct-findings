// roc 2008-06 00735580  unit: XTPPaintThemes::CXTPDefaultTheme  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00735580
//
// 00735580  837c242c02           cmp dword ptr [esp + 0x2c], 2
// 00735585  8b442424             mov eax, dword ptr [esp + 0x24]
// 00735589  56                   push esi
// 0073558a  57                   push edi
// 0073558b  8bf1                 mov esi, ecx
// 0073558d  7549                 jne 0x7355d8
// 0073558f  85c0                 test eax, eax
// 00735591  7545                 jne 0x7355d8
// 00735593  39442420             cmp dword ptr [esp + 0x20], eax
// 00735597  750a                 jne 0x7355a3
// 00735599  39442424             cmp dword ptr [esp + 0x24], eax
// 0073559d  0f8426010000         je 0x7356c9
// 007355a3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007355a7  8b542414             mov edx, dword ptr [esp + 0x14]
// 007355ab  6a0d                 push 0xd
// 007355ad  6a0d                 push 0xd
// 007355af  83ec10               sub esp, 0x10
// 007355b2  8bc4                 mov eax, esp
// 007355b4  8908                 mov dword ptr [eax], ecx
// 007355b6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007355ba  895004               mov dword ptr [eax + 4], edx
// 007355bd  8b542434             mov edx, dword ptr [esp + 0x34]
// 007355c1  894808               mov dword ptr [eax + 8], ecx
// 007355c4  89500c               mov dword ptr [eax + 0xc], edx
// 007355c7  8b442424             mov eax, dword ptr [esp + 0x24]
// 007355cb  50                   push eax
// 007355cc  8bce                 mov ecx, esi
// 007355ce  e8fd9af7ff           call 0x6af0d0
// 007355d3  5f                   pop edi
// 007355d4  5e                   pop esi
// 007355d5  c23000               ret 0x30
// 007355d8  837c242800           cmp dword ptr [esp + 0x28], 0
// 007355dd  7577                 jne 0x735656
// 007355df  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007355e3  85c0                 test eax, eax
// 007355e5  742c                 je 0x735613
// 007355e7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007355eb  8b542414             mov edx, dword ptr [esp + 0x14]
// 007355ef  6a14                 push 0x14
// 007355f1  6a10                 push 0x10
// 007355f3  83ec10               sub esp, 0x10
// 007355f6  8bc4                 mov eax, esp
// 007355f8  8908                 mov dword ptr [eax], ecx
// 007355fa  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007355fe  895004               mov dword ptr [eax + 4], edx
// 00735601  8b542434             mov edx, dword ptr [esp + 0x34]
// 00735605  894808               mov dword ptr [eax + 8], ecx
// 00735608  57                   push edi
// 00735609  8bce                 mov ecx, esi
// 0073560b  89500c               mov dword ptr [eax + 0xc], edx
// 0073560e  e85d8cf7ff           call 0x6ae270
// 00735613  8b442420             mov eax, dword ptr [esp + 0x20]
// 00735617  83f802               cmp eax, 2
// 0073561a  7409                 je 0x735625
// 0073561c  83f803               cmp eax, 3
// 0073561f  0f85a4000000         jne 0x7356c9
// 00735625  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00735629  8b542414             mov edx, dword ptr [esp + 0x14]
// 0073562d  6a14                 push 0x14
// 0073562f  6a10                 push 0x10
// 00735631  83ec10               sub esp, 0x10
// 00735634  8bc4                 mov eax, esp
// 00735636  8908                 mov dword ptr [eax], ecx
// 00735638  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0073563c  895004               mov dword ptr [eax + 4], edx
// 0073563f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00735643  894808               mov dword ptr [eax + 8], ecx
// 00735646  57                   push edi
// 00735647  8bce                 mov ecx, esi
// 00735649  89500c               mov dword ptr [eax + 0xc], edx
// 0073564c  e81f8cf7ff           call 0x6ae270
// 00735651  5f                   pop edi
// 00735652  5e                   pop esi
// 00735653  c23000               ret 0x30
// 00735656  85c0                 test eax, eax
// 00735658  741f                 je 0x735679
// 0073565a  837c242000           cmp dword ptr [esp + 0x20], 0
// 0073565f  7538                 jne 0x735699
// 00735661  837c242400           cmp dword ptr [esp + 0x24], 0
// 00735666  7531                 jne 0x735699
// 00735668  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0073566c  8d442410             lea eax, [esp + 0x10]
// 00735670  50                   push eax
// 00735671  57                   push edi
// 00735672  e8b9ebffff           call 0x734230
// 00735677  ebac                 jmp 0x735625
// 00735679  837c243000           cmp dword ptr [esp + 0x30], 0
// 0073567e  7519                 jne 0x735699
// 00735680  8b442424             mov eax, dword ptr [esp + 0x24]
// 00735684  83f802               cmp eax, 2
// 00735687  7410                 je 0x735699
// 00735689  83f803               cmp eax, 3
// 0073568c  740b                 je 0x735699
// 0073568e  837c242000           cmp dword ptr [esp + 0x20], 0
// 00735693  7439                 je 0x7356ce
// 00735695  85c0                 test eax, eax
// 00735697  7439                 je 0x7356d2
// 00735699  6a14                 push 0x14
// 0073569b  6a10                 push 0x10
// 0073569d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007356a1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007356a5  83ec10               sub esp, 0x10
// 007356a8  8bc4                 mov eax, esp
// 007356aa  8908                 mov dword ptr [eax], ecx
// 007356ac  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007356b0  895004               mov dword ptr [eax + 4], edx
// 007356b3  8b542434             mov edx, dword ptr [esp + 0x34]
// 007356b7  894808               mov dword ptr [eax + 8], ecx
// 007356ba  89500c               mov dword ptr [eax + 0xc], edx
// 007356bd  8b442424             mov eax, dword ptr [esp + 0x24]
// 007356c1  50                   push eax
// 007356c2  8bce                 mov ecx, esi
// 007356c4  e8a78bf7ff           call 0x6ae270
// 007356c9  5f                   pop edi
// 007356ca  5e                   pop esi
// 007356cb  c23000               ret 0x30
// 007356ce  85c0                 test eax, eax
// 007356d0  74f7                 je 0x7356c9
// 007356d2  6a10                 push 0x10
// 007356d4  6a14                 push 0x14
// 007356d6  ebc5                 jmp 0x73569d
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawRectangle@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
