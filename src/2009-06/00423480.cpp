// roc 2009-06 00423480  unit: MainLogManager  size: 453 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00423480
//
// 00423480  6aff                 push -1
// 00423482  68f3e98400           push 0x84e9f3
// 00423487  64a100000000         mov eax, dword ptr fs:[0]
// 0042348d  50                   push eax
// 0042348e  64892500000000       mov dword ptr fs:[0], esp
// 00423495  83ec0c               sub esp, 0xc
// 00423498  53                   push ebx
// 00423499  55                   push ebp
// 0042349a  56                   push esi
// 0042349b  57                   push edi
// 0042349c  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004234a4  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 004234a8  57                   push edi
// 004234a9  8d4c2414             lea ecx, [esp + 0x14]
// 004234ad  c744242801000000     mov dword ptr [esp + 0x28], 1
// 004234b5  ff1508fd8900         call dword ptr [0x89fd08]
// 004234bb  8d4c2410             lea ecx, [esp + 0x10]
// 004234bf  c644242402           mov byte ptr [esp + 0x24], 2
// 004234c4  ff1554fb8900         call dword ptr [0x89fb54]
// 004234ca  50                   push eax
// 004234cb  8d4c2414             lea ecx, [esp + 0x14]
// 004234cf  ff1508f18900         call dword ptr [0x89f108]
// 004234d5  50                   push eax
// 004234d6  ff1514ec8900         call dword ptr [0x89ec14]
// 004234dc  6aff                 push -1
// 004234de  8d4c2414             lea ecx, [esp + 0x14]
// 004234e2  ff1504f18900         call dword ptr [0x89f104]
// 004234e8  8d4c2434             lea ecx, [esp + 0x34]
// 004234ec  ff15bce48900         call dword ptr [0x89e4bc]
// 004234f2  8bf0                 mov esi, eax
// 004234f4  56                   push esi
// 004234f5  ff1550fb8900         call dword ptr [0x89fb50]
// 004234fb  83c404               add esp, 4
// 004234fe  8d4c2410             lea ecx, [esp + 0x10]
// 00423502  8bd8                 mov ebx, eax
// 00423504  ff1554fb8900         call dword ptr [0x89fb54]
// 0042350a  8d440301             lea eax, [ebx + eax + 1]
// 0042350e  50                   push eax
// 0042350f  8d4c2414             lea ecx, [esp + 0x14]
// 00423513  ff1508f18900         call dword ptr [0x89f108]
// 00423519  8b2d18ec8900         mov ebp, dword ptr [0x89ec18]
// 0042351f  56                   push esi
// 00423520  50                   push eax
// 00423521  ffd5                 call ebp
// 00423523  6aff                 push -1
// 00423525  8d4c2414             lea ecx, [esp + 0x14]
// 00423529  ff1504f18900         call dword ptr [0x89f104]
// 0042352f  8d4c2410             lea ecx, [esp + 0x10]
// 00423533  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00423539  50                   push eax
// 0042353a  ff151cec8900         call dword ptr [0x89ec1c]
// 00423540  85c0                 test eax, eax
// 00423542  7514                 jne 0x423558
// 00423544  8d4c2410             lea ecx, [esp + 0x10]
// 00423548  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0042354e  50                   push eax
// 0042354f  ff1558e88900         call dword ptr [0x89e858]
// 00423555  83c404               add esp, 4
// 00423558  57                   push edi
// 00423559  8d4c2418             lea ecx, [esp + 0x18]
// 0042355d  ff1508fd8900         call dword ptr [0x89fd08]
// 00423563  8d4c2414             lea ecx, [esp + 0x14]
// 00423567  c644242403           mov byte ptr [esp + 0x24], 3
// 0042356c  ff1554fb8900         call dword ptr [0x89fb54]
// 00423572  50                   push eax
// 00423573  8d4c2418             lea ecx, [esp + 0x18]
// 00423577  ff1508f18900         call dword ptr [0x89f108]
// 0042357d  50                   push eax
// 0042357e  ff1520ec8900         call dword ptr [0x89ec20]
// 00423584  6aff                 push -1
// 00423586  8d4c2418             lea ecx, [esp + 0x18]
// 0042358a  ff1504f18900         call dword ptr [0x89f104]
// 00423590  8d4c2414             lea ecx, [esp + 0x14]
// 00423594  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0042359a  8bf0                 mov esi, eax
// 0042359c  56                   push esi
// 0042359d  ff1550fb8900         call dword ptr [0x89fb50]
// 004235a3  83c404               add esp, 4
// 004235a6  8d4c2410             lea ecx, [esp + 0x10]
// 004235aa  8bd8                 mov ebx, eax
// 004235ac  ff1554fb8900         call dword ptr [0x89fb54]
// 004235b2  8d4c0301             lea ecx, [ebx + eax + 1]
// 004235b6  51                   push ecx
// 004235b7  8d4c2414             lea ecx, [esp + 0x14]
// 004235bb  ff1508f18900         call dword ptr [0x89f108]
// 004235c1  56                   push esi
// 004235c2  50                   push eax
// 004235c3  ffd5                 call ebp
// 004235c5  6aff                 push -1
// 004235c7  8d4c2414             lea ecx, [esp + 0x14]
// 004235cb  ff1504f18900         call dword ptr [0x89f104]
// 004235d1  8d4c2410             lea ecx, [esp + 0x10]
// 004235d5  ff15d0fc8900         call dword ptr [0x89fcd0]
// 004235db  50                   push eax
// 004235dc  57                   push edi
// 004235dd  ff1540e28900         call dword ptr [0x89e240]
// 004235e3  85c0                 test eax, eax
// 004235e5  7507                 jne 0x4235ee
// 004235e7  57                   push edi
// 004235e8  ff15a4e38900         call dword ptr [0x89e3a4]
// 004235ee  8d4c2410             lea ecx, [esp + 0x10]
// 004235f2  ff15d0fc8900         call dword ptr [0x89fcd0]
// 004235f8  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004235fc  50                   push eax
// 004235fd  8bce                 mov ecx, esi
// 004235ff  ff15b4e48900         call dword ptr [0x89e4b4]
// 00423605  8d4c2414             lea ecx, [esp + 0x14]
// 00423609  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00423611  ff1510fd8900         call dword ptr [0x89fd10]
// 00423617  8d4c2410             lea ecx, [esp + 0x10]
// 0042361b  ff1510fd8900         call dword ptr [0x89fd10]
// 00423621  8d4c2434             lea ecx, [esp + 0x34]
// 00423625  c644242400           mov byte ptr [esp + 0x24], 0
// 0042362a  ff15c4e48900         call dword ptr [0x89e4c4]
// 00423630  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00423634  5f                   pop edi
// 00423635  8bc6                 mov eax, esi
// 00423637  5e                   pop esi
// 00423638  5d                   pop ebp
// 00423639  5b                   pop ebx
// 0042363a  64890d00000000       mov dword ptr fs:[0], ecx
// 00423641  83c418               add esp, 0x18
// 00423644  c3                   ret 
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