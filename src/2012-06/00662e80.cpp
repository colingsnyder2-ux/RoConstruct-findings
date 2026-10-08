// from server: 100% by auto
// roc 2012-06 00662e80  unit: seg_00660000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00662e80
//
// 00662e80  53                   push ebx
// 00662e81  56                   push esi
// 00662e82  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00662e86  8b4604               mov eax, dword ptr [esi + 4]
// 00662e89  8b08                 mov ecx, dword ptr [eax]
// 00662e8b  6a40                 push 0x40
// 00662e8d  6a01                 push 1
// 00662e8f  56                   push esi
// 00662e90  ffd1                 call ecx
// 00662e92  898698010000         mov dword ptr [esi + 0x198], eax
// 00662e98  c700202c6600         mov dword ptr [eax], 0x662c20
// 00662e9e  33db                 xor ebx, ebx
// 00662ea0  89582c               mov dword ptr [eax + 0x2c], ebx
// 00662ea3  895830               mov dword ptr [eax + 0x30], ebx
// 00662ea6  895834               mov dword ptr [eax + 0x34], ebx
// 00662ea9  895838               mov dword ptr [eax + 0x38], ebx
// 00662eac  8b4624               mov eax, dword ptr [esi + 0x24]
// 00662eaf  8b5604               mov edx, dword ptr [esi + 4]
// 00662eb2  8b0a                 mov ecx, dword ptr [edx]
// 00662eb4  c1e008               shl eax, 8
// 00662eb7  50                   push eax
// 00662eb8  6a01                 push 1
// 00662eba  56                   push esi
// 00662ebb  ffd1                 call ecx
// 00662ebd  83c418               add esp, 0x18
// 00662ec0  395e24               cmp dword ptr [esi + 0x24], ebx
// 00662ec3  89868c000000         mov dword ptr [esi + 0x8c], eax
// 00662ec9  8bd0                 mov edx, eax
// 00662ecb  7e1c                 jle 0x662ee9
// 00662ecd  57                   push edi
// 00662ece  8bff                 mov edi, edi
// 00662ed0  83c8ff               or eax, 0xffffffff
// 00662ed3  8bfa                 mov edi, edx
// 00662ed5  b940000000           mov ecx, 0x40
// 00662eda  43                   inc ebx
// 00662edb  f3ab                 rep stosd dword ptr es:[edi], eax
// 00662edd  81c200010000         add edx, 0x100
// 00662ee3  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 00662ee6  7ce8                 jl 0x662ed0
// 00662ee8  5f                   pop edi
// 00662ee9  5e                   pop esi
// 00662eea  5b                   pop ebx
// 00662eeb  c3                   ret 
// library jpeg-6b/jdphuff.c (function _jinit_phuff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
