// roc 2007-03 005f5410  unit: seg_005f0000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f5410
//
// 005f5410  8b442404             mov eax, dword ptr [esp + 4]
// 005f5414  56                   push esi
// 005f5415  0fb730               movzx esi, word ptr [eax]
// 005f5418  33d2                 xor edx, edx
// 005f541a  6685f6               test si, si
// 005f541d  7426                 je 0x5f5445
// 005f541f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f5423  0f9fc2               setg dl
// 005f5426  83ea01               sub edx, 1
// 005f5429  83e203               and edx, 3
// 005f542c  8916                 mov dword ptr [esi], edx
// 005f542e  33d2                 xor edx, edx
// 005f5430  663910               cmp word ptr [eax], dx
// 005f5433  5e                   pop esi
// 005f5434  0f9ec2               setle dl
// 005f5437  8bc2                 mov eax, edx
// 005f5439  8d0440               lea eax, [eax + eax*2]
// 005f543c  c1e004               shl eax, 4
// 005f543f  034110               add eax, dword ptr [ecx + 0x10]
// 005f5442  c20800               ret 8
// 005f5445  0fb77002             movzx esi, word ptr [eax + 2]
// 005f5449  6685f6               test si, si
// 005f544c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f5450  7426                 je 0x5f5478
// 005f5452  0f9ec2               setle dl
// 005f5455  83ea01               sub edx, 1
// 005f5458  83e2fd               and edx, 0xfffffffd
// 005f545b  83c204               add edx, 4
// 005f545e  8916                 mov dword ptr [esi], edx
// 005f5460  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 005f5463  33d2                 xor edx, edx
// 005f5465  66395002             cmp word ptr [eax + 2], dx
// 005f5469  5e                   pop esi
// 005f546a  0f9ec2               setle dl
// 005f546d  8bc2                 mov eax, edx
// 005f546f  8d0440               lea eax, [eax + eax*2]
// 005f5472  8d04c1               lea eax, [ecx + eax*8]
// 005f5475  c20800               ret 8
// 005f5478  66395004             cmp word ptr [eax + 4], dx
// 005f547c  0f9ec2               setle dl
// 005f547f  83ea01               sub edx, 1
// 005f5482  83e2fd               and edx, 0xfffffffd
// 005f5485  83c205               add edx, 5
// 005f5488  8916                 mov dword ptr [esi], edx
// 005f548a  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 005f548d  33d2                 xor edx, edx
// 005f548f  66395004             cmp word ptr [eax + 4], dx
// 005f5493  5e                   pop esi
// 005f5494  0f9ec2               setle dl
// 005f5497  8bc2                 mov eax, edx
// 005f5499  8d0440               lea eax, [eax + eax*2]
// 005f549c  8d0481               lea eax, [ecx + eax*4]
// 005f549f  c20800               ret 8
// library openrbx-client/App\v8world\Block.cpp (function ?getPlanePoint@Block@RBX@@ABEPBVVector3@G3D@@ABVVector3int16@4@AAW4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
