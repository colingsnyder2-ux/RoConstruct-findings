// roc 2007-03 005815f0  unit: seg_00580000  size: 294 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005815f0
//
// 005815f0  6aff                 push -1
// 005815f2  68246e7500           push 0x756e24
// 005815f7  64a100000000         mov eax, dword ptr fs:[0]
// 005815fd  50                   push eax
// 005815fe  64892500000000       mov dword ptr fs:[0], esp
// 00581605  83ec0c               sub esp, 0xc
// 00581608  53                   push ebx
// 00581609  56                   push esi
// 0058160a  57                   push edi
// 0058160b  8bf9                 mov edi, ecx
// 0058160d  897c240c             mov dword ptr [esp + 0xc], edi
// 00581611  8b4748               mov eax, dword ptr [edi + 0x48]
// 00581614  8b08                 mov ecx, dword ptr [eax]
// 00581616  8d7744               lea esi, [edi + 0x44]
// 00581619  50                   push eax
// 0058161a  56                   push esi
// 0058161b  51                   push ecx
// 0058161c  56                   push esi
// 0058161d  8d442420             lea eax, [esp + 0x20]
// 00581621  50                   push eax
// 00581622  8bce                 mov ecx, esi
// 00581624  c744243404000000     mov dword ptr [esp + 0x34], 4
// 0058162c  e87ff6faff           call 0x530cb0
// 00581631  8b4604               mov eax, dword ptr [esi + 4]
// 00581634  50                   push eax
// 00581635  e8b6ca0900           call 0x61e0f0
// 0058163a  33db                 xor ebx, ebx
// 0058163c  895e04               mov dword ptr [esi + 4], ebx
// 0058163f  895e08               mov dword ptr [esi + 8], ebx
// 00581642  8b473c               mov eax, dword ptr [edi + 0x3c]
// 00581645  8b08                 mov ecx, dword ptr [eax]
// 00581647  83c404               add esp, 4
// 0058164a  8d7738               lea esi, [edi + 0x38]
// 0058164d  50                   push eax
// 0058164e  56                   push esi
// 0058164f  51                   push ecx
// 00581650  56                   push esi
// 00581651  8d4c2420             lea ecx, [esp + 0x20]
// 00581655  51                   push ecx
// 00581656  8bce                 mov ecx, esi
// 00581658  c644243403           mov byte ptr [esp + 0x34], 3
// 0058165d  e88e54fcff           call 0x546af0
// 00581662  8b4604               mov eax, dword ptr [esi + 4]
// 00581665  50                   push eax
// 00581666  e885ca0900           call 0x61e0f0
// 0058166b  895e04               mov dword ptr [esi + 4], ebx
// 0058166e  895e08               mov dword ptr [esi + 8], ebx
// 00581671  8b4730               mov eax, dword ptr [edi + 0x30]
// 00581674  8b08                 mov ecx, dword ptr [eax]
// 00581676  83c404               add esp, 4
// 00581679  8d772c               lea esi, [edi + 0x2c]
// 0058167c  50                   push eax
// 0058167d  56                   push esi
// 0058167e  51                   push ecx
// 0058167f  56                   push esi
// 00581680  8d542420             lea edx, [esp + 0x20]
// 00581684  52                   push edx
// 00581685  8bce                 mov ecx, esi
// 00581687  c644243402           mov byte ptr [esp + 0x34], 2
// 0058168c  e82ff8ffff           call 0x580ec0
// 00581691  8b4604               mov eax, dword ptr [esi + 4]
// 00581694  50                   push eax
// 00581695  e856ca0900           call 0x61e0f0
// 0058169a  895e04               mov dword ptr [esi + 4], ebx
// 0058169d  895e08               mov dword ptr [esi + 8], ebx
// 005816a0  8b4724               mov eax, dword ptr [edi + 0x24]
// 005816a3  8b08                 mov ecx, dword ptr [eax]
// 005816a5  83c404               add esp, 4
// 005816a8  8d7720               lea esi, [edi + 0x20]
// 005816ab  50                   push eax
// 005816ac  56                   push esi
// 005816ad  51                   push ecx
// 005816ae  56                   push esi
// 005816af  8d442420             lea eax, [esp + 0x20]
// 005816b3  50                   push eax
// 005816b4  8bce                 mov ecx, esi
// 005816b6  c644243401           mov byte ptr [esp + 0x34], 1
// 005816bb  e8f0f5faff           call 0x530cb0
// 005816c0  8b4e04               mov ecx, dword ptr [esi + 4]
// 005816c3  51                   push ecx
// 005816c4  e827ca0900           call 0x61e0f0
// 005816c9  83c404               add esp, 4
// 005816cc  895e04               mov dword ptr [esi + 4], ebx
// 005816cf  895e08               mov dword ptr [esi + 8], ebx
// 005816d2  8b4714               mov eax, dword ptr [edi + 0x14]
// 005816d5  3bc3                 cmp eax, ebx
// 005816d7  7409                 je 0x5816e2
// 005816d9  50                   push eax
// 005816da  e811ca0900           call 0x61e0f0
// 005816df  83c404               add esp, 4
// 005816e2  895f14               mov dword ptr [edi + 0x14], ebx
// 005816e5  895f18               mov dword ptr [edi + 0x18], ebx
// 005816e8  895f1c               mov dword ptr [edi + 0x1c], ebx
// 005816eb  8b4704               mov eax, dword ptr [edi + 4]
// 005816ee  3bc3                 cmp eax, ebx
// 005816f0  7409                 je 0x5816fb
// 005816f2  50                   push eax
// 005816f3  e8f8c90900           call 0x61e0f0
// 005816f8  83c404               add esp, 4
// 005816fb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005816ff  895f04               mov dword ptr [edi + 4], ebx
// 00581702  895f08               mov dword ptr [edi + 8], ebx
// 00581705  895f0c               mov dword ptr [edi + 0xc], ebx
// 00581708  5f                   pop edi
// 00581709  5e                   pop esi
// 0058170a  5b                   pop ebx
// 0058170b  64890d00000000       mov dword ptr fs:[0], ecx
// 00581712  83c418               add esp, 0x18
// 00581715  c3                   ret 
// library rbxgs/v8datamodel\BrickColor.cpp (function ??1BrickMap@BrickColor@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/BrickColor.cpp
