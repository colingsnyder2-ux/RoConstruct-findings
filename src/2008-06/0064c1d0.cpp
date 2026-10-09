// roc 2008-06 0064c1d0  unit: RBX::SleepStage  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064c1d0
//
// 0064c1d0  53                   push ebx
// 0064c1d1  56                   push esi
// 0064c1d2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0064c1d6  8b06                 mov eax, dword ptr [esi]
// 0064c1d8  8b500c               mov edx, dword ptr [eax + 0xc]
// 0064c1db  8b5e08               mov ebx, dword ptr [esi + 8]
// 0064c1de  57                   push edi
// 0064c1df  8bf9                 mov edi, ecx
// 0064c1e1  8bce                 mov ecx, esi
// 0064c1e3  ffd2                 call edx
// 0064c1e5  83f801               cmp eax, 1
// 0064c1e8  752a                 jne 0x64c214
// 0064c1ea  83fb04               cmp ebx, 4
// 0064c1ed  7510                 jne 0x64c1ff
// 0064c1ef  6a03                 push 3
// 0064c1f1  56                   push esi
// 0064c1f2  8bcf                 mov ecx, edi
// 0064c1f4  e897fdffff           call 0x64bf90
// 0064c1f9  5f                   pop edi
// 0064c1fa  5e                   pop esi
// 0064c1fb  5b                   pop ebx
// 0064c1fc  c20400               ret 4
// 0064c1ff  83fb02               cmp ebx, 2
// 0064c202  751f                 jne 0x64c223
// 0064c204  6a01                 push 1
// 0064c206  56                   push esi
// 0064c207  8bcf                 mov ecx, edi
// 0064c209  e882fdffff           call 0x64bf90
// 0064c20e  5f                   pop edi
// 0064c20f  5e                   pop esi
// 0064c210  5b                   pop ebx
// 0064c211  c20400               ret 4
// 0064c214  83fb02               cmp ebx, 2
// 0064c217  750a                 jne 0x64c223
// 0064c219  6a01                 push 1
// 0064c21b  56                   push esi
// 0064c21c  8bcf                 mov ecx, edi
// 0064c21e  e8edebffff           call 0x64ae10
// 0064c223  5f                   pop edi
// 0064c224  5e                   pop esi
// 0064c225  5b                   pop ebx
// 0064c226  c20400               ret 4
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?wakeEdge@SleepStage@RBX@@AAEXPAVEdge@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
