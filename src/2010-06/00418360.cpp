// roc 2010-06 00418360  unit: RBX::VTool::?$FactoryProduct::Creator  size: 453 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00418360
//
// 00418360  6aff                 push -1
// 00418362  6863eb9700           push 0x97eb63
// 00418367  64a100000000         mov eax, dword ptr fs:[0]
// 0041836d  50                   push eax
// 0041836e  64892500000000       mov dword ptr fs:[0], esp
// 00418375  83ec0c               sub esp, 0xc
// 00418378  53                   push ebx
// 00418379  55                   push ebp
// 0041837a  56                   push esi
// 0041837b  57                   push edi
// 0041837c  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00418384  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00418388  57                   push edi
// 00418389  8d4c2414             lea ecx, [esp + 0x14]
// 0041838d  c744242801000000     mov dword ptr [esp + 0x28], 1
// 00418395  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 0041839b  8d4c2410             lea ecx, [esp + 0x10]
// 0041839f  c644242402           mov byte ptr [esp + 0x24], 2
// 004183a4  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 004183aa  50                   push eax
// 004183ab  8d4c2414             lea ecx, [esp + 0x14]
// 004183af  ff15fcc39e00         call dword ptr [0x9ec3fc]
// 004183b5  50                   push eax
// 004183b6  ff1580b99e00         call dword ptr [0x9eb980]
// 004183bc  6aff                 push -1
// 004183be  8d4c2414             lea ecx, [esp + 0x14]
// 004183c2  ff1500c49e00         call dword ptr [0x9ec400]
// 004183c8  8d4c2434             lea ecx, [esp + 0x34]
// 004183cc  ff1508a49e00         call dword ptr [0x9ea408]
// 004183d2  8bf0                 mov esi, eax
// 004183d4  56                   push esi
// 004183d5  ff15e0cd9e00         call dword ptr [0x9ecde0]
// 004183db  83c404               add esp, 4
// 004183de  8d4c2410             lea ecx, [esp + 0x10]
// 004183e2  8bd8                 mov ebx, eax
// 004183e4  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 004183ea  8d440301             lea eax, [ebx + eax + 1]
// 004183ee  50                   push eax
// 004183ef  8d4c2414             lea ecx, [esp + 0x14]
// 004183f3  ff15fcc39e00         call dword ptr [0x9ec3fc]
// 004183f9  8b2d78b99e00         mov ebp, dword ptr [0x9eb978]
// 004183ff  56                   push esi
// 00418400  50                   push eax
// 00418401  ffd5                 call ebp
// 00418403  6aff                 push -1
// 00418405  8d4c2414             lea ecx, [esp + 0x14]
// 00418409  ff1500c49e00         call dword ptr [0x9ec400]
// 0041840f  8d4c2410             lea ecx, [esp + 0x10]
// 00418413  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00418419  50                   push eax
// 0041841a  ff157cb99e00         call dword ptr [0x9eb97c]
// 00418420  85c0                 test eax, eax
// 00418422  7514                 jne 0x418438
// 00418424  8d4c2410             lea ecx, [esp + 0x10]
// 00418428  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0041842e  50                   push eax
// 0041842f  ff15e8a79e00         call dword ptr [0x9ea7e8]
// 00418435  83c404               add esp, 4
// 00418438  57                   push edi
// 00418439  8d4c2418             lea ecx, [esp + 0x18]
// 0041843d  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00418443  8d4c2414             lea ecx, [esp + 0x14]
// 00418447  c644242403           mov byte ptr [esp + 0x24], 3
// 0041844c  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00418452  50                   push eax
// 00418453  8d4c2418             lea ecx, [esp + 0x18]
// 00418457  ff15fcc39e00         call dword ptr [0x9ec3fc]
// 0041845d  50                   push eax
// 0041845e  ff1584b99e00         call dword ptr [0x9eb984]
// 00418464  6aff                 push -1
// 00418466  8d4c2418             lea ecx, [esp + 0x18]
// 0041846a  ff1500c49e00         call dword ptr [0x9ec400]
// 00418470  8d4c2414             lea ecx, [esp + 0x14]
// 00418474  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0041847a  8bf0                 mov esi, eax
// 0041847c  56                   push esi
// 0041847d  ff15e0cd9e00         call dword ptr [0x9ecde0]
// 00418483  83c404               add esp, 4
// 00418486  8d4c2410             lea ecx, [esp + 0x10]
// 0041848a  8bd8                 mov ebx, eax
// 0041848c  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00418492  8d4c0301             lea ecx, [ebx + eax + 1]
// 00418496  51                   push ecx
// 00418497  8d4c2414             lea ecx, [esp + 0x14]
// 0041849b  ff15fcc39e00         call dword ptr [0x9ec3fc]
// 004184a1  56                   push esi
// 004184a2  50                   push eax
// 004184a3  ffd5                 call ebp
// 004184a5  6aff                 push -1
// 004184a7  8d4c2414             lea ecx, [esp + 0x14]
// 004184ab  ff1500c49e00         call dword ptr [0x9ec400]
// 004184b1  8d4c2410             lea ecx, [esp + 0x10]
// 004184b5  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 004184bb  50                   push eax
// 004184bc  57                   push edi
// 004184bd  ff151ca39e00         call dword ptr [0x9ea31c]
// 004184c3  85c0                 test eax, eax
// 004184c5  7507                 jne 0x4184ce
// 004184c7  57                   push edi
// 004184c8  ff1520a39e00         call dword ptr [0x9ea320]
// 004184ce  8d4c2410             lea ecx, [esp + 0x10]
// 004184d2  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 004184d8  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004184dc  50                   push eax
// 004184dd  8bce                 mov ecx, esi
// 004184df  ff1510a49e00         call dword ptr [0x9ea410]
// 004184e5  8d4c2414             lea ecx, [esp + 0x14]
// 004184e9  c744241801000000     mov dword ptr [esp + 0x18], 1
// 004184f1  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 004184f7  8d4c2410             lea ecx, [esp + 0x10]
// 004184fb  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00418501  8d4c2434             lea ecx, [esp + 0x34]
// 00418505  c644242400           mov byte ptr [esp + 0x24], 0
// 0041850a  ff1500a49e00         call dword ptr [0x9ea400]
// 00418510  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00418514  5f                   pop edi
// 00418515  8bc6                 mov eax, esi
// 00418517  5e                   pop esi
// 00418518  5d                   pop ebp
// 00418519  5b                   pop ebx
// 0041851a  64890d00000000       mov dword ptr fs:[0], ecx
// 00418521  83c418               add esp, 0x18
// 00418524  c3                   ret 
// copied from an identical function in another client (function ?archiveFile@@YA?AV?$bstr@D@@PBDV1@@Z)

