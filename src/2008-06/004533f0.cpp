// from server: 49% by coldek
// roc 2008-06 004533f0  unit: CRobloxDoc  size: 628 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004533f0
//
// 004533f0  55                   push ebp
// 004533f1  8bec                 mov ebp, esp
// 004533f3  6aff                 push -1
// 004533f5  68d51e7c00           push 0x7c1ed5
// 004533fa  64a100000000         mov eax, dword ptr fs:[0]
// 00453400  50                   push eax
// 00453401  64892500000000       mov dword ptr fs:[0], esp
// 00453408  81ec2c010000         sub esp, 0x12c
// 0045340e  53                   push ebx
// 0045340f  56                   push esi
// 00453410  57                   push edi
// 00453411  8965f0               mov dword ptr [ebp - 0x10], esp
// 00453414  8d85c8feffff         lea eax, [ebp - 0x138]
// 0045341a  50                   push eax
// 0045341b  6a00                 push 0
// 0045341d  6a00                 push 0
// 0045341f  6a20                 push 0x20
// 00453421  8bf9                 mov edi, ecx
// 00453423  6a00                 push 0
// 00453425  897ddc               mov dword ptr [ebp - 0x24], edi
// 00453428  ff15002b8000         call dword ptr [0x802b00]
// 0045342e  85c0                 test eax, eax
// 00453430  0f85a9000000         jne 0x4534df
// 00453436  8d4dec               lea ecx, [ebp - 0x14]
// 00453439  ff15043f8000         call dword ptr [0x803f04]
// 0045343f  6804010000           push 0x104
// 00453444  8d4dec               lea ecx, [ebp - 0x14]
// 00453447  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0045344e  ff1584338000         call dword ptr [0x803384]
// 00453454  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00453457  6a00                 push 0
// 00453459  51                   push ecx
// 0045345a  6a10                 push 0x10
// 0045345c  8d95c8feffff         lea edx, [ebp - 0x138]
// 00453462  52                   push edx
// 00453463  50                   push eax
// 00453464  ff15282b8000         call dword ptr [0x802b28]
// 0045346a  6aff                 push -1
// 0045346c  8d4dec               lea ecx, [ebp - 0x14]
// 0045346f  8bf0                 mov esi, eax
// 00453471  ff1580338000         call dword ptr [0x803380]
// 00453477  85f6                 test esi, esi
// 00453479  7454                 je 0x4534cf
// 0045347b  6a02                 push 2
// 0045347d  8d45e4               lea eax, [ebp - 0x1c]
// 00453480  50                   push eax
// 00453481  8d4dec               lea ecx, [ebp - 0x14]
// 00453484  ff1580368000         call dword ptr [0x803680]
// 0045348a  68a47e8100           push 0x817ea4
// 0045348f  8bc8                 mov ecx, eax
// 00453491  c645fc01             mov byte ptr [ebp - 4], 1
// 00453495  ff15f02f8000         call dword ptr [0x802ff0]
// 0045349b  85c0                 test eax, eax
// 0045349d  8d4de4               lea ecx, [ebp - 0x1c]
// 004534a0  0f94c3               sete bl
// 004534a3  c645fc00             mov byte ptr [ebp - 4], 0
// 004534a7  ff15143f8000         call dword ptr [0x803f14]
// 004534ad  84db                 test bl, bl
// 004534af  741e                 je 0x4534cf
// 004534b1  8d4dec               lea ecx, [ebp - 0x14]
// 004534b4  ff15143f8000         call dword ptr [0x803f14]
// 004534ba  33c0                 xor eax, eax
// 004534bc  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004534bf  64890d00000000       mov dword ptr fs:[0], ecx
// 004534c6  5f                   pop edi
// 004534c7  5e                   pop esi
// 004534c8  5b                   pop ebx
// 004534c9  8be5                 mov esp, ebp
// 004534cb  5d                   pop ebp
// 004534cc  c20400               ret 4
// 004534cf  8d4dec               lea ecx, [ebp - 0x14]
// 004534d2  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 004534d9  ff15143f8000         call dword ptr [0x803f14]
// 004534df  8b17                 mov edx, dword ptr [edi]
// 004534e1  8b4274               mov eax, dword ptr [edx + 0x74]
// 004534e4  8bcf                 mov ecx, edi
// 004534e6  ffd0                 call eax
// 004534e8  8bcf                 mov ecx, edi
// 004534ea  e871e6ffff           call 0x451b60
// 004534ef  8b17                 mov edx, dword ptr [edi]
// 004534f1  8b4264               mov eax, dword ptr [edx + 0x64]
// 004534f4  6a01                 push 1
// 004534f6  8bcf                 mov ecx, edi
// 004534f8  ffd0                 call eax
// 004534fa  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004534fd  6a01                 push 1
// 004534ff  6a40                 push 0x40
// 00453501  6a21                 push 0x21
// 00453503  51                   push ecx
// 00453504  8d8d40ffffff         lea ecx, [ebp - 0xc0]
// 0045350a  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00453511  ff1504248000         call dword ptr [0x802404]
// 00453517  8b8f94000000         mov ecx, dword ptr [edi + 0x94]
// 0045351d  8d9540ffffff         lea edx, [ebp - 0xc0]
// 00453523  52                   push edx
// 00453524  c645fc03             mov byte ptr [ebp - 4], 3
// 00453528  e843750100           call 0x46aa70
// 0045352d  8b07                 mov eax, dword ptr [edi]
// 0045352f  8b5064               mov edx, dword ptr [eax + 0x64]
// 00453532  6a00                 push 0
// 00453534  8bcf                 mov ecx, edi
// 00453536  ffd2                 call edx
// 00453538  8b8f94000000         mov ecx, dword ptr [edi + 0x94]
// 0045353e  8d45e8               lea eax, [ebp - 0x18]
// 00453541  50                   push eax
// 00453542  e8f9730100           call 0x46a940
// 00453547  8b10                 mov edx, dword ptr [eax]
// 00453549  83ec08               sub esp, 8
// 0045354c  8bcc                 mov ecx, esp
// 0045354e  8911                 mov dword ptr [ecx], edx
// 00453550  8b4004               mov eax, dword ptr [eax + 4]
// 00453553  c645fc04             mov byte ptr [ebp - 4], 4
// 00453557  8965e4               mov dword ptr [ebp - 0x1c], esp
// 0045355a  894104               mov dword ptr [ecx + 4], eax
// 0045355d  85c0                 test eax, eax
// 0045355f  740c                 je 0x45356d
// 00453561  83c004               add eax, 4
// 00453564  b901000000           mov ecx, 1
// 00453569  f00fc108             lock xadd dword ptr [eax], ecx
// 0045356d  8d4dcc               lea ecx, [ebp - 0x34]
// 00453570  e8cbe5fbff           call 0x411b40
// 00453575  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 00453578  b306                 mov bl, 6
// 0045357a  885dfc               mov byte ptr [ebp - 4], bl
// 0045357d  85f6                 test esi, esi
// 0045357f  742a                 je 0x4535ab
// 00453581  8d5604               lea edx, [esi + 4]
// 00453584  83c8ff               or eax, 0xffffffff
// 00453587  f00fc102             lock xadd dword ptr [edx], eax
// 0045358b  751e                 jne 0x4535ab
// 0045358d  8b16                 mov edx, dword ptr [esi]
// 0045358f  8b4204               mov eax, dword ptr [edx + 4]
// 00453592  8bce                 mov ecx, esi
// 00453594  ffd0                 call eax
// 00453596  8d4e08               lea ecx, [esi + 8]
// 00453599  83caff               or edx, 0xffffffff
// 0045359c  f00fc111             lock xadd dword ptr [ecx], edx
// 004535a0  7509                 jne 0x4535ab
// 004535a2  8b06                 mov eax, dword ptr [esi]
// 004535a4  8b5008               mov edx, dword ptr [eax + 8]
// 004535a7  8bce                 mov ecx, esi
// 004535a9  ffd2                 call edx
// 004535ab  8b8f94000000         mov ecx, dword ptr [edi + 0x94]
// 004535b1  8d45e0               lea eax, [ebp - 0x20]
// 004535b4  50                   push eax
// 004535b5  e886730100           call 0x46a940
// 004535ba  8b08                 mov ecx, dword ptr [eax]
// 004535bc  c645fc07             mov byte ptr [ebp - 4], 7
// 004535c0  e83bfaffff           call 0x453000
// 004535c5  8b75e4               mov esi, dword ptr [ebp - 0x1c]
// 004535c8  8bf8                 mov edi, eax
// 004535ca  885dfc               mov byte ptr [ebp - 4], bl
// 004535cd  85f6                 test esi, esi
// 004535cf  742a                 je 0x4535fb
// 004535d1  8d4e04               lea ecx, [esi + 4]
// 004535d4  83caff               or edx, 0xffffffff
// 004535d7  f00fc111             lock xadd dword ptr [ecx], edx
// 004535db  751e                 jne 0x4535fb
// 004535dd  8b06                 mov eax, dword ptr [esi]
// 004535df  8b5004               mov edx, dword ptr [eax + 4]
// 004535e2  8bce                 mov ecx, esi
// 004535e4  ffd2                 call edx
// 004535e6  8d4608               lea eax, [esi + 8]
// 004535e9  83c9ff               or ecx, 0xffffffff
// 004535ec  f00fc108             lock xadd dword ptr [eax], ecx
// 004535f0  7509                 jne 0x4535fb
// 004535f2  8b16                 mov edx, dword ptr [esi]
// 004535f4  8b4208               mov eax, dword ptr [edx + 8]
// 004535f7  8bce                 mov ecx, esi
// 004535f9  ffd0                 call eax
// 004535fb  6a01                 push 1
// 004535fd  8bcf                 mov ecx, edi
// 004535ff  e8ac921300           call 0x58c8b0
// 00453604  8d4dcc               lea ecx, [ebp - 0x34]
// 00453607  c645fc03             mov byte ptr [ebp - 4], 3
// 0045360b  e8b03d1200           call 0x5773c0
// 00453610  8d8d40ffffff         lea ecx, [ebp - 0xc0]
// 00453616  c645fc02             mov byte ptr [ebp - 4], 2
// 0045361a  ff1508248000         call dword ptr [0x802408]
// 00453620  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00453623  5f                   pop edi
// 00453624  5e                   pop esi
// 00453625  b801000000           mov eax, 1
// 0045362a  64890d00000000       mov dword ptr fs:[0], ecx
// 00453631  5b                   pop ebx
// 00453632  8be5                 mov esp, ebp
// 00453634  5d                   pop ebp
// 00453635  c20400               ret 4
// 00453638  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 0045363b  51                   push ecx
// 0045363c  e80f52fdff           call 0x428850
// 00453641  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 00453644  8b11                 mov edx, dword ptr [ecx]
// 00453646  8b4508               mov eax, dword ptr [ebp + 8]
// 00453649  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 0045364f  83c404               add esp, 4
// 00453652  6801f10000           push 0xf101
// 00453657  6a00                 push 0
// 00453659  6a00                 push 0
// 0045365b  50                   push eax
// 0045365c  ffd2                 call edx
// 0045365e  b8ba344500           mov eax, 0x4534ba
// 00453663  c3                   ret 

