// roc 2008-06 00476d90  unit: G3D::VARArea  size: 292 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476d90
//
// 00476d90  56                   push esi
// 00476d91  8bf1                 mov esi, ecx
// 00476d93  57                   push edi
// 00476d94  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00476d98  b801000000           mov eax, 1
// 00476d9d  014678               add dword ptr [esi + 0x78], eax
// 00476da0  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00476da3  83ff08               cmp edi, 8
// 00476da6  0f84e0000000         je 0x476e8c
// 00476dac  39beec030000         cmp dword ptr [esi + 0x3ec], edi
// 00476db2  0f84d4000000         je 0x476e8c
// 00476db8  014670               add dword ptr [esi + 0x70], eax
// 00476dbb  8b4670               mov eax, dword ptr [esi + 0x70]
// 00476dbe  68710b0000           push 0xb71
// 00476dc3  83ff06               cmp edi, 6
// 00476dc6  7511                 jne 0x476dd9
// 00476dc8  ff1558298000         call dword ptr [0x802958]
// 00476dce  89beec030000         mov dword ptr [esi + 0x3ec], edi
// 00476dd4  5f                   pop edi
// 00476dd5  5e                   pop esi
// 00476dd6  c20400               ret 4
// 00476dd9  41                   inc ecx
// 00476dda  40                   inc eax
// 00476ddb  894e78               mov dword ptr [esi + 0x78], ecx
// 00476dde  894670               mov dword ptr [esi + 0x70], eax
// 00476de1  ff1550298000         call dword ptr [0x802950]
// 00476de7  83ff07               cmp edi, 7
// 00476dea  0f8796000000         ja 0x476e86
// 00476df0  ff24bd946e4700       jmp dword ptr [edi*4 + 0x476e94]
// 00476df7  6801020000           push 0x201
// 00476dfc  ff15ac2a8000         call dword ptr [0x802aac]
// 00476e02  89beec030000         mov dword ptr [esi + 0x3ec], edi
// 00476e08  5f                   pop edi
// 00476e09  5e                   pop esi
// 00476e0a  c20400               ret 4
// 00476e0d  6803020000           push 0x203
// 00476e12  ff15ac2a8000         call dword ptr [0x802aac]
// 00476e18  89beec030000         mov dword ptr [esi + 0x3ec], edi
// 00476e1e  5f                   pop edi
// 00476e1f  5e                   pop esi
// 00476e20  c20400               ret 4
// 00476e23  6804020000           push 0x204
// 00476e28  ff15ac2a8000         call dword ptr [0x802aac]
// 00476e2e  89beec030000         mov dword ptr [esi + 0x3ec], edi
// 00476e34  5f                   pop edi
// 00476e35  5e                   pop esi
// 00476e36  c20400               ret 4
// 00476e39  6806020000           push 0x206
// 00476e3e  ff15ac2a8000         call dword ptr [0x802aac]
// 00476e44  89beec030000         mov dword ptr [esi + 0x3ec], edi
// 00476e4a  5f                   pop edi
// 00476e4b  5e                   pop esi
// 00476e4c  c20400               ret 4
// 00476e4f  6802020000           push 0x202
// 00476e54  ff15ac2a8000         call dword ptr [0x802aac]
// 00476e5a  89beec030000         mov dword ptr [esi + 0x3ec], edi
// 00476e60  5f                   pop edi
// 00476e61  5e                   pop esi
// 00476e62  c20400               ret 4
// 00476e65  6805020000           push 0x205
// 00476e6a  ff15ac2a8000         call dword ptr [0x802aac]
// 00476e70  89beec030000         mov dword ptr [esi + 0x3ec], edi
// 00476e76  5f                   pop edi
// 00476e77  5e                   pop esi
// 00476e78  c20400               ret 4
// 00476e7b  6800020000           push 0x200
// 00476e80  ff15ac2a8000         call dword ptr [0x802aac]
// 00476e86  89beec030000         mov dword ptr [esi + 0x3ec], edi
// 00476e8c  5f                   pop edi
// 00476e8d  5e                   pop esi
// 00476e8e  c20400               ret 4
// 00476e91  8d4900               lea ecx, [ecx]
// 00476e94  236e47               and ebp, dword ptr [esi + 0x47]
// 00476e97  00f7                 add bh, dh
// 00476e99  6d                   insd dword ptr es:[edi], dx
// 00476e9a  47                   inc edi
// 00476e9b  0039                 add byte ptr [ecx], bh
// 00476e9d  6e                   outsb dx, byte ptr [esi]
// 00476e9e  47                   inc edi
// 00476e9f  000d6e470065         add byte ptr [0x6500476e], cl
// 00476ea5  6e                   outsb dx, byte ptr [esi]
// 00476ea6  47                   inc edi
// 00476ea7  004f6e               add byte ptr [edi + 0x6e], cl
// 00476eaa  47                   inc edi
// 00476eab  00866e47007b         add byte ptr [esi + 0x7b00476e], al
// 00476eb1  6e                   outsb dx, byte ptr [esi]
// 00476eb2  47                   inc edi
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setDepthTest@RenderDevice@G3D@@QAEXW4DepthTest@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
