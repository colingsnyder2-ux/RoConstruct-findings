// roc 2010-06 0054b810  unit: RBX::AggregateChunk  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054b810
//
// 0054b810  6aff                 push -1
// 0054b812  683e079900           push 0x99073e
// 0054b817  64a100000000         mov eax, dword ptr fs:[0]
// 0054b81d  50                   push eax
// 0054b81e  64892500000000       mov dword ptr fs:[0], esp
// 0054b825  51                   push ecx
// 0054b826  56                   push esi
// 0054b827  8bf1                 mov esi, ecx
// 0054b829  57                   push edi
// 0054b82a  89742408             mov dword ptr [esp + 8], esi
// 0054b82e  8b4610               mov eax, dword ptr [esi + 0x10]
// 0054b831  8b3d7ca39e00         mov edi, dword ptr [0x9ea37c]
// 0054b837  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0054b83f  85c0                 test eax, eax
// 0054b841  7428                 je 0x54b86b
// 0054b843  83c004               add eax, 4
// 0054b846  50                   push eax
// 0054b847  ffd7                 call edi
// 0054b849  85c0                 test eax, eax
// 0054b84b  7517                 jne 0x54b864
// 0054b84d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0054b850  e8cb82f3ff           call 0x483b20
// 0054b855  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0054b858  85c9                 test ecx, ecx
// 0054b85a  7408                 je 0x54b864
// 0054b85c  8b01                 mov eax, dword ptr [ecx]
// 0054b85e  8b10                 mov edx, dword ptr [eax]
// 0054b860  6a01                 push 1
// 0054b862  ffd2                 call edx
// 0054b864  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0054b86b  68f0ca5200           push 0x52caf0
// 0054b870  6a02                 push 2
// 0054b872  6a04                 push 4
// 0054b874  8d4608               lea eax, [esi + 8]
// 0054b877  50                   push eax
// 0054b878  c644242400           mov byte ptr [esp + 0x24], 0
// 0054b87d  e85cd22500           call 0x7a8ade
// 0054b882  8b06                 mov eax, dword ptr [esi]
// 0054b884  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0054b88c  85c0                 test eax, eax
// 0054b88e  7425                 je 0x54b8b5
// 0054b890  83c004               add eax, 4
// 0054b893  50                   push eax
// 0054b894  ffd7                 call edi
// 0054b896  85c0                 test eax, eax
// 0054b898  7515                 jne 0x54b8af
// 0054b89a  8b0e                 mov ecx, dword ptr [esi]
// 0054b89c  e87f82f3ff           call 0x483b20
// 0054b8a1  8b0e                 mov ecx, dword ptr [esi]
// 0054b8a3  85c9                 test ecx, ecx
// 0054b8a5  7408                 je 0x54b8af
// 0054b8a7  8b11                 mov edx, dword ptr [ecx]
// 0054b8a9  8b02                 mov eax, dword ptr [edx]
// 0054b8ab  6a01                 push 1
// 0054b8ad  ffd0                 call eax
// 0054b8af  c70600000000         mov dword ptr [esi], 0
// 0054b8b5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054b8b9  5f                   pop edi
// 0054b8ba  5e                   pop esi
// 0054b8bb  64890d00000000       mov dword ptr fs:[0], ecx
// 0054b8c2  83c410               add esp, 0x10
// 0054b8c5  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??1ToneMap@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
