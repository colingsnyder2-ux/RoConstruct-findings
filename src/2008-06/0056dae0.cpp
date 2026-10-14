// from server: 97% by colin
// roc 2008-06 0056dae0  unit: G3D::VColor3::?$holder  size: 286 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056dae0
//
// 0056dae0  64a100000000         mov eax, dword ptr fs:[0]
// 0056dae6  6aff                 push -1
// 0056dae8  68b9fe7c00           push 0x7cfeb9
// 0056daed  50                   push eax
// 0056daee  64892500000000       mov dword ptr fs:[0], esp
// 0056daf5  83ec48               sub esp, 0x48
// 0056daf8  53                   push ebx
// 0056daf9  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056daff  56                   push esi
// 0056db00  57                   push edi
// 0056db01  8bf9                 mov edi, ecx
// 0056db03  8d7704               lea esi, [edi + 4]
// 0056db06  85f6                 test esi, esi
// 0056db08  7428                 je 0x56db32
// 0056db0a  8b0e                 mov ecx, dword ptr [esi]
// 0056db0c  85c9                 test ecx, ecx
// 0056db0e  7409                 je 0x56db19
// 0056db10  8b01                 mov eax, dword ptr [ecx]
// 0056db12  8b5004               mov edx, dword ptr [eax + 4]
// 0056db15  ffd2                 call edx
// 0056db17  eb05                 jmp 0x56db1e
// 0056db19  b814969200           mov eax, 0x929614
// 0056db1e  6834109300           push 0x931034
// 0056db23  8bc8                 mov ecx, eax
// 0056db25  ffd3                 call ebx
// 0056db27  84c0                 test al, al
// 0056db29  7407                 je 0x56db32
// 0056db2b  8b06                 mov eax, dword ptr [esi]
// 0056db2d  83c004               add eax, 4
// 0056db30  7556                 jne 0x56db88
// 0056db32  8b07                 mov eax, dword ptr [edi]
// 0056db34  8b4008               mov eax, dword ptr [eax + 8]
// 0056db37  50                   push eax
// 0056db38  b9f8be9200           mov ecx, 0x92bef8
// 0056db3d  ffd3                 call ebx
// 0056db3f  84c0                 test al, al
// 0056db41  7457                 je 0x56db9a
// 0056db43  8d44240c             lea eax, [esp + 0xc]
// 0056db47  50                   push eax
// 0056db48  33c9                 xor ecx, ecx
// 0056db4a  33d2                 xor edx, edx
// 0056db4c  56                   push esi
// 0056db4d  66894c2414           mov word ptr [esp + 0x14], cx
// 0056db52  6689542416           mov word ptr [es