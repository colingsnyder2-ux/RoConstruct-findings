// roc 2009-06 006b5880  unit: RBX::BlockBlockContact  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b5880
//
// 006b5880  83ec10               sub esp, 0x10
// 006b5883  807c241800           cmp byte ptr [esp + 0x18], 0
// 006b5888  56                   push esi
// 006b5889  8bf1                 mov esi, ecx
// 006b588b  7539                 jne 0x6b58c6
// 006b588d  d9e8                 fld1 
// 006b588f  8d442404             lea eax, [esp + 4]
// 006b5893  d9542404             fst dword ptr [esp + 4]
// 006b5897  50                   push eax
// 006b5898  d954240c             fst dword ptr [esp + 0xc]
// 006b589c  d95c2410             fstp dword ptr [esp + 0x10]
// 006b58a0  d9054cad8b00         fld dword ptr [0x8bad4c]
// 006b58a6  d95c2414             fstp dword ptr [esp + 0x14]
// 006b58aa  e8a12fecff           call 0x578850
// 006b58af  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006b58b3  50                   push eax
// 006b58b4  51                   push ecx
// 006b58b5  51                   push ecx
// 006b58b6  8bcc                 mov ecx, esp
// 006b58b8  c70100000000         mov dword ptr [ecx], 0
// 006b58be  8b5624               mov edx, dword ptr [esi + 0x24]
// 006b58c1  e9c1000000           jmp 0x6b5987
// 006b58c6  8b442424             mov eax, dword ptr [esp + 0x24]
// 006b58ca  85c0                 test eax, eax
// 006b58cc  7522                 jne 0x6b58f0
// 006b58ce  e87d2fecff           call 0x578850
// 006b58d3  50                   push eax
// 006b58d4  e8772fecff           call 0x578850
// 006b58d9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006b58dd  50                   push eax
// 006b58de  51                   push ecx
// 006b58df  51                   push ecx
// 006b58e0  8bcc                 mov ecx, esp
// 006b58e2  c70100000000         mov dword ptr [ecx], 0
// 006b58e8  8b5620               mov edx, dword ptr [esi + 0x20]
// 006b58eb  e997000000           jmp 0x6b5987
// 006b58f0  83f801               cmp eax, 1
// 006b58f3  7457                 je 0x6b594c
// 006b58f5  83f803               cmp eax, 3
// 006b58f8  7452                 je 0x6b594c
// 006b58fa  e8310becff           call 0x576430
// 006b58ff  d900                 fld dword ptr [eax]
// 006b5901  d95c2404             fstp dword ptr [esp + 4]
// 006b5905  d94004               fld dword ptr [eax + 4]
// 006b5908  d95c2408             fstp dword ptr [esp + 8]
// 006b590c  d94008               fld dword ptr [eax + 8]
// 006b590f  d95c240c             fstp dword ptr [esp + 0xc]
// 006b5913  d9e8                 fld1 
// 006b5915  d95c2410             fstp dword ptr [esp + 0x10]
// 006b5919  e8322fecff           call 0x578850
// 006b591e  8b542420             mov edx, dword ptr [esp + 0x20]
// 006b5922  50                   push eax
// 006b5923  8d4c2408             lea ecx, [esp + 8]
// 006b5927  51                   push ecx
// 006b5928  52                   push edx
// 006b5929  51                   push ecx
// 006b592a  8d462c               lea eax, [esi + 0x2c]
// 006b592d  8bcc                 mov ecx, esp
// 006b592f  8964242c             mov dword ptr [esp + 0x2c], esp
// 006b5933  50                   push eax
// 006b5934  e86778deff           call 0x49d1a0
// 006b5939  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006b593d  51                   push ecx
// 006b593e  8bce                 mov ecx, esi
// 006b5940  e8ebfdffff           call 0x6b5730
// 006b5945  5e                   pop esi
// 006b5946  83c410               add esp, 0x10
// 006b5949  c21000               ret 0x10
// 006b594c  e84f0becff           call 0x5764a0
// 006b5951  d900                 fld dword ptr [eax]
// 006b5953  d95c2404             fstp dword ptr [esp + 4]
// 006b5957  d94004               fld dword ptr [eax + 4]
// 006b595a  d95c2408             fstp dword ptr [esp + 8]
// 006b595e  d94008               fld dword ptr [eax + 8]
// 006b5961  d95c240c             fstp dword ptr [esp + 0xc]
// 006b5965  d9e8                 fld1 
// 006b5967  d95c2410             fstp dword ptr [esp + 0x10]
// 006b596b  e8e02eecff           call 0x578850
// 006b5970  50                   push eax
// 006b5971  8b442424             mov eax, dword ptr [esp + 0x24]
// 006b5975  8d542408             lea edx, [esp + 8]
// 006b5979  52                   push edx
// 006b597a  50                   push eax
// 006b597b  51                   push ecx
// 006b597c  8bcc                 mov ecx, esp
// 006b597e  c70100000000         mov dword ptr [ecx], 0
// 006b5984  8b5628               mov edx, dword ptr [esi + 0x28]
// 006b5987  8964242c             mov dword ptr [esp + 0x2c], esp
// 006b598b  52                   push edx
// 006b598c  e8cf9edeff           call 0x49f860
// 006b5991  8b442428             mov eax, dword ptr [esp + 0x28]
// 006b5995  50                   push eax
// 006b5996  8bce                 mov ecx, esi
// 006b5998  e893fdffff           call 0x6b5730
// 006b599d  5e                   pop esi
// 006b599e  83c410               add esp, 0x10
// 006b59a1  c21000               ret 0x10
// library rbxgs/gui\GuiDraw.cpp (function ?render2d@GuiDrawImage@RBX@@QAEXPAVAdorn@2@_NAAVRect@2@W4WidgetState@Widget@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
