// roc 2007-08 00612d70  unit: seg_00610000  size: 316 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00612d70
//
// 00612d70  53                   push ebx
// 00612d71  55                   push ebp
// 00612d72  56                   push esi
// 00612d73  8b742414             mov esi, dword ptr [esp + 0x14]
// 00612d77  57                   push edi
// 00612d78  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00612d7c  8bc7                 mov eax, edi
// 00612d7e  c1e805               shr eax, 5
// 00612d81  83c001               add eax, 1
// 00612d84  3bf8                 cmp edi, eax
// 00612d86  8bdf                 mov ebx, edi
// 00612d88  897c241c             mov dword ptr [esp + 0x1c], edi
// 00612d8c  8bcf                 mov ecx, edi
// 00612d8e  721f                 jb 0x612daf
// 00612d90  0fb6540eff           movzx edx, byte ptr [esi + ecx - 1]
// 00612d95  8beb                 mov ebp, ebx
// 00612d97  c1e505               shl ebp, 5
// 00612d9a  03d5                 add edx, ebp
// 00612d9c  8beb                 mov ebp, ebx
// 00612d9e  c1ed02               shr ebp, 2
// 00612da1  03d5                 add edx, ebp
// 00612da3  2bc8                 sub ecx, eax
// 00612da5  33da                 xor ebx, edx
// 00612da7  3bc8                 cmp ecx, eax
// 00612da9  73e5                 jae 0x612d90
// 00612dab  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00612daf  8b442414             mov eax, dword ptr [esp + 0x14]
// 00612db3  8b4010               mov eax, dword ptr [eax + 0x10]
// 00612db6  8b4808               mov ecx, dword ptr [eax + 8]
// 00612db9  8b10                 mov edx, dword ptr [eax]
// 00612dbb  83e901               sub ecx, 1
// 00612dbe  23cb                 and ecx, ebx
// 00612dc0  8b048a               mov eax, dword ptr [edx + ecx*4]
// 00612dc3  85c0                 test eax, eax
// 00612dc5  0f84a9000000         je 0x612e74
// 00612dcb  eb03                 jmp 0x612dd0
// 00612dcd  8d4900               lea ecx, [ecx]
// 00612dd0  39780c               cmp dword ptr [eax + 0xc], edi
// 00612dd3  0f8591000000         jne 0x612e6a
// 00612dd9  83ff04               cmp edi, 4
// 00612ddc  8bcf                 mov ecx, edi
// 00612dde  8d5010               lea edx, [eax + 0x10]
// 00612de1  7214                 jb 0x612df7
// 00612de3  8b2e                 mov ebp, dword ptr [esi]
// 00612de5  3b2a                 cmp ebp, dword ptr [edx]
// 00612de7  7512                 jne 0x612dfb
// 00612de9  83e904               sub ecx, 4
// 00612dec  83c204               add edx, 4
// 00612def  83c604               add esi, 4
// 00612df2  83f904               cmp ecx, 4
// 00612df5  73ec                 jae 0x612de3
// 00612df7  85c9                 test ecx, ecx
// 00612df9  7465                 je 0x612e60
// 00612dfb  0fb62e               movzx ebp, byte ptr [esi]
// 00612dfe  0fb61a               movzx ebx, byte ptr [edx]
// 00612e01  2beb                 sub ebp, ebx
// 00612e03  7545                 jne 0x612e4a
// 00612e05  83e901               sub ecx, 1
// 00612e08  83c201               add edx, 1
// 00612e0b  83c601               add esi, 1
// 00612e0e  85c9                 test ecx, ecx
// 00612e10  744a                 je 0x612e5c
// 00612e12  0fb62e               movzx ebp, byte ptr [esi]
// 00612e15  0fb61a               movzx ebx, byte ptr [edx]
// 00612e18  2beb                 sub ebp, ebx
// 00612e1a  752e                 jne 0x612e4a
// 00612e1c  83e901               sub ecx, 1
// 00612e1f  83c201               add edx, 1
// 00612e22  83c601               add esi, 1
// 00612e25  85c9                 test ecx, ecx
// 00612e27  7433                 je 0x612e5c
// 00612e29  0fb62e               movzx ebp, byte ptr [esi]
// 00612e2c  0fb61a               movzx ebx, byte ptr [edx]
// 00612e2f  2beb                 sub ebp, ebx
// 00612e31  7517                 jne 0x612e4a
// 00612e33  83e901               sub ecx, 1
// 00612e36  83c201               add edx, 1
// 00612e39  83c601               add esi, 1
// 00612e3c  85c9                 test ecx, ecx
// 00612e3e  741c                 je 0x612e5c
// 00612e40  0fb62e               movzx ebp, byte ptr [esi]
// 00612e43  0fb60a               movzx ecx, byte ptr [edx]
// 00612e46  2be9                 sub ebp, ecx
// 00612e48  7412                 je 0x612e5c
// 00612e4a  85ed                 test ebp, ebp
// 00612e4c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00612e50  b901000000           mov ecx, 1
// 00612e55  7f0b                 jg 0x612e62
// 00612e57  83c9ff               or ecx, 0xffffffff
// 00612e5a  eb06                 jmp 0x612e62
// 00612e5c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00612e60  33c9                 xor ecx, ecx
// 00612e62  85c9                 test ecx, ecx
// 00612e64  7421                 je 0x612e87
// 00612e66  8b742418             mov esi, dword ptr [esp + 0x18]
// 00612e6a  8b00                 mov eax, dword ptr [eax]
// 00612e6c  85c0                 test eax, eax
// 00612e6e  0f855cffffff         jne 0x612dd0
// 00612e74  53                   push ebx
// 00612e75  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00612e79  56                   push esi
// 00612e7a  e851feffff           call 0x612cd0
// 00612e7f  83c408               add esp, 8
// 00612e82  5f                   pop edi
// 00612e83  5e                   pop esi
// 00612e84  5d                   pop ebp
// 00612e85  5b                   pop ebx
// 00612e86  c3                   ret 
// 00612e87  8b542414             mov edx, dword ptr [esp + 0x14]
// 00612e8b  8b5210               mov edx, dword ptr [edx + 0x10]
// 00612e8e  8a4805               mov cl, byte ptr [eax + 5]
// 00612e91  0fb65214             movzx edx, byte ptr [edx + 0x14]
// 00612e95  0fb6d9               movzx ebx, cl
// 00612e98  f7d2                 not edx
// 00612e9a  83e303               and ebx, 3
// 00612e9d  84d3                 test bl, dl
// 00612e9f  74e1                 je 0x612e82
// 00612ea1  5f                   pop edi
// 00612ea2  5e                   pop esi
// 00612ea3  80f103               xor cl, 3
// 00612ea6  5d                   pop ebp
// 00612ea7  884805               mov byte ptr [eax + 5], cl
// 00612eaa  5b                   pop ebx
// 00612eab  c3                   ret 
// library lua-5.1.4/lstring.c (function _luaS_newlstr)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstring.c
