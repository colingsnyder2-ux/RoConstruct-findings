// roc 2007-03 005efa90  unit: seg_005e0000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005efa90
//
// 005efa90  6aff                 push -1
// 005efa92  684ed77500           push 0x75d74e
// 005efa97  64a100000000         mov eax, dword ptr fs:[0]
// 005efa9d  50                   push eax
// 005efa9e  64892500000000       mov dword ptr fs:[0], esp
// 005efaa5  83ec08               sub esp, 8
// 005efaa8  56                   push esi
// 005efaa9  57                   push edi
// 005efaaa  8bf1                 mov esi, ecx
// 005efaac  68c0000000           push 0xc0
// 005efab1  8974240c             mov dword ptr [esp + 0xc], esi
// 005efab5  e84ee60200           call 0x61e108
// 005efaba  83c404               add esp, 4
// 005efabd  8944240c             mov dword ptr [esp + 0xc], eax
// 005efac1  85c0                 test eax, eax
// 005efac3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005efac7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005efacf  740b                 je 0x5efadc
// 005efad1  57                   push edi
// 005efad2  56                   push esi
// 005efad3  8bc8                 mov ecx, eax
// 005efad5  e8a6330000           call 0x5f2e80
// 005efada  eb02                 jmp 0x5efade
// 005efadc  33c0                 xor eax, eax
// 005efade  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005efae2  894e04               mov dword ptr [esi + 4], ecx
// 005efae5  894608               mov dword ptr [esi + 8], eax
// 005efae8  897e0c               mov dword ptr [esi + 0xc], edi
// 005efaeb  8d7e10               lea edi, [esi + 0x10]
// 005efaee  8bcf                 mov ecx, edi
// 005efaf0  c744241801000000     mov dword ptr [esp + 0x18], 1
// 005efaf8  c706c4fe7b00         mov dword ptr [esi], 0x7bfec4
// 005efafe  e82dd9fbff           call 0x5ad430
// 005efb03  894704               mov dword ptr [edi + 4], eax
// 005efb06  c6401101             mov byte ptr [eax + 0x11], 1
// 005efb0a  8b4704               mov eax, dword ptr [edi + 4]
// 005efb0d  894004               mov dword ptr [eax + 4], eax
// 005efb10  8b4704               mov eax, dword ptr [edi + 4]
// 005efb13  8900                 mov dword ptr [eax], eax
// 005efb15  8b4704               mov eax, dword ptr [edi + 4]
// 005efb18  894008               mov dword ptr [eax + 8], eax
// 005efb1b  c7470800000000       mov dword ptr [edi + 8], 0
// 005efb22  8d7e1c               lea edi, [esi + 0x1c]
// 005efb25  8bcf                 mov ecx, edi
// 005efb27  c644241802           mov byte ptr [esp + 0x18], 2
// 005efb2c  e84f86fcff           call 0x5b8180
// 005efb31  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005efb35  894704               mov dword ptr [edi + 4], eax
// 005efb38  c6401501             mov byte ptr [eax + 0x15], 1
// 005efb3c  8b4704               mov eax, dword ptr [edi + 4]
// 005efb3f  894004               mov dword ptr [eax + 4], eax
// 005efb42  8b4704               mov eax, dword ptr [edi + 4]
// 005efb45  8900                 mov dword ptr [eax], eax
// 005efb47  8b4704               mov eax, dword ptr [edi + 4]
// 005efb4a  894008               mov dword ptr [eax + 8], eax
// 005efb4d  c7470800000000       mov dword ptr [edi + 8], 0
// 005efb54  5f                   pop edi
// 005efb55  8bc6                 mov eax, esi
// 005efb57  5e                   pop esi
// 005efb58  64890d00000000       mov dword ptr fs:[0], ecx
// 005efb5f  83c414               add esp, 0x14
// 005efb62  c20800               ret 8
// library rbxgs/v8world\JointStage.cpp (function ??0JointStage@RBX@@QAE@PAVIStage@1@PAVWorld@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/JointStage.cpp
