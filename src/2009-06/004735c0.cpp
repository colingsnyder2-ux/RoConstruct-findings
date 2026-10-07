// roc 2009-06 004735c0  unit: RBX::LDraw2Lua::LuaWriter  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004735c0
//
// 004735c0  51                   push ecx
// 004735c1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004735c5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004735c9  8b542414             mov edx, dword ptr [esp + 0x14]
// 004735cd  56                   push esi
// 004735ce  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004735d2  50                   push eax
// 004735d3  8b442418             mov eax, dword ptr [esp + 0x18]
// 004735d7  51                   push ecx
// 004735d8  52                   push edx
// 004735d9  50                   push eax
// 004735da  6a04                 push 4
// 004735dc  8bce                 mov ecx, esi
// 004735de  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004735e6  ff15040f8a00         call dword ptr [0x8a0f04]
// 004735ec  8bc6                 mov eax, esi
// 004735ee  5e                   pop esi
// 004735ef  59                   pop ecx
// 004735f0  c3                   ret 
// library ogre-1.7.0/OgreAnimationState.cpp (function ?create@ExceptionFactory@Ogre@@SA?AVItemIdentityException@2@U?$ExceptionCodeType@$03@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1PBDJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationState.cpp
