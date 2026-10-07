// roc 2007-08 00484ac0  unit: G3D::Shader  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00484ac0
//
// 00484ac0  6aff                 push -1
// 00484ac2  6809647400           push 0x746409
// 00484ac7  64a100000000         mov eax, dword ptr fs:[0]
// 00484acd  50                   push eax
// 00484ace  51                   push ecx
// 00484acf  56                   push esi
// 00484ad0  a188518b00           mov eax, dword ptr [0x8b5188]
// 00484ad5  33c4                 xor eax, esp
// 00484ad7  50                   push eax
// 00484ad8  8d44240c             lea eax, [esp + 0xc]
// 00484adc  64a300000000         mov dword ptr fs:[0], eax
// 00484ae2  8bf1                 mov esi, ecx
// 00484ae4  89742408             mov dword ptr [esp + 8], esi
// 00484ae8  c7066caa7900         mov dword ptr [esi], 0x79aa6c
// 00484aee  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00484af4  50                   push eax
// 00484af5  c744241808000000     mov dword ptr [esp + 0x18], 8
// 00484afd  ff1500da8b00         call dword ptr [0x8bda00]
// 00484b03  8d8ea0010000         lea ecx, [esi + 0x1a0]
// 00484b09  c7869c01000044797900 mov dword ptr [esi + 0x19c], 0x797944
// 00484b13  c644241407           mov byte ptr [esp + 0x14], 7
// 00484b18  c701cc657900         mov dword ptr [ecx], 0x7965cc
// 00484b1e  e81d98feff           call 0x46e340
// 00484b23  8d8e90010000         lea ecx, [esi + 0x190]
// 00484b29  c644241406           mov byte ptr [esp + 0x14], 6
// 00484b2e  e82ddfffff           call 0x482a60
// 00484b33  8d8e70010000         lea ecx, [esi + 0x170]
// 00484b39  c644241405           mov byte ptr [esp + 0x14], 5
// 00484b3e  ff15ace67700         call dword ptr [0x77e6ac]
// 00484b44  8d8e54010000         lea ecx, [esi + 0x154]
// 00484b4a  c644241404           mov byte ptr [esp + 0x14], 4
// 00484b4f  ff15ace67700         call dword ptr [0x77e6ac]
// 00484b55  8d8e38010000         lea ecx, [esi + 0x138]
// 00484b5b  c644241403           mov byte ptr [esp + 0x14], 3
// 00484b60  ff15ace67700         call dword ptr [0x77e6ac]
// 00484b66  8d8e1c010000         lea ecx, [esi + 0x11c]
// 00484b6c  c644241402           mov byte ptr [esp + 0x14], 2
// 00484b71  ff15ace67700         call dword ptr [0x77e6ac]
// 00484b77  8d8e90000000         lea ecx, [esi + 0x90]
// 00484b7d  c644241401           mov byte ptr [esp + 0x14], 1
// 00484b82  e889d7ffff           call 0x482310
// 00484b87  8d4e0c               lea ecx, [esi + 0xc]
// 00484b8a  c644241400           mov byte ptr [esp + 0x14], 0
// 00484b8f  e87cd7ffff           call 0x482310
// 00484b94  c70684797900         mov dword ptr [esi], 0x797984
// 00484b9a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00484b9e  64890d00000000       mov dword ptr fs:[0], ecx
// 00484ba5  59                   pop ecx
// 00484ba6  5e                   pop esi
// 00484ba7  83c410               add esp, 0x10
// 00484baa  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ??1VertexAndPixelShader@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
