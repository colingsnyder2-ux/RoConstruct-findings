// roc 2007-08 004fcf80  unit: RBX::Render::AggregateChunk  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fcf80
//
// 004fcf80  51                   push ecx
// 004fcf81  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004fcf85  53                   push ebx
// 004fcf86  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004fcf8a  8bc1                 mov eax, ecx
// 004fcf8c  2bc3                 sub eax, ebx
// 004fcf8e  55                   push ebp
// 004fcf8f  56                   push esi
// 004fcf90  c1f802               sar eax, 2
// 004fcf93  57                   push edi
// 004fcf94  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004fcf98  99                   cdq 
// 004fcf99  2bc2                 sub eax, edx
// 004fcf9b  57                   push edi
// 004fcf9c  d1f8                 sar eax, 1
// 004fcf9e  83c1fc               add ecx, -4
// 004fcfa1  51                   push ecx
// 004fcfa2  8d3483               lea esi, [ebx + eax*4]
// 004fcfa5  56                   push esi
// 004fcfa6  53                   push ebx
// 004fcfa7  e8e4feffff           call 0x4fce90
// 004fcfac  83c410               add esp, 0x10
// 004fcfaf  3bde                 cmp ebx, esi
// 004fcfb1  8d6e04               lea ebp, [esi + 4]
// 004fcfb4  7327                 jae 0x4fcfdd
// 004fcfb6  8d7efc               lea edi, [esi - 4]
// 004fcfb9  56                   push esi
// 004fcfba  57                   push edi
// 004fcfbb  ff54242c             call dword ptr [esp + 0x2c]
// 004fcfbf  83c408               add esp, 8
// 004fcfc2  84c0                 test al, al
// 004fcfc4  7513                 jne 0x4fcfd9
// 004fcfc6  57                   push edi
// 004fcfc7  56                   push esi
// 004fcfc8  ff54242c             call dword ptr [esp + 0x2c]
// 004fcfcc  83c408               add esp, 8
// 004fcfcf  84c0                 test al, al
// 004fcfd1  7506                 jne 0x4fcfd9
// 004fcfd3  8bf7                 mov esi, edi
// 004fcfd5  3bde                 cmp ebx, esi
// 004fcfd7  72dd                 jb 0x4fcfb6
// 004fcfd9  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004fcfdd  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004fcfe1  3beb                 cmp ebp, ebx
// 004fcfe3  731d                 jae 0x4fd002
// 004fcfe5  56                   push esi
// 004fcfe6  55                   push ebp
// 004fcfe7  ffd7                 call edi
// 004fcfe9  83c408               add esp, 8
// 004fcfec  84c0                 test al, al
// 004fcfee  7512                 jne 0x4fd002
// 004fcff0  55                   push ebp
// 004fcff1  56                   push esi
// 004fcff2  ffd7                 call edi
// 004fcff4  83c408               add esp, 8
// 004fcff7  84c0                 test al, al
// 004fcff9  7507                 jne 0x4fd002
// 004fcffb  83c504               add ebp, 4
// 004fcffe  3beb                 cmp ebp, ebx
// 004fd000  72e3                 jb 0x4fcfe5
// 004fd002  8bde                 mov ebx, esi
// 004fd004  8bfd                 mov edi, ebp
// 004fd006  895c2410             mov dword ptr [esp + 0x10], ebx
// 004fd00a  8d9b00000000         lea ebx, [ebx]
// 004fd010  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 004fd014  7330                 jae 0x4fd046
// 004fd016  57                   push edi
// 004fd017  56                   push esi
// 004fd018  ff54242c             call dword ptr [esp + 0x2c]
// 004fd01c  83c408               add esp, 8
// 004fd01f  84c0                 test al, al
// 004fd021  751a                 jne 0x4fd03d
// 004fd023  56                   push esi
// 004fd024  57                   push edi
// 004fd025  ff54242c             call dword ptr [esp + 0x2c]
// 004fd029  83c408               add esp, 8
// 004fd02c  84c0                 test al, al
// 004fd02e  7516                 jne 0x4fd046
// 004fd030  8b17                 mov edx, dword ptr [edi]
// 004fd032  8bc5                 mov eax, ebp
// 004fd034  8b08                 mov ecx, dword ptr [eax]
// 004fd036  8910                 mov dword ptr [eax], edx
// 004fd038  83c504               add ebp, 4
// 004fd03b  890f                 mov dword ptr [edi], ecx
// 004fd03d  83c704               add edi, 4
// 004fd040  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 004fd044  72d0                 jb 0x4fd016
// 004fd046  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 004fd04a  7646                 jbe 0x4fd092
// 004fd04c  83c3fc               add ebx, -4
// 004fd04f  90                   nop 
// 004fd050  56                   push esi
// 004fd051  53                   push ebx
// 004fd052  ff54242c             call dword ptr [esp + 0x2c]
// 004fd056  83c408               add esp, 8
// 004fd059  84c0                 test al, al
// 004fd05b  7519                 jne 0x4fd076
// 004fd05d  53                   push ebx
// 004fd05e  56                   push esi
// 004fd05f  ff54242c             call dword ptr [esp + 0x2c]
// 004fd063  83c408               add esp, 8
// 004fd066  84c0                 test al, al
// 004fd068  7520                 jne 0x4fd08a
// 004fd06a  8b0b                 mov ecx, dword ptr [ebx]
// 004fd06c  8b46fc               mov eax, dword ptr [esi - 4]
// 004fd06f  83ee04               sub esi, 4
// 004fd072  890e                 mov dword ptr [esi], ecx
// 004fd074  8903                 mov dword ptr [ebx], eax
// 004fd076  8b442410             mov eax, dword ptr [esp + 0x10]
// 004fd07a  83e804               sub eax, 4
// 004fd07d  83eb04               sub ebx, 4
// 004fd080  3944241c             cmp dword ptr [esp + 0x1c], eax
// 004fd084  89442410             mov dword ptr [esp + 0x10], eax
// 004fd088  72c6                 jb 0x4fd050
// 004fd08a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004fd08e  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 004fd092  7532                 jne 0x4fd0c6
// 004fd094  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 004fd098  746a                 je 0x4fd104
// 004fd09a  3bef                 cmp ebp, edi
// 004fd09c  740a                 je 0x4fd0a8
// 004fd09e  8b5500               mov edx, dword ptr [ebp]
// 004fd0a1  8b06                 mov eax, dword ptr [esi]
// 004fd0a3  8916                 mov dword ptr [esi], edx
// 004fd0a5  894500               mov dword ptr [ebp], eax
// 004fd0a8  8bc7                 mov eax, edi
// 004fd0aa  8b18                 mov ebx, dword ptr [eax]
// 004fd0ac  8bce                 mov ecx, esi
// 004fd0ae  8b11                 mov edx, dword ptr [ecx]
// 004fd0b0  8919                 mov dword ptr [ecx], ebx
// 004fd0b2  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004fd0b6  83c504               add ebp, 4
// 004fd0b9  83c604               add esi, 4
// 004fd0bc  83c704               add edi, 4
// 004fd0bf  8910                 mov dword ptr [eax], edx
// 004fd0c1  e94affffff           jmp 0x4fd010
// 004fd0c6  83eb04               sub ebx, 4
// 004fd0c9  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 004fd0cd  895c2410             mov dword ptr [esp + 0x10], ebx
// 004fd0d1  7521                 jne 0x4fd0f4
// 004fd0d3  83ee04               sub esi, 4
// 004fd0d6  3bde                 cmp ebx, esi
// 004fd0d8  7408                 je 0x4fd0e2
// 004fd0da  8b0e                 mov ecx, dword ptr [esi]
// 004fd0dc  8b03                 mov eax, dword ptr [ebx]
// 004fd0de  890b                 mov dword ptr [ebx], ecx
// 004fd0e0  8906                 mov dword ptr [esi], eax
// 004fd0e2  8b55fc               mov edx, dword ptr [ebp - 4]
// 004fd0e5  8b06                 mov eax, dword ptr [esi]
// 004fd0e7  83ed04               sub ebp, 4
// 004fd0ea  8916                 mov dword ptr [esi], edx
// 004fd0ec  894500               mov dword ptr [ebp], eax
// 004fd0ef  e91cffffff           jmp 0x4fd010
// 004fd0f4  8b07                 mov eax, dword ptr [edi]
// 004fd0f6  8b0b                 mov ecx, dword ptr [ebx]
// 004fd0f8  890f                 mov dword ptr [edi], ecx
// 004fd0fa  8903                 mov dword ptr [ebx], eax
// 004fd0fc  83c704               add edi, 4
// 004fd0ff  e90cffffff           jmp 0x4fd010
// 004fd104  8b442418             mov eax, dword ptr [esp + 0x18]
// 004fd108  5f                   pop edi
// 004fd109  8930                 mov dword ptr [eax], esi
// 004fd10b  5e                   pop esi
// 004fd10c  896804               mov dword ptr [eax + 4], ebp
// 004fd10f  5d                   pop ebp
// 004fd110  5b                   pop ebx
// 004fd111  59                   pop ecx
// 004fd112  c3                   ret 
// library rbxgs-render/RenderSurface.cpp (function ??$_Unguarded_partition@PAPAVRenderSurface@Render@RBX@@P6A_NABQAV123@0@Z@std@@YA?AU?$pair@PAPAVRenderSurface@Render@RBX@@PAPAV123@@0@PAPAVRenderSurface@Render@RBX@@0P6A_NABQAV234@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderSurface.cpp
