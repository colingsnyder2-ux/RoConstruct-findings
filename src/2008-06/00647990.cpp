// roc 2008-06 00647990  unit: RBX::Block  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00647990
//
// 00647990  8b442404             mov eax, dword ptr [esp + 4]
// 00647994  56                   push esi
// 00647995  0fb730               movzx esi, word ptr [eax]
// 00647998  33d2                 xor edx, edx
// 0064799a  6685f6               test si, si
// 0064799d  7424                 je 0x6479c3
// 0064799f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006479a3  0f9fc2               setg dl
// 006479a6  4a                   dec edx
// 006479a7  83e203               and edx, 3
// 006479aa  8916                 mov dword ptr [esi], edx
// 006479ac  33d2                 xor edx, edx
// 006479ae  663910               cmp word ptr [eax], dx
// 006479b1  5e                   pop esi
// 006479b2  0f9ec2               setle dl
// 006479b5  8bc2                 mov eax, edx
// 006479b7  8d0440               lea eax, [eax + eax*2]
// 006479ba  c1e004               shl eax, 4
// 006479bd  034110               add eax, dword ptr [ecx + 0x10]
// 006479c0  c20800               ret 8
// 006479c3  0fb77002             movzx esi, word ptr [eax + 2]
// 006479c7  6685f6               test si, si
// 006479ca  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006479ce  7424                 je 0x6479f4
// 006479d0  0f9ec2               setle dl
// 006479d3  4a                   dec edx
// 006479d4  83e2fd               and edx, 0xfffffffd
// 006479d7  83c204               add edx, 4
// 006479da  8916                 mov dword ptr [esi], edx
// 006479dc  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006479df  33d2                 xor edx, edx
// 006479e1  66395002             cmp word ptr [eax + 2], dx
// 006479e5  5e                   pop esi
// 006479e6  0f9ec2               setle dl
// 006479e9  8bc2                 mov eax, edx
// 006479eb  8d0440               lea eax, [eax + eax*2]
// 006479ee  8d04c1               lea eax, [ecx + eax*8]
// 006479f1  c20800               ret 8
// 006479f4  66395004             cmp word ptr [eax + 4], dx
// 006479f8  0f9ec2               setle dl
// 006479fb  4a                   dec edx
// 006479fc  83e2fd               and edx, 0xfffffffd
// 006479ff  83c205               add edx, 5
// 00647a02  8916                 mov dword ptr [esi], edx
// 00647a04  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00647a07  33d2                 xor edx, edx
// 00647a09  66395004             cmp word ptr [eax + 4], dx
// 00647a0d  5e                   pop esi
// 00647a0e  0f9ec2               setle dl
// 00647a11  8bc2                 mov eax, edx
// 00647a13  8d0440               lea eax, [eax + eax*2]
// 00647a16  8d0481               lea eax, [ecx + eax*4]
// 00647a19  c20800               ret 8
// library openrbx-client/App\v8world\Block.cpp (function ?getPlanePoint@Block@RBX@@ABEPBVVector3@G3D@@ABVVector3int16@4@AAW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
