// roc 2012-06 00424b80  unit: RBX::DSVideoCaptureEngine  size: 453 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00424b80
//
// 00424b80  6aff                 push -1
// 00424b82  68d3bca900           push 0xa9bcd3
// 00424b87  64a100000000         mov eax, dword ptr fs:[0]
// 00424b8d  50                   push eax
// 00424b8e  64892500000000       mov dword ptr fs:[0], esp
// 00424b95  83ec0c               sub esp, 0xc
// 00424b98  53                   push ebx
// 00424b99  55                   push ebp
// 00424b9a  56                   push esi
// 00424b9b  57                   push edi
// 00424b9c  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00424ba4  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00424ba8  57                   push edi
// 00424ba9  8d4c2414             lea ecx, [esp + 0x14]
// 00424bad  c744242801000000     mov dword ptr [esp + 0x28], 1
// 00424bb5  ff15c847b200         call dword ptr [0xb247c8]
// 00424bbb  8d4c2410             lea ecx, [esp + 0x10]
// 00424bbf  c644242402           mov byte ptr [esp + 0x24], 2
// 00424bc4  ff155846b200         call dword ptr [0xb24658]
// 00424bca  50                   push eax
// 00424bcb  8d4c2414             lea ecx, [esp + 0x14]
// 00424bcf  ff15ac43b200         call dword ptr [0xb243ac]
// 00424bd5  50                   push eax
// 00424bd6  ff15283ab200         call dword ptr [0xb23a28]
// 00424bdc  6aff                 push -1
// 00424bde  8d4c2414             lea ecx, [esp + 0x14]
// 00424be2  ff15b043b200         call dword ptr [0xb243b0]
// 00424be8  8d4c2434             lea ecx, [esp + 0x34]
// 00424bec  ff154026b200         call dword ptr [0xb22640]
// 00424bf2  8bf0                 mov esi, eax
// 00424bf4  56                   push esi
// 00424bf5  ff155446b200         call dword ptr [0xb24654]
// 00424bfb  83c404               add esp, 4
// 00424bfe  8d4c2410             lea ecx, [esp + 0x10]
// 00424c02  8bd8                 mov ebx, eax
// 00424c04  ff155846b200         call dword ptr [0xb24658]
// 00424c0a  8d440301             lea eax, [ebx + eax + 1]
// 00424c0e  50                   push eax
// 00424c0f  8d4c2414             lea ecx, [esp + 0x14]
// 00424c13  ff15ac43b200         call dword ptr [0xb243ac]
// 00424c19  8b2d303ab200         mov ebp, dword ptr [0xb23a30]
// 00424c1f  56                   push esi
// 00424c20  50                   push eax
// 00424c21  ffd5                 call ebp
// 00424c23  6aff                 push -1
// 00424c25  8d4c2414             lea ecx, [esp + 0x14]
// 00424c29  ff15b043b200         call dword ptr [0xb243b0]
// 00424c2f  8d4c2410             lea ecx, [esp + 0x10]
// 00424c33  ff159847b200         call dword ptr [0xb24798]
// 00424c39  50                   push eax
// 00424c3a  ff152c3ab200         call dword ptr [0xb23a2c]
// 00424c40  85c0                 test eax, eax
// 00424c42  7514                 jne 0x424c58
// 00424c44  8d4c2410             lea ecx, [esp + 0x10]
// 00424c48  ff159847b200         call dword ptr [0xb24798]
// 00424c4e  50                   push eax
// 00424c4f  ff15d02ab200         call dword ptr [0xb22ad0]
// 00424c55  83c404               add esp, 4
// 00424c58  57                   push edi
// 00424c59  8d4c2418             lea ecx, [esp + 0x18]
// 00424c5d  ff15c847b200         call dword ptr [0xb247c8]
// 00424c63  8d4c2414             lea ecx, [esp + 0x14]
// 00424c67  c644242403           mov byte ptr [esp + 0x24], 3
// 00424c6c  ff155846b200         call dword ptr [0xb24658]
// 00424c72  50                   push eax
// 00424c73  8d4c2418             lea ecx, [esp + 0x18]
// 00424c77  ff15ac43b200         call dword ptr [0xb243ac]
// 00424c7d  50                   push eax
// 00424c7e  ff15403ab200         call dword ptr [0xb23a40]
// 00424c84  6aff                 push -1
// 00424c86  8d4c2418             lea ecx, [esp + 0x18]
// 00424c8a  ff15b043b200         call dword ptr [0xb243b0]
// 00424c90  8d4c2414             lea ecx, [esp + 0x14]
// 00424c94  ff159847b200         call dword ptr [0xb24798]
// 00424c9a  8bf0                 mov esi, eax
// 00424c9c  56                   push esi
// 00424c9d  ff155446b200         call dword ptr [0xb24654]
// 00424ca3  83c404               add esp, 4
// 00424ca6  8d4c2410             lea ecx, [esp + 0x10]
// 00424caa  8bd8                 mov ebx, eax
// 00424cac  ff155846b200         call dword ptr [0xb24658]
// 00424cb2  8d4c0301             lea ecx, [ebx + eax + 1]
// 00424cb6  51                   push ecx
// 00424cb7  8d4c2414             lea ecx, [esp + 0x14]
// 00424cbb  ff15ac43b200         call dword ptr [0xb243ac]
// 00424cc1  56                   push esi
// 00424cc2  50                   push eax
// 00424cc3  ffd5                 call ebp
// 00424cc5  6aff                 push -1
// 00424cc7  8d4c2414             lea ecx, [esp + 0x14]
// 00424ccb  ff15b043b200         call dword ptr [0xb243b0]
// 00424cd1  8d4c2410             lea ecx, [esp + 0x10]
// 00424cd5  ff159847b200         call dword ptr [0xb24798]
// 00424cdb  50                   push eax
// 00424cdc  57                   push edi
// 00424cdd  ff158822b200         call dword ptr [0xb22288]
// 00424ce3  85c0                 test eax, eax
// 00424ce5  7507                 jne 0x424cee
// 00424ce7  57                   push edi
// 00424ce8  ff158422b200         call dword ptr [0xb22284]
// 00424cee  8d4c2410             lea ecx, [esp + 0x10]
// 00424cf2  ff159847b200         call dword ptr [0xb24798]
// 00424cf8  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00424cfc  50                   push eax
// 00424cfd  8bce                 mov ecx, esi
// 00424cff  ff154826b200         call dword ptr [0xb22648]
// 00424d05  8d4c2414             lea ecx, [esp + 0x14]
// 00424d09  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00424d11  ff15d047b200         call dword ptr [0xb247d0]
// 00424d17  8d4c2410             lea ecx, [esp + 0x10]
// 00424d1b  ff15d047b200         call dword ptr [0xb247d0]
// 00424d21  8d4c2434             lea ecx, [esp + 0x34]
// 00424d25  c644242400           mov byte ptr [esp + 0x24], 0
// 00424d2a  ff153c26b200         call dword ptr [0xb2263c]
// 00424d30  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00424d34  5f                   pop edi
// 00424d35  8bc6                 mov eax, esi
// 00424d37  5e                   pop esi
// 00424d38  5d                   pop ebp
// 00424d39  5b                   pop ebx
// 00424d3a  64890d00000000       mov dword ptr fs:[0], ecx
// 00424d41  83c418               add esp, 0x18
// 00424d44  c3                   ret 
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