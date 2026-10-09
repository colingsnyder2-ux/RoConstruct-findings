// roc 2008-06 0041bc50  unit: VDHTMLWindow::?$BoundFuncDesc  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041bc50
//
// 0041bc50  6aff                 push -1
// 0041bc52  68e8e07b00           push 0x7be0e8
// 0041bc57  64a100000000         mov eax, dword ptr fs:[0]
// 0041bc5d  50                   push eax
// 0041bc5e  64892500000000       mov dword ptr fs:[0], esp
// 0041bc65  51                   push ecx
// 0041bc66  56                   push esi
// 0041bc67  8bf1                 mov esi, ecx
// 0041bc69  89742404             mov dword ptr [esp + 4], esi
// 0041bc6d  e8fefcffff           call 0x41b970
// 0041bc72  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041bc7a  e8f1feffff           call 0x41bb70
// 0041bc7f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041bc83  89461c               mov dword ptr [esi + 0x1c], eax
// 0041bc86  c706bcee8000         mov dword ptr [esi], 0x80eebc
// 0041bc8c  c74610acee8000       mov dword ptr [esi + 0x10], 0x80eeac
// 0041bc93  c74614a4ee8000       mov dword ptr [esi + 0x14], 0x80eea4
// 0041bc9a  c746209cee8000       mov dword ptr [esi + 0x20], 0x80ee9c
// 0041bca1  c746248cee8000       mov dword ptr [esi + 0x24], 0x80ee8c
// 0041bca8  c746447cee8000       mov dword ptr [esi + 0x44], 0x80ee7c
// 0041bcaf  c746646cee8000       mov dword ptr [esi + 0x64], 0x80ee6c
// 0041bcb6  c786840000005cee8000 mov dword ptr [esi + 0x84], 0x80ee5c
// 0041bcc0  c786a40000004cee8000 mov dword ptr [esi + 0xa4], 0x80ee4c
// 0041bcca  c786c40000003cee8000 mov dword ptr [esi + 0xc4], 0x80ee3c
// 0041bcd4  8bc6                 mov eax, esi
// 0041bcd6  5e                   pop esi
// 0041bcd7  64890d00000000       mov dword ptr fs:[0], ecx
// 0041bcde  83c410               add esp, 0x10
// 0041bce1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
