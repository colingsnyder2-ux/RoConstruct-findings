// roc 2007-03 00473d30  unit: seg_00470000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473d30
//
// 00473d30  56                   push esi
// 00473d31  57                   push edi
// 00473d32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00473d36  8bf1                 mov esi, ecx
// 00473d38  83467801             add dword ptr [esi + 0x78], 1
// 00473d3c  83ff08               cmp edi, 8
// 00473d3f  0f8485000000         je 0x473dca
// 00473d45  39be1c040000         cmp dword ptr [esi + 0x41c], edi
// 00473d4b  747d                 je 0x473dca
// 00473d4d  68900b0000           push 0xb90
// 00473d52  ff156ceb7700         call dword ptr [0x77eb6c]
// 00473d58  83ff06               cmp edi, 6
// 00473d5b  7558                 jne 0x473db5
// 00473d5d  b802000000           mov eax, 2
// 00473d62  398628040000         cmp dword ptr [esi + 0x428], eax
// 00473d68  755a                 jne 0x473dc4
// 00473d6a  39862c040000         cmp dword ptr [esi + 0x42c], eax
// 00473d70  7552                 jne 0x473dc4
// 00473d72  398630040000         cmp dword ptr [esi + 0x430], eax
// 00473d78  754a                 jne 0x473dc4
// 00473d7a  803d2f768b0000       cmp byte ptr [0x8b762f], 0
// 00473d81  7418                 je 0x473d9b
// 00473d83  398634040000         cmp dword ptr [esi + 0x434], eax
// 00473d89  7539                 jne 0x473dc4
// 00473d8b  398638040000         cmp dword ptr [esi + 0x438], eax
// 00473d91  7531                 jne 0x473dc4
// 00473d93  39863c040000         cmp dword ptr [esi + 0x43c], eax
// 00473d99  7529                 jne 0x473dc4
// 00473d9b  83467001             add dword ptr [esi + 0x70], 1
// 00473d9f  68900b0000           push 0xb90
// 00473da4  ff1574eb7700         call dword ptr [0x77eb74]
// 00473daa  89be1c040000         mov dword ptr [esi + 0x41c], edi
// 00473db0  5f                   pop edi
// 00473db1  5e                   pop esi
// 00473db2  c20400               ret 4
// 00473db5  8b8620040000         mov eax, dword ptr [esi + 0x420]
// 00473dbb  50                   push eax
// 00473dbc  57                   push edi
// 00473dbd  8bce                 mov ecx, esi
// 00473dbf  e8acfeffff           call 0x473c70
// 00473dc4  89be1c040000         mov dword ptr [esi + 0x41c], edi
// 00473dca  5f                   pop edi
// 00473dcb  5e                   pop esi
// 00473dcc  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilTest@RenderDevice@G3D@@QAEXW4StencilTest@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
