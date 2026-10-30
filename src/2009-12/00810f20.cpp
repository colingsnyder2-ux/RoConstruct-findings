// roc 2009-12 00810f20  unit: CXTPImageManager  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00810f20
//
// 00810f20  6aff                 push -1
// 00810f22  6830a19500           push 0x95a130
// 00810f27  64a100000000         mov eax, dword ptr fs:[0]
// 00810f2d  50                   push eax
// 00810f2e  83ec24               sub esp, 0x24
// 00810f31  55                   push ebp
// 00810f32  56                   push esi
// 00810f33  57                   push edi
// 00810f34  a10052b600           mov eax, dword ptr [0xb65200]
// 00810f39  33c4                 xor eax, esp
// 00810f3b  50                   push eax
// 00810f3c  8d442434             lea eax, [esp + 0x34]
// 00810f40  64a300000000         mov dword ptr fs:[0], eax
// 00810f46  8bf9                 mov edi, ecx
// 00810f48  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00810f4c  8bcd                 mov ecx, ebp
// 00810f4e  e89d81ffff           call 0x8090f0
// 00810f53  85c0                 test eax, eax
// 00810f55  0f851f010000         jne 0x81107a
// 00810f5b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00810f5f  85c9                 test ecx, ecx
// 00810f61  7507                 jne 0x810f6a
// 00810f63  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00810f66  894c2454             mov dword ptr [esp + 0x54], ecx
// 00810f6a  8b442458             mov eax, dword ptr [esp + 0x58]
// 00810f6e  85c0                 test eax, eax
// 00810f70  750f                 jne 0x810f81
// 00810f72  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00810f75  0fafc1               imul eax, ecx
// 00810f78  33d2                 xor edx, edx
// 00810f7a  f77728               div dword ptr [edi + 0x28]
// 00810f7d  89442458             mov dword ptr [esp + 0x58], eax
// 00810f81  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00810f89  c744241018229a00     mov dword ptr [esp + 0x10], 0x9a2218
// 00810f91  8b742444             mov esi, dword ptr [esp + 0x44]
// 00810f95  50                   push eax
// 00810f96  8b4604               mov eax, dword ptr [esi + 4]
// 00810f99  51                   push ecx
// 00810f9a  50                   push eax
// 00810f9b  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00810fa3  ff1550b19800         call dword ptr [0x98b150]
// 00810fa9  50                   push eax
// 00810faa  8d4c2414             lea ecx, [esp + 0x14]
// 00810fae  e8772efeff           call 0x7f3e2a
// 00810fb3  8d4c2410             lea ecx, [esp + 0x10]
// 00810fb7  51                   push ecx
// 00810fb8  56                   push esi
// 00810fb9  8d4c2428             lea ecx, [esp + 0x28]
// 00810fbd  e8bea80300           call 0x84b880
// 00810fc2  8b542458             mov edx, dword ptr [esp + 0x58]
// 00810fc6  8b442454             mov eax, dword ptr [esp + 0x54]
// 00810fca  68ffffff00           push 0xffffff
// 00810fcf  52                   push edx
// 00810fd0  50                   push eax
// 00810fd1  6a00                 push 0
// 00810fd3  6a00                 push 0
// 00810fd5  8d4c2434             lea ecx, [esp + 0x34]
// 00810fd9  c644245001           mov byte ptr [esp + 0x50], 1
// 00810fde  e8b3541100           call 0x926496
// 00810fe3  8b542458             mov edx, dword ptr [esp + 0x58]
// 00810fe7  52                   push edx
// 00810fe8  8b542458             mov edx, dword ptr [esp + 0x58]
// 00810fec  52                   push edx
// 00810fed  55                   push ebp
// 00810fee  33c9                 xor ecx, ecx
// 00810ff0  51                   push ecx
// 00810ff1  33c0                 xor eax, eax
// 00810ff3  50                   push eax
// 00810ff4  8d442434             lea eax, [esp + 0x34]
// 00810ff8  50                   push eax
// 00810ff9  8bcf                 mov ecx, edi
// 00810ffb  e8b0feffff           call 0x810eb0
// 00811000  8d4c2420             lea ecx, [esp + 0x20]
// 00811004  c644243c00           mov byte ptr [esp + 0x3c], 0
// 00811009  e882a90300           call 0x84b990
// 0081100e  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00811012  51                   push ecx
// 00811013  8d4c241c             lea ecx, [esp + 0x1c]
// 00811017  e8b6541100           call 0x9264d2
// 0081101c  85c0                 test eax, eax
// 0081101e  7403                 je 0x811023
// 00811020  8b4004               mov eax, dword ptr [eax + 4]
// 00811023  8b542458             mov edx, dword ptr [esp + 0x58]
// 00811027  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0081102b  8b7604               mov esi, dword ptr [esi + 4]
// 0081102e  6884000000           push 0x84
// 00811033  52                   push edx
// 00811034  8b542454             mov edx, dword ptr [esp + 0x54]
// 00811038  51                   push ecx
// 00811039  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0081103d  52                   push edx
// 0081103e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00811042  51                   push ecx
// 00811043  6a00                 push 0
// 00811045  52                   push edx
// 00811046  6a00                 push 0
// 00811048  50                   push eax
// 00811049  56                   push esi
// 0081104a  ff15f8ca9800         call dword ptr [0x98caf8]
// 00811050  8d4c2418             lea ecx, [esp + 0x18]
// 00811054  c744241848189a00     mov dword ptr [esp + 0x18], 0x9a1848
// 0081105c  e8cfe1bfff           call 0x40f230
// 00811061  8d4c2410             lea ecx, [esp + 0x10]
// 00811065  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0081106d  c744241018229a00     mov dword ptr [esp + 0x10], 0x9a2218
// 00811075  e8b6e1bfff           call 0x40f230
// 0081107a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0081107e  64890d00000000       mov dword ptr fs:[0], ecx
// 00811085  59                   pop ecx
// 00811086  5f                   pop edi
// 00811087  5e                   pop esi
// 00811088  5d                   pop ebp
// 00811089  83c430               add esp, 0x30
// 0081108c  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawMono@CXTPImageManagerIcon@@QAEXPAVCDC@@VCPoint@@AAVCXTPImageManagerIconHandle@@VCSize@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp