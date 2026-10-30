// roc 2007-03 0052ad90  unit: seg_00520000  size: 421 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052ad90
//
// 0052ad90  56                   push esi
// 0052ad91  8b742408             mov esi, dword ptr [esp + 8]
// 0052ad95  57                   push edi
// 0052ad96  8bbe3c010000         mov edi, dword ptr [esi + 0x13c]
// 0052ad9c  8b4710               mov eax, dword ptr [edi + 0x10]
// 0052ad9f  83e800               sub eax, 0
// 0052ada2  0f84d5000000         je 0x52ae7d
// 0052ada8  83e801               sub eax, 1
// 0052adab  741d                 je 0x52adca
// 0052adad  83e801               sub eax, 1
// 0052adb0  7448                 je 0x52adfa
// 0052adb2  8b06                 mov eax, dword ptr [esi]
// 0052adb4  c7401430000000       mov dword ptr [eax + 0x14], 0x30
// 0052adbb  8b0e                 mov ecx, dword ptr [esi]
// 0052adbd  8b11                 mov edx, dword ptr [ecx]
// 0052adbf  56                   push esi
// 0052adc0  ffd2                 call edx
// 0052adc2  83c404               add esp, 4
// 0052adc5  e942010000           jmp 0x52af0c
// 0052adca  e801fdffff           call 0x52aad0
// 0052adcf  e8ecfdffff           call 0x52abc0
// 0052add4  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 0052addb  757a                 jne 0x52ae57
// 0052addd  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 0052ade4  7471                 je 0x52ae57
// 0052ade6  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0052aded  7568                 jne 0x52ae57
// 0052adef  83471401             add dword ptr [edi + 0x14], 1
// 0052adf3  c7471002000000       mov dword ptr [edi + 0x10], 2
// 0052adfa  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 0052ae01  750a                 jne 0x52ae0d
// 0052ae03  e8c8fcffff           call 0x52aad0
// 0052ae08  e8b3fdffff           call 0x52abc0
// 0052ae0d  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 0052ae13  8b08                 mov ecx, dword ptr [eax]
// 0052ae15  6a00                 push 0
// 0052ae17  56                   push esi
// 0052ae18  ffd1                 call ecx
// 0052ae1a  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 0052ae20  8b02                 mov eax, dword ptr [edx]
// 0052ae22  6a02                 push 2
// 0052ae24  56                   push esi
// 0052ae25  ffd0                 call eax
// 0052ae27  83c410               add esp, 0x10
// 0052ae2a  837f1c00             cmp dword ptr [edi + 0x1c], 0
// 0052ae2e  750f                 jne 0x52ae3f
// 0052ae30  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 0052ae36  8b5104               mov edx, dword ptr [ecx + 4]
// 0052ae39  56                   push esi
// 0052ae3a  ffd2                 call edx
// 0052ae3c  83c404               add esp, 4
// 0052ae3f  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 0052ae45  8b4808               mov ecx, dword ptr [eax + 8]
// 0052ae48  56                   push esi
// 0052ae49  ffd1                 call ecx
// 0052ae4b  83c404               add esp, 4
// 0052ae4e  c6470c00             mov byte ptr [edi + 0xc], 0
// 0052ae52  e9b5000000           jmp 0x52af0c
// 0052ae57  8b965c010000         mov edx, dword ptr [esi + 0x15c]
// 0052ae5d  8b02                 mov eax, dword ptr [edx]
// 0052ae5f  6a01                 push 1
// 0052ae61  56                   push esi
// 0052ae62  ffd0                 call eax
// 0052ae64  8b8e48010000         mov ecx, dword ptr [esi + 0x148]
// 0052ae6a  8b11                 mov edx, dword ptr [ecx]
// 0052ae6c  6a02                 push 2
// 0052ae6e  56                   push esi
// 0052ae6f  ffd2                 call edx
// 0052ae71  83c410               add esp, 0x10
// 0052ae74  c6470c00             mov byte ptr [edi + 0xc], 0
// 0052ae78  e98f000000           jmp 0x52af0c
// 0052ae7d  e84efcffff           call 0x52aad0
// 0052ae82  e839fdffff           call 0x52abc0
// 0052ae87  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 0052ae8e  7526                 jne 0x52aeb6
// 0052ae90  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 0052ae96  8b08                 mov ecx, dword ptr [eax]
// 0052ae98  56                   push esi
// 0052ae99  ffd1                 call ecx
// 0052ae9b  8b9654010000         mov edx, dword ptr [esi + 0x154]
// 0052aea1  8b02                 mov eax, dword ptr [edx]
// 0052aea3  56                   push esi
// 0052aea4  ffd0                 call eax
// 0052aea6  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 0052aeac  8b11                 mov edx, dword ptr [ecx]
// 0052aeae  6a00                 push 0
// 0052aeb0  56                   push esi
// 0052aeb1  ffd2                 call edx
// 0052aeb3  83c410               add esp, 0x10
// 0052aeb6  8b8658010000         mov eax, dword ptr [esi + 0x158]
// 0052aebc  8b08                 mov ecx, dword ptr [eax]
// 0052aebe  56                   push esi
// 0052aebf  ffd1                 call ecx
// 0052aec1  0fb686b2000000       movzx eax, byte ptr [esi + 0xb2]
// 0052aec8  8b965c010000         mov edx, dword ptr [esi + 0x15c]
// 0052aece  8b0a                 mov ecx, dword ptr [edx]
// 0052aed0  50                   push eax
// 0052aed1  56                   push esi
// 0052aed2  ffd1                 call ecx
// 0052aed4  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 0052aeda  8b0a                 mov ecx, dword ptr [edx]
// 0052aedc  33c0                 xor eax, eax
// 0052aede  837f1801             cmp dword ptr [edi + 0x18], 1
// 0052aee2  0f9ec0               setle al
// 0052aee5  83e801               sub eax, 1
// 0052aee8  83e003               and eax, 3
// 0052aeeb  50                   push eax
// 0052aeec  56                   push esi
// 0052aeed  ffd1                 call ecx
// 0052aeef  8b9640010000         mov edx, dword ptr [esi + 0x140]
// 0052aef5  8b02                 mov eax, dword ptr [edx]
// 0052aef7  6a00                 push 0
// 0052aef9  56                   push esi
// 0052aefa  ffd0                 call eax
// 0052aefc  83c41c               add esp, 0x1c
// 0052aeff  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 0052af06  0f94c1               sete cl
// 0052af09  884f0c               mov byte ptr [edi + 0xc], cl
// 0052af0c  8b5718               mov edx, dword ptr [edi + 0x18]
// 0052af0f  8b4714               mov eax, dword ptr [edi + 0x14]
// 0052af12  83ea01               sub edx, 1
// 0052af15  3bc2                 cmp eax, edx
// 0052af17  0f94c1               sete cl
// 0052af1a  884f0d               mov byte ptr [edi + 0xd], cl
// 0052af1d  837e0800             cmp dword ptr [esi + 8], 0
// 0052af21  740f                 je 0x52af32
// 0052af23  8b5608               mov edx, dword ptr [esi + 8]
// 0052af26  89420c               mov dword ptr [edx + 0xc], eax
// 0052af29  8b4608               mov eax, dword ptr [esi + 8]
// 0052af2c  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0052af2f  894810               mov dword ptr [eax + 0x10], ecx
// 0052af32  5f                   pop edi
// 0052af33  5e                   pop esi
// 0052af34  c3                   ret 
// library jpeg-6b/jcmaster.c (function _prepare_for_pass)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
