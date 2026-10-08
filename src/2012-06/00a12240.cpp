// roc 2012-06 00a12240  unit: XTPPaintThemes::CXTPOfficeTheme  size: 496 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a12240
//
// 00a12240  83ec10               sub esp, 0x10
// 00a12243  53                   push ebx
// 00a12244  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a12248  56                   push esi
// 00a12249  57                   push edi
// 00a1224a  8d44240c             lea eax, [esp + 0xc]
// 00a1224e  8bf9                 mov edi, ecx
// 00a12250  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00a12253  50                   push eax
// 00a12254  51                   push ecx
// 00a12255  ff15d83ab200         call dword ptr [0xb23ad8]
// 00a1225b  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 00a12261  83f804               cmp eax, 4
// 00a12264  0f85c6000000         jne 0xa12330
// 00a1226a  6a3d                 push 0x3d
// 00a1226c  8bcf                 mov ecx, edi
// 00a1226e  e81d56f7ff           call 0x987890
// 00a12273  83bbf800000002       cmp dword ptr [ebx + 0xf8], 2
// 00a1227a  8bf0                 mov esi, eax
// 00a1227c  7507                 jne 0xa12285
// 00a1227e  b829000000           mov eax, 0x29
// 00a12283  eb12                 jmp 0xa12297
// 00a12285  53                   push ebx
// 00a12286  8bcf                 mov ecx, edi
// 00a12288  e8f35ff7ff           call 0x988280
// 00a1228d  f7d8                 neg eax
// 00a1228f  1bc0                 sbb eax, eax
// 00a12291  83e0f1               and eax, 0xfffffff1
// 00a12294  83c01e               add eax, 0x1e
// 00a12297  50                   push eax
// 00a12298  8bcf                 mov ecx, edi
// 00a1229a  e8f155f7ff           call 0x987890
// 00a1229f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a122a3  56                   push esi
// 00a122a4  56                   push esi
// 00a122a5  8d542414             lea edx, [esp + 0x14]
// 00a122a9  52                   push edx
// 00a122aa  8bcf                 mov ecx, edi
// 00a122ac  8bd8                 mov ebx, eax
// 00a122ae  e8f30bf7ff           call 0x982ea6
// 00a122b3  6aff                 push -1
// 00a122b5  6aff                 push -1
// 00a122b7  8d442414             lea eax, [esp + 0x14]
// 00a122bb  50                   push eax
// 00a122bc  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a122c2  53                   push ebx
// 00a122c3  8d4c2410             lea ecx, [esp + 0x10]
// 00a122c7  51                   push ecx
// 00a122c8  8bcf                 mov ecx, edi
// 00a122ca  e8dd0bf7ff           call 0x982eac
// 00a122cf  56                   push esi
// 00a122d0  56                   push esi
// 00a122d1  8d542414             lea edx, [esp + 0x14]
// 00a122d5  52                   push edx
// 00a122d6  8bcf                 mov ecx, edi
// 00a122d8  e8c90bf7ff           call 0x982ea6
// 00a122dd  8b4704               mov eax, dword ptr [edi + 4]
// 00a122e0  8b1dc020b200         mov ebx, dword ptr [0xb220c0]
// 00a122e6  56                   push esi
// 00a122e7  6a02                 push 2
// 00a122e9  6a02                 push 2
// 00a122eb  50                   push eax
// 00a122ec  ffd3                 call ebx
// 00a122ee  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a122f2  8b5704               mov edx, dword ptr [edi + 4]
// 00a122f5  56                   push esi
// 00a122f6  6a02                 push 2
// 00a122f8  83c1fe               add ecx, -2
// 00a122fb  51                   push ecx
// 00a122fc  52                   push edx
// 00a122fd  ffd3                 call ebx
// 00a122ff  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a12303  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a12306  56                   push esi
// 00a12307  83c0fe               add eax, -2
// 00a1230a  50                   push eax
// 00a1230b  6a02                 push 2
// 00a1230d  51                   push ecx
// 00a1230e  ffd3                 call ebx
// 00a12310  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a12314  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a12318  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a1231b  56                   push esi
// 00a1231c  83c2fe               add edx, -2
// 00a1231f  52                   push edx
// 00a12320  83c0fe               add eax, -2
// 00a12323  50                   push eax
// 00a12324  51                   push ecx
// 00a12325  ffd3                 call ebx
// 00a12327  5f                   pop edi
// 00a12328  5e                   pop esi
// 00a12329  5b                   pop ebx
// 00a1232a  83c410               add esp, 0x10
// 00a1232d  c20800               ret 8
// 00a12330  83f805               cmp eax, 5
// 00a12333  754c                 jne 0xa12381
// 00a12335  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a12339  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a1233d  8b742420             mov esi, dword ptr [esp + 0x20]
// 00a12341  6a29                 push 0x29
// 00a12343  6a2b                 push 0x2b
// 00a12345  83ec10               sub esp, 0x10
// 00a12348  8bc4                 mov eax, esp
// 00a1234a  8910                 mov dword ptr [eax], edx
// 00a1234c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a12350  894804               mov dword ptr [eax + 4], ecx
// 00a12353  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a12357  895008               mov dword ptr [eax + 8], edx
// 00a1235a  89480c               mov dword ptr [eax + 0xc], ecx
// 00a1235d  56                   push esi
// 00a1235e  8bcf                 mov ecx, edi
// 00a12360  e80b66f7ff           call 0x988970
// 00a12365  6a1e                 push 0x1e
// 00a12367  8bcf                 mov ecx, edi
// 00a12369  e82255f7ff           call 0x987890
// 00a1236e  50                   push eax
// 00a1236f  53                   push ebx
// 00a12370  56                   push esi
// 00a12371  8bcf                 mov ecx, edi
// 00a12373  e8d8fdffff           call 0xa12150
// 00a12378  5f                   pop edi
// 00a12379  5e                   pop esi
// 00a1237a  5b                   pop ebx
// 00a1237b  83c410               add esp, 0x10
// 00a1237e  c20800               ret 8
// 00a12381  53                   push ebx
// 00a12382  8bcf                 mov ecx, edi
// 00a12384  e8f75ef7ff           call 0x988280
// 00a12389  6a0f                 push 0xf
// 00a1238b  8bcf                 mov ecx, edi
// 00a1238d  85c0                 test eax, eax
// 00a1238f  741d                 je 0xa123ae
// 00a12391  e8fa54f7ff           call 0x987890
// 00a12396  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a1239a  50                   push eax
// 00a1239b  8d542410             lea edx, [esp + 0x10]
// 00a1239f  52                   push edx
// 00a123a0  e8070bf7ff           call 0x982eac
// 00a123a5  5f                   pop edi
// 00a123a6  5e                   pop esi
// 00a123a7  5b                   pop ebx
// 00a123a8  83c410               add esp, 0x10
// 00a123ab  c20800               ret 8
// 00a123ae  e8dd54f7ff           call 0x987890
// 00a123b3  6a1e                 push 0x1e
// 00a123b5  8bcf                 mov ecx, edi
// 00a123b7  8bf0                 mov esi, eax
// 00a123b9  e8d254f7ff           call 0x987890
// 00a123be  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a123c2  50                   push eax
// 00a123c3  8d442410             lea eax, [esp + 0x10]
// 00a123c7  50                   push eax
// 00a123c8  8bcf                 mov ecx, edi
// 00a123ca  e8dd0af7ff           call 0x982eac
// 00a123cf  56                   push esi
// 00a123d0  56                   push esi
// 00a123d1  8d4c2414             lea ecx, [esp + 0x14]
// 00a123d5  51                   push ecx
// 00a123d6  8bcf                 mov ecx, edi
// 00a123d8  e8c90af7ff           call 0x982ea6
// 00a123dd  8b5704               mov edx, dword ptr [edi + 4]
// 00a123e0  8b1dc020b200         mov ebx, dword ptr [0xb220c0]
// 00a123e6  56                   push esi
// 00a123e7  6a01                 push 1
// 00a123e9  6a01                 push 1
// 00a123eb  52                   push edx
// 00a123ec  ffd3                 call ebx
// 00a123ee  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a123f2  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a123f5  56                   push esi
// 00a123f6  6a01                 push 1
// 00a123f8  83c0fe               add eax, -2
// 00a123fb  50                   push eax
// 00a123fc  51                   push ecx
// 00a123fd  ffd3                 call ebx
// 00a123ff  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a12403  8b4704               mov eax, dword ptr [edi + 4]
// 00a12406  56                   push esi
// 00a12407  83c2fe               add edx, -2
// 00a1240a  52                   push edx
// 00a1240b  6a01                 push 1
// 00a1240d  50                   push eax
// 00a1240e  ffd3                 call ebx
// 00a12410  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a12414  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a12418  8b4704               mov eax, dword ptr [edi + 4]
// 00a1241b  56                   push esi
// 00a1241c  83c1fe               add ecx, -2
// 00a1241f  51                   push ecx
// 00a12420  83c2fe               add edx, -2
// 00a12423  52                   push edx
// 00a12424  50                   push eax
// 00a12425  ffd3                 call ebx
// 00a12427  5f                   pop edi
// 00a12428  5e                   pop esi
// 00a12429  5b                   pop ebx
// 00a1242a  83c410               add esp, 0x10
// 00a1242d  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?FillCommandBarEntry@CXTPOfficeTheme@XTPPaintThemes@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
