// roc 2012-06 004e42c0  unit: Ogre::VResource::?$SharedPtr  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004e42c0
//
// 004e42c0  53                   push ebx
// 004e42c1  56                   push esi
// 004e42c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e42c6  8d4604               lea eax, [esi + 4]
// 004e42c9  8d5104               lea edx, [ecx + 4]
// 004e42cc  57                   push edi
// 004e42cd  3bd0                 cmp edx, eax
// 004e42cf  7408                 je 0x4e42d9
// 004e42d1  8b18                 mov ebx, dword ptr [eax]
// 004e42d3  8b3a                 mov edi, dword ptr [edx]
// 004e42d5  891a                 mov dword ptr [edx], ebx
// 004e42d7  8938                 mov dword ptr [eax], edi
// 004e42d9  8d4608               lea eax, [esi + 8]
// 004e42dc  8d5108               lea edx, [ecx + 8]
// 004e42df  3bd0                 cmp edx, eax
// 004e42e1  7408                 je 0x4e42eb
// 004e42e3  8b18                 mov ebx, dword ptr [eax]
// 004e42e5  8b3a                 mov edi, dword ptr [edx]
// 004e42e7  891a                 mov dword ptr [edx], ebx
// 004e42e9  8938                 mov dword ptr [eax], edi
// 004e42eb  8d460c               lea eax, [esi + 0xc]
// 004e42ee  83c10c               add ecx, 0xc
// 004e42f1  3bc8                 cmp ecx, eax
// 004e42f3  7408                 je 0x4e42fd
// 004e42f5  8b30                 mov esi, dword ptr [eax]
// 004e42f7  8b11                 mov edx, dword ptr [ecx]
// 004e42f9  8931                 mov dword ptr [ecx], esi
// 004e42fb  8910                 mov dword ptr [eax], edx
// 004e42fd  5f                   pop edi
// 004e42fe  5e                   pop esi
// 004e42ff  5b                   pop ebx
// 004e4300  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ?swap@?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@MAEXAAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
