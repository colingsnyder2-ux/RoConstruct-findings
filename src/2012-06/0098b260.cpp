// roc 2012-06 0098b260  unit: CXTPPaintManager  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098b260
//
// 0098b260  83ec08               sub esp, 8
// 0098b263  56                   push esi
// 0098b264  57                   push edi
// 0098b265  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0098b269  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 0098b26f  8bf1                 mov esi, ecx
// 0098b271  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0098b277  83f903               cmp ecx, 3
// 0098b27a  0f84e5000000         je 0x98b365
// 0098b280  83f902               cmp ecx, 2
// 0098b283  0f84dc000000         je 0x98b365
// 0098b289  837c244000           cmp dword ptr [esp + 0x40], 0
// 0098b28e  747b                 je 0x98b30b
// 0098b290  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 0098b297  8b442438             mov eax, dword ptr [esp + 0x38]
// 0098b29b  7501                 jne 0x98b29e
// 0098b29d  48                   dec eax
// 0098b29e  01442420             add dword ptr [esp + 0x20], eax
// 0098b2a2  8b442434             mov eax, dword ptr [esp + 0x34]
// 0098b2a6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0098b2aa  50                   push eax
// 0098b2ab  6a00                 push 0
// 0098b2ad  6a00                 push 0
// 0098b2af  51                   push ecx
// 0098b2b0  83ec10               sub esp, 0x10
// 0098b2b3  8bc4                 mov eax, esp
// 0098b2b5  8d542440             lea edx, [esp + 0x40]
// 0098b2b9  52                   push edx
// 0098b2ba  50                   push eax
// 0098b2bb  ff15ec3ab200         call dword ptr [0xb23aec]
// 0098b2c1  8b442438             mov eax, dword ptr [esp + 0x38]
// 0098b2c5  57                   push edi
// 0098b2c6  50                   push eax
// 0098b2c7  8d4c2430             lea ecx, [esp + 0x30]
// 0098b2cb  51                   push ecx
// 0098b2cc  8bce                 mov ecx, esi
// 0098b2ce  e89de6ffff           call 0x989970
// 0098b2d3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0098b2d7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0098b2db  83c006               add eax, 6
// 0098b2de  3bc1                 cmp eax, ecx
// 0098b2e0  7e02                 jle 0x98b2e4
// 0098b2e2  8bc8                 mov ecx, eax
// 0098b2e4  8b442414             mov eax, dword ptr [esp + 0x14]
// 0098b2e8  33d2                 xor edx, edx
// 0098b2ea  39968c000000         cmp dword ptr [esi + 0x8c], edx
// 0098b2f0  894804               mov dword ptr [eax + 4], ecx
// 0098b2f3  0f95c2               setne dl
// 0098b2f6  83c203               add edx, 3
// 0098b2f9  03542408             add edx, dword ptr [esp + 8]
// 0098b2fd  03542438             add edx, dword ptr [esp + 0x38]
// 0098b301  8910                 mov dword ptr [eax], edx
// 0098b303  5f                   pop edi
// 0098b304  5e                   pop esi
// 0098b305  83c408               add esp, 8
// 0098b308  c23000               ret 0x30
// 0098b30b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0098b30f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0098b313  50                   push eax
// 0098b314  6a01                 push 1
// 0098b316  6a00                 push 0
// 0098b318  51                   push ecx
// 0098b319  83ec10               sub esp, 0x10
// 0098b31c  8bc4                 mov eax, esp
// 0098b31e  8d542440             lea edx, [esp + 0x40]
// 0098b322  52                   push edx
// 0098b323  50                   push eax
// 0098b324  ff15ec3ab200         call dword ptr [0xb23aec]
// 0098b32a  8b442438             mov eax, dword ptr [esp + 0x38]
// 0098b32e  57                   push edi
// 0098b32f  50                   push eax
// 0098b330  8d4c2430             lea ecx, [esp + 0x30]
// 0098b334  51                   push ecx
// 0098b335  8bce                 mov ecx, esi
// 0098b337  e834e6ffff           call 0x989970
// 0098b33c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0098b340  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0098b344  83c006               add eax, 6
// 0098b347  3bc1                 cmp eax, ecx
// 0098b349  7e02                 jle 0x98b34d
// 0098b34b  8bc8                 mov ecx, eax
// 0098b34d  8b542408             mov edx, dword ptr [esp + 8]
// 0098b351  8b442414             mov eax, dword ptr [esp + 0x14]
// 0098b355  83c208               add edx, 8
// 0098b358  8910                 mov dword ptr [eax], edx
// 0098b35a  894804               mov dword ptr [eax + 4], ecx
// 0098b35d  5f                   pop edi
// 0098b35e  5e                   pop esi
// 0098b35f  83c408               add esp, 8
// 0098b362  c23000               ret 0x30
// 0098b365  837c244000           cmp dword ptr [esp + 0x40], 0
// 0098b36a  7465                 je 0x98b3d1
// 0098b36c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0098b370  8b542430             mov edx, dword ptr [esp + 0x30]
// 0098b374  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0098b378  01442424             add dword ptr [esp + 0x24], eax
// 0098b37c  51                   push ecx
// 0098b37d  6a00                 push 0
// 0098b37f  6a01                 push 1
// 0098b381  52                   push edx
// 0098b382  83ec10               sub esp, 0x10
// 0098b385  8bc4                 mov eax, esp
// 0098b387  8d4c2440             lea ecx, [esp + 0x40]
// 0098b38b  51                   push ecx
// 0098b38c  50                   push eax
// 0098b38d  ff15ec3ab200         call dword ptr [0xb23aec]
// 0098b393  8b542438             mov edx, dword ptr [esp + 0x38]
// 0098b397  57                   push edi
// 0098b398  52                   push edx
// 0098b399  8d442430             lea eax, [esp + 0x30]
// 0098b39d  50                   push eax
// 0098b39e  8bce                 mov ecx, esi
// 0098b3a0  e8cbe5ffff           call 0x989970
// 0098b3a5  8b442408             mov eax, dword ptr [esp + 8]
// 0098b3a9  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0098b3ad  83c006               add eax, 6
// 0098b3b0  3bc1                 cmp eax, ecx
// 0098b3b2  8bd0                 mov edx, eax
// 0098b3b4  7f02                 jg 0x98b3b8
// 0098b3b6  8bd1                 mov edx, ecx
// 0098b3b8  8b442414             mov eax, dword ptr [esp + 0x14]
// 0098b3bc  8910                 mov dword ptr [eax], edx
// 0098b3be  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0098b3c2  8d4c0a03             lea ecx, [edx + ecx + 3]
// 0098b3c6  894804               mov dword ptr [eax + 4], ecx
// 0098b3c9  5f                   pop edi
// 0098b3ca  5e                   pop esi
// 0098b3cb  83c408               add esp, 8
// 0098b3ce  c23000               ret 0x30
// 0098b3d1  8b542434             mov edx, dword ptr [esp + 0x34]
// 0098b3d5  8b442430             mov eax, dword ptr [esp + 0x30]
// 0098b3d9  52                   push edx
// 0098b3da  6a01                 push 1
// 0098b3dc  6a01                 push 1
// 0098b3de  50                   push eax
// 0098b3df  83ec10               sub esp, 0x10
// 0098b3e2  8bc4                 mov eax, esp
// 0098b3e4  8d4c2440             lea ecx, [esp + 0x40]
// 0098b3e8  51                   push ecx
// 0098b3e9  50                   push eax
// 0098b3ea  ff15ec3ab200         call dword ptr [0xb23aec]
// 0098b3f0  8b542438             mov edx, dword ptr [esp + 0x38]
// 0098b3f4  57                   push edi
// 0098b3f5  52                   push edx
// 0098b3f6  8d442430             lea eax, [esp + 0x30]
// 0098b3fa  50                   push eax
// 0098b3fb  8bce                 mov ecx, esi
// 0098b3fd  e86ee5ffff           call 0x989970
// 0098b402  8b442408             mov eax, dword ptr [esp + 8]
// 0098b406  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0098b40a  83c006               add eax, 6
// 0098b40d  3bc1                 cmp eax, ecx
// 0098b40f  7e02                 jle 0x98b413
// 0098b411  8bc8                 mov ecx, eax
// 0098b413  8b442414             mov eax, dword ptr [esp + 0x14]
// 0098b417  8908                 mov dword ptr [eax], ecx
// 0098b419  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0098b41d  83c108               add ecx, 8
// 0098b420  5f                   pop edi
// 0098b421  894804               mov dword ptr [eax + 4], ecx
// 0098b424  5e                   pop esi
// 0098b425  83c408               add esp, 8
// 0098b428  c23000               ret 0x30
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlText@CXTPPaintManager@@IAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHV2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
