// roc 2009-12 007f6fb0  unit: CRobloxControlColorSelector  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f6fb0
//
// 007f6fb0  56                   push esi
// 007f6fb1  8bf1                 mov esi, ecx
// 007f6fb3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007f6fb9  85c9                 test ecx, ecx
// 007f6fbb  0f840d010000         je 0x7f70ce
// 007f6fc1  53                   push ebx
// 007f6fc2  e809d50000           call 0x8044d0
// 007f6fc7  8bd8                 mov ebx, eax
// 007f6fc9  85db                 test ebx, ebx
// 007f6fcb  0f84fc000000         je 0x7f70cd
// 007f6fd1  397358               cmp dword ptr [ebx + 0x58], esi
// 007f6fd4  752e                 jne 0x7f7004
// 007f6fd6  8b06                 mov eax, dword ptr [esi]
// 007f6fd8  8b9018010000         mov edx, dword ptr [eax + 0x118]
// 007f6fde  8bce                 mov ecx, esi
// 007f6fe0  ffd2                 call edx
// 007f6fe2  85c0                 test eax, eax
// 007f6fe4  741e                 je 0x7f7004
// 007f6fe6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f6fea  8b06                 mov eax, dword ptr [esi]
// 007f6fec  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007f6ff0  8b800c010000         mov eax, dword ptr [eax + 0x10c]
// 007f6ff6  51                   push ecx
// 007f6ff7  52                   push edx
// 007f6ff8  8bce                 mov ecx, esi
// 007f6ffa  ffd0                 call eax
// 007f6ffc  85c0                 test eax, eax
// 007f6ffe  0f85c9000000         jne 0x7f70cd
// 007f7004  57                   push edi
// 007f7005  56                   push esi
// 007f7006  8bcb                 mov ecx, ebx
// 007f7008  e893dd0100           call 0x814da0
// 007f700d  8b4b4c               mov ecx, dword ptr [ebx + 0x4c]
// 007f7010  6a00                 push 0
// 007f7012  56                   push esi
// 007f7013  e828920700           call 0x870240
// 007f7018  85c0                 test eax, eax
// 007f701a  7409                 je 0x7f7025
// 007f701c  83f802               cmp eax, 2
// 007f701f  0f859c000000         jne 0x7f70c1
// 007f7025  8bbe00010000         mov edi, dword ptr [esi + 0x100]
// 007f702b  6a00                 push 0
// 007f702d  6aff                 push -1
// 007f702f  8bcf                 mov ecx, edi
// 007f7031  e86af50000           call 0x8065a0
// 007f7036  8b17                 mov edx, dword ptr [edi]
// 007f7038  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 007f703e  6a00                 push 0
// 007f7040  6aff                 push -1
// 007f7042  8bcf                 mov ecx, edi
// 007f7044  ffd0                 call eax
// 007f7046  397358               cmp dword ptr [ebx + 0x58], esi
// 007f7049  7509                 jne 0x7f7054
// 007f704b  6a00                 push 0
// 007f704d  8bcb                 mov ecx, ebx
// 007f704f  e84cdd0100           call 0x814da0
// 007f7054  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 007f705b  7426                 je 0x7f7083
// 007f705d  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 007f7063  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 007f7066  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 007f706c  4a                   dec edx
// 007f706d  3bc2                 cmp eax, edx
// 007f706f  7d12                 jge 0x7f7083
// 007f7071  40                   inc eax
// 007f7072  50                   push eax
// 007f7073  e8d81bc3ff           call 0x428c50
// 007f7078  8b10                 mov edx, dword ptr [eax]
// 007f707a  8bc8                 mov ecx, eax
// 007f707c  8b4264               mov eax, dword ptr [edx + 0x64]
// 007f707f  6a01                 push 1
// 007f7081  ffd0                 call eax
// 007f7083  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 007f708a  751b                 jne 0x7f70a7
// 007f708c  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 007f7092  83782c01             cmp dword ptr [eax + 0x2c], 1
// 007f7096  7e0f                 jle 0x7f70a7
// 007f7098  8b4828               mov ecx, dword ptr [eax + 0x28]
// 007f709b  8b4904               mov ecx, dword ptr [ecx + 4]
// 007f709e  8b11                 mov edx, dword ptr [ecx]
// 007f70a0  8b4264               mov eax, dword ptr [edx + 0x64]
// 007f70a3  6a00                 push 0
// 007f70a5  ffd0                 call eax
// 007f70a7  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 007f70ad  8b11                 mov edx, dword ptr [ecx]
// 007f70af  8b4258               mov eax, dword ptr [edx + 0x58]
// 007f70b2  56                   push esi
// 007f70b3  ffd0                 call eax
// 007f70b5  8b17                 mov edx, dword ptr [edi]
// 007f70b7  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 007f70bd  8bcf                 mov ecx, edi
// 007f70bf  ffd0                 call eax
// 007f70c1  8b4b58               mov ecx, dword ptr [ebx + 0x58]
// 007f70c4  51                   push ecx
// 007f70c5  8bcb                 mov ecx, ebx
// 007f70c7  e8d4dc0100           call 0x814da0
// 007f70cc  5f                   pop edi
// 007f70cd  5b                   pop ebx
// 007f70ce  5e                   pop esi
// 007f70cf  c20800               ret 8
// copied from an identical function in another client (function ?CustomizeStartDrag@CXTPControl@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp