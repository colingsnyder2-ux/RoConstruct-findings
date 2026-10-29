// roc 2009-12 00423ee0  unit: MainLogManager  size: 453 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00423ee0
//
// 00423ee0  6aff                 push -1
// 00423ee2  6803909200           push 0x929003
// 00423ee7  64a100000000         mov eax, dword ptr fs:[0]
// 00423eed  50                   push eax
// 00423eee  64892500000000       mov dword ptr fs:[0], esp
// 00423ef5  83ec0c               sub esp, 0xc
// 00423ef8  53                   push ebx
// 00423ef9  55                   push ebp
// 00423efa  56                   push esi
// 00423efb  57                   push edi
// 00423efc  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00423f04  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00423f08  57                   push edi
// 00423f09  8d4c2414             lea ecx, [esp + 0x14]
// 00423f0d  c744242801000000     mov dword ptr [esp + 0x28], 1
// 00423f15  ff15b8de9800         call dword ptr [0x98deb8]
// 00423f1b  8d4c2410             lea ecx, [esp + 0x10]
// 00423f1f  c644242402           mov byte ptr [esp + 0x24], 2
// 00423f24  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00423f2a  50                   push eax
// 00423f2b  8d4c2414             lea ecx, [esp + 0x14]
// 00423f2f  ff155cd29800         call dword ptr [0x98d25c]
// 00423f35  50                   push eax
// 00423f36  ff1574c99800         call dword ptr [0x98c974]
// 00423f3c  6aff                 push -1
// 00423f3e  8d4c2414             lea ecx, [esp + 0x14]
// 00423f42  ff1560d29800         call dword ptr [0x98d260]
// 00423f48  8d4c2434             lea ecx, [esp + 0x34]
// 00423f4c  ff15ecb69800         call dword ptr [0x98b6ec]
// 00423f52  8bf0                 mov esi, eax
// 00423f54  56                   push esi
// 00423f55  ff15b0dd9800         call dword ptr [0x98ddb0]
// 00423f5b  83c404               add esp, 4
// 00423f5e  8d4c2410             lea ecx, [esp + 0x10]
// 00423f62  8bd8                 mov ebx, eax
// 00423f64  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00423f6a  8d440301             lea eax, [ebx + eax + 1]
// 00423f6e  50                   push eax
// 00423f6f  8d4c2414             lea ecx, [esp + 0x14]
// 00423f73  ff155cd29800         call dword ptr [0x98d25c]
// 00423f79  8b2d80c99800         mov ebp, dword ptr [0x98c980]
// 00423f7f  56                   push esi
// 00423f80  50                   push eax
// 00423f81  ffd5                 call ebp
// 00423f83  6aff                 push -1
// 00423f85  8d4c2414             lea ecx, [esp + 0x14]
// 00423f89  ff1560d29800         call dword ptr [0x98d260]
// 00423f8f  8d4c2410             lea ecx, [esp + 0x10]
// 00423f93  ff1580de9800         call dword ptr [0x98de80]
// 00423f99  50                   push eax
// 00423f9a  ff157cc99800         call dword ptr [0x98c97c]
// 00423fa0  85c0                 test eax, eax
// 00423fa2  7514                 jne 0x423fb8
// 00423fa4  8d4c2410             lea ecx, [esp + 0x10]
// 00423fa8  ff1580de9800         call dword ptr [0x98de80]
// 00423fae  50                   push eax
// 00423faf  ff15ccb89800         call dword ptr [0x98b8cc]
// 00423fb5  83c404               add esp, 4
// 00423fb8  57                   push edi
// 00423fb9  8d4c2418             lea ecx, [esp + 0x18]
// 00423fbd  ff15b8de9800         call dword ptr [0x98deb8]
// 00423fc3  8d4c2414             lea ecx, [esp + 0x14]
// 00423fc7  c644242403           mov byte ptr [esp + 0x24], 3
// 00423fcc  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00423fd2  50                   push eax
// 00423fd3  8d4c2418             lea ecx, [esp + 0x18]
// 00423fd7  ff155cd29800         call dword ptr [0x98d25c]
// 00423fdd  50                   push eax
// 00423fde  ff1570c99800         call dword ptr [0x98c970]
// 00423fe4  6aff                 push -1
// 00423fe6  8d4c2418             lea ecx, [esp + 0x18]
// 00423fea  ff1560d29800         call dword ptr [0x98d260]
// 00423ff0  8d4c2414             lea ecx, [esp + 0x14]
// 00423ff4  ff1580de9800         call dword ptr [0x98de80]
// 00423ffa  8bf0                 mov esi, eax
// 00423ffc  56                   push esi
// 00423ffd  ff15b0dd9800         call dword ptr [0x98ddb0]
// 00424003  83c404               add esp, 4
// 00424006  8d4c2410             lea ecx, [esp + 0x10]
// 0042400a  8bd8                 mov ebx, eax
// 0042400c  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00424012  8d4c0301             lea ecx, [ebx + eax + 1]
// 00424016  51                   push ecx
// 00424017  8d4c2414             lea ecx, [esp + 0x14]
// 0042401b  ff155cd29800         call dword ptr [0x98d25c]
// 00424021  56                   push esi
// 00424022  50                   push eax
// 00424023  ffd5                 call ebp
// 00424025  6aff                 push -1
// 00424027  8d4c2414             lea ecx, [esp + 0x14]
// 0042402b  ff1560d29800         call dword ptr [0x98d260]
// 00424031  8d4c2410             lea ecx, [esp + 0x10]
// 00424035  ff1580de9800         call dword ptr [0x98de80]
// 0042403b  50                   push eax
// 0042403c  57                   push edi
// 0042403d  ff1564b29800         call dword ptr [0x98b264]
// 00424043  85c0                 test eax, eax
// 00424045  7507                 jne 0x42404e
// 00424047  57                   push edi
// 00424048  ff1514b39800         call dword ptr [0x98b314]
// 0042404e  8d4c2410             lea ecx, [esp + 0x10]
// 00424052  ff1580de9800         call dword ptr [0x98de80]
// 00424058  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0042405c  50                   push eax
// 0042405d  8bce                 mov ecx, esi
// 0042405f  ff15f4b69800         call dword ptr [0x98b6f4]
// 00424065  8d4c2414             lea ecx, [esp + 0x14]
// 00424069  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00424071  ff15c0de9800         call dword ptr [0x98dec0]
// 00424077  8d4c2410             lea ecx, [esp + 0x10]
// 0042407b  ff15c0de9800         call dword ptr [0x98dec0]
// 00424081  8d4c2434             lea ecx, [esp + 0x34]
// 00424085  c644242400           mov byte ptr [esp + 0x24], 0
// 0042408a  ff15e4b69800         call dword ptr [0x98b6e4]
// 00424090  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00424094  5f                   pop edi
// 00424095  8bc6                 mov eax, esi
// 00424097  5e                   pop esi
// 00424098  5d                   pop ebp
// 00424099  5b                   pop ebx
// 0042409a  64890d00000000       mov dword ptr fs:[0], ecx
// 004240a1  83c418               add esp, 0x18
// 004240a4  c3                   ret 
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