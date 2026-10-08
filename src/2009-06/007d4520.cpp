// roc 2009-06 007d4520  unit: CXTPDockingPaneMiniWnd  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d4520
//
// 007d4520  83ec48               sub esp, 0x48
// 007d4523  53                   push ebx
// 007d4524  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 007d4528  56                   push esi
// 007d4529  53                   push ebx
// 007d452a  8bf1                 mov esi, ecx
// 007d452c  e869820700           call 0x84c79a
// 007d4531  83be3001000000       cmp dword ptr [esi + 0x130], 0
// 007d4538  0f84c4000000         je 0x7d4602
// 007d453e  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 007d4545  740d                 je 0x7d4554
// 007d4547  83be4c01000000       cmp dword ptr [esi + 0x14c], 0
// 007d454e  0f84ae000000         je 0x7d4602
// 007d4554  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 007d455b  0f85a1000000         jne 0x7d4602
// 007d4561  55                   push ebp
// 007d4562  57                   push edi
// 007d4563  56                   push esi
// 007d4564  8d4c2424             lea ecx, [esp + 0x24]
// 007d4568  e803bff9ff           call 0x770470
// 007d456d  56                   push esi
// 007d456e  8d4c2414             lea ecx, [esp + 0x14]
// 007d4572  e859bff9ff           call 0x7704d0
// 007d4577  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007d457b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007d457f  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 007d4583  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 007d4587  8b542418             mov edx, dword ptr [esp + 0x18]
// 007d458b  8b442428             mov eax, dword ptr [esp + 0x28]
// 007d458f  2b442420             sub eax, dword ptr [esp + 0x20]
// 007d4593  2b542410             sub edx, dword ptr [esp + 0x10]
// 007d4597  8bb630010000         mov esi, dword ptr [esi + 0x130]
// 007d459d  2bc2                 sub eax, edx
// 007d459f  2bcf                 sub ecx, edi
// 007d45a1  8bf9                 mov edi, ecx
// 007d45a3  8be8                 mov ebp, eax
// 007d45a5  8b4620               mov eax, dword ptr [esi + 0x20]
// 007d45a8  8b4010               mov eax, dword ptr [eax + 0x10]
// 007d45ab  8d4e20               lea ecx, [esi + 0x20]
// 007d45ae  8d542430             lea edx, [esp + 0x30]
// 007d45b2  52                   push edx
// 007d45b3  ffd0                 call eax
// 007d45b5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007d45b9  8d0429               lea eax, [ecx + ebp]
// 007d45bc  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 007d45bf  3bc8                 cmp ecx, eax
// 007d45c1  7e02                 jle 0x7d45c5
// 007d45c3  8bc1                 mov eax, ecx
// 007d45c5  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007d45c9  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 007d45cc  894318               mov dword ptr [ebx + 0x18], eax
// 007d45cf  8d0417               lea eax, [edi + edx]
// 007d45d2  3bc8                 cmp ecx, eax
// 007d45d4  7e02                 jle 0x7d45d8
// 007d45d6  8bc1                 mov eax, ecx
// 007d45d8  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007d45db  89431c               mov dword ptr [ebx + 0x1c], eax
// 007d45de  8b442450             mov eax, dword ptr [esp + 0x50]
// 007d45e2  03c5                 add eax, ebp
// 007d45e4  3bc8                 cmp ecx, eax
// 007d45e6  7d02                 jge 0x7d45ea
// 007d45e8  8bc1                 mov eax, ecx
// 007d45ea  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007d45ee  894320               mov dword ptr [ebx + 0x20], eax
// 007d45f1  8d0439               lea eax, [ecx + edi]
// 007d45f4  8b4b24               mov ecx, dword ptr [ebx + 0x24]
// 007d45f7  3bc8                 cmp ecx, eax
// 007d45f9  5f                   pop edi
// 007d45fa  5d                   pop ebp
// 007d45fb  7d02                 jge 0x7d45ff
// 007d45fd  8bc1                 mov eax, ecx
// 007d45ff  894324               mov dword ptr [ebx + 0x24], eax
// 007d4602  5e                   pop esi
// 007d4603  5b                   pop ebx
// 007d4604  83c448               add esp, 0x48
// 007d4607  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnGetMinMaxInfo@CXTPDockingPaneMiniWnd@@IAEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
