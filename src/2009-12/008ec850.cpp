// roc 2009-12 008ec850  unit: CXTPDialogBar  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ec850
//
// 008ec850  83ec10               sub esp, 0x10
// 008ec853  56                   push esi
// 008ec854  8bf1                 mov esi, ecx
// 008ec856  83bee001000000       cmp dword ptr [esi + 0x1e0], 0
// 008ec85d  7454                 je 0x8ec8b3
// 008ec85f  8d442404             lea eax, [esp + 4]
// 008ec863  50                   push eax
// 008ec864  e817f4ffff           call 0x8ebc80
// 008ec869  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008ec86d  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 008ec871  8b442420             mov eax, dword ptr [esp + 0x20]
// 008ec875  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 008ec879  8b542408             mov edx, dword ptr [esp + 8]
// 008ec87d  2b442418             sub eax, dword ptr [esp + 0x18]
// 008ec881  6a14                 push 0x14
// 008ec883  2b442410             sub eax, dword ptr [esp + 0x10]
// 008ec887  2bca                 sub ecx, edx
// 008ec889  51                   push ecx
// 008ec88a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ec88e  2bc1                 sub eax, ecx
// 008ec890  50                   push eax
// 008ec891  52                   push edx
// 008ec892  51                   push ecx
// 008ec893  8b8ee0010000         mov ecx, dword ptr [esi + 0x1e0]
// 008ec899  6a00                 push 0
// 008ec89b  51                   push ecx
// 008ec89c  ff15e0c99800         call dword ptr [0x98c9e0]
// 008ec8a2  8b96e0010000         mov edx, dword ptr [esi + 0x1e0]
// 008ec8a8  6a00                 push 0
// 008ec8aa  6a00                 push 0
// 008ec8ac  52                   push edx
// 008ec8ad  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008ec8b3  5e                   pop esi
// 008ec8b4  83c410               add esp, 0x10
// 008ec8b7  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?MoveChildWindow@CXTPDialogBar@@IAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
