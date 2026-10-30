// from server: 100% by auto
// roc 2012-06 0066a0c0  unit: seg_00660000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066a0c0
//
// 0066a0c0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0066a0c4  53                   push ebx
// 0066a0c5  56                   push esi
// 0066a0c6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066a0ca  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0066a0cd  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 0066a0d3  57                   push edi
// 0066a0d4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0066a0d8  50                   push eax
// 0066a0d9  51                   push ecx
// 0066a0da  6a00                 push 0
// 0066a0dc  57                   push edi
// 0066a0dd  6a00                 push 0
// 0066a0df  52                   push edx
// 0066a0e0  e8fb93feff           call 0x6534e0
// 0066a0e5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0066a0e9  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0066a0ec  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 0066a0f2  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 0066a0f5  03c0                 add eax, eax
// 0066a0f7  03c0                 add eax, eax
// 0066a0f9  51                   push ecx
// 0066a0fa  03c0                 add eax, eax
// 0066a0fc  57                   push edi
// 0066a0fd  e86efdffff           call 0x669e70
// 0066a102  83c420               add esp, 0x20
// 0066a105  5f                   pop edi
// 0066a106  5e                   pop esi
// 0066a107  5b                   pop ebx
// 0066a108  c3                   ret 
// library jpeg-6b/jcsample.c (function _fullsize_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
