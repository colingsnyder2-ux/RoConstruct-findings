// roc 2009-06 006d27b0  unit: RBX::Block  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d27b0
//
// 006d27b0  8b442404             mov eax, dword ptr [esp + 4]
// 006d27b4  56                   push esi
// 006d27b5  0fb730               movzx esi, word ptr [eax]
// 006d27b8  33d2                 xor edx, edx
// 006d27ba  6685f6               test si, si
// 006d27bd  7424                 je 0x6d27e3
// 006d27bf  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d27c3  0f9fc2               setg dl
// 006d27c6  4a                   dec edx
// 006d27c7  83e203               and edx, 3
// 006d27ca  8916                 mov dword ptr [esi], edx
// 006d27cc  33d2                 xor edx, edx
// 006d27ce  663910               cmp word ptr [eax], dx
// 006d27d1  5e                   pop esi
// 006d27d2  0f9ec2               setle dl
// 006d27d5  8bc2                 mov eax, edx
// 006d27d7  8d0440               lea eax, [eax + eax*2]
// 006d27da  c1e004               shl eax, 4
// 006d27dd  034110               add eax, dword ptr [ecx + 0x10]
// 006d27e0  c20800               ret 8
// 006d27e3  0fb77002             movzx esi, word ptr [eax + 2]
// 006d27e7  6685f6               test si, si
// 006d27ea  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d27ee  7424                 je 0x6d2814
// 006d27f0  0f9ec2               setle dl
// 006d27f3  4a                   dec edx
// 006d27f4  83e2fd               and edx, 0xfffffffd
// 006d27f7  83c204               add edx, 4
// 006d27fa  8916                 mov dword ptr [esi], edx
// 006d27fc  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006d27ff  33d2                 xor edx, edx
// 006d2801  66395002             cmp word ptr [eax + 2], dx
// 006d2805  5e                   pop esi
// 006d2806  0f9ec2               setle dl
// 006d2809  8bc2                 mov eax, edx
// 006d280b  8d0440               lea eax, [eax + eax*2]
// 006d280e  8d04c1               lea eax, [ecx + eax*8]
// 006d2811  c20800               ret 8
// 006d2814  66395004             cmp word ptr [eax + 4], dx
// 006d2818  0f9ec2               setle dl
// 006d281b  4a                   dec edx
// 006d281c  83e2fd               and edx, 0xfffffffd
// 006d281f  83c205               add edx, 5
// 006d2822  8916                 mov dword ptr [esi], edx
// 006d2824  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006d2827  33d2                 xor edx, edx
// 006d2829  66395004             cmp word ptr [eax + 4], dx
// 006d282d  5e                   pop esi
// 006d282e  0f9ec2               setle dl
// 006d2831  8bc2                 mov eax, edx
// 006d2833  8d0440               lea eax, [eax + eax*2]
// 006d2836  8d0481               lea eax, [ecx + eax*4]
// 006d2839  c20800               ret 8
// library openrbx-client/App\v8world\Block.cpp (function ?getPlanePoint@Block@RBX@@ABEPBVVector3@G3D@@ABVVector3int16@4@AAW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
