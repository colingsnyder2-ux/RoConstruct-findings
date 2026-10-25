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
