// roc 2008-06 00642de0  unit: RBX::VWidget::?$NonFactoryProduct  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00642de0
//
// 00642de0  83ec10               sub esp, 0x10
// 00642de3  807c241800           cmp byte ptr [esp + 0x18], 0
// 00642de8  56                   push esi
// 00642de9  8bf1                 mov esi, ecx
// 00642deb  7539                 jne 0x642e26
// 00642ded  d9e8                 fld1 
// 00642def  8d442404             lea eax, [esp + 4]
// 00642df3  d9542404             fst dword ptr [esp + 4]
// 00642df7  50                   push eax
// 00642df8  d954240c             fst dword ptr [esp + 0xc]
// 00642dfc  d95c2410             fstp dword ptr [esp + 0x10]
// 00642e00  d905ac9b8100         fld dword ptr [0x819bac]
// 00642e06  d95c2414             fstp dword ptr [esp + 0x14]
// 00642e0a  e801811700           call 0x7baf10
// 00642e0f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00642e13  50                   push eax
// 00642e14  51                   push ecx
// 00642e15  51                   push ecx
// 00642e16  8bcc                 mov ecx, esp
// 00642e18  c70100000000         mov dword ptr [ecx], 0
// 00642e1e  8b5624               mov edx, dword ptr [esi + 0x24]
// 00642e21  e9c1000000           jmp 0x642ee7
// 00642e26  8b442424             mov eax, dword ptr [esp + 0x24]
// 00642e2a  85c0                 test eax, eax
// 00642e2c  7522                 jne 0x642e50
// 00642e2e  e8dd801700           call 0x7baf10
// 00642e33  50                   push eax
// 00642e34  e8d7801700           call 0x7baf10
// 00642e39  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00642e3d  50                   push eax
// 00642e3e  51                   push ecx
// 00642e3f  51                   push ecx
// 00642e40  8bcc                 mov ecx, esp
// 00642e42  c70100000000         mov dword ptr [ecx], 0
// 00642e48  8b5620               mov edx, dword ptr [esi + 0x20]
// 00642e4b  e997000000           jmp 0x642ee7
// 00642e50  83f801               cmp eax, 1
// 00642e53  7457                 je 0x642eac
// 00642e55  83f803               cmp eax, 3
// 00642e58  7452                 je 0x642eac
// 00642e5a  e8b11aedff           call 0x514910
// 00642e5f  d900                 fld dword ptr [eax]
// 00642e61  d95c2404             fstp dword ptr [esp + 4]
// 00642e65  d94004               fld dword ptr [eax + 4]
// 00642e68  d95c2408             fstp dword ptr [esp + 8]
// 00642e6c  d94008               fld dword ptr [eax + 8]
// 00642e6f  d95c240c             fstp dword ptr [esp + 0xc]
// 00642e73  d9e8                 fld1 
// 00642e75  d95c2410             fstp dword ptr [esp + 0x10]
// 00642e79  e892801700           call 0x7baf10
// 00642e7e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00642e82  50                   push eax
// 00642e83  8d4c2408             lea ecx, [esp + 8]
// 00642e87  51                   push ecx
// 00642e88  52                   push edx
// 00642e89  51                   push ecx
// 00642e8a  8d462c               lea eax, [esi + 0x2c]
// 00642e8d  8bcc                 mov ecx, esp
// 00642e8f  8964242c             mov dword ptr [esp + 0x2c], esp
// 00642e93  50                   push eax
// 00642e94  e887d9eaff           call 0x4f0820
// 00642e99  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00642e9d  51                   push ecx
// 00642e9e  8bce                 mov ecx, esi
// 00642ea0  e8ebfdffff           call 0x642c90
// 00642ea5  5e                   pop esi
// 00642ea6  83c410               add esp, 0x10
// 00642ea9  c21000               ret 0x10
// 00642eac  e8cf1aedff           call 0x514980
// 00642eb1  d900                 fld dword ptr [eax]
// 00642eb3  d95c2404             fstp dword ptr [esp + 4]
// 00642eb7  d94004               fld dword ptr [eax + 4]
// 00642eba  d95c2408             fstp dword ptr [esp + 8]
// 00642ebe  d94008               fld dword ptr [eax + 8]
// 00642ec1  d95c240c             fstp dword ptr [esp + 0xc]
// 00642ec5  d9e8                 fld1 
// 00642ec7  d95c2410             fstp dword ptr [esp + 0x10]
// 00642ecb  e840801700           call 0x7baf10
// 00642ed0  50                   push eax
// 00642ed1  8b442424             mov eax, dword ptr [esp + 0x24]
// 00642ed5  8d542408             lea edx, [esp + 8]
// 00642ed9  52                   push edx
// 00642eda  50                   push eax
// 00642edb  51                   push ecx
// 00642edc  8bcc                 mov ecx, esp
// 00642ede  c70100000000         mov dword ptr [ecx], 0
// 00642ee4  8b5628               mov edx, dword ptr [esi + 0x28]
// 00642ee7  8964242c             mov dword ptr [esp + 0x2c], esp
// 00642eeb  52                   push edx
// 00642eec  e8af60f5ff           call 0x598fa0
// 00642ef1  8b442428             mov eax, dword ptr [esp + 0x28]
// 00642ef5  50                   push eax
// 00642ef6  8bce                 mov ecx, esi
// 00642ef8  e893fdffff           call 0x642c90
// 00642efd  5e                   pop esi
// 00642efe  83c410               add esp, 0x10
// 00642f01  c21000               ret 0x10
// library rbxgs/gui\GuiDraw.cpp (function ?render2d@GuiDrawImage@RBX@@QAEXPAVAdorn@2@_NAAVRect@2@W4WidgetState@Widget@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
