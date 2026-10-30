// roc 2007-03 00529680  unit: seg_00520000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00529680
//
// 00529680  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00529684  53                   push ebx
// 00529685  56                   push esi
// 00529686  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052968a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0052968d  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 00529693  57                   push edi
// 00529694  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00529698  50                   push eax
// 00529699  51                   push ecx
// 0052969a  6a00                 push 0
// 0052969c  57                   push edi
// 0052969d  6a00                 push 0
// 0052969f  52                   push edx
// 005296a0  e89baffeff           call 0x514640
// 005296a5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005296a9  8b401c               mov eax, dword ptr [eax + 0x1c]
// 005296ac  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 005296b2  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 005296b5  03c0                 add eax, eax
// 005296b7  03c0                 add eax, eax
// 005296b9  51                   push ecx
// 005296ba  03c0                 add eax, eax
// 005296bc  57                   push edi
// 005296bd  e8aefdffff           call 0x529470
// 005296c2  83c420               add esp, 0x20
// 005296c5  5f                   pop edi
// 005296c6  5e                   pop esi
// 005296c7  5b                   pop ebx
// 005296c8  c3                   ret 
// library jpeg-6b/jcsample.c (function _fullsize_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
