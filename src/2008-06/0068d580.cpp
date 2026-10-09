// roc 2008-06 0068d580  unit: Ogre::VShadowCameraSetup::?$SharedPtr  size: 149 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068d580
//
// 0068d580  53                   push ebx
// 0068d581  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0068d585  55                   push ebp
// 0068d586  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0068d58a  56                   push esi
// 0068d58b  8b742414             mov esi, dword ptr [esp + 0x14]
// 0068d58f  2bf3                 sub esi, ebx
// 0068d591  8bcd                 mov ecx, ebp
// 0068d593  2bcb                 sub ecx, ebx
// 0068d595  c1fe02               sar esi, 2
// 0068d598  c1f902               sar ecx, 2
// 0068d59b  57                   push edi
// 0068d59c  8bc1                 mov eax, ecx
// 0068d59e  8bfe                 mov edi, esi
// 0068d5a0  85f6                 test esi, esi
// 0068d5a2  740b                 je 0x68d5af
// 0068d5a4  99                   cdq 
// 0068d5a5  f7ff                 idiv edi
// 0068d5a7  8bc7                 mov eax, edi
// 0068d5a9  8bfa                 mov edi, edx
// 0068d5ab  85d2                 test edx, edx
// 0068d5ad  75f5                 jne 0x68d5a4
// 0068d5af  3bc1                 cmp eax, ecx
// 0068d5b1  7d5d                 jge 0x68d610
// 0068d5b3  85c0                 test eax, eax
// 0068d5b5  7e59                 jle 0x68d610
// 0068d5b7  8d1c83               lea ebx, [ebx + eax*4]
// 0068d5ba  8d9b00000000         lea ebx, [ebx]
// 0068d5c0  8b0b                 mov ecx, dword ptr [ebx]
// 0068d5c2  8d14b3               lea edx, [ebx + esi*4]
// 0068d5c5  8bfb                 mov edi, ebx
// 0068d5c7  894c2418             mov dword ptr [esp + 0x18], ecx
// 0068d5cb  3bd5                 cmp edx, ebp
// 0068d5cd  7504                 jne 0x68d5d3
// 0068d5cf  8b542414             mov edx, dword ptr [esp + 0x14]
// 0068d5d3  3bd3                 cmp edx, ebx
// 0068d5d5  742b                 je 0x68d602
// 0068d5d7  8b0a                 mov ecx, dword ptr [edx]
// 0068d5d9  890f                 mov dword ptr [edi], ecx
// 0068d5db  8bcd                 mov ecx, ebp
// 0068d5dd  2bca                 sub ecx, edx
// 0068d5df  c1f902               sar ecx, 2
// 0068d5e2  3bf1                 cmp esi, ecx
// 0068d5e4  8bfa                 mov edi, edx
// 0068d5e6  7d0b                 jge 0x68d5f3
// 0068d5e8  8d0cb500000000       lea ecx, [esi*4]
// 0068d5ef  03d1                 add edx, ecx
// 0068d5f1  eb0b                 jmp 0x68d5fe
// 0068d5f3  8bd6                 mov edx, esi
// 0068d5f5  2bd1                 sub edx, ecx
// 0068d5f7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068d5fb  8d1491               lea edx, [ecx + edx*4]
// 0068d5fe  3bd3                 cmp edx, ebx
// 0068d600  75d5                 jne 0x68d5d7
// 0068d602  8b542418             mov edx, dword ptr [esp + 0x18]
// 0068d606  48                   dec eax
// 0068d607  83eb04               sub ebx, 4
// 0068d60a  8917                 mov dword ptr [edi], edx
// 0068d60c  85c0                 test eax, eax
// 0068d60e  7fb0                 jg 0x68d5c0
// 0068d610  5f                   pop edi
// 0068d611  5e                   pop esi
// 0068d612  5d                   pop ebp
// 0068d613  5b                   pop ebx
// 0068d614  c3                   ret 
// library ogre-1.6.4/OgreSceneManager.cpp (function ??$_Rotate@PAPAVLight@Ogre@@HPAV12@@std@@YAXPAPAVLight@Ogre@@00PAH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreSceneManager.cpp
