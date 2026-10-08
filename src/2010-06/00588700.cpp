// from server: 100% by auto
// roc 2010-06 00588700  unit: seg_00580000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00588700
//
// 00588700  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00588704  53                   push ebx
// 00588705  56                   push esi
// 00588706  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058870a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0058870d  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 00588713  57                   push edi
// 00588714  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00588718  50                   push eax
// 00588719  51                   push ecx
// 0058871a  6a00                 push 0
// 0058871c  57                   push edi
// 0058871d  6a00                 push 0
// 0058871f  52                   push edx
// 00588720  e84b4cfeff           call 0x56d370
// 00588725  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00588729  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0058872c  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 00588732  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 00588735  03c0                 add eax, eax
// 00588737  03c0                 add eax, eax
// 00588739  51                   push ecx
// 0058873a  03c0                 add eax, eax
// 0058873c  57                   push edi
// 0058873d  e86efdffff           call 0x5884b0
// 00588742  83c420               add esp, 0x20
// 00588745  5f                   pop edi
// 00588746  5e                   pop esi
// 00588747  5b                   pop ebx
// 00588748  c3                   ret 
// library jpeg-6b/jcsample.c (function _fullsize_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
