// roc 2008-06 00590070  unit: TextXmlParser  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00590070
//
// 00590070  83ec0c               sub esp, 0xc
// 00590073  56                   push esi
// 00590074  8b742414             mov esi, dword ptr [esp + 0x14]
// 00590078  8bce                 mov ecx, esi
// 0059007a  e881dd0700           call 0x60de00
// 0059007f  8bce                 mov ecx, esi
// 00590081  e8fade0700           call 0x60df80
// 00590086  837c242400           cmp dword ptr [esp + 0x24], 0
// 0059008b  751f                 jne 0x5900ac
// 0059008d  8d442418             lea eax, [esp + 0x18]
// 00590091  50                   push eax
// 00590092  8d4c2408             lea ecx, [esp + 8]
// 00590096  51                   push ecx
// 00590097  8bce                 mov ecx, esi
// 00590099  e862e00700           call 0x60e100
// 0059009e  8bce                 mov ecx, esi
// 005900a0  e8dbe60700           call 0x60e780
// 005900a5  5e                   pop esi
// 005900a6  83c40c               add esp, 0xc
// 005900a9  c21400               ret 0x14
// 005900ac  8d542418             lea edx, [esp + 0x18]
// 005900b0  52                   push edx
// 005900b1  8d442408             lea eax, [esp + 8]
// 005900b5  50                   push eax
// 005900b6  8bce                 mov ecx, esi
// 005900b8  e8c3e00700           call 0x60e180
// 005900bd  8bce                 mov ecx, esi
// 005900bf  e8bce60700           call 0x60e780
// 005900c4  5e                   pop esi
// 005900c5  83c40c               add esp, 0xc
// 005900c8  c21400               ret 0x14
// library rbxgs/v8datamodel\RootInstance.cpp (function ?moveSafe@RootInstance@RBX@@AAEXAAVMegaDragger@2@VVector3@G3D@@W4MoveType@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/RootInstance.cpp
