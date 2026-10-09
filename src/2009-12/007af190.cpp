// roc 2009-12 007af190  unit: RBX::Block  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007af190
//
// 007af190  8b442404             mov eax, dword ptr [esp + 4]
// 007af194  56                   push esi
// 007af195  0fb730               movzx esi, word ptr [eax]
// 007af198  33d2                 xor edx, edx
// 007af19a  6685f6               test si, si
// 007af19d  7424                 je 0x7af1c3
// 007af19f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007af1a3  0f9fc2               setg dl
// 007af1a6  4a                   dec edx
// 007af1a7  83e203               and edx, 3
// 007af1aa  8916                 mov dword ptr [esi], edx
// 007af1ac  33d2                 xor edx, edx
// 007af1ae  663910               cmp word ptr [eax], dx
// 007af1b1  5e                   pop esi
// 007af1b2  0f9ec2               setle dl
// 007af1b5  8bc2                 mov eax, edx
// 007af1b7  8d0440               lea eax, [eax + eax*2]
// 007af1ba  c1e004               shl eax, 4
// 007af1bd  034110               add eax, dword ptr [ecx + 0x10]
// 007af1c0  c20800               ret 8
// 007af1c3  0fb77002             movzx esi, word ptr [eax + 2]
// 007af1c7  6685f6               test si, si
// 007af1ca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007af1ce  7424                 je 0x7af1f4
// 007af1d0  0f9ec2               setle dl
// 007af1d3  4a                   dec edx
// 007af1d4  83e2fd               and edx, 0xfffffffd
// 007af1d7  83c204               add edx, 4
// 007af1da  8916                 mov dword ptr [esi], edx
// 007af1dc  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 007af1df  33d2                 xor edx, edx
// 007af1e1  66395002             cmp word ptr [eax + 2], dx
// 007af1e5  5e                   pop esi
// 007af1e6  0f9ec2               setle dl
// 007af1e9  8bc2                 mov eax, edx
// 007af1eb  8d0440               lea eax, [eax + eax*2]
// 007af1ee  8d04c1               lea eax, [ecx + eax*8]
// 007af1f1  c20800               ret 8
// 007af1f4  66395004             cmp word ptr [eax + 4], dx
// 007af1f8  0f9ec2               setle dl
// 007af1fb  4a                   dec edx
// 007af1fc  83e2fd               and edx, 0xfffffffd
// 007af1ff  83c205               add edx, 5
// 007af202  8916                 mov dword ptr [esi], edx
// 007af204  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 007af207  33d2                 xor edx, edx
// 007af209  66395004             cmp word ptr [eax + 4], dx
// 007af20d  5e                   pop esi
// 007af20e  0f9ec2               setle dl
// 007af211  8bc2                 mov eax, edx
// 007af213  8d0440               lea eax, [eax + eax*2]
// 007af216  8d0481               lea eax, [ecx + eax*4]
// 007af219  c20800               ret 8
// library openrbx-client/App\v8world\Block.cpp (function ?getPlanePoint@Block@RBX@@ABEPBVVector3@G3D@@ABVVector3int16@4@AAW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
