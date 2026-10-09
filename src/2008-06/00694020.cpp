// roc 2008-06 00694020  unit: Ogre::RbxSceneManager  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00694020
//
// 00694020  51                   push ecx
// 00694021  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00694025  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00694029  53                   push ebx
// 0069402a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0069402e  55                   push ebp
// 0069402f  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00694033  56                   push esi
// 00694034  8b742418             mov esi, dword ptr [esp + 0x18]
// 00694038  57                   push edi
// 00694039  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0069403d  c644241000           mov byte ptr [esp + 0x10], 0
// 00694042  8b442410             mov eax, dword ptr [esp + 0x10]
// 00694046  50                   push eax
// 00694047  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0069404b  51                   push ecx
// 0069404c  52                   push edx
// 0069404d  53                   push ebx
// 0069404e  57                   push edi
// 0069404f  55                   push ebp
// 00694050  56                   push esi
// 00694051  50                   push eax
// 00694052  e8c9c5ffff           call 0x690620
// 00694057  2b742438             sub esi, dword ptr [esp + 0x38]
// 0069405b  2bfd                 sub edi, ebp
// 0069405d  83c420               add esp, 0x20
// 00694060  c1fe02               sar esi, 2
// 00694063  c1ff02               sar edi, 2
// 00694066  03f7                 add esi, edi
// 00694068  5f                   pop edi
// 00694069  8d04b3               lea eax, [ebx + esi*4]
// 0069406c  5e                   pop esi
// 0069406d  5d                   pop ebp
// 0069406e  5b                   pop ebx
// 0069406f  59                   pop ecx
// 00694070  c3                   ret 
// library ogre-1.6.4/OgreSceneManager.cpp (function ??$_Merge@PAPAVLight@Ogre@@PAPAV12@PAPAV12@UlightLess@SceneManager@2@@std@@YAPAPAVLight@Ogre@@PAPAV12@0000UlightLess@SceneManager@2@Urandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreSceneManager.cpp
