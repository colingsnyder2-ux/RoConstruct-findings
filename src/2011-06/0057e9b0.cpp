// from server: 100% by auto
// roc 2011-06 0057e9b0  unit: seg_00570000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057e9b0
//
// 0057e9b0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057e9b4  53                   push ebx
// 0057e9b5  56                   push esi
// 0057e9b6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057e9ba  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0057e9bd  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 0057e9c3  57                   push edi
// 0057e9c4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0057e9c8  50                   push eax
// 0057e9c9  51                   push ecx
// 0057e9ca  6a00                 push 0
// 0057e9cc  57                   push edi
// 0057e9cd  6a00                 push 0
// 0057e9cf  52                   push edx
// 0057e9d0  e8fb93feff           call 0x567dd0
// 0057e9d5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0057e9d9  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0057e9dc  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 0057e9e2  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 0057e9e5  03c0                 add eax, eax
// 0057e9e7  03c0                 add eax, eax
// 0057e9e9  51                   push ecx
// 0057e9ea  03c0                 add eax, eax
// 0057e9ec  57                   push edi
// 0057e9ed  e86efdffff           call 0x57e760
// 0057e9f2  83c420               add esp, 0x20
// 0057e9f5  5f                   pop edi
// 0057e9f6  5e                   pop esi
// 0057e9f7  5b                   pop ebx
// 0057e9f8  c3                   ret 
// library jpeg-6b/jcsample.c (function _fullsize_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
