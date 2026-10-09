// roc 2008-06 00694080  unit: Ogre::RbxSceneManager  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00694080
//
// 00694080  51                   push ecx
// 00694081  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00694085  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00694089  53                   push ebx
// 0069408a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0069408e  55                   push ebp
// 0069408f  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00694093  56                   push esi
// 00694094  8b742418             mov esi, dword ptr [esp + 0x18]
// 00694098  57                   push edi
// 00694099  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0069409d  c644241000           mov byte ptr [esp + 0x10], 0
// 006940a2  8b442410             mov eax, dword ptr [esp + 0x10]
// 006940a6  50                   push eax
// 006940a7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006940ab  51                   push ecx
// 006940ac  52                   push edx
// 006940ad  53                   push ebx
// 006940ae  57                   push edi
// 006940af  55                   push ebp
// 006940b0  56                   push esi
// 006940b1  50                   push eax
// 006940b2  e819c6ffff           call 0x6906d0
// 006940b7  2b742438             sub esi, dword ptr [esp + 0x38]
// 006940bb  2bfd                 sub edi, ebp
// 006940bd  83c420               add esp, 0x20
// 006940c0  c1fe02               sar esi, 2
// 006940c3  c1ff02               sar edi, 2
// 006940c6  03f7                 add esi, edi
// 006940c8  5f                   pop edi
// 006940c9  8d04b3               lea eax, [ebx + esi*4]
// 006940cc  5e                   pop esi
// 006940cd  5d                   pop ebp
// 006940ce  5b                   pop ebx
// 006940cf  59                   pop ecx
// 006940d0  c3                   ret 
// library ogre-1.6.4/OgreSceneManager.cpp (function ??$_Merge@PAPAVLight@Ogre@@PAPAV12@PAPAV12@UlightLess@SceneManager@2@@std@@YAPAPAVLight@Ogre@@PAPAV12@0000UlightLess@SceneManager@2@Urandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreSceneManager.cpp