// from server: 81% by EspClaude
// roc 2008-06 004533f0  unit: CRobloxDoc  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004533f0
//
// 004533f0  55                   push ebp
// 004533f1  8bec                 mov ebp, esp
// 004533f3  6aff                 push -1
// 004533f5  68d51e7c00           push 0x7c1ed5
// 004533fa  64a100000000         mov eax, dword ptr fs:[0]
// 00453400  50                   push eax
// 00453401  64892500000000       mov dword ptr fs:[0], esp
// 00453408  81ec2c010000         sub esp, 0x12c
// 0045340e  53                   push ebx
// 0045340f  56                   push esi
// 00453410  57                   push edi
// 00453411  8965f0               mov dword ptr [ebp - 0x10], esp
// 00453414  8d85c8feffff         lea eax, [ebp - 0x138]
// 0045341a  50                   push eax
// 0045341b  6a00                 push 0
// 0045341d  6a00                 push 0
// 0045341f  6a20                 push 0x20
// 00453421  8bf9                 mov edi, ecx
// 00453423  6a00                 push 0
// 00453425  897ddc               mov dword ptr [ebp - 0x24], edi
// 00453428  ff15002b8000         call dword ptr [0x802b00]
// 0045342e  85c0                 test eax, eax
// 00453430  0f85a9000000         jne 0x4534df
// 00453436  8d4dec               lea ecx, [ebp - 0x14]
// 00453439  ff15043f8000         call dword ptr [0x803f04]
// 0045343f  6804010000           push 0x104
// 00453444  8d4dec               lea ecx, [ebp - 0x14]
// 00453447  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0045344e  ff1584338000         call dword ptr [0x803384]
// 00453454  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00453457  6a00                 push 0
// 00453459  51                   push ecx
// 0045345a  6a10                 push 0x10
// 0045345c  8d95c8feffff         lea edx, [ebp - 0x138]
// 00453462  52                   push edx
// 00453463  50                   push eax
// 00453464  ff15282b8000         call dword ptr [0x802b28]
// 0045346a  6aff                 push -1
// 0045346c  8d4dec               lea ecx, [ebp - 0x14]
// 0045346f  8bf0                 mov esi, eax
// 00453471  ff1580338000         call dword ptr [0x803380]
// 00453477  85f6                 test esi, esi
// 00453479  7454                 je 0x4534cf
// 0045347b  6a02                 push 2
// 0045347d  8d45e4               lea eax, [ebp - 0x1c]
// 00453480  50                   push eax
// 00453481  8d4dec               lea ecx, [ebp - 0x14]
// 00453484  ff1580368000         call dword ptr [0x803680]
// 0045348a  68a47e8100           push 0x817ea4
// 0045348f  8bc8                 mov ecx, eax
// 00453491  c645fc01             mov byte ptr [ebp - 4], 1
// 00453495  ff15f02f8000         call dword ptr [0x802ff0]
// 0045349b  85c0                 test eax, eax
// 0045349d  8d4de4               lea ecx, [ebp - 0x1c]
// 004534a0  0f94c3               sete bl
// 004534a3  c645fc00             mov byte ptr [ebp - 4], 0
// 004534a7  ff15143f8000         call dword ptr [0x803f14]
// 004534ad  84db                 test bl, bl
// 004534af  741e                 je 0x4534cf
// 004534b1  8d4dec               lea ecx, [ebp - 0x14]
// 004534b4  ff15143f8000         call dword ptr [0x803f14]

