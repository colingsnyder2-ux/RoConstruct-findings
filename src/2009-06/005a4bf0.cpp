// roc 2009-06 005a4bf0  unit: seg_005a0000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a4bf0
//
// 005a4bf0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005a4bf4  53                   push ebx
// 005a4bf5  56                   push esi
// 005a4bf6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a4bfa  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005a4bfd  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 005a4c03  57                   push edi
// 005a4c04  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005a4c08  50                   push eax
// 005a4c09  51                   push ecx
// 005a4c0a  6a00                 push 0
// 005a4c0c  57                   push edi
// 005a4c0d  6a00                 push 0
// 005a4c0f  52                   push edx
// 005a4c10  e82b52feff           call 0x589e40
// 005a4c15  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a4c19  8b401c               mov eax, dword ptr [eax + 0x1c]
// 005a4c1c  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 005a4c22  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 005a4c25  03c0                 add eax, eax
// 005a4c27  03c0                 add eax, eax
// 005a4c29  51                   push ecx
// 005a4c2a  03c0                 add eax, eax
// 005a4c2c  57                   push edi
// 005a4c2d  e86efdffff           call 0x5a49a0
// 005a4c32  83c420               add esp, 0x20
// 005a4c35  5f                   pop edi
// 005a4c36  5e                   pop esi
// 005a4c37  5b                   pop ebx
// 005a4c38  c3                   ret 
// library jpeg-6b/jcsample.c (function _fullsize_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
