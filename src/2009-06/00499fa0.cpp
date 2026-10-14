// roc 2009-06 00499fa0  unit: Ogre::RbxManualResourceLoaderChain  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00499fa0
//
// 00499fa0  6aff                 push -1
// 00499fa2  68946b8500           push 0x856b94
// 00499fa7  64a100000000         mov eax, dword ptr fs:[0]
// 00499fad  50                   push eax
// 00499fae  64892500000000       mov dword ptr fs:[0], esp
// 00499fb5  51                   push ecx
// 00499fb6  56                   push esi
// 00499fb7  57                   push edi
// 00499fb8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00499fbc  8bf1                 mov esi, ecx
// 00499fbe  57                   push edi
// 00499fbf  8974240c             mov dword ptr [esp + 0xc], esi
// 00499fc3  e848f4f6ff           call 0x409410
// 00499fc8  57                   push edi
// 00499fc9  8d4e28               lea ecx, [esi + 0x28]
// 00499fcc  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00499fd4  c70694fc8b00         mov dword ptr [esi], 0x8bfc94
// 00499fda  ff15b8e48900         call dword ptr [0x89e4b8]
// 00499fe0  8b442420             mov eax, dword ptr [esp + 0x20]
// 00499fe4  50                   push eax
// 00499fe5  8d4e44               lea ecx, [esi + 0x44]
// 00499fe8  c644241801           mov byte ptr [esp + 0x18], 1
// 00499fed  ff15b8e48900         call dword ptr [0x89e4b8]
// 00499ff3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00499ff7  5f                   pop edi
// 00499ff8  8bc6                 mov eax, esi
// 00499ffa  5e                   pop esi
// 00499ffb  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a002  83c410               add esp, 0x10
// 0049a005  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ??0Error@GImage@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
