// roc 2007-08 00713e60  unit: CXTCaptionTheme  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00713e60
//
// 00713e60  83ec10               sub esp, 0x10
// 00713e63  57                   push edi
// 00713e64  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00713e68  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 00713e6e  85c0                 test eax, eax
// 00713e70  8944241c             mov dword ptr [esp + 0x1c], eax
// 00713e74  0f8480000000         je 0x713efa
// 00713e7a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00713e7e  8b5104               mov edx, dword ptr [ecx + 4]
// 00713e81  8b01                 mov eax, dword ptr [ecx]
// 00713e83  89542408             mov dword ptr [esp + 8], edx
// 00713e87  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00713e8a  89442404             mov dword ptr [esp + 4], eax
// 00713e8e  8b4108               mov eax, dword ptr [ecx + 8]
// 00713e91  53                   push ebx
// 00713e92  89542414             mov dword ptr [esp + 0x14], edx
// 00713e96  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00713e99  55                   push ebp
// 00713e9a  8baf90000000         mov ebp, dword ptr [edi + 0x90]
// 00713ea0  2bc2                 sub eax, edx
// 00713ea2  2bc5                 sub eax, ebp
// 00713ea4  83e802               sub eax, 2
// 00713ea7  56                   push esi
// 00713ea8  8bf0                 mov esi, eax
// 00713eaa  3bf2                 cmp esi, edx
// 00713eac  7d02                 jge 0x713eb0
// 00713eae  8bf2                 mov esi, edx
// 00713eb0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00713eb3  2b4104               sub eax, dword ptr [ecx + 4]
// 00713eb6  8b9f94000000         mov ebx, dword ptr [edi + 0x94]
// 00713ebc  8b4908               mov ecx, dword ptr [ecx + 8]
// 00713ebf  2b4f6c               sub ecx, dword ptr [edi + 0x6c]
// 00713ec2  2bc3                 sub eax, ebx
// 00713ec4  99                   cdq 
// 00713ec5  2bc2                 sub eax, edx
// 00713ec7  d1f8                 sar eax, 1
// 00713ec9  8d142e               lea edx, [esi + ebp]
// 00713ecc  03d8                 add ebx, eax
// 00713ece  3bd1                 cmp edx, ecx
// 00713ed0  7d25                 jge 0x713ef7
// 00713ed2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00713ed6  85c9                 test ecx, ecx
// 00713ed8  7403                 je 0x713edd
// 00713eda  8b4904               mov ecx, dword ptr [ecx + 4]
// 00713edd  6a03                 push 3
// 00713edf  6a00                 push 0
// 00713ee1  6a00                 push 0
// 00713ee3  2bd8                 sub ebx, eax
// 00713ee5  53                   push ebx
// 00713ee6  2bd6                 sub edx, esi
// 00713ee8  52                   push edx
// 00713ee9  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00713eed  52                   push edx
// 00713eee  50                   push eax
// 00713eef  56                   push esi
// 00713ef0  51                   push ecx
// 00713ef1  ff1588ee7700         call dword ptr [0x77ee88]
// 00713ef7  5e                   pop esi
// 00713ef8  5d                   pop ebp
// 00713ef9  5b                   pop ebx
// 00713efa  5f                   pop edi
// 00713efb  83c410               add esp, 0x10
// 00713efe  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionTheme.cpp (function ?DrawCaptionIcon@CXTCaptionTheme@@UAEXPAVCDC@@PAVCXTCaption@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionTheme.cpp
