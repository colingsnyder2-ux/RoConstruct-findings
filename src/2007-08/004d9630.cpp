// from server: 100% by auto
// roc 2007-08 004d9630  unit: RBX::View::MegaTextureProxy  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d9630
//
// 004d9630  6aff                 push -1
// 004d9632  68d1cc7400           push 0x74ccd1
// 004d9637  64a100000000         mov eax, dword ptr fs:[0]
// 004d963d  50                   push eax
// 004d963e  64892500000000       mov dword ptr fs:[0], esp
// 004d9645  83ec0c               sub esp, 0xc
// 004d9648  53                   push ebx
// 004d9649  55                   push ebp
// 004d964a  56                   push esi
// 004d964b  57                   push edi
// 004d964c  8bf9                 mov edi, ecx
// 004d964e  8b4708               mov eax, dword ptr [edi + 8]
// 004d9651  8b2f                 mov ebp, dword ptr [edi]
// 004d9653  03c0                 add eax, eax
// 004d9655  03c0                 add eax, eax
// 004d9657  6a10                 push 0x10
// 004d9659  50                   push eax
// 004d965a  896c2420             mov dword ptr [esp + 0x20], ebp
// 004d965e  e8fd690200           call 0x500060
// 004d9663  8b4f08               mov ecx, dword ptr [edi + 8]
// 004d9666  8b542434             mov edx, dword ptr [esp + 0x34]
// 004d966a  83c408               add esp, 8
// 004d966d  3bd1                 cmp edx, ecx
// 004d966f  8907                 mov dword ptr [edi], eax
// 004d9671  7d02                 jge 0x4d9675
// 004d9673  8bca                 mov ecx, edx
// 004d9675  8d1c88               lea ebx, [eax + ecx*4]
// 004d9678  8bf0                 mov esi, eax
// 004d967a  3bf3                 cmp esi, ebx
// 004d967c  8bfd                 mov edi, ebp
// 004d967e  7338                 jae 0x4d96b8
// 004d9680  8b2decd27700         mov ebp, dword ptr [0x77d2ec]
// 004d9686  85f6                 test esi, esi
// 004d9688  7414                 je 0x4d969e
// 004d968a  c70600000000         mov dword ptr [esi], 0
// 004d9690  8b07                 mov eax, dword ptr [edi]
// 004d9692  85c0                 test eax, eax
// 004d9694  7408                 je 0x4d969e
// 004d9696  8906                 mov dword ptr [esi], eax
// 004d9698  83c004               add eax, 4
// 004d969b  50                   push eax
// 004d969c  ffd5                 call ebp
// 004d969e  83c604               add esi, 4
// 004d96a1  83c704               add edi, 4
// 004d96a4  3bf3                 cmp esi, ebx
// 004d96a6  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004d96ae  72d6                 jb 0x4d9686
// 004d96b0  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004d96b4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004d96b8  8d5c9500             lea ebx, [ebp + edx*4]
// 004d96bc  3beb                 cmp ebp, ebx
// 004d96be  8bfd                 mov edi, ebp
// 004d96c0  7354                 jae 0x4d9716
// 004d96c2  8b07                 mov eax, dword ptr [edi]
// 004d96c4  85c0                 test eax, eax
// 004d96c6  7447                 je 0x4d970f
// 004d96c8  83c004               add eax, 4
// 004d96cb  50                   push eax
// 004d96cc  ff15e8d27700         call dword ptr [0x77d2e8]
// 004d96d2  85c0                 test eax, eax
// 004d96d4  7533                 jne 0x4d9709
// 004d96d6  8b0f                 mov ecx, dword ptr [edi]
// 004d96d8  8b7108               mov esi, dword ptr [ecx + 8]
// 004d96db  85f6                 test esi, esi
// 004d96dd  741c                 je 0x4d96fb
// 004d96df  90                   nop 
// 004d96e0  8b0e                 mov ecx, dword ptr [esi]
// 004d96e2  8b11                 mov edx, dword ptr [ecx]
// 004d96e4  8b4204               mov eax, dword ptr [edx + 4]
// 004d96e7  ffd0                 call eax
// 004d96e9  8bc6                 mov eax, esi
// 004d96eb  8b7604               mov esi, dword ptr [esi + 4]
// 004d96ee  50                   push eax
// 004d96ef  e86e651500           call 0x62fc62
// 004d96f4  83c404               add esp, 4
// 004d96f7  85f6                 test esi, esi
// 004d96f9  75e5                 jne 0x4d96e0
// 004d96fb  8b0f                 mov ecx, dword ptr [edi]
// 004d96fd  85c9                 test ecx, ecx
// 004d96ff  7408                 je 0x4d9709
// 004d9701  8b11                 mov edx, dword ptr [ecx]
// 004d9703  8b02                 mov eax, dword ptr [edx]
// 004d9705  6a01                 push 1
// 004d9707  ffd0                 call eax
// 004d9709  c70700000000         mov dword ptr [edi], 0
// 004d970f  83c704               add edi, 4
// 004d9712  3bfb                 cmp edi, ebx
// 004d9714  72ac                 jb 0x4d96c2
// 004d9716  55                   push ebp
// 004d9717  e8f4600200           call 0x4ff810
// 004d971c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d9720  83c404               add esp, 4
// 004d9723  5f                   pop edi
// 004d9724  5e                   pop esi
// 004d9725  5d                   pop ebp
// 004d9726  5b                   pop ebx
// 004d9727  64890d00000000       mov dword ptr fs:[0], ecx
// 004d972e  83c418               add esp, 0x18
// 004d9731  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?realloc@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
