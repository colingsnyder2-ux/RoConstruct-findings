// roc 2011-06 00850800  unit: CXTPToolBar::CControlButtonExpand  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00850800
//
// 00850800  56                   push esi
// 00850801  8bf1                 mov esi, ecx
// 00850803  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 0085080a  7446                 je 0x850852
// 0085080c  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00850812  83f8ff               cmp eax, -1
// 00850815  750f                 jne 0x850826
// 00850817  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0085081d  85c9                 test ecx, ecx
// 0085081f  7405                 je 0x850826
// 00850821  e83ac4fbff           call 0x80cc60
// 00850826  85c0                 test eax, eax
// 00850828  7428                 je 0x850852
// 0085082a  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00850830  83b9e000000002       cmp dword ptr [ecx + 0xe0], 2
// 00850837  7409                 je 0x850842
// 00850839  83b90001000005       cmp dword ptr [ecx + 0x100], 5
// 00850840  7510                 jne 0x850852
// 00850842  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00850848  6a00                 push 0
// 0085084a  50                   push eax
// 0085084b  e830c3fcff           call 0x81cb80
// 00850850  5e                   pop esi
// 00850851  c3                   ret 
// 00850852  8bce                 mov ecx, esi
// 00850854  5e                   pop esi
// 00850855  e9b6bcfbff           jmp 0x80c510
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?OnMouseHover@CXTPControlPopup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
