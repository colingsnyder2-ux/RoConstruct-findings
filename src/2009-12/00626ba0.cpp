// roc 2009-12 00626ba0  unit: seg_00620000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00626ba0
//
// 00626ba0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00626ba4  53                   push ebx
// 00626ba5  56                   push esi
// 00626ba6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00626baa  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00626bad  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 00626bb3  57                   push edi
// 00626bb4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00626bb8  50                   push eax
// 00626bb9  51                   push ecx
// 00626bba  6a00                 push 0
// 00626bbc  57                   push edi
// 00626bbd  6a00                 push 0
// 00626bbf  52                   push edx
// 00626bc0  e8cb50feff           call 0x60bc90
// 00626bc5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00626bc9  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00626bcc  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 00626bd2  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 00626bd5  03c0                 add eax, eax
// 00626bd7  03c0                 add eax, eax
// 00626bd9  51                   push ecx
// 00626bda  03c0                 add eax, eax
// 00626bdc  57                   push edi
// 00626bdd  e86efdffff           call 0x626950
// 00626be2  83c420               add esp, 0x20
// 00626be5  5f                   pop edi
// 00626be6  5e                   pop esi
// 00626be7  5b                   pop ebx
// 00626be8  c3                   ret 
// library jpeg-6b/jcsample.c (function _fullsize_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