// from server: 62% by colin
// roc 2008-06 004533f0  unit: CRobloxDoc  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004533f0
// 004533f0  55                   push ebp
extern "C" __declspec(dllimport) long __stdcall SHGetFolderPathA(void *, int, void *, unsigned long, char *);
extern "C" __declspec(dllimport) int __stdcall PathRelativePathToA(char *, const char *, unsigned long, const char *, unsigned long);

struct __declspec(dllimport) String
{
    char *data;
    String();
    ~String() throw();
    char *GetBuffer(int);
    void ReleaseBuffer(int = -1);
    String Left(int) const;
    int Compare(const char *) const;
};

struct CRobloxDoc
{
    bool CheckPath(const char *);
    bool Process(const String &);
    void Report(const char *);
};

bool CRobloxDoc::CheckPath(const char *path)
{
    char folder[260];
    if (SHGetFolderPathA(0, 32, 0, 0, folder) != 0)
        return false;

    String relative;
    char *buffer = relative.GetBuffer(260);
    int result = PathRelativePathToA(buffer, folder, 16, path, 0);
    relative.ReleaseBuffer();
    if (result)
    {
        bool up = relative.Left(2).Compare("..") == 0;
        if (up)
            return false;
    }
    try
    {
        return Process(relative);
    }
    catch (...)
    {
        Report(path);
        return false;
    }
}
