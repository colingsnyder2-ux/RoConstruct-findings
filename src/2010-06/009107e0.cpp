// roc 2010-06 009107e0  unit: G3D::GFont  size: 410 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009107e0
//
// 009107e0  6aff                 push -1
// 009107e2  6821149c00           push 0x9c1421
// 009107e7  64a100000000         mov eax, dword ptr fs:[0]
// 009107ed  50                   push eax
// 009107ee  64892500000000       mov dword ptr fs:[0], esp
// 009107f5  83ec28               sub esp, 0x28
// 009107f8  53                   push ebx
// 009107f9  55                   push ebp
// 009107fa  8be9                 mov ebp, ecx
// 009107fc  68330c0000           push 0xc33
// 00910801  896c2414             mov dword ptr [esp + 0x14], ebp
// 00910805  e8b6eab7ff           call 0x48f2c0
// 0091080a  83c404               add esp, 4
// 0091080d  84c0                 test al, al
// 0091080f  0f95c0               setne al
// 00910812  33db                 xor ebx, ebx
// 00910814  33c9                 xor ecx, ecx
// 00910816  3ac3                 cmp al, bl
// 00910818  0f95c1               setne cl
// 0091081b  884504               mov byte ptr [ebp + 4], al
// 0091081e  895c240c             mov dword ptr [esp + 0xc], ebx
// 00910822  41                   inc ecx
// 00910823  85c9                 test ecx, ecx
// 00910825  0f8e3c010000         jle 0x910967
// 0091082b  56                   push esi
// 0091082c  83c508               add ebp, 8
// 0091082f  57                   push edi
// 00910830  68d8b3a800           push 0xa8b3d8
// 00910835  8d4c2420             lea ecx, [esp + 0x20]
// 00910839  ff1510a49e00         call dword ptr [0x9ea410]
// 0091083f  d9e8                 fld1 
// 00910841  8b15503cc000         mov edx, dword ptr [0xc03c50]
// 00910847  51                   push ecx
// 00910848  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0091084c  d91c24               fstp dword ptr [esp]
// 0091084f  53                   push ebx
// 00910850  6a06                 push 6
// 00910852  6a02                 push 2
// 00910854  53                   push ebx
// 00910855  52                   push edx
// 00910856  8b542460             mov edx, dword ptr [esp + 0x60]
// 0091085a  8d442434             lea eax, [esp + 0x34]
// 0091085e  50                   push eax
// 0091085f  51                   push ecx
// 00910860  52                   push edx
// 00910861  8d442434             lea eax, [esp + 0x34]
// 00910865  50                   push eax
// 00910866  895c2468             mov dword ptr [esp + 0x68], ebx
// 0091086a  e8c153b7ff           call 0x485c30
// 0091086f  83c428               add esp, 0x28
// 00910872  8b38                 mov edi, dword ptr [eax]
// 00910874  8b4500               mov eax, dword ptr [ebp]
// 00910877  c644244001           mov byte ptr [esp + 0x40], 1
// 0091087c  3bf8                 cmp edi, eax
// 0091087e  745e                 je 0x9108de
// 00910880  3bc3                 cmp eax, ebx
// 00910882  7449                 je 0x9108cd
// 00910884  83c004               add eax, 4
// 00910887  50                   push eax
// 00910888  ff157ca39e00         call dword ptr [0x9ea37c]
// 0091088e  85c0                 test eax, eax
// 00910890  7538                 jne 0x9108ca
// 00910892  8b4500               mov eax, dword ptr [ebp]
// 00910895  8b7008               mov esi, dword ptr [eax + 8]
// 00910898  3bf3                 cmp esi, ebx
// 0091089a  741f                 je 0x9108bb
// 0091089c  8d642400             lea esp, [esp]
// 009108a0  8b0e                 mov ecx, dword ptr [esi]
// 009108a2  8b11                 mov edx, dword ptr [ecx]
// 009108a4  8b4204               mov eax, dword ptr [edx + 4]
// 009108a7  ffd0                 call eax
// 009108a9  8bc6                 mov eax, esi
// 009108ab  8b7604               mov esi, dword ptr [esi + 4]
// 009108ae  50                   push eax
// 009108af  e8e670e9ff           call 0x7a799a
// 009108b4  83c404               add esp, 4
// 009108b7  3bf3                 cmp esi, ebx
// 009108b9  75e5                 jne 0x9108a0
// 009108bb  8b4d00               mov ecx, dword ptr [ebp]
// 009108be  3bcb                 cmp ecx, ebx
// 009108c0  7408                 je 0x9108ca
// 009108c2  8b11                 mov edx, dword ptr [ecx]
// 009108c4  8b02                 mov eax, dword ptr [edx]
// 009108c6  6a01                 push 1
// 009108c8  ffd0                 call eax
// 009108ca  895d00               mov dword ptr [ebp], ebx
// 009108cd  3bfb                 cmp edi, ebx
// 009108cf  740d                 je 0x9108de
// 009108d1  8d4704               lea eax, [edi + 4]
// 009108d4  50                   push eax
// 009108d5  897d00               mov dword ptr [ebp], edi
// 009108d8  ff1580a39e00         call dword ptr [0x9ea380]
// 009108de  8b442410             mov eax, dword ptr [esp + 0x10]
// 009108e2  885c2440             mov byte ptr [esp + 0x40], bl
// 009108e6  3bc3                 cmp eax, ebx
// 009108e8  7448                 je 0x910932
// 009108ea  83c004               add eax, 4
// 009108ed  50                   push eax
// 009108ee  ff157ca39e00         call dword ptr [0x9ea37c]
// 009108f4  85c0                 test eax, eax
// 009108f6  7536                 jne 0x91092e
// 009108f8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009108fc  8b7108               mov esi, dword ptr [ecx + 8]
// 009108ff  3bf3                 cmp esi, ebx
// 00910901  741f                 je 0x910922
// 00910903  8b0e                 mov ecx, dword ptr [esi]
// 00910905  8b11                 mov edx, dword ptr [ecx]
// 00910907  8b4204               mov eax, dword ptr [edx + 4]
// 0091090a  ffd0                 call eax
// 0091090c  8bc6                 mov eax, esi
// 0091090e  8b7604               mov esi, dword ptr [esi + 4]
// 00910911  50                   push eax
// 00910912  e88370e9ff           call 0x7a799a
// 00910917  83c404               add esp, 4
// 0091091a  3bf3                 cmp esi, ebx
// 0091091c  75e5                 jne 0x910903
// 0091091e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00910922  3bcb                 cmp ecx, ebx
// 00910924  7408                 je 0x91092e
// 00910926  8b11                 mov edx, dword ptr [ecx]
// 00910928  8b02                 mov eax, dword ptr [edx]
// 0091092a  6a01                 push 1
// 0091092c  ffd0                 call eax
// 0091092e  895c2410             mov dword ptr [esp + 0x10], ebx
// 00910932  8d4c241c             lea ecx, [esp + 0x1c]
// 00910936  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 0091093e  ff1500a49e00         call dword ptr [0x9ea400]
// 00910944  8b442414             mov eax, dword ptr [esp + 0x14]
// 00910948  8b542418             mov edx, dword ptr [esp + 0x18]
// 0091094c  40                   inc eax
// 0091094d  33c9                 xor ecx, ecx
// 0091094f  83c504               add ebp, 4
// 00910952  385a04               cmp byte ptr [edx + 4], bl
// 00910955  89442414             mov dword ptr [esp + 0x14], eax
// 00910959  0f95c1               setne cl
// 0091095c  41                   inc ecx
// 0091095d  3bc1                 cmp eax, ecx
// 0091095f  0f8ccbfeffff         jl 0x910830
// 00910965  5f                   pop edi
// 00910966  5e                   pop esi
// 00910967  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0091096b  5d                   pop ebp
// 0091096c  5b                   pop ebx
// 0091096d  64890d00000000       mov dword ptr fs:[0], ecx
// 00910974  83c434               add esp, 0x34
// 00910977  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?resizeBloomMap@ToneMap@G3D@@AAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
