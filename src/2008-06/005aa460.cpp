// roc 2008-06 005aa460  unit: RBX::VScriptContext::?$FactoryProduct  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aa460
//
// 005aa460  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 005aa465  56                   push esi
// 005aa466  8b742408             mov esi, dword ptr [esp + 8]
// 005aa46a  50                   push eax
// 005aa46b  56                   push esi
// 005aa46c  e81f680600           call 0x610c90
// 005aa471  6884438300           push 0x834384
// 005aa476  56                   push esi
// 005aa477  e8047e0600           call 0x612280
// 005aa47c  6a00                 push 0
// 005aa47e  6850955a00           push 0x5a9550
// 005aa483  56                   push esi
// 005aa484  e8c77e0600           call 0x612350
// 005aa489  6afd                 push -3
// 005aa48b  56                   push esi
// 005aa48c  e8ef810600           call 0x612680
// 005aa491  68d0448300           push 0x8344d0
// 005aa496  56                   push esi
// 005aa497  e8e47d0600           call 0x612280
// 005aa49c  6a00                 push 0
// 005aa49e  6820955a00           push 0x5a9520
// 005aa4a3  56                   push esi
// 005aa4a4  e8a77e0600           call 0x612350
// 005aa4a9  6afd                 push -3
// 005aa4ab  56                   push esi
// 005aa4ac  e8cf810600           call 0x612680
// 005aa4b1  83c440               add esp, 0x40
// 005aa4b4  68c8448300           push 0x8344c8
// 005aa4b9  56                   push esi
// 005aa4ba  e8c17d0600           call 0x612280
// 005aa4bf  6a00                 push 0
// 005aa4c1  68e0945a00           push 0x5a94e0
// 005aa4c6  56                   push esi
// 005aa4c7  e8847e0600           call 0x612350
// 005aa4cc  6afd                 push -3
// 005aa4ce  56                   push esi
// 005aa4cf  e8ac810600           call 0x612680
// 005aa4d4  68c0448300           push 0x8344c0
// 005aa4d9  56                   push esi
// 005aa4da  e8a17d0600           call 0x612280
// 005aa4df  6a00                 push 0
// 005aa4e1  6880955a00           push 0x5a9580
// 005aa4e6  56                   push esi
// 005aa4e7  e8647e0600           call 0x612350
// 005aa4ec  6afd                 push -3
// 005aa4ee  56                   push esi
// 005aa4ef  e88c810600           call 0x612680
// 005aa4f4  68b4448300           push 0x8344b4
// 005aa4f9  56                   push esi
// 005aa4fa  e8817d0600           call 0x612280
// 005aa4ff  83c440               add esp, 0x40
// 005aa502  6a00                 push 0
// 005aa504  6800955a00           push 0x5a9500
// 005aa509  56                   push esi
// 005aa50a  e8417e0600           call 0x612350
// 005aa50f  6afd                 push -3
// 005aa511  56                   push esi
// 005aa512  e869810600           call 0x612680
// 005aa517  6810458300           push 0x834510
// 005aa51c  56                   push esi
// 005aa51d  e85e7d0600           call 0x612280
// 005aa522  6a00                 push 0
// 005aa524  68f0db6100           push 0x61dbf0
// 005aa529  56                   push esi
// 005aa52a  e8217e0600           call 0x612350
// 005aa52f  6afd                 push -3
// 005aa531  56                   push esi
// 005aa532  e849810600           call 0x612680
// 005aa537  6808458300           push 0x834508
// 005aa53c  56                   push esi
// 005aa53d  e83e7d0600           call 0x612280
// 005aa542  6a00                 push 0
// 005aa544  6870dc6100           push 0x61dc70
// 005aa549  56                   push esi
// 005aa54a  e8017e0600           call 0x612350
// 005aa54f  83c444               add esp, 0x44
// 005aa552  6afd                 push -3
// 005aa554  56                   push esi
// 005aa555  e826810600           call 0x612680
// 005aa55a  6800458300           push 0x834500
// 005aa55f  56                   push esi
// 005aa560  e81b7d0600           call 0x612280
// 005aa565  6a00                 push 0
// 005aa567  68c0ec6100           push 0x61ecc0
// 005aa56c  56                   push esi
// 005aa56d  e8de7d0600           call 0x612350
// 005aa572  6afd                 push -3
// 005aa574  56                   push esi
// 005aa575  e806810600           call 0x612680
// 005aa57a  6818458300           push 0x834518
// 005aa57f  56                   push esi
// 005aa580  e8fb7c0600           call 0x612280
// 005aa585  6a00                 push 0
// 005aa587  68f0dc6100           push 0x61dcf0
// 005aa58c  56                   push esi
// 005aa58d  e8be7d0600           call 0x612350
// 005aa592  6afd                 push -3
// 005aa594  56                   push esi
// 005aa595  e8e6800600           call 0x612680
// 005aa59a  83c440               add esp, 0x40
// 005aa59d  6afe                 push -2
// 005aa59f  56                   push esi
// 005aa5a0  e87b760600           call 0x611c20
// 005aa5a5  83c408               add esp, 8
// 005aa5a8  5e                   pop esi
// 005aa5a9  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?registerClass@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@SAXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
