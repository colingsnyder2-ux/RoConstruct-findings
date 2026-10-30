// from server: 100% by auto
// roc 2007-08 0071eb40  unit: CXTPDialogBar  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071eb40
//
// 0071eb40  83ec10               sub esp, 0x10
// 0071eb43  56                   push esi
// 0071eb44  8bf1                 mov esi, ecx
// 0071eb46  83bee001000000       cmp dword ptr [esi + 0x1e0], 0
// 0071eb4d  7454                 je 0x71eba3
// 0071eb4f  8d442404             lea eax, [esp + 4]
// 0071eb53  50                   push eax
// 0071eb54  e837f4ffff           call 0x71df90
// 0071eb59  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0071eb5d  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 0071eb61  8b542408             mov edx, dword ptr [esp + 8]
// 0071eb65  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0071eb69  8b442420             mov eax, dword ptr [esp + 0x20]
// 0071eb6d  2b442418             sub eax, dword ptr [esp + 0x18]
// 0071eb71  6a14                 push 0x14
// 0071eb73  2b442410             sub eax, dword ptr [esp + 0x10]
// 0071eb77  2bca                 sub ecx, edx
// 0071eb79  51                   push ecx
// 0071eb7a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071eb7e  2bc1                 sub eax, ecx
// 0071eb80  50                   push eax
// 0071eb81  52                   push edx
// 0071eb82  51                   push ecx
// 0071eb83  8b8ee0010000         mov ecx, dword ptr [esi + 0x1e0]
// 0071eb89  6a00                 push 0
// 0071eb8b  51                   push ecx
// 0071eb8c  ff15a4ee7700         call dword ptr [0x77eea4]
// 0071eb92  8b96e0010000         mov edx, dword ptr [esi + 0x1e0]
// 0071eb98  6a00                 push 0
// 0071eb9a  6a00                 push 0
// 0071eb9c  52                   push edx
// 0071eb9d  ff15dcec7700         call dword ptr [0x77ecdc]
// 0071eba3  5e                   pop esi
// 0071eba4  83c410               add esp, 0x10
// 0071eba7  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDialogBar.cpp (function ?MoveChildWindow@CXTPDialogBar@@IAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDialogBar.cpp
