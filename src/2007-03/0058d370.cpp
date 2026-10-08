// roc 2007-03 0058d370  unit: seg_00580000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058d370
//
// 0058d370  d9442404             fld dword ptr [esp + 4]
// 0058d374  83ec0c               sub esp, 0xc
// 0058d377  56                   push esi
// 0058d378  51                   push ecx
// 0058d379  d91c24               fstp dword ptr [esp]
// 0058d37c  6a05                 push 5
// 0058d37e  8bf1                 mov esi, ecx
// 0058d380  e8bbfdffff           call 0x58d140
// 0058d385  8b4660               mov eax, dword ptr [esi + 0x60]
// 0058d388  85c0                 test eax, eax
// 0058d38a  7421                 je 0x58d3ad
// 0058d38c  83780400             cmp dword ptr [eax + 4], 0
// 0058d390  741b                 je 0x58d3ad
// 0058d392  8d442404             lea eax, [esp + 4]
// 0058d396  50                   push eax
// 0058d397  8bce                 mov ecx, esi
// 0058d399  e872f9ffff           call 0x58cd10
// 0058d39e  50                   push eax
// 0058d39f  8bce                 mov ecx, esi
// 0058d3a1  e89af1ffff           call 0x58c540
// 0058d3a6  5e                   pop esi
// 0058d3a7  83c40c               add esp, 0xc
// 0058d3aa  c20400               ret 4
// 0058d3ad  d90578587900         fld dword ptr [0x795878]
// 0058d3b3  d95e28               fstp dword ptr [esi + 0x28]
// 0058d3b6  d9e8                 fld1 
// 0058d3b8  d9562c               fst dword ptr [esi + 0x2c]
// 0058d3bb  d95e30               fstp dword ptr [esi + 0x30]
// 0058d3be  5e                   pop esi
// 0058d3bf  83c40c               add esp, 0xc
// 0058d3c2  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ?updateBuffer@AIChaseController@RBX@@MAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
