// roc 2008-06 006515e0  unit: RBX::ScoreHud  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006515e0
//
// 006515e0  55                   push ebp
// 006515e1  8bec                 mov ebp, esp
// 006515e3  6aff                 push -1
// 006515e5  6838b77d00           push 0x7db738
// 006515ea  64a100000000         mov eax, dword ptr fs:[0]
// 006515f0  50                   push eax
// 006515f1  64892500000000       mov dword ptr fs:[0], esp
// 006515f8  83ec08               sub esp, 8
// 006515fb  53                   push ebx
// 006515fc  56                   push esi
// 006515fd  57                   push edi
// 006515fe  8965f0               mov dword ptr [ebp - 0x10], esp
// 00651601  8bf1                 mov esi, ecx
// 00651603  6a04                 push 4
// 00651605  8975ec               mov dword ptr [ebp - 0x14], esi
// 00651608  e813f30400           call 0x6a0920
// 0065160d  83c404               add esp, 4
// 00651610  85c0                 test eax, eax
// 00651612  7404                 je 0x651618
// 00651614  8930                 mov dword ptr [eax], esi
// 00651616  eb02                 jmp 0x65161a
// 00651618  33c0                 xor eax, eax
// 0065161a  8906                 mov dword ptr [esi], eax
// 0065161c  8bce                 mov ecx, esi
// 0065161e  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00651625  e816f10100           call 0x670740
// 0065162a  894618               mov dword ptr [esi + 0x18], eax
// 0065162d  b101                 mov cl, 1
// 0065162f  88482d               mov byte ptr [eax + 0x2d], cl
// 00651632  8b4618               mov eax, dword ptr [esi + 0x18]
// 00651635  894004               mov dword ptr [eax + 4], eax
// 00651638  8b4618               mov eax, dword ptr [esi + 0x18]
// 0065163b  8900                 mov dword ptr [eax], eax
// 0065163d  8b4618               mov eax, dword ptr [esi + 0x18]
// 00651640  894008               mov dword ptr [eax + 8], eax
// 00651643  8b4508               mov eax, dword ptr [ebp + 8]
// 00651646  884dfc               mov byte ptr [ebp - 4], cl
// 00651649  50                   push eax
// 0065164a  8bce                 mov ecx, esi
// 0065164c  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00651653  e878feffff           call 0x6514d0
// 00651658  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0065165b  5f                   pop edi
// 0065165c  8bc6                 mov eax, esi
// 0065165e  5e                   pop esi
// 0065165f  64890d00000000       mov dword ptr fs:[0], ecx
// 00651666  5b                   pop ebx
// 00651667  8be5                 mov esp, ebp
// 00651669  5d                   pop ebp
// 0065166a  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ??0?$_Tree@V?$_Tmap_traits@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
