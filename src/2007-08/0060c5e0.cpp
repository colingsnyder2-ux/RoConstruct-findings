// roc 2007-08 0060c5e0  unit: RBX::Block  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060c5e0
//
// 0060c5e0  8b442404             mov eax, dword ptr [esp + 4]
// 0060c5e4  56                   push esi
// 0060c5e5  0fb730               movzx esi, word ptr [eax]
// 0060c5e8  33d2                 xor edx, edx
// 0060c5ea  6685f6               test si, si
// 0060c5ed  7426                 je 0x60c615
// 0060c5ef  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0060c5f3  0f9fc2               setg dl
// 0060c5f6  83ea01               sub edx, 1
// 0060c5f9  83e203               and edx, 3
// 0060c5fc  8916                 mov dword ptr [esi], edx
// 0060c5fe  33d2                 xor edx, edx
// 0060c600  663910               cmp word ptr [eax], dx
// 0060c603  5e                   pop esi
// 0060c604  0f9ec2               setle dl
// 0060c607  8bc2                 mov eax, edx
// 0060c609  8d0440               lea eax, [eax + eax*2]
// 0060c60c  c1e004               shl eax, 4
// 0060c60f  034110               add eax, dword ptr [ecx + 0x10]
// 0060c612  c20800               ret 8
// 0060c615  0fb77002             movzx esi, word ptr [eax + 2]
// 0060c619  6685f6               test si, si
// 0060c61c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0060c620  7426                 je 0x60c648
// 0060c622  0f9ec2               setle dl
// 0060c625  83ea01               sub edx, 1
// 0060c628  83e2fd               and edx, 0xfffffffd
// 0060c62b  83c204               add edx, 4
// 0060c62e  8916                 mov dword ptr [esi], edx
// 0060c630  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0060c633  33d2                 xor edx, edx
// 0060c635  66395002             cmp word ptr [eax + 2], dx
// 0060c639  5e                   pop esi
// 0060c63a  0f9ec2               setle dl
// 0060c63d  8bc2                 mov eax, edx
// 0060c63f  8d0440               lea eax, [eax + eax*2]
// 0060c642  8d04c1               lea eax, [ecx + eax*8]
// 0060c645  c20800               ret 8
// 0060c648  66395004             cmp word ptr [eax + 4], dx
// 0060c64c  0f9ec2               setle dl
// 0060c64f  83ea01               sub edx, 1
// 0060c652  83e2fd               and edx, 0xfffffffd
// 0060c655  83c205               add edx, 5
// 0060c658  8916                 mov dword ptr [esi], edx
// 0060c65a  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0060c65d  33d2                 xor edx, edx
// 0060c65f  66395004             cmp word ptr [eax + 4], dx
// 0060c663  5e                   pop esi
// 0060c664  0f9ec2               setle dl
// 0060c667  8bc2                 mov eax, edx
// 0060c669  8d0440               lea eax, [eax + eax*2]
// 0060c66c  8d0481               lea eax, [ecx + eax*4]
// 0060c66f  c20800               ret 8
// library openrbx-client/App\v8world\Block.cpp (function ?getPlanePoint@Block@RBX@@ABEPBVVector3@G3D@@ABVVector3int16@4@AAW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
