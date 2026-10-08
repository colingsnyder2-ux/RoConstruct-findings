// roc 2007-03 004185e0  unit: seg_00410000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004185e0
//
// 004185e0  8b5104               mov edx, dword ptr [ecx + 4]
// 004185e3  8b4204               mov eax, dword ptr [edx + 4]
// 004185e6  83ec10               sub esp, 0x10
// 004185e9  80781500             cmp byte ptr [eax + 0x15], 0
// 004185ed  53                   push ebx
// 004185ee  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004185f2  56                   push esi
// 004185f3  57                   push edi
// 004185f4  7516                 jne 0x41860c
// 004185f6  8b33                 mov esi, dword ptr [ebx]
// 004185f8  39700c               cmp dword ptr [eax + 0xc], esi
// 004185fb  7305                 jae 0x418602
// 004185fd  8b4008               mov eax, dword ptr [eax + 8]
// 00418600  eb04                 jmp 0x418606
// 00418602  8bd0                 mov edx, eax
// 00418604  8b00                 mov eax, dword ptr [eax]
// 00418606  80781500             cmp byte ptr [eax + 0x15], 0
// 0041860a  74ec                 je 0x4185f8
// 0041860c  3b5104               cmp edx, dword ptr [ecx + 4]
// 0041860f  8bfa                 mov edi, edx
// 00418611  8bf1                 mov esi, ecx
// 00418613  7407                 je 0x41861c
// 00418615  8b03                 mov eax, dword ptr [ebx]
// 00418617  3b420c               cmp eax, dword ptr [edx + 0xc]
// 0041861a  7324                 jae 0x418640
// 0041861c  8b13                 mov edx, dword ptr [ebx]
// 0041861e  8d44240c             lea eax, [esp + 0xc]
// 00418622  50                   push eax
// 00418623  57                   push edi
// 00418624  89542414             mov dword ptr [esp + 0x14], edx
// 00418628  56                   push esi
// 00418629  8d542420             lea edx, [esp + 0x20]
// 0041862d  52                   push edx
// 0041862e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00418636  e805f7ffff           call 0x417d40
// 0041863b  8b30                 mov esi, dword ptr [eax]
// 0041863d  8b7804               mov edi, dword ptr [eax + 4]
// 00418640  85f6                 test esi, esi
// 00418642  8b1d44e97700         mov ebx, dword ptr [0x77e944]
// 00418648  7502                 jne 0x41864c
// 0041864a  ffd3                 call ebx
// 0041864c  3b7e04               cmp edi, dword ptr [esi + 4]
// 0041864f  7502                 jne 0x418653
// 00418651  ffd3                 call ebx
// 00418653  8d4710               lea eax, [edi + 0x10]
// 00418656  5f                   pop edi
// 00418657  5e                   pop esi
// 00418658  5b                   pop ebx
// 00418659  83c410               add esp, 0x10
// 0041865c  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ??A?$map@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@@std@@QAEAAW4CameraType@Camera@RBX@@ABQBVName@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
