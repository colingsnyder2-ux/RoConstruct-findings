// from server: 100% by tester
// roc 2007-03 005e8e30  unit: seg_005e0000  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e8e30
//
// 005e8e30  83ec10               sub esp, 0x10
// 005e8e33  807c241800           cmp byte ptr [esp + 0x18], 0
// 005e8e38  56                   push esi
// 005e8e39  8bf1                 mov esi, ecx
// 005e8e3b  7539                 jne 0x5e8e76
// 005e8e3d  d9e8                 fld1 
// 005e8e3f  8d442404             lea eax, [esp + 4]
// 005e8e43  d9542404             fst dword ptr [esp + 4]
// 005e8e47  50                   push eax
// 005e8e48  d954240c             fst dword ptr [esp + 0xc]
// 005e8e4c  d95c2410             fstp dword ptr [esp + 0x10]
// 005e8e50  d9058c727900         fld dword ptr [0x79728c]
// 005e8e56  d95c2414             fstp dword ptr [esp + 0x14]
// 005e8e5a  e8e1061500           call 0x739540
// 005e8e5f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e8e63  50                   push eax
// 005e8e64  51                   push ecx
// 005e8e65  51                   push ecx
// 005e8e66  8bcc                 mov ecx, esp
// 005e8e68  c70100000000         mov dword ptr [ecx], 0
// 005e8e6e  8b5624               mov edx, dword ptr [esi + 0x24]
// 005e8e71  e9c1000000           jmp 0x5e8f37
// 005e8e76  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e8e7a  85c0                 test eax, eax
// 005e8e7c  7522                 jne 0x5e8ea0
// 005e8e7e  e8bd061500           call 0x739540
// 005e8e83  50                   push eax
// 005e8e84  e8b7061500           call 0x739540
// 005e8e89  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e8e8d  50                   push eax
// 005e8e8e  51                   push ecx
// 005e8e8f  51                   push ecx
// 005e8e90  8bcc                 mov ecx, esp
// 005e8e92  c70100000000         mov dword ptr [ecx], 0
// 005e8e98  8b5620               mov edx, dword ptr [esi + 0x20]
// 005e8e9b  e997000000           jmp 0x5e8f37
// 005e8ea0  83f801               cmp eax, 1
// 005e8ea3  7457                 je 0x5e8efc
// 005e8ea5  83f803               cmp eax, 3
// 005e8ea8  7452                 je 0x5e8efc
// 005e8eaa  e82179f1ff           call 0x5007d0
// 005e8eaf  d900                 fld dword ptr [eax]
// 005e8eb1  d95c2404             fstp dword ptr [esp + 4]
// 005e8eb5  d94004               fld dword ptr [eax + 4]
// 005e8eb8  d95c2408             fstp dword ptr [esp + 8]
// 005e8ebc  d94008               fld dword ptr [eax + 8]
// 005e8ebf  d95c240c             fstp dword ptr [esp + 0xc]
// 005e8ec3  d9e8                 fld1 
// 005e8ec5  d95c2410             fstp dword ptr [esp + 0x10]
// 005e8ec9  e872061500           call 0x739540
// 005e8ece  8b542420             mov edx, dword ptr [esp + 0x20]
// 005e8ed2  50                   push eax
// 005e8ed3  8d4c2408             lea ecx, [esp + 8]
// 005e8ed7  51                   push ecx
// 005e8ed8  52                   push edx
// 005e8ed9  51                   push ecx
// 005e8eda  8d462c               lea eax, [esi + 0x2c]
// 005e8edd  8bcc                 mov ecx, esp
// 005e8edf  8964242c             mov dword ptr [esp + 0x2c], esp
// 005e8ee3  50                   push eax
// 005e8ee4  e80730eeff           call 0x4cbef0
// 005e8ee9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e8eed  51                   push ecx
// 005e8eee  8bce                 mov ecx, esi
// 005e8ef0  e80bfeffff           call 0x5e8d00
// 005e8ef5  5e                   pop esi
// 005e8ef6  83c410               add esp, 0x10
// 005e8ef9  c21000               ret 0x10
// 005e8efc  e83f79f1ff           call 0x500840
// 005e8f01  d900                 fld dword ptr [eax]
// 005e8f03  d95c2404             fstp dword ptr [esp + 4]
// 005e8f07  d94004               fld dword ptr [eax + 4]
// 005e8f0a  d95c2408             fstp dword ptr [esp + 8]
// 005e8f0e  d94008               fld dword ptr [eax + 8]
// 005e8f11  d95c240c             fstp dword ptr [esp + 0xc]
// 005e8f15  d9e8                 fld1 
// 005e8f17  d95c2410             fstp dword ptr [esp + 0x10]
// 005e8f1b  e820061500           call 0x739540
// 005e8f20  50                   push eax
// 005e8f21  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e8f25  8d542408             lea edx, [esp + 8]
// 005e8f29  52                   push edx
// 005e8f2a  50                   push eax
// 005e8f2b  51                   push ecx
// 005e8f2c  8bcc                 mov ecx, esp
// 005e8f2e  c70100000000         mov dword ptr [ecx], 0
// 005e8f34  8b5628               mov edx, dword ptr [esi + 0x28]
// 005e8f37  8964242c             mov dword ptr [esp + 0x2c], esp
// 005e8f3b  52                   push edx
// 005e8f3c  e84fc1e8ff           call 0x475090
// 005e8f41  8b442428             mov eax, dword ptr [esp + 0x28]
// 005e8f45  50                   push eax
// 005e8f46  8bce                 mov ecx, esi
// 005e8f48  e8b3fdffff           call 0x5e8d00
// 005e8f4d  5e                   pop esi
// 005e8f4e  83c410               add esp, 0x10
// 005e8f51  c21000               ret 0x10
// library rbxgs/gui\GuiDraw.cpp (function ?render2d@GuiDrawImage@RBX@@QAEXPAVAdorn@2@_NAAVRect@2@W4WidgetState@Widget@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
