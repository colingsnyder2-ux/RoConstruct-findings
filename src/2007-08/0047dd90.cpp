// roc 2007-08 0047dd90  unit: G3D::Win32Window  size: 316 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047dd90
//
// 0047dd90  55                   push ebp
// 0047dd91  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0047dd95  56                   push esi
// 0047dd96  6aeb                 push -0x15
// 0047dd98  55                   push ebp
// 0047dd99  ff1534ec7700         call dword ptr [0x77ec34]
// 0047dd9f  85c0                 test eax, eax
// 0047dda1  8b742410             mov esi, dword ptr [esp + 0x10]
// 0047dda5  743f                 je 0x47dde6
// 0047dda7  83fe10               cmp esi, 0x10
// 0047ddaa  0f87e3000000         ja 0x47de93
// 0047ddb0  0f84d1000000         je 0x47de87
// 0047ddb6  8d4efb               lea ecx, [esi - 5]
// 0047ddb9  83f903               cmp ecx, 3
// 0047ddbc  7728                 ja 0x47dde6
// 0047ddbe  ff248dbcde4700       jmp dword ptr [ecx*4 + 0x47debc]
// 0047ddc5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047ddc9  6685c9               test cx, cx
// 0047ddcc  742f                 je 0x47ddfd
// 0047ddce  c1e910               shr ecx, 0x10
// 0047ddd1  752a                 jne 0x47ddfd
// 0047ddd3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047ddd7  3b88e8010000         cmp ecx, dword ptr [eax + 0x1e8]
// 0047dddd  741e                 je 0x47ddfd
// 0047dddf  c680ae00000001       mov byte ptr [eax + 0xae], 1
// 0047dde6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0047ddea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047ddee  50                   push eax
// 0047ddef  51                   push ecx
// 0047ddf0  56                   push esi
// 0047ddf1  55                   push ebp
// 0047ddf2  ff152cec7700         call dword ptr [0x77ec2c]
// 0047ddf8  5e                   pop esi
// 0047ddf9  5d                   pop ebp
// 0047ddfa  c21000               ret 0x10
// 0047ddfd  8b542418             mov edx, dword ptr [esp + 0x18]
// 0047de01  3b90e8010000         cmp edx, dword ptr [eax + 0x1e8]
// 0047de07  74dd                 je 0x47dde6
// 0047de09  c680ae00000000       mov byte ptr [eax + 0xae], 0
// 0047de10  ebd4                 jmp 0x47dde6
// 0047de12  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0047de16  83f902               cmp ecx, 2
// 0047de19  7404                 je 0x47de1f
// 0047de1b  85c9                 test ecx, ecx
// 0047de1d  75c7                 jne 0x47dde6
// 0047de1f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0047de23  8bd1                 mov edx, ecx
// 0047de25  0fb7c9               movzx ecx, cx
// 0047de28  c1ea10               shr edx, 0x10
// 0047de2b  52                   push edx
// 0047de2c  51                   push ecx
// 0047de2d  8bc8                 mov ecx, eax
// 0047de2f  e89cf9ffff           call 0x47d7d0
// 0047de34  ebb0                 jmp 0x47dde6
// 0047de36  c680e401000001       mov byte ptr [eax + 0x1e4], 1
// 0047de3d  eba7                 jmp 0x47dde6
// 0047de3f  53                   push ebx
// 0047de40  57                   push edi
// 0047de41  8b3dd0ec7700         mov edi, dword ptr [0x77ecd0]
// 0047de47  33f6                 xor esi, esi
// 0047de49  8d98b3000000         lea ebx, [eax + 0xb3]
// 0047de4f  90                   nop 
// 0047de50  803c3300             cmp byte ptr [ebx + esi], 0
// 0047de54  740b                 je 0x47de61
// 0047de56  6a00                 push 0
// 0047de58  56                   push esi
// 0047de59  6801010000           push 0x101
// 0047de5e  55                   push ebp
// 0047de5f  ffd7                 call edi
// 0047de61  83c601               add esi, 1
// 0047de64  81feff000000         cmp esi, 0xff
// 0047de6a  72e4                 jb 0x47de50
// 0047de6c  68ff000000           push 0xff
// 0047de71  6a00                 push 0
// 0047de73  53                   push ebx
// 0047de74  e8132d1b00           call 0x630b8c
// 0047de79  8b742424             mov esi, dword ptr [esp + 0x24]
// 0047de7d  83c40c               add esp, 0xc
// 0047de80  5f                   pop edi
// 0047de81  5b                   pop ebx
// 0047de82  e95fffffff           jmp 0x47dde6
// 0047de87  c680af00000001       mov byte ptr [eax + 0xaf], 1
// 0047de8e  e953ffffff           jmp 0x47dde6
// 0047de93  81fe12010000         cmp esi, 0x112
// 0047de99  0f8547ffffff         jne 0x47dde6
// 0047de9f  8b542414             mov edx, dword ptr [esp + 0x14]
// 0047dea3  81e2f0ff0000         and edx, 0xfff0
// 0047dea9  81fa00f10000         cmp edx, 0xf100
// 0047deaf  0f8531ffffff         jne 0x47dde6
// 0047deb5  5e                   pop esi
// 0047deb6  33c0                 xor eax, eax
// 0047deb8  5d                   pop ebp
// 0047deb9  c21000               ret 0x10
// 0047debc  12de                 adc bl, dh
// 0047debe  47                   inc edi
// 0047debf  00c5                 add ch, al
// 0047dec1  dd4700               fld qword ptr [edi]
// 0047dec4  36de4700             fiadd word ptr ss:[edi]
// 0047dec8  3f                   aas 
// 0047dec9  de4700               fiadd word ptr [edi]
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?window_proc@_internal@G3D@@YGJPAUHWND__@@IIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
