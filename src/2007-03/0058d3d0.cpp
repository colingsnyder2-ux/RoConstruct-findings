// roc 2007-03 0058d3d0  unit: seg_00580000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058d3d0
//
// 0058d3d0  d9442404             fld dword ptr [esp + 4]
// 0058d3d4  83ec18               sub esp, 0x18
// 0058d3d7  56                   push esi
// 0058d3d8  51                   push ecx
// 0058d3d9  d91c24               fstp dword ptr [esp]
// 0058d3dc  6a06                 push 6
// 0058d3de  8bf1                 mov esi, ecx
// 0058d3e0  e85bfdffff           call 0x58d140
// 0058d3e5  8b4660               mov eax, dword ptr [esi + 0x60]
// 0058d3e8  85c0                 test eax, eax
// 0058d3ea  7438                 je 0x58d424
// 0058d3ec  83780400             cmp dword ptr [eax + 4], 0
// 0058d3f0  7432                 je 0x58d424
// 0058d3f2  8d442410             lea eax, [esp + 0x10]
// 0058d3f6  50                   push eax
// 0058d3f7  8bce                 mov ecx, esi
// 0058d3f9  e812f9ffff           call 0x58cd10
// 0058d3fe  d900                 fld dword ptr [eax]
// 0058d400  d9e0                 fchs 
// 0058d402  8d4c2404             lea ecx, [esp + 4]
// 0058d406  d95c2404             fstp dword ptr [esp + 4]
// 0058d40a  51                   push ecx
// 0058d40b  d94004               fld dword ptr [eax + 4]
// 0058d40e  8bce                 mov ecx, esi
// 0058d410  d9e0                 fchs 
// 0058d412  d95c240c             fstp dword ptr [esp + 0xc]
// 0058d416  d94008               fld dword ptr [eax + 8]
// 0058d419  d9e0                 fchs 
// 0058d41b  d95c2410             fstp dword ptr [esp + 0x10]
// 0058d41f  e81cf1ffff           call 0x58c540
// 0058d424  5e                   pop esi
// 0058d425  83c418               add esp, 0x18
// 0058d428  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ?updateBuffer@AIFleeController@RBX@@MAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
