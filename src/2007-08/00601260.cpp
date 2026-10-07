// roc 2007-08 00601260  unit: RBX::VWidget::?$NonFactoryProduct  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00601260
//
// 00601260  83ec10               sub esp, 0x10
// 00601263  807c241800           cmp byte ptr [esp + 0x18], 0
// 00601268  56                   push esi
// 00601269  8bf1                 mov esi, ecx
// 0060126b  7539                 jne 0x6012a6
// 0060126d  d9e8                 fld1 
// 0060126f  8d442404             lea eax, [esp + 4]
// 00601273  d9542404             fst dword ptr [esp + 4]
// 00601277  50                   push eax
// 00601278  d954240c             fst dword ptr [esp + 0xc]
// 0060127c  d95c2410             fstp dword ptr [esp + 0x10]
// 00601280  d9059c7e7900         fld dword ptr [0x797e9c]
// 00601286  d95c2414             fstp dword ptr [esp + 0x14]
// 0060128a  e8415c1300           call 0x736ed0
// 0060128f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00601293  50                   push eax
// 00601294  51                   push ecx
// 00601295  51                   push ecx
// 00601296  8bcc                 mov ecx, esp
// 00601298  c70100000000         mov dword ptr [ecx], 0
// 0060129e  8b5624               mov edx, dword ptr [esi + 0x24]
// 006012a1  e9c1000000           jmp 0x601367
// 006012a6  8b442424             mov eax, dword ptr [esp + 0x24]
// 006012aa  85c0                 test eax, eax
// 006012ac  7522                 jne 0x6012d0
// 006012ae  e81d5c1300           call 0x736ed0
// 006012b3  50                   push eax
// 006012b4  e8175c1300           call 0x736ed0
// 006012b9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006012bd  50                   push eax
// 006012be  51                   push ecx
// 006012bf  51                   push ecx
// 006012c0  8bcc                 mov ecx, esp
// 006012c2  c70100000000         mov dword ptr [ecx], 0
// 006012c8  8b5620               mov edx, dword ptr [esi + 0x20]
// 006012cb  e997000000           jmp 0x601367
// 006012d0  83f801               cmp eax, 1
// 006012d3  7457                 je 0x60132c
// 006012d5  83f803               cmp eax, 3
// 006012d8  7452                 je 0x60132c
// 006012da  e8d19df0ff           call 0x50b0b0
// 006012df  d900                 fld dword ptr [eax]
// 006012e1  d95c2404             fstp dword ptr [esp + 4]
// 006012e5  d94004               fld dword ptr [eax + 4]
// 006012e8  d95c2408             fstp dword ptr [esp + 8]
// 006012ec  d94008               fld dword ptr [eax + 8]
// 006012ef  d95c240c             fstp dword ptr [esp + 0xc]
// 006012f3  d9e8                 fld1 
// 006012f5  d95c2410             fstp dword ptr [esp + 0x10]
// 006012f9  e8d25b1300           call 0x736ed0
// 006012fe  8b542420             mov edx, dword ptr [esp + 0x20]
// 00601302  50                   push eax
// 00601303  8d4c2408             lea ecx, [esp + 8]
// 00601307  51                   push ecx
// 00601308  52                   push edx
// 00601309  51                   push ecx
// 0060130a  8d462c               lea eax, [esi + 0x2c]
// 0060130d  8bcc                 mov ecx, esp
// 0060130f  8964242c             mov dword ptr [esp + 0x2c], esp
// 00601313  50                   push eax
// 00601314  e8a7f1ecff           call 0x4d04c0
// 00601319  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060131d  51                   push ecx
// 0060131e  8bce                 mov ecx, esi
// 00601320  e8ebfdffff           call 0x601110
// 00601325  5e                   pop esi
// 00601326  83c410               add esp, 0x10
// 00601329  c21000               ret 0x10
// 0060132c  e8ef9df0ff           call 0x50b120
// 00601331  d900                 fld dword ptr [eax]
// 00601333  d95c2404             fstp dword ptr [esp + 4]
// 00601337  d94004               fld dword ptr [eax + 4]
// 0060133a  d95c2408             fstp dword ptr [esp + 8]
// 0060133e  d94008               fld dword ptr [eax + 8]
// 00601341  d95c240c             fstp dword ptr [esp + 0xc]
// 00601345  d9e8                 fld1 
// 00601347  d95c2410             fstp dword ptr [esp + 0x10]
// 0060134b  e8805b1300           call 0x736ed0
// 00601350  50                   push eax
// 00601351  8b442424             mov eax, dword ptr [esp + 0x24]
// 00601355  8d542408             lea edx, [esp + 8]
// 00601359  52                   push edx
// 0060135a  50                   push eax
// 0060135b  51                   push ecx
// 0060135c  8bcc                 mov ecx, esp
// 0060135e  c70100000000         mov dword ptr [ecx], 0
// 00601364  8b5628               mov edx, dword ptr [esi + 0x28]
// 00601367  8964242c             mov dword ptr [esp + 0x2c], esp
// 0060136b  52                   push edx
// 0060136c  e8ff3be7ff           call 0x474f70
// 00601371  8b442428             mov eax, dword ptr [esp + 0x28]
// 00601375  50                   push eax
// 00601376  8bce                 mov ecx, esi
// 00601378  e893fdffff           call 0x601110
// 0060137d  5e                   pop esi
// 0060137e  83c410               add esp, 0x10
// 00601381  c21000               ret 0x10
// library rbxgs/gui\GuiDraw.cpp (function ?render2d@GuiDrawImage@RBX@@QAEXPAVAdorn@2@_NAAVRect@2@W4WidgetState@Widget@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
