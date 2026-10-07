// roc 2008-06 0061c740  unit: RBX::Lua::LuaArguments  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061c740
//
// 0061c740  83ec0c               sub esp, 0xc
// 0061c743  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061c747  d94124               fld dword ptr [ecx + 0x24]
// 0061c74a  d820                 fsub dword ptr [eax]
// 0061c74c  56                   push esi
// 0061c74d  8b742414             mov esi, dword ptr [esp + 0x14]
// 0061c751  51                   push ecx
// 0061c752  d95c2408             fstp dword ptr [esp + 8]
// 0061c756  d94128               fld dword ptr [ecx + 0x28]
// 0061c759  d86004               fsub dword ptr [eax + 4]
// 0061c75c  d95c240c             fstp dword ptr [esp + 0xc]
// 0061c760  d9412c               fld dword ptr [ecx + 0x2c]
// 0061c763  8bce                 mov ecx, esi
// 0061c765  d86008               fsub dword ptr [eax + 8]
// 0061c768  d95c2410             fstp dword ptr [esp + 0x10]
// 0061c76c  e8af6aefff           call 0x513220
// 0061c771  d9442404             fld dword ptr [esp + 4]
// 0061c775  8bc6                 mov eax, esi
// 0061c777  d95e24               fstp dword ptr [esi + 0x24]
// 0061c77a  d9442408             fld dword ptr [esp + 8]
// 0061c77e  d95e28               fstp dword ptr [esi + 0x28]
// 0061c781  d944240c             fld dword ptr [esp + 0xc]
// 0061c785  d95e2c               fstp dword ptr [esi + 0x2c]
// 0061c788  5e                   pop esi
// 0061c789  83c40c               add esp, 0xc
// 0061c78c  c20800               ret 8
// library rbxgs/script\LuaAtomicClasses.cpp (function ??GCoordinateFrame@G3D@@QBE?AV01@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
