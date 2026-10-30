// roc 2012-06 0073c930  unit: RBX::VInstance::?$NonFactoryProduct  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0073c930
//
// 0073c930  55                   push ebp
// 0073c931  8bec                 mov ebp, esp
// 0073c933  6aff                 push -1
// 0073c935  68c00dac00           push 0xac0dc0
// 0073c93a  64a100000000         mov eax, dword ptr fs:[0]
// 0073c940  50                   push eax
// 0073c941  64892500000000       mov dword ptr fs:[0], esp
// 0073c948  83ec08               sub esp, 8
// 0073c94b  53                   push ebx
// 0073c94c  56                   push esi
// 0073c94d  57                   push edi
// 0073c94e  8bf1                 mov esi, ecx
// 0073c950  8965f0               mov dword ptr [ebp - 0x10], esp
// 0073c953  8975ec               mov dword ptr [ebp - 0x14], esi
// 0073c956  e865d81200           call 0x86a1c0
// 0073c95b  894604               mov dword ptr [esi + 4], eax
// 0073c95e  c6403101             mov byte ptr [eax + 0x31], 1
// 0073c962  8b4604               mov eax, dword ptr [esi + 4]
// 0073c965  894004               mov dword ptr [eax + 4], eax
// 0073c968  8b4604               mov eax, dword ptr [esi + 4]
// 0073c96b  8900                 mov dword ptr [eax], eax
// 0073c96d  8b4604               mov eax, dword ptr [esi + 4]
// 0073c970  894008               mov dword ptr [eax + 8], eax
// 0073c973  8b4508               mov eax, dword ptr [ebp + 8]
// 0073c976  50                   push eax
// 0073c977  8bce                 mov ecx, esi
// 0073c979  c7460800000000       mov dword ptr [esi + 8], 0
// 0073c980  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0073c987  e874faffff           call 0x73c400
// 0073c98c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0073c98f  5f                   pop edi
// 0073c990  8bc6                 mov eax, esi
// 0073c992  5e                   pop esi
// 0073c993  64890d00000000       mov dword ptr fs:[0], ecx
// 0073c99a  5b                   pop ebx
// 0073c99b  8be5                 mov esp, ebp
// 0073c99d  5d                   pop ebp
// 0073c99e  c20400               ret 4
// library ogre-1.6.4/OgreAnimation.cpp (function ??0?$_Tree@V?$_Tmap_traits@PAVHardwareVertexBuffer@Ogre@@VVertexBufferLicense@HardwareBufferManager@2@U?$less@PAVHardwareVertexBuffer@Ogre@@@std@@V?$allocator@U?$pair@QAVHardwareVertexBuffer@Ogre@@VVertexBufferLicense@HardwareBufferManager@2@@std@@@6@$0A@@std@@@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAnimation.cpp
