// roc 2007-03 004fa810  unit: seg_004f0000  size: 2625 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fa810
//
// 004fa810  6aff                 push -1
// 004fa812  682d077500           push 0x75072d
// 004fa817  64a100000000         mov eax, dword ptr fs:[0]
// 004fa81d  50                   push eax
// 004fa81e  81eca0000000         sub esp, 0xa0
// 004fa824  53                   push ebx
// 004fa825  55                   push ebp
// 004fa826  56                   push esi
// 004fa827  57                   push edi
// 004fa828  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fa82d  33c4                 xor eax, esp
// 004fa82f  50                   push eax
// 004fa830  8d8424b4000000       lea eax, [esp + 0xb4]
// 004fa837  64a300000000         mov dword ptr fs:[0], eax
// 004fa83d  8bf1                 mov esi, ecx
// 004fa83f  8b9c24c4000000       mov ebx, dword ptr [esp + 0xc4]
// 004fa846  8bcb                 mov ecx, ebx
// 004fa848  e813bdffff           call 0x4f6560
// 004fa84d  8bcb                 mov ecx, ebx
// 004fa84f  e80cbdffff           call 0x4f6560
// 004fa854  8bcb                 mov ecx, ebx
// 004fa856  e805bdffff           call 0x4f6560
// 004fa85b  0fb7e8               movzx ebp, ax
// 004fa85e  c7461004000000       mov dword ptr [esi + 0x10], 4
// 004fa865  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 004fa868  85c9                 test ecx, ecx
// 004fa86a  896c2424             mov dword ptr [esp + 0x24], ebp
// 004fa86e  7617                 jbe 0x4fa887
// 004fa870  6840bf8400           push 0x84bf40
// 004fa875  8d442428             lea eax, [esp + 0x28]
// 004fa879  50                   push eax
// 004fa87a  c744242c98967900     mov dword ptr [esp + 0x2c], 0x799698
// 004fa882  e8a7471200           call 0x61f02e
// 004fa887  8b5344               mov edx, dword ptr [ebx + 0x44]
// 004fa88a  8b4340               mov eax, dword ptr [ebx + 0x40]
// 004fa88d  03d1                 add edx, ecx
// 004fa88f  33c9                 xor ecx, ecx
// 004fa891  8d3c02               lea edi, [edx + eax]
// 004fa894  33c0                 xor eax, eax
// 004fa896  85ed                 test ebp, ebp
// 004fa898  8954242c             mov dword ptr [esp + 0x2c], edx
// 004fa89c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004fa8a0  894c2420             mov dword ptr [esp + 0x20], ecx
// 004fa8a4  7e47                 jle 0x4fa8ed
// 004fa8a6  897c2428             mov dword ptr [esp + 0x28], edi
// 004fa8aa  8d9b00000000         lea ebx, [ebx]
// 004fa8b0  0fb617               movzx edx, byte ptr [edi]
// 004fa8b3  0fb67f01             movzx edi, byte ptr [edi + 1]
// 004fa8b7  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004fa8bb  0faffa               imul edi, edx
// 004fa8be  0faf6c241c           imul ebp, dword ptr [esp + 0x1c]
// 004fa8c3  3bfd                 cmp edi, ebp
// 004fa8c5  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004fa8c9  7e0e                 jle 0x4fa8d9
// 004fa8cb  0fb64f01             movzx ecx, byte ptr [edi + 1]
// 004fa8cf  894c2420             mov dword ptr [esp + 0x20], ecx
// 004fa8d3  8954241c             mov dword ptr [esp + 0x1c], edx
// 004fa8d7  8bc8                 mov ecx, eax
// 004fa8d9  83c001               add eax, 1
// 004fa8dc  83c710               add edi, 0x10
// 004fa8df  3b442424             cmp eax, dword ptr [esp + 0x24]
// 004fa8e3  897c2428             mov dword ptr [esp + 0x28], edi
// 004fa8e7  7cc7                 jl 0x4fa8b0
// 004fa8e9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004fa8ed  8b4334               mov eax, dword ptr [ebx + 0x34]
// 004fa8f0  c1e104               shl ecx, 4
// 004fa8f3  03ca                 add ecx, edx
// 004fa8f5  2bc8                 sub ecx, eax
// 004fa8f7  894b44               mov dword ptr [ebx + 0x44], ecx
// 004fa8fa  7805                 js 0x4fa901
// 004fa8fc  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 004fa8ff  7e0f                 jle 0x4fa910
// 004fa901  33ed                 xor ebp, ebp
// 004fa903  03c8                 add ecx, eax
// 004fa905  55                   push ebp
// 004fa906  51                   push ecx
// 004fa907  8bcb                 mov ecx, ebx
// 004fa909  e8626a0000           call 0x501370
// 004fa90e  eb02                 jmp 0x4fa912
// 004fa910  33ed                 xor ebp, ebp
// 004fa912  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fa915  8d4801               lea ecx, [eax + 1]
// 004fa918  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 004fa91b  7e0f                 jle 0x4fa92c
// 004fa91d  8b5334               mov edx, dword ptr [ebx + 0x34]
// 004fa920  6a01                 push 1
// 004fa922  03d0                 add edx, eax
// 004fa924  52                   push edx
// 004fa925  8bcb                 mov ecx, ebx
// 004fa927  e8446a0000           call 0x501370
// 004fa92c  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fa92f  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 004fa932  8a0c08               mov cl, byte ptr [eax + ecx]
// 004fa935  83c001               add eax, 1
// 004fa938  0fb6d1               movzx edx, cl
// 004fa93b  894344               mov dword ptr [ebx + 0x44], eax
// 004fa93e  895608               mov dword ptr [esi + 8], edx
// 004fa941  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fa944  8d4801               lea ecx, [eax + 1]
// 004fa947  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 004fa94a  7e0f                 jle 0x4fa95b
// 004fa94c  8b5334               mov edx, dword ptr [ebx + 0x34]
// 004fa94f  6a01                 push 1
// 004fa951  03d0                 add edx, eax
// 004fa953  52                   push edx
// 004fa954  8bcb                 mov ecx, ebx
// 004fa956  e8156a0000           call 0x501370
// 004fa95b  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fa95e  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 004fa961  8a0c08               mov cl, byte ptr [eax + ecx]
// 004fa964  83c001               add eax, 1
// 004fa967  0fb6d1               movzx edx, cl
// 004fa96a  894344               mov dword ptr [ebx + 0x44], eax
// 004fa96d  89560c               mov dword ptr [esi + 0xc], edx
// 004fa970  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fa973  8d4801               lea ecx, [eax + 1]
// 004fa976  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 004fa979  7e0f                 jle 0x4fa98a
// 004fa97b  8b5334               mov edx, dword ptr [ebx + 0x34]
// 004fa97e  6a01                 push 1
// 004fa980  03d0                 add edx, eax
// 004fa982  52                   push edx
// 004fa983  8bcb                 mov ecx, ebx
// 004fa985  e8e6690000           call 0x501370
// 004fa98a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fa98d  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 004fa990  8a0c08               mov cl, byte ptr [eax + ecx]
// 004fa993  83c001               add eax, 1
// 004fa996  894344               mov dword ptr [ebx + 0x44], eax
// 004fa999  8b560c               mov edx, dword ptr [esi + 0xc]
// 004fa99c  0faf5610             imul edx, dword ptr [esi + 0x10]
// 004fa9a0  0faf5608             imul edx, dword ptr [esi + 8]
// 004fa9a4  0fb6f9               movzx edi, cl
// 004fa9a7  52                   push edx
// 004fa9a8  897c2420             mov dword ptr [esp + 0x20], edi
// 004fa9ac  e8cf91ffff           call 0x4f3b80
// 004fa9b1  894604               mov dword ptr [esi + 4], eax
// 004fa9b4  8bc7                 mov eax, edi
// 004fa9b6  83c404               add esp, 4
// 004fa9b9  2bc5                 sub eax, ebp
// 004fa9bb  746c                 je 0x4faa29
// 004fa9bd  83e802               sub eax, 2
// 004fa9c0  745d                 je 0x4faa1f
// 004fa9c2  83e80e               sub eax, 0xe
// 004fa9c5  744e                 je 0x4faa15
// 004fa9c7  68e0fc7900           push 0x79fce0
// 004fa9cc  8d4c2448             lea ecx, [esp + 0x48]
// 004fa9d0  ff1578e77700         call dword ptr [0x77e778]
// 004fa9d6  8d442460             lea eax, [esp + 0x60]
// 004fa9da  50                   push eax
// 004fa9db  8bcb                 mov ecx, ebx
// 004fa9dd  89ac24c0000000       mov dword ptr [esp + 0xc0], ebp
// 004fa9e4  e8f7baffff           call 0x4f64e0
// 004fa9e9  50                   push eax
// 004fa9ea  8d4c2448             lea ecx, [esp + 0x48]
// 004fa9ee  51                   push ecx
// 004fa9ef  8d8c2484000000       lea ecx, [esp + 0x84]
// 004fa9f6  c68424c400000001     mov byte ptr [esp + 0xc4], 1
// 004fa9fe  e8ed4af7ff           call 0x46f4f0
// 004faa03  6824b18400           push 0x84b124
// 004faa08  8d942480000000       lea edx, [esp + 0x80]
// 004faa0f  52                   push edx
// 004faa10  e819461200           call 0x61f02e
// 004faa15  c744241404000000     mov dword ptr [esp + 0x14], 4
// 004faa1d  eb1b                 jmp 0x4faa3a
// 004faa1f  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004faa27  eb11                 jmp 0x4faa3a
// 004faa29  bf00010000           mov edi, 0x100
// 004faa2e  897c241c             mov dword ptr [esp + 0x1c], edi
// 004faa32  c744241408000000     mov dword ptr [esp + 0x14], 8
// 004faa3a  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 004faa3d  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004faa40  8d440105             lea eax, [ecx + eax + 5]
// 004faa44  2bc1                 sub eax, ecx
// 004faa46  894344               mov dword ptr [ebx + 0x44], eax
// 004faa49  7805                 js 0x4faa50
// 004faa4b  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 004faa4e  7e0b                 jle 0x4faa5b
// 004faa50  03c1                 add eax, ecx
// 004faa52  55                   push ebp
// 004faa53  50                   push eax
// 004faa54  8bcb                 mov ecx, ebx
// 004faa56  e815690000           call 0x501370
// 004faa5b  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 004faa5e  8b5344               mov edx, dword ptr [ebx + 0x44]
// 004faa61  8d441104             lea eax, [ecx + edx + 4]
// 004faa65  2bc1                 sub eax, ecx
// 004faa67  894344               mov dword ptr [ebx + 0x44], eax
// 004faa6a  7805                 js 0x4faa71
// 004faa6c  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 004faa6f  7e0b                 jle 0x4faa7c
// 004faa71  03c1                 add eax, ecx
// 004faa73  55                   push ebp
// 004faa74  50                   push eax
// 004faa75  8bcb                 mov ecx, ebx
// 004faa77  e8f4680000           call 0x501370
// 004faa7c  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004faa7f  8d4804               lea ecx, [eax + 4]
// 004faa82  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 004faa85  7e0f                 jle 0x4faa96
// 004faa87  8b5334               mov edx, dword ptr [ebx + 0x34]
// 004faa8a  6a04                 push 4
// 004faa8c  03d0                 add edx, eax
// 004faa8e  52                   push edx
// 004faa8f  8bcb                 mov ecx, ebx
// 004faa91  e8da680000           call 0x501370
// 004faa96  83434404             add dword ptr [ebx + 0x44], 4
// 004faa9a  807b2400             cmp byte ptr [ebx + 0x24], 0
// 004faa9e  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004faaa1  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 004faaa4  7427                 je 0x4faacd
// 004faaa6  0fb65408ff           movzx edx, byte ptr [eax + ecx - 1]
// 004faaab  03c1                 add eax, ecx
// 004faaad  8a48fe               mov cl, byte ptr [eax - 2]
// 004faab0  88542420             mov byte ptr [esp + 0x20], dl
// 004faab4  0fb650fd             movzx edx, byte ptr [eax - 3]
// 004faab8  8a40fc               mov al, byte ptr [eax - 4]
// 004faabb  884c2421             mov byte ptr [esp + 0x21], cl
// 004faabf  88542422             mov byte ptr [esp + 0x22], dl
// 004faac3  88442423             mov byte ptr [esp + 0x23], al
// 004faac7  8b442420             mov eax, dword ptr [esp + 0x20]
// 004faacb  eb04                 jmp 0x4faad1
// 004faacd  8b4401fc             mov eax, dword ptr [ecx + eax - 4]
// 004faad1  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 004faad4  2bc1                 sub eax, ecx
// 004faad6  894344               mov dword ptr [ebx + 0x44], eax
// 004faad9  7805                 js 0x4faae0
// 004faadb  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 004faade  7e0b                 jle 0x4faaeb
// 004faae0  03c1                 add eax, ecx
// 004faae2  55                   push ebp
// 004faae3  50                   push eax
// 004faae4  8bcb                 mov ecx, ebx
// 004faae6  e885680000           call 0x501370
// 004faaeb  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 004faaee  8b5344               mov edx, dword ptr [ebx + 0x44]
// 004faaf1  8d441128             lea eax, [ecx + edx + 0x28]
// 004faaf5  2bc1                 sub eax, ecx
// 004faaf7  894344               mov dword ptr [ebx + 0x44], eax
// 004faafa  7805                 js 0x4fab01
// 004faafc  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 004faaff  7e0b                 jle 0x4fab0c
// 004fab01  03c1                 add eax, ecx
// 004fab03  55                   push ebp
// 004fab04  50                   push eax
// 004fab05  8bcb                 mov ecx, ebx
// 004fab07  e864680000           call 0x501370
// 004fab0c  896c2434             mov dword ptr [esp + 0x34], ebp
// 004fab10  896c2438             mov dword ptr [esp + 0x38], ebp
// 004fab14  896c2430             mov dword ptr [esp + 0x30], ebp
// 004fab18  6a01                 push 1
// 004fab1a  57                   push edi
// 004fab1b  8d4c2438             lea ecx, [esp + 0x38]
// 004fab1f  c78424c400000002000000 mov dword ptr [esp + 0xc4], 2
// 004fab2a  e861f4ffff           call 0x4f9f90
// 004fab2f  3bfd                 cmp edi, ebp
// 004fab31  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 004fab35  0f8ec8000000         jle 0x4fac03
// 004fab3b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004fab3f  8d7d01               lea edi, [ebp + 1]
// 004fab42  8944241c             mov dword ptr [esp + 0x1c], eax
// 004fab46  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fab49  8d4801               lea ecx, [eax + 1]
// 004fab4c  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 004fab4f  7e0f                 jle 0x4fab60
// 004fab51  8b5334               mov edx, dword ptr [ebx + 0x34]
// 004fab54  6a01                 push 1
// 004fab56  03d0                 add edx, eax
// 004fab58  52                   push edx
// 004fab59  8bcb                 mov ecx, ebx
// 004fab5b  e810680000           call 0x501370
// 004fab60  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fab63  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 004fab66  8a0c08               mov cl, byte ptr [eax + ecx]
// 004fab69  83c001               add eax, 1
// 004fab6c  894344               mov dword ptr [ebx + 0x44], eax
// 004fab6f  884f01               mov byte ptr [edi + 1], cl
// 004fab72  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fab75  8d5001               lea edx, [eax + 1]
// 004fab78  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 004fab7b  7e0f                 jle 0x4fab8c
// 004fab7d  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 004fab80  03c8                 add ecx, eax
// 004fab82  6a01                 push 1
// 004fab84  51                   push ecx
// 004fab85  8bcb                 mov ecx, ebx
// 004fab87  e8e4670000           call 0x501370
// 004fab8c  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fab8f  8b5340               mov edx, dword ptr [ebx + 0x40]
// 004fab92  8a0c10               mov cl, byte ptr [eax + edx]
// 004fab95  83c001               add eax, 1
// 004fab98  894344               mov dword ptr [ebx + 0x44], eax
// 004fab9b  880f                 mov byte ptr [edi], cl
// 004fab9d  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004faba0  8d4801               lea ecx, [eax + 1]
// 004faba3  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 004faba6  7e0f                 jle 0x4fabb7
// 004faba8  8b5334               mov edx, dword ptr [ebx + 0x34]
// 004fabab  6a01                 push 1
// 004fabad  03d0                 add edx, eax
// 004fabaf  52                   push edx
// 004fabb0  8bcb                 mov ecx, ebx
// 004fabb2  e8b9670000           call 0x501370
// 004fabb7  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fabba  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 004fabbd  8a0c08               mov cl, byte ptr [eax + ecx]
// 004fabc0  83c001               add eax, 1
// 004fabc3  894344               mov dword ptr [ebx + 0x44], eax
// 004fabc6  884fff               mov byte ptr [edi - 1], cl
// 004fabc9  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fabcc  8d5001               lea edx, [eax + 1]
// 004fabcf  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 004fabd2  7e0f                 jle 0x4fabe3
// 004fabd4  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 004fabd7  03c8                 add ecx, eax
// 004fabd9  6a01                 push 1
// 004fabdb  51                   push ecx
// 004fabdc  8bcb                 mov ecx, ebx
// 004fabde  e88d670000           call 0x501370
// 004fabe3  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fabe6  8b5340               mov edx, dword ptr [ebx + 0x40]
// 004fabe9  8a0c10               mov cl, byte ptr [eax + edx]
// 004fabec  83c001               add eax, 1
// 004fabef  894344               mov dword ptr [ebx + 0x44], eax
// 004fabf2  884f02               mov byte ptr [edi + 2], cl
// 004fabf5  83c704               add edi, 4
// 004fabf8  836c241c01           sub dword ptr [esp + 0x1c], 1
// 004fabfd  0f8543ffffff         jne 0x4fab46
// 004fac03  8b460c               mov eax, dword ptr [esi + 0xc]
// 004fac06  83caff               or edx, 0xffffffff
// 004fac09  85c0                 test eax, eax
// 004fac0b  7d15                 jge 0x4fac22
// 004fac0d  f7d8                 neg eax
// 004fac0f  89460c               mov dword ptr [esi + 0xc], eax
// 004fac12  33c9                 xor ecx, ecx
// 004fac14  8944242c             mov dword ptr [esp + 0x2c], eax
// 004fac18  c744242801000000     mov dword ptr [esp + 0x28], 1
// 004fac20  eb0b                 jmp 0x4fac2d
// 004fac22  8d48ff               lea ecx, [eax - 1]
// 004fac25  8954242c             mov dword ptr [esp + 0x2c], edx
// 004fac29  89542428             mov dword ptr [esp + 0x28], edx
// 004fac2d  8b442414             mov eax, dword ptr [esp + 0x14]
// 004fac31  83f801               cmp eax, 1
// 004fac34  0f850c030000         jne 0x4faf46
// 004fac3a  8b4608               mov eax, dword ptr [esi + 8]
// 004fac3d  83c007               add eax, 7
// 004fac40  c1f803               sar eax, 3
// 004fac43  8bd0                 mov edx, eax
// 004fac45  83e203               and edx, 3
// 004fac48  89442420             mov dword ptr [esp + 0x20], eax
// 004fac4c  740d                 je 0x4fac5b
// 004fac4e  bf04000000           mov edi, 4
// 004fac53  2bfa                 sub edi, edx
// 004fac55  03c7                 add eax, edi
// 004fac57  89442420             mov dword ptr [esp + 0x20], eax
// 004fac5b  3b4c242c             cmp ecx, dword ptr [esp + 0x2c]
// 004fac5f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004fac63  0f84d4040000         je 0x4fb13d
// 004fac69  8b542420             mov edx, dword ptr [esp + 0x20]
// 004fac6d  8d4900               lea ecx, [ecx]
// 004fac70  8b7e08               mov edi, dword ptr [esi + 8]
// 004fac73  0faff9               imul edi, ecx
// 004fac76  33c0                 xor eax, eax
// 004fac78  85d2                 test edx, edx
// 004fac7a  89442414             mov dword ptr [esp + 0x14], eax
// 004fac7e  8d3c7f               lea edi, [edi + edi*2]
// 004fac81  0f8ea8020000         jle 0x4faf2f
// 004fac87  89542424             mov dword ptr [esp + 0x24], edx
// 004fac8b  eb03                 jmp 0x4fac90
// 004fac8d  8d4900               lea ecx, [ecx]
// 004fac90  8b4b44               mov ecx, dword ptr [ebx + 0x44]
// 004fac93  8d5101               lea edx, [ecx + 1]
// 004fac96  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 004fac99  7e13                 jle 0x4facae
// 004fac9b  8b4334               mov eax, dword ptr [ebx + 0x34]
// 004fac9e  03c1                 add eax, ecx
// 004faca0  6a01                 push 1
// 004faca2  50                   push eax
// 004faca3  8bcb                 mov ecx, ebx
// 004faca5  e8c6660000           call 0x501370
// 004facaa  8b442414             mov eax, dword ptr [esp + 0x14]
// 004facae  8b5344               mov edx, dword ptr [ebx + 0x44]
// 004facb1  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 004facb4  8a0c0a               mov cl, byte ptr [edx + ecx]
// 004facb7  83c201               add edx, 1
// 004facba  895344               mov dword ptr [ebx + 0x44], edx
// 004facbd  3b4608               cmp eax, dword ptr [esi + 8]
// 004facc0  884c241b             mov byte ptr [esp + 0x1b], cl
// 004facc4  0f8d52020000         jge 0x4faf1c
// 004facca  8b5604               mov edx, dword ptr [esi + 4]
// 004faccd  0fb6c9               movzx ecx, cl
// 004facd0  c1e907               shr ecx, 7
// 004facd3  894c2414             mov dword ptr [esp + 0x14], ecx
// 004facd7  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 004facdc  880c17               mov byte ptr [edi + edx], cl
// 004facdf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004face3  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 004face8  8b5604               mov edx, dword ptr [esi + 4]
// 004faceb  884c3a01             mov byte ptr [edx + edi + 1], cl
// 004facef  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004facf3  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 004facf8  8b5604               mov edx, dword ptr [esi + 4]
// 004facfb  884c3a02             mov byte ptr [edx + edi + 2], cl
// 004facff  0fb64c241b           movzx ecx, byte ptr [esp + 0x1b]
// 004fad04  83c001               add eax, 1
// 004fad07  83c704               add edi, 4
// 004fad0a  3b4608               cmp eax, dword ptr [esi + 8]
// 004fad0d  89442414             mov dword ptr [esp + 0x14], eax
// 004fad11  0f8d05020000         jge 0x4faf1c
// 004fad17  8b5604               mov edx, dword ptr [esi + 4]
// 004fad1a  c1e906               shr ecx, 6
// 004fad1d  83e101               and ecx, 1
// 004fad20  894c2414             mov dword ptr [esp + 0x14], ecx
// 004fad24  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 004fad29  880c17               mov byte ptr [edi + edx], cl
// 004fad2c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fad30  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 004fad35  8b5604               mov edx, dword ptr [esi + 4]
// 004fad38  884c3a01             mov byte ptr [edx + edi + 1], cl
// 004fad3c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fad40  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 004fad45  8b5604               mov edx, dword ptr [esi + 4]
// 004fad48  884c3a02             mov byte ptr [edx + edi + 2], cl
// 004fad4c  0fb64c241b           movzx ecx, byte ptr [esp + 0x1b]
// 004fad51  83c001               add eax, 1
// 004fad54  83c704               add edi, 4
// 004fad57  3b4608               cmp eax, dword ptr [esi + 8]
// 004fad5a  89442414             mov dword ptr [esp + 0x14], eax
// 004fad5e  0f8db8010000         jge 0x4faf1c
// 004fad64  8b5604               mov edx, dword ptr [esi + 4]
// 004fad67  c1e905               shr ecx, 5
// 004fad6a  83e101               and ecx, 1
// 004fad6d  894c2414             mov dword ptr [esp + 0x14], ecx
// 004fad71  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 004fad76  880c17               mov byte ptr [edi + edx], cl
// 004fad79  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fad7d  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 004fad82  8b5604               mov edx, dword ptr [esi + 4]
// 004fad85  884c3a01             mov byte ptr [edx + edi + 1], cl
// 004fad89  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fad8d  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 004fad92  8b5604               mov edx, dword ptr [esi + 4]
// 004fad95  884c3a02             mov byte ptr [edx + edi + 2], cl
// 004fad99  0fb64c241b           movzx ecx, byte ptr [esp + 0x1b]
// 004fad9e  83c001               add eax, 1
// 004fada1  83c704               add edi, 4
// 004fada4  3b4608               cmp eax, dword ptr [esi + 8]
// 004fada7  89442414             mov dword ptr [esp + 0x14], eax
// 004fadab  0f8d6b010000         jge 0x4faf1c
// 004fadb1  8b5604               mov edx, dword ptr [esi + 4]
// 004fadb4  c1e904               shr ecx, 4
// 004fadb7  83e101               and ecx, 1
// 004fadba  894c2414             mov dword ptr [esp + 0x14], ecx
// 004fadbe  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 004fadc3  880c17               mov byte ptr [edi + edx], cl
// 004fadc6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fadca  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 004fadcf  8b5604               mov edx, dword ptr [esi + 4]
// 004fadd2  884c3a01             mov byte ptr [edx + edi + 1], cl
// 004fadd6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fadda  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 004faddf  8b5604               mov edx, dword ptr [esi + 4]
// 004fade2  884c3a02             mov byte ptr [edx + edi + 2], cl
// 004fade6  0fb64c241b           movzx ecx, byte ptr [esp + 0x1b]
// 004fadeb  83c001               add eax, 1
// 004fadee  83c704               add edi, 4
// 004fadf1  3b4608               cmp eax, dword ptr [esi + 8]
// 004fadf4  89442414             mov dword ptr [esp + 0x14], eax
// 004fadf8  0f8d1e010000         jge 0x4faf1c
// 004fadfe  8b5604               mov edx, dword ptr [esi + 4]
// 004fae01  c1e903               shr ecx, 3
// 004fae04  83e101               and ecx, 1
// 004fae07  894c2414             mov dword ptr [esp + 0x14], ecx
// 004fae0b  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 004fae10  880c17               mov byte ptr [edi + edx], cl
// 004fae13  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fae17  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 004fae1c  8b5604               mov edx, dword ptr [esi + 4]
// 004fae1f  884c3a01             mov byte ptr [edx + edi + 1], cl
// 004fae23  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fae27  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 004fae2c  8b5604               mov edx, dword ptr [esi + 4]
// 004fae2f  884c3a02             mov byte ptr [edx + edi + 2], cl
// 004fae33  0fb64c241b           movzx ecx, byte ptr [esp + 0x1b]
// 004fae38  83c001               add eax, 1
// 004fae3b  83c704               add edi, 4
// 004fae3e  3b4608               cmp eax, dword ptr [esi + 8]
// 004fae41  89442414             mov dword ptr [esp + 0x14], eax
// 004fae45  0f8dd1000000         jge 0x4faf1c
// 004fae4b  8b5604               mov edx, dword ptr [esi + 4]
// 004fae4e  c1e902               shr ecx, 2
// 004fae51  83e101               and ecx, 1
// 004fae54  894c2414             mov dword ptr [esp + 0x14], ecx
// 004fae58  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 004fae5d  880c17               mov byte ptr [edi + edx], cl
// 004fae60  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fae64  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 004fae69  8b5604               mov edx, dword ptr [esi + 4]
// 004fae6c  884c3a01             mov byte ptr [edx + edi + 1], cl
// 004fae70  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fae74  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 004fae79  8b5604               mov edx, dword ptr [esi + 4]
// 004fae7c  884c3a02             mov byte ptr [edx + edi + 2], cl
// 004fae80  0fb64c241b           movzx ecx, byte ptr [esp + 0x1b]
// 004fae85  83c001               add eax, 1
// 004fae88  83c704               add edi, 4
// 004fae8b  3b4608               cmp eax, dword ptr [esi + 8]
// 004fae8e  89442414             mov dword ptr [esp + 0x14], eax
// 004fae92  0f8d84000000         jge 0x4faf1c
// 004fae98  8b5604               mov edx, dword ptr [esi + 4]
// 004fae9b  d1e9                 shr ecx, 1
// 004fae9d  83e101               and ecx, 1
// 004faea0  894c2414             mov dword ptr [esp + 0x14], ecx
// 004faea4  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 004faea9  880c17               mov byte ptr [edi + edx], cl
// 004faeac  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004faeb0  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 004faeb5  8b5604               mov edx, dword ptr [esi + 4]
// 004faeb8  884c3a01             mov byte ptr [edx + edi + 1], cl
// 004faebc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004faec0  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 004faec5  8b5604               mov edx, dword ptr [esi + 4]
// 004faec8  884c3a02             mov byte ptr [edx + edi + 2], cl
// 004faecc  0fb64c241b           movzx ecx, byte ptr [esp + 0x1b]
// 004faed1  83c001               add eax, 1
// 004faed4  83c704               add edi, 4
// 004faed7  3b4608               cmp eax, dword ptr [esi + 8]
// 004faeda  89442414             mov dword ptr [esp + 0x14], eax
// 004faede  7d3c                 jge 0x4faf1c
// 004faee0  8b5604               mov edx, dword ptr [esi + 4]
// 004faee3  83e101               and ecx, 1
// 004faee6  894c2414             mov dword ptr [esp + 0x14], ecx
// 004faeea  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 004faeef  880c17               mov byte ptr [edi + edx], cl
// 004faef2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004faef6  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 004faefb  8b5604               mov edx, dword ptr [esi + 4]
// 004faefe  884c3a01             mov byte ptr [edx + edi + 1], cl
// 004faf02  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004faf06  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 004faf0b  8b5604               mov edx, dword ptr [esi + 4]
// 004faf0e  83c001               add eax, 1
// 004faf11  884c3a02             mov byte ptr [edx + edi + 2], cl
// 004faf15  89442414             mov dword ptr [esp + 0x14], eax
// 004faf19  83c704               add edi, 4
// 004faf1c  836c242401           sub dword ptr [esp + 0x24], 1
// 004faf21  0f8569fdffff         jne 0x4fac90
// 004faf27  8b542420             mov edx, dword ptr [esp + 0x20]
// 004faf2b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004faf2f  034c2428             add ecx, dword ptr [esp + 0x28]
// 004faf33  3b4c242c             cmp ecx, dword ptr [esp + 0x2c]
// 004faf37  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004faf3b  0f852ffdffff         jne 0x4fac70
// 004faf41  e9f7010000           jmp 0x4fb13d
// 004faf46  83f804               cmp eax, 4
// 004faf49  0f8521010000         jne 0x4fb070
// 004faf4f  8b4608               mov eax, dword ptr [esi + 8]
// 004faf52  83c001               add eax, 1
// 004faf55  d1f8                 sar eax, 1
// 004faf57  8bd0                 mov edx, eax
// 004faf59  83e203               and edx, 3
// 004faf5c  89442424             mov dword ptr [esp + 0x24], eax
// 004faf60  740d                 je 0x4faf6f
// 004faf62  bf04000000           mov edi, 4
// 004faf67  2bfa                 sub edi, edx
// 004faf69  03c7                 add eax, edi
// 004faf6b  89442424             mov dword ptr [esp + 0x24], eax
// 004faf6f  3b4c242c             cmp ecx, dword ptr [esp + 0x2c]
// 004faf73  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004faf77  0f84c0010000         je 0x4fb13d
// 004faf7d  8d4900               lea ecx, [ecx]
// 004faf80  8b7e08               mov edi, dword ptr [esi + 8]
// 004faf83  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004faf87  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004faf8b  0faff8               imul edi, eax
// 004faf8e  03ff                 add edi, edi
// 004faf90  03ff                 add edi, edi
// 004faf92  85c9                 test ecx, ecx
// 004faf94  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004faf9c  0f8eb7000000         jle 0x4fb059
// 004fafa2  894c2420             mov dword ptr [esp + 0x20], ecx
// 004fafa6  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fafa9  8d5001               lea edx, [eax + 1]
// 004fafac  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 004fafaf  7e0f                 jle 0x4fafc0
// 004fafb1  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 004fafb4  03c8                 add ecx, eax
// 004fafb6  6a01                 push 1
// 004fafb8  51                   push ecx
// 004fafb9  8bcb                 mov ecx, ebx
// 004fafbb  e8b0630000           call 0x501370
// 004fafc0  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fafc3  8b5340               mov edx, dword ptr [ebx + 0x40]
// 004fafc6  8a0c10               mov cl, byte ptr [eax + edx]
// 004fafc9  8b542414             mov edx, dword ptr [esp + 0x14]
// 004fafcd  83c001               add eax, 1
// 004fafd0  0fb6c9               movzx ecx, cl
// 004fafd3  894344               mov dword ptr [ebx + 0x44], eax
// 004fafd6  8bc1                 mov eax, ecx
// 004fafd8  83e10f               and ecx, 0xf
// 004fafdb  c1e804               shr eax, 4
// 004fafde  3b5608               cmp edx, dword ptr [esi + 8]
// 004fafe1  894c2440             mov dword ptr [esp + 0x40], ecx
// 004fafe5  7d2f                 jge 0x4fb016
// 004fafe7  0fb6548500           movzx edx, byte ptr [ebp + eax*4]
// 004fafec  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fafef  8344241401           add dword ptr [esp + 0x14], 1
// 004faff4  88140f               mov byte ptr [edi + ecx], dl
// 004faff7  0fb6548501           movzx edx, byte ptr [ebp + eax*4 + 1]
// 004faffc  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fafff  88543901             mov byte ptr [ecx + edi + 1], dl
// 004fb003  0fb6548502           movzx edx, byte ptr [ebp + eax*4 + 2]
// 004fb008  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fb00b  88543902             mov byte ptr [ecx + edi + 2], dl
// 004fb00f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 004fb013  83c704               add edi, 4
// 004fb016  8b442414             mov eax, dword ptr [esp + 0x14]
// 004fb01a  3b4608               cmp eax, dword ptr [esi + 8]
// 004fb01d  7d2b                 jge 0x4fb04a
// 004fb01f  0fb6448d00           movzx eax, byte ptr [ebp + ecx*4]
// 004fb024  8b5604               mov edx, dword ptr [esi + 4]
// 004fb027  8344241401           add dword ptr [esp + 0x14], 1
// 004fb02c  880417               mov byte ptr [edi + edx], al
// 004fb02f  0fb6448d01           movzx eax, byte ptr [ebp + ecx*4 + 1]
// 004fb034  8b5604               mov edx, dword ptr [esi + 4]
// 004fb037  88443a01             mov byte ptr [edx + edi + 1], al
// 004fb03b  0fb6448d02           movzx eax, byte ptr [ebp + ecx*4 + 2]
// 004fb040  8b5604               mov edx, dword ptr [esi + 4]
// 004fb043  88443a02             mov byte ptr [edx + edi + 2], al
// 004fb047  83c704               add edi, 4
// 004fb04a  836c242001           sub dword ptr [esp + 0x20], 1
// 004fb04f  0f8551ffffff         jne 0x4fafa6
// 004fb055  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004fb059  03442428             add eax, dword ptr [esp + 0x28]
// 004fb05d  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 004fb061  8944241c             mov dword ptr [esp + 0x1c], eax
// 004fb065  0f8515ffffff         jne 0x4faf80
// 004fb06b  e9cd000000           jmp 0x4fb13d
// 004fb070  83f808               cmp eax, 8
// 004fb073  0f85c4000000         jne 0x4fb13d
// 004fb079  8b7e08               mov edi, dword ptr [esi + 8]
// 004fb07c  8bc7                 mov eax, edi
// 004fb07e  83e003               and eax, 3
// 004fb081  897c2420             mov dword ptr [esp + 0x20], edi
// 004fb085  740d                 je 0x4fb094
// 004fb087  ba04000000           mov edx, 4
// 004fb08c  2bd0                 sub edx, eax
// 004fb08e  03fa                 add edi, edx
// 004fb090  897c2420             mov dword ptr [esp + 0x20], edi
// 004fb094  3b4c242c             cmp ecx, dword ptr [esp + 0x2c]
// 004fb098  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004fb09c  0f849b000000         je 0x4fb13d
// 004fb0a2  85ff                 test edi, edi
// 004fb0a4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004fb0ac  7e79                 jle 0x4fb127
// 004fb0ae  897c2424             mov dword ptr [esp + 0x24], edi
// 004fb0b2  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fb0b5  8d4801               lea ecx, [eax + 1]
// 004fb0b8  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 004fb0bb  7e0f                 jle 0x4fb0cc
// 004fb0bd  8b5334               mov edx, dword ptr [ebx + 0x34]
// 004fb0c0  6a01                 push 1
// 004fb0c2  03d0                 add edx, eax
// 004fb0c4  52                   push edx
// 004fb0c5  8bcb                 mov ecx, ebx
// 004fb0c7  e8a4620000           call 0x501370
// 004fb0cc  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fb0cf  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 004fb0d2  8a0c08               mov cl, byte ptr [eax + ecx]
// 004fb0d5  83c001               add eax, 1
// 004fb0d8  894344               mov dword ptr [ebx + 0x44], eax
// 004fb0db  8b4608               mov eax, dword ptr [esi + 8]
// 004fb0de  39442414             cmp dword ptr [esp + 0x14], eax
// 004fb0e2  7d3c                 jge 0x4fb120
// 004fb0e4  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 004fb0e9  03442414             add eax, dword ptr [esp + 0x14]
// 004fb0ed  8b5604               mov edx, dword ptr [esi + 4]
// 004fb0f0  0fb6f9               movzx edi, cl
// 004fb0f3  0fb64cbd00           movzx ecx, byte ptr [ebp + edi*4]
// 004fb0f8  03c0                 add eax, eax
// 004fb0fa  03c0                 add eax, eax
// 004fb0fc  8344241401           add dword ptr [esp + 0x14], 1
// 004fb101  880c10               mov byte ptr [eax + edx], cl
// 004fb104  0fb64cbd01           movzx ecx, byte ptr [ebp + edi*4 + 1]
// 004fb109  8b5604               mov edx, dword ptr [esi + 4]
// 004fb10c  884c0201             mov byte ptr [edx + eax + 1], cl
// 004fb110  0fb64cbd02           movzx ecx, byte ptr [ebp + edi*4 + 2]
// 004fb115  8b5604               mov edx, dword ptr [esi + 4]
// 004fb118  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004fb11c  884c0202             mov byte ptr [edx + eax + 2], cl
// 004fb120  836c242401           sub dword ptr [esp + 0x24], 1
// 004fb125  758b                 jne 0x4fb0b2
// 004fb127  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004fb12b  03442428             add eax, dword ptr [esp + 0x28]
// 004fb12f  3b44242c             cmp eax, dword ptr [esp + 0x2c]
// 004fb133  8944241c             mov dword ptr [esp + 0x1c], eax
// 004fb137  0f8565ffffff         jne 0x4fb0a2
// 004fb13d  8b5608               mov edx, dword ptr [esi + 8]
// 004fb140  89542424             mov dword ptr [esp + 0x24], edx
// 004fb144  db442424             fild dword ptr [esp + 0x24]
// 004fb148  83ec08               sub esp, 8
// 004fb14b  dc0dd8fc7900         fmul qword ptr [0x79fcd8]
// 004fb151  dd1c24               fstp qword ptr [esp]
// 004fb154  ff156cea7700         call dword ptr [0x77ea6c]
// 004fb15a  83c408               add esp, 8
// 004fb15d  e89e401200           call 0x61f200
// 004fb162  8bc8                 mov ecx, eax
// 004fb164  83e103               and ecx, 3
// 004fb167  8944241c             mov dword ptr [esp + 0x1c], eax
// 004fb16b  740d                 je 0x4fb17a
// 004fb16d  ba04000000           mov edx, 4
// 004fb172  2bd1                 sub edx, ecx
// 004fb174  03c2                 add eax, edx
// 004fb176  8944241c             mov dword ptr [esp + 0x1c], eax
// 004fb17a  8b460c               mov eax, dword ptr [esi + 0xc]
// 004fb17d  83e801               sub eax, 1
// 004fb180  89442420             mov dword ptr [esp + 0x20], eax
// 004fb184  0f8897000000         js 0x4fb221
// 004fb18a  8d9b00000000         lea ebx, [ebx]
// 004fb190  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 004fb195  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004fb19d  7e77                 jle 0x4fb216
// 004fb19f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004fb1a3  89442424             mov dword ptr [esp + 0x24], eax
// 004fb1a7  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fb1aa  8d4801               lea ecx, [eax + 1]
// 004fb1ad  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 004fb1b0  7e0f                 jle 0x4fb1c1
// 004fb1b2  8b5334               mov edx, dword ptr [ebx + 0x34]
// 004fb1b5  6a01                 push 1
// 004fb1b7  03d0                 add edx, eax
// 004fb1b9  52                   push edx
// 004fb1ba  8bcb                 mov ecx, ebx
// 004fb1bc  e8af610000           call 0x501370
// 004fb1c1  8b4344               mov eax, dword ptr [ebx + 0x44]
// 004fb1c4  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 004fb1c7  8a1408               mov dl, byte ptr [eax + ecx]
// 004fb1ca  83c001               add eax, 1
// 004fb1cd  8854241b             mov byte ptr [esp + 0x1b], dl
// 004fb1d1  894344               mov dword ptr [ebx + 0x44], eax
// 004fb1d4  33d2                 xor edx, edx
// 004fb1d6  8b7e08               mov edi, dword ptr [esi + 8]
// 004fb1d9  397c2428             cmp dword ptr [esp + 0x28], edi
// 004fb1dd  7d30                 jge 0x4fb20f
// 004fb1df  0faf7c2420           imul edi, dword ptr [esp + 0x20]
// 004fb1e4  0fb644241b           movzx eax, byte ptr [esp + 0x1b]
// 004fb1e9  037c2428             add edi, dword ptr [esp + 0x28]
// 004fb1ed  8344242801           add dword ptr [esp + 0x28], 1
// 004fb1f2  b907000000           mov ecx, 7
// 004fb1f7  2aca                 sub cl, dl
// 004fb1f9  d3e8                 shr eax, cl
// 004fb1fb  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fb1fe  83c201               add edx, 1
// 004fb201  83e001               and eax, 1
// 004fb204  2c01                 sub al, 1
// 004fb206  83fa08               cmp edx, 8
// 004fb209  8844b903             mov byte ptr [ecx + edi*4 + 3], al
// 004fb20d  7cc7                 jl 0x4fb1d6
// 004fb20f  836c242401           sub dword ptr [esp + 0x24], 1
// 004fb214  7591                 jne 0x4fb1a7
// 004fb216  836c242001           sub dword ptr [esp + 0x20], 1
// 004fb21b  0f896fffffff         jns 0x4fb190
// 004fb221  55                   push ebp
// 004fb222  c78424c0000000ffffffff mov dword ptr [esp + 0xc0], 0xffffffff
// 004fb22d  e84e81ffff           call 0x4f3380
// 004fb232  83c404               add esp, 4
// 004fb235  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 004fb23c  64890d00000000       mov dword ptr fs:[0], ecx
// 004fb243  59                   pop ecx
// 004fb244  5f                   pop edi
// 004fb245  5e                   pop esi
// 004fb246  5d                   pop ebp
// 004fb247  5b                   pop ebx
// 004fb248  81c4ac000000         add esp, 0xac
// 004fb24e  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_bmp.cpp (function ?decodeICO@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_bmp.cpp
