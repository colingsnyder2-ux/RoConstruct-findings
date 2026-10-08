// roc 2009-12 0061ab10  unit: seg_00610000  size: 1291 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061ab10
//
// 0061ab10  83ec18               sub esp, 0x18
// 0061ab13  53                   push ebx
// 0061ab14  55                   push ebp
// 0061ab15  0fb76a02             movzx ebp, word ptr [edx + 2]
// 0061ab19  56                   push esi
// 0061ab1a  33f6                 xor esi, esi
// 0061ab1c  57                   push edi
// 0061ab1d  8bd9                 mov ebx, ecx
// 0061ab1f  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0061ab27  896c2414             mov dword ptr [esp + 0x14], ebp
// 0061ab2b  8d4e07               lea ecx, [esi + 7]
// 0061ab2e  8d7e04               lea edi, [esi + 4]
// 0061ab31  85ed                 test ebp, ebp
// 0061ab33  7508                 jne 0x61ab3d
// 0061ab35  b98a000000           mov ecx, 0x8a
// 0061ab3a  8d7d03               lea edi, [ebp + 3]
// 0061ab3d  85db                 test ebx, ebx
// 0061ab3f  0f8cce040000         jl 0x61b013
// 0061ab45  83c206               add edx, 6
// 0061ab48  43                   inc ebx
// 0061ab49  89542418             mov dword ptr [esp + 0x18], edx
// 0061ab4d  895c2420             mov dword ptr [esp + 0x20], ebx
// 0061ab51  bd01000000           mov ebp, 1
// 0061ab56  eb08                 jmp 0x61ab60
// 0061ab58  8da42400000000       lea esp, [esp]
// 0061ab5f  90                   nop 
// 0061ab60  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0061ab64  0fb71b               movzx ebx, word ptr [ebx]
// 0061ab67  8b542414             mov edx, dword ptr [esp + 0x14]
// 0061ab6b  03f5                 add esi, ebp
// 0061ab6d  3bf1                 cmp esi, ecx
// 0061ab6f  89542424             mov dword ptr [esp + 0x24], edx
// 0061ab73  895c2414             mov dword ptr [esp + 0x14], ebx
// 0061ab77  89742410             mov dword ptr [esp + 0x10], esi
// 0061ab7b  7d08                 jge 0x61ab85
// 0061ab7d  3bd3                 cmp edx, ebx
// 0061ab7f  0f847f040000         je 0x61b004
// 0061ab85  3bf7                 cmp esi, edi
// 0061ab87  0f8da2000000         jge 0x61ac2f
// 0061ab8d  8d4900               lea ecx, [ecx]
// 0061ab90  0fb7bc907e0a0000     movzx edi, word ptr [eax + edx*4 + 0xa7e]
// 0061ab98  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0061ab9e  bb10000000           mov ebx, 0x10
// 0061aba3  2bdf                 sub ebx, edi
// 0061aba5  3bcb                 cmp ecx, ebx
// 0061aba7  7e5b                 jle 0x61ac04
// 0061aba9  0fb7b4907c0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7c]
// 0061abb1  8bd6                 mov edx, esi
// 0061abb3  d3e2                 shl edx, cl
// 0061abb5  8b4808               mov ecx, dword ptr [eax + 8]
// 0061abb8  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0061abbf  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061abc6  8b5014               mov edx, dword ptr [eax + 0x14]
// 0061abc9  881c11               mov byte ptr [ecx + edx], bl
// 0061abcc  016814               add dword ptr [eax + 0x14], ebp
// 0061abcf  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061abd2  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061abd9  8b5008               mov edx, dword ptr [eax + 8]
// 0061abdc  881c11               mov byte ptr [ecx + edx], bl
// 0061abdf  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0061abe5  016814               add dword ptr [eax + 0x14], ebp
// 0061abe8  b110                 mov cl, 0x10
// 0061abea  2aca                 sub cl, dl
// 0061abec  66d3ee               shr si, cl
// 0061abef  8d4c3af0             lea ecx, [edx + edi - 0x10]
// 0061abf3  8b542424             mov edx, dword ptr [esp + 0x24]
// 0061abf7  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0061abfe  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061ac02  eb14                 jmp 0x61ac18
// 0061ac04  668b9c907c0a0000     mov bx, word ptr [eax + edx*4 + 0xa7c]
// 0061ac0c  66d3e3               shl bx, cl
// 0061ac0f  660998b8160000       or word ptr [eax + 0x16b8], bx
// 0061ac16  03cf                 add ecx, edi
// 0061ac18  2bf5                 sub esi, ebp
// 0061ac1a  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0061ac20  89742410             mov dword ptr [esp + 0x10], esi
// 0061ac24  0f8566ffffff         jne 0x61ab90
// 0061ac2a  e9a7030000           jmp 0x61afd6
// 0061ac2f  85d2                 test edx, edx
// 0061ac31  0f84a5010000         je 0x61addc
// 0061ac37  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0061ac3b  0f849c000000         je 0x61acdd
// 0061ac41  0fb7bc907e0a0000     movzx edi, word ptr [eax + edx*4 + 0xa7e]
// 0061ac49  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0061ac4f  bb10000000           mov ebx, 0x10
// 0061ac54  2bdf                 sub ebx, edi
// 0061ac56  3bcb                 cmp ecx, ebx
// 0061ac58  897c241c             mov dword ptr [esp + 0x1c], edi
// 0061ac5c  7e5b                 jle 0x61acb9
// 0061ac5e  0fb7b4907c0a0000     movzx esi, word ptr [eax + edx*4 + 0xa7c]
// 0061ac66  8bfe                 mov edi, esi
// 0061ac68  d3e7                 shl edi, cl
// 0061ac6a  8b4808               mov ecx, dword ptr [eax + 8]
// 0061ac6d  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0061ac74  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061ac7b  8b7814               mov edi, dword ptr [eax + 0x14]
// 0061ac7e  881c39               mov byte ptr [ecx + edi], bl
// 0061ac81  016814               add dword ptr [eax + 0x14], ebp
// 0061ac84  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061ac8b  8b4808               mov ecx, dword ptr [eax + 8]
// 0061ac8e  8b7814               mov edi, dword ptr [eax + 0x14]
// 0061ac91  881c0f               mov byte ptr [edi + ecx], bl
// 0061ac94  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0061ac9a  016814               add dword ptr [eax + 0x14], ebp
// 0061ac9d  b110                 mov cl, 0x10
// 0061ac9f  2acb                 sub cl, bl
// 0061aca1  66d3ee               shr si, cl
// 0061aca4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061aca8  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 0061acac  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0061acb3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061acb7  eb18                 jmp 0x61acd1
// 0061acb9  668bbc907c0a0000     mov di, word ptr [eax + edx*4 + 0xa7c]
// 0061acc1  66d3e7               shl di, cl
// 0061acc4  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0061accb  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0061accf  03cf                 add ecx, edi
// 0061acd1  2bf5                 sub esi, ebp
// 0061acd3  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0061acd9  89742410             mov dword ptr [esp + 0x10], esi
// 0061acdd  0fb7b8be0a0000       movzx edi, word ptr [eax + 0xabe]
// 0061ace4  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0061acea  bb10000000           mov ebx, 0x10
// 0061acef  2bdf                 sub ebx, edi
// 0061acf1  3bcb                 cmp ecx, ebx
// 0061acf3  897c241c             mov dword ptr [esp + 0x1c], edi
// 0061acf7  7e5a                 jle 0x61ad53
// 0061acf9  0fb7b0bc0a0000       movzx esi, word ptr [eax + 0xabc]
// 0061ad00  8bfe                 mov edi, esi
// 0061ad02  d3e7                 shl edi, cl
// 0061ad04  8b4808               mov ecx, dword ptr [eax + 8]
// 0061ad07  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0061ad0e  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061ad15  8b7814               mov edi, dword ptr [eax + 0x14]
// 0061ad18  881c39               mov byte ptr [ecx + edi], bl
// 0061ad1b  016814               add dword ptr [eax + 0x14], ebp
// 0061ad1e  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061ad25  8b4808               mov ecx, dword ptr [eax + 8]
// 0061ad28  8b7814               mov edi, dword ptr [eax + 0x14]
// 0061ad2b  881c0f               mov byte ptr [edi + ecx], bl
// 0061ad2e  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0061ad34  016814               add dword ptr [eax + 0x14], ebp
// 0061ad37  b110                 mov cl, 0x10
// 0061ad39  2acb                 sub cl, bl
// 0061ad3b  66d3ee               shr si, cl
// 0061ad3e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061ad42  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 0061ad46  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0061ad4d  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061ad51  eb17                 jmp 0x61ad6a
// 0061ad53  668bb8bc0a0000       mov di, word ptr [eax + 0xabc]
// 0061ad5a  66d3e7               shl di, cl
// 0061ad5d  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0061ad64  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0061ad68  03cf                 add ecx, edi
// 0061ad6a  83c6fd               add esi, -3
// 0061ad6d  83f90e               cmp ecx, 0xe
// 0061ad70  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0061ad76  7e53                 jle 0x61adcb
// 0061ad78  8bfe                 mov edi, esi
// 0061ad7a  d3e7                 shl edi, cl
// 0061ad7c  8b4808               mov ecx, dword ptr [eax + 8]
// 0061ad7f  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0061ad86  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061ad8d  8b7814               mov edi, dword ptr [eax + 0x14]
// 0061ad90  881c39               mov byte ptr [ecx + edi], bl
// 0061ad93  016814               add dword ptr [eax + 0x14], ebp
// 0061ad96  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061ad9d  8b7814               mov edi, dword ptr [eax + 0x14]
// 0061ada0  8b4808               mov ecx, dword ptr [eax + 8]
// 0061ada3  881c0f               mov byte ptr [edi + ecx], bl
// 0061ada6  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0061adac  016814               add dword ptr [eax + 0x14], ebp
// 0061adaf  b110                 mov cl, 0x10
// 0061adb1  2acb                 sub cl, bl
// 0061adb3  66d3ee               shr si, cl
// 0061adb6  83c3f2               add ebx, -0xe
// 0061adb9  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 0061adbf  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0061adc6  e90b020000           jmp 0x61afd6
// 0061adcb  d3e6                 shl esi, cl
// 0061adcd  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 0061add4  83c102               add ecx, 2
// 0061add7  e9f4010000           jmp 0x61afd0
// 0061addc  83fe0a               cmp esi, 0xa
// 0061addf  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0061ade5  bb10000000           mov ebx, 0x10
// 0061adea  0f8ff4000000         jg 0x61aee4
// 0061adf0  0fb7b8c20a0000       movzx edi, word ptr [eax + 0xac2]
// 0061adf7  2bdf                 sub ebx, edi
// 0061adf9  3bcb                 cmp ecx, ebx
// 0061adfb  897c241c             mov dword ptr [esp + 0x1c], edi
// 0061adff  7e5a                 jle 0x61ae5b
// 0061ae01  0fb7b0c00a0000       movzx esi, word ptr [eax + 0xac0]
// 0061ae08  8bfe                 mov edi, esi
// 0061ae0a  d3e7                 shl edi, cl
// 0061ae0c  8b4808               mov ecx, dword ptr [eax + 8]
// 0061ae0f  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0061ae16  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061ae1d  8b7814               mov edi, dword ptr [eax + 0x14]
// 0061ae20  881c39               mov byte ptr [ecx + edi], bl
// 0061ae23  016814               add dword ptr [eax + 0x14], ebp
// 0061ae26  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061ae2d  8b4808               mov ecx, dword ptr [eax + 8]
// 0061ae30  8b7814               mov edi, dword ptr [eax + 0x14]
// 0061ae33  881c0f               mov byte ptr [edi + ecx], bl
// 0061ae36  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0061ae3c  016814               add dword ptr [eax + 0x14], ebp
// 0061ae3f  b110                 mov cl, 0x10
// 0061ae41  2acb                 sub cl, bl
// 0061ae43  66d3ee               shr si, cl
// 0061ae46  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061ae4a  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 0061ae4e  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0061ae55  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061ae59  eb17                 jmp 0x61ae72
// 0061ae5b  668bb8c00a0000       mov di, word ptr [eax + 0xac0]
// 0061ae62  66d3e7               shl di, cl
// 0061ae65  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0061ae6c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0061ae70  03cf                 add ecx, edi
// 0061ae72  83c6fd               add esi, -3
// 0061ae75  83f90d               cmp ecx, 0xd
// 0061ae78  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0061ae7e  7e53                 jle 0x61aed3
// 0061ae80  8bfe                 mov edi, esi
// 0061ae82  d3e7                 shl edi, cl
// 0061ae84  8b4808               mov ecx, dword ptr [eax + 8]
// 0061ae87  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0061ae8e  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061ae95  8b7814               mov edi, dword ptr [eax + 0x14]
// 0061ae98  881c39               mov byte ptr [ecx + edi], bl
// 0061ae9b  016814               add dword ptr [eax + 0x14], ebp
// 0061ae9e  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061aea5  8b7814               mov edi, dword ptr [eax + 0x14]
// 0061aea8  8b4808               mov ecx, dword ptr [eax + 8]
// 0061aeab  881c0f               mov byte ptr [edi + ecx], bl
// 0061aeae  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0061aeb4  016814               add dword ptr [eax + 0x14], ebp
// 0061aeb7  b110                 mov cl, 0x10
// 0061aeb9  2acb                 sub cl, bl
// 0061aebb  66d3ee               shr si, cl
// 0061aebe  83c3f3               add ebx, -0xd
// 0061aec1  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 0061aec7  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0061aece  e903010000           jmp 0x61afd6
// 0061aed3  d3e6                 shl esi, cl
// 0061aed5  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 0061aedc  83c103               add ecx, 3
// 0061aedf  e9ec000000           jmp 0x61afd0
// 0061aee4  0fb7b8c60a0000       movzx edi, word ptr [eax + 0xac6]
// 0061aeeb  2bdf                 sub ebx, edi
// 0061aeed  3bcb                 cmp ecx, ebx
// 0061aeef  897c241c             mov dword ptr [esp + 0x1c], edi
// 0061aef3  7e5a                 jle 0x61af4f
// 0061aef5  0fb7b0c40a0000       movzx esi, word ptr [eax + 0xac4]
// 0061aefc  8bfe                 mov edi, esi
// 0061aefe  d3e7                 shl edi, cl
// 0061af00  8b4808               mov ecx, dword ptr [eax + 8]
// 0061af03  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0061af0a  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061af11  8b7814               mov edi, dword ptr [eax + 0x14]
// 0061af14  881c39               mov byte ptr [ecx + edi], bl
// 0061af17  016814               add dword ptr [eax + 0x14], ebp
// 0061af1a  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061af21  8b4808               mov ecx, dword ptr [eax + 8]
// 0061af24  8b7814               mov edi, dword ptr [eax + 0x14]
// 0061af27  881c0f               mov byte ptr [edi + ecx], bl
// 0061af2a  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0061af30  016814               add dword ptr [eax + 0x14], ebp
// 0061af33  b110                 mov cl, 0x10
// 0061af35  2acb                 sub cl, bl
// 0061af37  66d3ee               shr si, cl
// 0061af3a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061af3e  8d4c0bf0             lea ecx, [ebx + ecx - 0x10]
// 0061af42  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0061af49  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061af4d  eb17                 jmp 0x61af66
// 0061af4f  668bb8c40a0000       mov di, word ptr [eax + 0xac4]
// 0061af56  66d3e7               shl di, cl
// 0061af59  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0061af60  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0061af64  03cf                 add ecx, edi
// 0061af66  83c6f5               add esi, -0xb
// 0061af69  83f909               cmp ecx, 9
// 0061af6c  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0061af72  7e50                 jle 0x61afc4
// 0061af74  8bfe                 mov edi, esi
// 0061af76  d3e7                 shl edi, cl
// 0061af78  8b4808               mov ecx, dword ptr [eax + 8]
// 0061af7b  6609b8b8160000       or word ptr [eax + 0x16b8], di
// 0061af82  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061af89  8b7814               mov edi, dword ptr [eax + 0x14]
// 0061af8c  881c39               mov byte ptr [ecx + edi], bl
// 0061af8f  016814               add dword ptr [eax + 0x14], ebp
// 0061af92  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061af99  8b7814               mov edi, dword ptr [eax + 0x14]
// 0061af9c  8b4808               mov ecx, dword ptr [eax + 8]
// 0061af9f  881c0f               mov byte ptr [edi + ecx], bl
// 0061afa2  8b98bc160000         mov ebx, dword ptr [eax + 0x16bc]
// 0061afa8  016814               add dword ptr [eax + 0x14], ebp
// 0061afab  b110                 mov cl, 0x10
// 0061afad  2acb                 sub cl, bl
// 0061afaf  66d3ee               shr si, cl
// 0061afb2  83c3f7               add ebx, -9
// 0061afb5  8998bc160000         mov dword ptr [eax + 0x16bc], ebx
// 0061afbb  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0061afc2  eb12                 jmp 0x61afd6
// 0061afc4  d3e6                 shl esi, cl
// 0061afc6  6609b0b8160000       or word ptr [eax + 0x16b8], si
// 0061afcd  83c107               add ecx, 7
// 0061afd0  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0061afd6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061afda  33f6                 xor esi, esi
// 0061afdc  8954241c             mov dword ptr [esp + 0x1c], edx
// 0061afe0  85c9                 test ecx, ecx
// 0061afe2  750a                 jne 0x61afee
// 0061afe4  b98a000000           mov ecx, 0x8a
// 0061afe9  8d7e03               lea edi, [esi + 3]
// 0061afec  eb16                 jmp 0x61b004
// 0061afee  3bd1                 cmp edx, ecx
// 0061aff0  750a                 jne 0x61affc
// 0061aff2  b906000000           mov ecx, 6
// 0061aff7  8d79fd               lea edi, [ecx - 3]
// 0061affa  eb08                 jmp 0x61b004
// 0061affc  b907000000           mov ecx, 7
// 0061b001  8d79fd               lea edi, [ecx - 3]
// 0061b004  8344241804           add dword ptr [esp + 0x18], 4
// 0061b009  296c2420             sub dword ptr [esp + 0x20], ebp
// 0061b00d  0f854dfbffff         jne 0x61ab60
// 0061b013  5f                   pop edi
// 0061b014  5e                   pop esi
// 0061b015  5d                   pop ebp
// 0061b016  5b                   pop ebx
// 0061b017  83c418               add esp, 0x18
// 0061b01a  c3                   ret 
// library zlib-1.2.3/trees.c (function _send_tree)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