// from server: 100% by EspClaude
// roc 2008-06 00428310  unit: MainLogManager  size: 453 bytes
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD

extern "C" {
    __declspec(dllimport) int __stdcall PathRemoveFileSpecA(char *);
    __declspec(dllimport) void __stdcall PathStripPathA(char *);
    __declspec(dllimport) int __stdcall PathAppendA(char *, const char *);
    __declspec(dllimport) int __stdcall PathFileExistsA(const char *);
    __declspec(dllimport) int __stdcall MoveFileA(const char *, const char *);
    __declspec(dllimport) int __stdcall DeleteFileA(const char *);
    __declspec(dllimport) int __cdecl _mkdir(const char *);
}

template <class T> class bstr {
public:
    __declspec(noinline) bstr() { _Mysize = 0; }
    __declspec(noinline) bstr(const T* s) { _Mysize = 0; }
    __declspec(noinline) bstr(const bstr& r) { _Mysize = r._Mysize; }
    __declspec(noinline) ~bstr() { _Mysize = 0; }
    __declspec(noinline) const T* c_str() const { return _Buf; }
    void* _Myaux;
    T _Buf[16];
    unsigned int _Mysize;
    unsigned int _Myres;
};
extern template class __declspec(dllimport) bstr<char>;
typedef bstr<char> string_;

template <class T> class CStringT_ {
public:
    __declspec(noinline) CStringT_(const T* s) { m_pszData = 0; }
    __declspec(noinline) ~CStringT_() throw() { m_pszData = 0; }
    __declspec(noinline) operator const T*() const throw() { return m_pszData; }
    __declspec(noinline) int GetLength() const throw() { return 0; }
    __declspec(noinline) T* GetBuffer(int n) { return m_pszData; }
    __declspec(noinline) void ReleaseBuffer(int n = -1) { }
    __declspec(noinline) static int __cdecl StringLength(const T* p) throw() { return 0; }
    T* m_pszData;
};
extern template class __declspec(dllimport) CStringT_<char>;
typedef CStringT_<char> CString;

class CPath {
public:
    CString m_strPath;
    CPath(const char *s) : m_strPath(s) {}
    void RemoveFileSpec() {
        PathRemoveFileSpecA(m_strPath.GetBuffer(m_strPath.GetLength()));
        m_strPath.ReleaseBuffer();
    }
    void StripPath() {
        PathStripPathA(m_strPath.GetBuffer(m_strPath.GetLength()));
        m_strPath.ReleaseBuffer();
    }
    int Append(const char *pszMore) {
        char *pszBuffer;
        int bResult;
        pszBuffer = m_strPath.GetBuffer(m_strPath.GetLength() + CString::StringLength(pszMore) + 1);
        bResult = PathAppendA(pszBuffer, pszMore);
        m_strPath.ReleaseBuffer();
        return bResult;
    }
    int FileExists() const { return PathFileExistsA(m_strPath); }
    operator const char *() const { return m_strPath; }
};

string_ archiveFile(const char *file, string_ folder)
{
    CPath destination(file);
    destination.RemoveFileSpec();
    destination.Append(folder.c_str());
    if (!destination.FileExists())
        _mkdir(destination);

    CPath filename(file);
    filename.StripPath();
    destination.Append(filename);

    if (!MoveFileA(file, destination))
        DeleteFileA(file);

    return string_(destination);
}