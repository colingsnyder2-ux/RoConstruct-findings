// roc 2010-06 0087a2d0  unit: CXTPControlCustom  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087a2d0
//
// 0087a2d0  53                   push ebx
// 0087a2d1  56                   push esi
// 0087a2d2  57                   push edi
// 0087a2d3  8bf1                 mov esi, ecx
// 0087a2d5  8d442410             lea eax, [esp + 0x10]
// 0087a2d9  50                   push eax
// 0087a2da  8dbec0000000         lea edi, [esi + 0xc0]
// 0087a2e0  57                   push edi
// 0087a2e1  ff1518ba9e00         call dword ptr [0x9eba18]
// 0087a2e7  85c0                 test eax, eax
// 0087a2e9  742e                 je 0x87a319
// 0087a2eb  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 0087a2f1  85c9                 test ecx, ecx
// 0087a2f3  0f84d4000000         je 0x87a3cd
// 0087a2f9  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0087a2ff  85c0                 test eax, eax
// 0087a301  7504                 jne 0x87a307
// 0087a303  33db                 xor ebx, ebx
// 0087a305  eb03                 jmp 0x87a30a
// 0087a307  8b5820               mov ebx, dword ptr [eax + 0x20]
// 0087a30a  51                   push ecx
// 0087a30b  ff154cba9e00         call dword ptr [0x9eba4c]
// 0087a311  3bc3                 cmp eax, ebx
// 0087a313  0f84b4000000         je 0x87a3cd
// 0087a319  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087a31d  8b542414             mov edx, dword ptr [esp + 0x14]
// 0087a321  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087a325  890f                 mov dword ptr [edi], ecx
// 0087a327  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087a32b  895704               mov dword ptr [edi + 4], edx
// 0087a32e  8b967c010000         mov edx, dword ptr [esi + 0x17c]
// 0087a334  894708               mov dword ptr [edi + 8], eax
// 0087a337  52                   push edx
// 0087a338  894f0c               mov dword ptr [edi + 0xc], ecx
// 0087a33b  e82ad9f2ff           call 0x7a7c6a
// 0087a340  8bf8                 mov edi, eax
// 0087a342  85ff                 test edi, edi
// 0087a344  0f8483000000         je 0x87a3cd
// 0087a34a  8b4720               mov eax, dword ptr [edi + 0x20]
// 0087a34d  85c0                 test eax, eax
// 0087a34f  747c                 je 0x87a3cd
// 0087a351  50                   push eax
// 0087a352  ff1528bc9e00         call dword ptr [0x9ebc28]
// 0087a358  85c0                 test eax, eax
// 0087a35a  7471                 je 0x87a3cd
// 0087a35c  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0087a362  50                   push eax
// 0087a363  8bcf                 mov ecx, edi
// 0087a365  e876f1f6ff           call 0x7e94e0
// 0087a36a  6a00                 push 0
// 0087a36c  6800000040           push 0x40000000
// 0087a371  6800000080           push 0x80000000
// 0087a376  8bcf                 mov ecx, edi
// 0087a378  e89dddf2ff           call 0x7a811a
// 0087a37d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087a381  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0087a385  2b8e8c010000         sub ecx, dword ptr [esi + 0x18c]
// 0087a38b  039e84010000         add ebx, dword ptr [esi + 0x184]
// 0087a391  8b442418             mov eax, dword ptr [esp + 0x18]
// 0087a395  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087a399  039680010000         add edx, dword ptr [esi + 0x180]
// 0087a39f  2b8688010000         sub eax, dword ptr [esi + 0x188]
// 0087a3a5  6a01                 push 1
// 0087a3a7  894c2420             mov dword ptr [esp + 0x20], ecx
// 0087a3ab  2bcb                 sub ecx, ebx
// 0087a3ad  51                   push ecx
// 0087a3ae  89442420             mov dword ptr [esp + 0x20], eax
// 0087a3b2  2bc2                 sub eax, edx
// 0087a3b4  50                   push eax
// 0087a3b5  53                   push ebx
// 0087a3b6  52                   push edx
// 0087a3b7  8bcf                 mov ecx, edi
// 0087a3b9  89542424             mov dword ptr [esp + 0x24], edx
// 0087a3bd  895c2428             mov dword ptr [esp + 0x28], ebx
// 0087a3c1  e8acd9f2ff           call 0x7a7d72
// 0087a3c6  8bce                 mov ecx, esi
// 0087a3c8  e8c3fbffff           call 0x879f90
// 0087a3cd  5f                   pop edi
// 0087a3ce  5e                   pop esi
// 0087a3cf  5b                   pop ebx
// 0087a3d0  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?SetRect@CXTPControlCustom@@MAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
