// from server: 100% by auto
// roc 2007-08 0067c560  unit: CXTPControls  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067c560
//
// 0067c560  8b442408             mov eax, dword ptr [esp + 8]
// 0067c564  85c0                 test eax, eax
// 0067c566  56                   push esi
// 0067c567  57                   push edi
// 0067c568  8bf1                 mov esi, ecx
// 0067c56a  7c05                 jl 0x67c571
// 0067c56c  3b462c               cmp eax, dword ptr [esi + 0x2c]
// 0067c56f  7c03                 jl 0x67c574
// 0067c571  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0067c574  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0067c578  6a01                 push 1
// 0067c57a  57                   push edi
// 0067c57b  50                   push eax
// 0067c57c  8d4e24               lea ecx, [esi + 0x24]
// 0067c57f  e8ccf2fbff           call 0x63b850
// 0067c584  8b06                 mov eax, dword ptr [esi]
// 0067c586  8b5060               mov edx, dword ptr [eax + 0x60]
// 0067c589  57                   push edi
// 0067c58a  8bce                 mov ecx, esi
// 0067c58c  ffd2                 call edx
// 0067c58e  8bc7                 mov eax, edi
// 0067c590  5f                   pop edi
// 0067c591  5e                   pop esi
// 0067c592  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?InsertAt@CXTPControls@@QAEPAVCXTPControl@@PAV2@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
