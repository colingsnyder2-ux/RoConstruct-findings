// roc 2008-06 006982a0  unit: Ogre::RbxSceneManager  size: 312 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006982a0
//
// 006982a0  6aff                 push -1
// 006982a2  68a8e87d00           push 0x7de8a8
// 006982a7  64a100000000         mov eax, dword ptr fs:[0]
// 006982ad  50                   push eax
// 006982ae  64892500000000       mov dword ptr fs:[0], esp
// 006982b5  83ec14               sub esp, 0x14
// 006982b8  53                   push ebx
// 006982b9  55                   push ebp
// 006982ba  56                   push esi
// 006982bb  57                   push edi
// 006982bc  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 006982c0  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 006982c4  8b542434             mov edx, dword ptr [esp + 0x34]
// 006982c8  33db                 xor ebx, ebx
// 006982ca  8d043f               lea eax, [edi + edi]
// 006982cd  3bc1                 cmp eax, ecx
// 006982cf  895c242c             mov dword ptr [esp + 0x2c], ebx
// 006982d3  7f62                 jg 0x698337
// 006982d5  8b442458             mov eax, dword ptr [esp + 0x58]
// 006982d9  50                   push eax
// 006982da  83ec14               sub esp, 0x14
// 006982dd  8bc4                 mov eax, esp
// 006982df  8d0cba               lea ecx, [edx + edi*4]
// 006982e2  89642468             mov dword ptr [esp + 0x68], esp
// 006982e6  8d34b9               lea esi, [ecx + edi*4]
// 006982e9  56                   push esi
// 006982ea  51                   push ecx
// 006982eb  51                   push ecx
// 006982ec  8918                 mov dword ptr [eax], ebx
// 006982ee  895804               mov dword ptr [eax + 4], ebx
// 006982f1  895808               mov dword ptr [eax + 8], ebx
// 006982f4  89580c               mov dword ptr [eax + 0xc], ebx
// 006982f7  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 006982fb  52                   push edx
// 006982fc  8d4c2438             lea ecx, [esp + 0x38]
// 00698300  51                   push ecx
// 00698301  896810               mov dword ptr [eax + 0x10], ebp
// 00698304  e877bfffff           call 0x694280
// 00698309  8b5010               mov edx, dword ptr [eax + 0x10]
// 0069830c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00698310  83c42c               add esp, 0x2c
// 00698313  8954244c             mov dword ptr [esp + 0x4c], edx
// 00698317  3bc3                 cmp eax, ebx
// 00698319  7409                 je 0x698324
// 0069831b  50                   push eax
// 0069831c  e859830000           call 0x6a067a
// 00698321  83c404               add esp, 4
// 00698324  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00698328  8d043f               lea eax, [edi + edi]
// 0069832b  2bc8                 sub ecx, eax
// 0069832d  3bc8                 cmp ecx, eax
// 0069832f  8bd6                 mov edx, esi
// 00698331  894c2454             mov dword ptr [esp + 0x54], ecx
// 00698335  7d9e                 jge 0x6982d5
// 00698337  3bcf                 cmp ecx, edi
// 00698339  7f30                 jg 0x69836b
// 0069833b  83ec14               sub esp, 0x14
// 0069833e  8bc4                 mov eax, esp
// 00698340  8918                 mov dword ptr [eax], ebx
// 00698342  895804               mov dword ptr [eax + 4], ebx
// 00698345  895808               mov dword ptr [eax + 8], ebx
// 00698348  89580c               mov dword ptr [eax + 0xc], ebx
// 0069834b  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0069834f  894810               mov dword ptr [eax + 0x10], ecx
// 00698352  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00698356  89642468             mov dword ptr [esp + 0x68], esp
// 0069835a  50                   push eax
// 0069835b  52                   push edx
// 0069835c  8d4c242c             lea ecx, [esp + 0x2c]
// 00698360  51                   push ecx
// 00698361  e8eaa1ffff           call 0x692550
// 00698366  83c420               add esp, 0x20
// 00698369  eb38                 jmp 0x6983a3
// 0069836b  8b442458             mov eax, dword ptr [esp + 0x58]
// 0069836f  50                   push eax
// 00698370  83ec14               sub esp, 0x14
// 00698373  8bc4                 mov eax, esp
// 00698375  8918                 mov dword ptr [eax], ebx
// 00698377  895804               mov dword ptr [eax + 4], ebx
// 0069837a  895808               mov dword ptr [eax + 8], ebx
// 0069837d  89580c               mov dword ptr [eax + 0xc], ebx
// 00698380  8b742464             mov esi, dword ptr [esp + 0x64]
// 00698384  8964246c             mov dword ptr [esp + 0x6c], esp
// 00698388  897010               mov dword ptr [eax + 0x10], esi
// 0069838b  8b442450             mov eax, dword ptr [esp + 0x50]
// 0069838f  50                   push eax
// 00698390  8d0cba               lea ecx, [edx + edi*4]
// 00698393  51                   push ecx
// 00698394  51                   push ecx
// 00698395  52                   push edx
// 00698396  8d4c2438             lea ecx, [esp + 0x38]
// 0069839a  51                   push ecx
// 0069839b  e8e0beffff           call 0x694280
// 006983a0  83c42c               add esp, 0x2c
// 006983a3  8b442410             mov eax, dword ptr [esp + 0x10]
// 006983a7  3bc3                 cmp eax, ebx
// 006983a9  7409                 je 0x6983b4
// 006983ab  50                   push eax
// 006983ac  e8c9820000           call 0x6a067a
// 006983b1  83c404               add esp, 4
// 006983b4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006983b8  3bc3                 cmp eax, ebx
// 006983ba  7409                 je 0x6983c5
// 006983bc  50                   push eax
// 006983bd  e8b8820000           call 0x6a067a
// 006983c2  83c404               add esp, 4
// 006983c5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006983c9  5f                   pop edi
// 006983ca  5e                   pop esi
// 006983cb  5d                   pop ebp
// 006983cc  64890d00000000       mov dword ptr fs:[0], ecx
// 006983d3  5b                   pop ebx
// 006983d4  83c420               add esp, 0x20
// 006983d7  c3                   ret 
// library ogre-1.6.4/OgreSceneManager.cpp (function ??$_Chunked_merge@PAPAVLight@Ogre@@V?$_Temp_iterator@PAVLight@Ogre@@@std@@HUlightsForShadowTextureLess@SceneManager@2@@std@@YAXPAPAVLight@Ogre@@0V?$_Temp_iterator@PAVLight@Ogre@@@0@HHUlightsForShadowTextureLess@SceneManager@2@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreSceneManager.cpp
