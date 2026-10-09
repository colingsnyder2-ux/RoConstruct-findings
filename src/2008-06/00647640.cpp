// roc 2008-06 00647640  unit: RBX::GlueJoint  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00647640
//
// 00647640  53                   push ebx
// 00647641  56                   push esi
// 00647642  8bf1                 mov esi, ecx
// 00647644  8b1e                 mov ebx, dword ptr [esi]
// 00647646  57                   push edi
// 00647647  8b7e04               mov edi, dword ptr [esi + 4]
// 0064764a  57                   push edi
// 0064764b  53                   push ebx
// 0064764c  e8effeffff           call 0x647540
// 00647651  83c408               add esp, 8
// 00647654  85c0                 test eax, eax
// 00647656  7512                 jne 0x64766a
// 00647658  57                   push edi
// 00647659  53                   push ebx
// 0064765a  e881feffff           call 0x6474e0
// 0064765f  57                   push edi
// 00647660  53                   push ebx
// 00647661  50                   push eax
// 00647662  e899ffffff           call 0x647600
// 00647667  83c414               add esp, 0x14
// 0064766a  8906                 mov dword ptr [esi], eax
// 0064766c  5f                   pop edi
// 0064766d  8bc6                 mov eax, esi
// 0064766f  5e                   pop esi
// 00647670  5b                   pop ebx
// 00647671  c3                   ret 
// library openrbx-client/App\v8world\Clump2.cpp (function ??EPrimIterator@RBX@@QAEAAV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Clump2.cpp
