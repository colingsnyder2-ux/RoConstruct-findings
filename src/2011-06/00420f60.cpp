// roc 2011-06 00420f60  unit: RBX::DSVideoCaptureEngine  size: 453 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00420f60
//
// 00420f60  6aff                 push -1
// 00420f62  68b3ec9c00           push 0x9cecb3
// 00420f67  64a100000000         mov eax, dword ptr fs:[0]
// 00420f6d  50                   push eax
// 00420f6e  64892500000000       mov dword ptr fs:[0], esp
// 00420f75  83ec0c               sub esp, 0xc
// 00420f78  53                   push ebx
// 00420f79  55                   push ebp
// 00420f7a  56                   push esi
// 00420f7b  57                   push edi
// 00420f7c  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00420f84  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00420f88  57                   push edi
// 00420f89  8d4c2414             lea ecx, [esp + 0x14]
// 00420f8d  c744242801000000     mov dword ptr [esp + 0x28], 1
// 00420f95  ff15002ea400         call dword ptr [0xa42e00]
// 00420f9b  8d4c2410             lea ecx, [esp + 0x10]
// 00420f9f  c644242402           mov byte ptr [esp + 0x24], 2
// 00420fa4  ff15a826a400         call dword ptr [0xa426a8]
// 00420faa  50                   push eax
// 00420fab  8d4c2414             lea ecx, [esp + 0x14]
// 00420faf  ff15e023a400         call dword ptr [0xa423e0]
// 00420fb5  50                   push eax
// 00420fb6  ff158819a400         call dword ptr [0xa41988]
// 00420fbc  6aff                 push -1
// 00420fbe  8d4c2414             lea ecx, [esp + 0x14]
// 00420fc2  ff15e423a400         call dword ptr [0xa423e4]
// 00420fc8  8d4c2434             lea ecx, [esp + 0x34]
// 00420fcc  ff15cc04a400         call dword ptr [0xa404cc]
// 00420fd2  8bf0                 mov esi, eax
// 00420fd4  56                   push esi
// 00420fd5  ff15a426a400         call dword ptr [0xa426a4]
// 00420fdb  83c404               add esp, 4
// 00420fde  8d4c2410             lea ecx, [esp + 0x10]
// 00420fe2  8bd8                 mov ebx, eax
// 00420fe4  ff15a826a400         call dword ptr [0xa426a8]
// 00420fea  8d440301             lea eax, [ebx + eax + 1]
// 00420fee  50                   push eax
// 00420fef  8d4c2414             lea ecx, [esp + 0x14]
// 00420ff3  ff15e023a400         call dword ptr [0xa423e0]
// 00420ff9  8b2d9c19a400         mov ebp, dword ptr [0xa4199c]
// 00420fff  56                   push esi
// 00421000  50                   push eax
// 00421001  ffd5                 call ebp
// 00421003  6aff                 push -1
// 00421005  8d4c2414             lea ecx, [esp + 0x14]
// 00421009  ff15e423a400         call dword ptr [0xa423e4]
// 0042100f  8d4c2410             lea ecx, [esp + 0x10]
// 00421013  ff15c82da400         call dword ptr [0xa42dc8]
// 00421019  50                   push eax
// 0042101a  ff158419a400         call dword ptr [0xa41984]
// 00421020  85c0                 test eax, eax
// 00421022  7514                 jne 0x421038
// 00421024  8d4c2410             lea ecx, [esp + 0x10]
// 00421028  ff15c82da400         call dword ptr [0xa42dc8]
// 0042102e  50                   push eax
// 0042102f  ff15ec09a400         call dword ptr [0xa409ec]
// 00421035  83c404               add esp, 4
// 00421038  57                   push edi
// 00421039  8d4c2418             lea ecx, [esp + 0x18]
// 0042103d  ff15002ea400         call dword ptr [0xa42e00]
// 00421043  8d4c2414             lea ecx, [esp + 0x14]
// 00421047  c644242403           mov byte ptr [esp + 0x24], 3
// 0042104c  ff15a826a400         call dword ptr [0xa426a8]
// 00421052  50                   push eax
// 00421053  8d4c2418             lea ecx, [esp + 0x18]
// 00421057  ff15e023a400         call dword ptr [0xa423e0]
// 0042105d  50                   push eax
// 0042105e  ff158c19a400         call dword ptr [0xa4198c]
// 00421064  6aff                 push -1
// 00421066  8d4c2418             lea ecx, [esp + 0x18]
// 0042106a  ff15e423a400         call dword ptr [0xa423e4]
// 00421070  8d4c2414             lea ecx, [esp + 0x14]
// 00421074  ff15c82da400         call dword ptr [0xa42dc8]
// 0042107a  8bf0                 mov esi, eax
// 0042107c  56                   push esi
// 0042107d  ff15a426a400         call dword ptr [0xa426a4]
// 00421083  83c404               add esp, 4
// 00421086  8d4c2410             lea ecx, [esp + 0x10]
// 0042108a  8bd8                 mov ebx, eax
// 0042108c  ff15a826a400         call dword ptr [0xa426a8]
// 00421092  8d4c0301             lea ecx, [ebx + eax + 1]
// 00421096  51                   push ecx
// 00421097  8d4c2414             lea ecx, [esp + 0x14]
// 0042109b  ff15e023a400         call dword ptr [0xa423e0]
// 004210a1  56                   push esi
// 004210a2  50                   push eax
// 004210a3  ffd5                 call ebp
// 004210a5  6aff                 push -1
// 004210a7  8d4c2414             lea ecx, [esp + 0x14]
// 004210ab  ff15e423a400         call dword ptr [0xa423e4]
// 004210b1  8d4c2410             lea ecx, [esp + 0x10]
// 004210b5  ff15c82da400         call dword ptr [0xa42dc8]
// 004210bb  50                   push eax
// 004210bc  57                   push edi
// 004210bd  ff15e402a400         call dword ptr [0xa402e4]
// 004210c3  85c0                 test eax, eax
// 004210c5  7507                 jne 0x4210ce
// 004210c7  57                   push edi
// 004210c8  ff15e802a400         call dword ptr [0xa402e8]
// 004210ce  8d4c2410             lea ecx, [esp + 0x10]
// 004210d2  ff15c82da400         call dword ptr [0xa42dc8]
// 004210d8  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004210dc  50                   push eax
// 004210dd  8bce                 mov ecx, esi
// 004210df  ff15c404a400         call dword ptr [0xa404c4]
// 004210e5  8d4c2414             lea ecx, [esp + 0x14]
// 004210e9  c744241801000000     mov dword ptr [esp + 0x18], 1
// 004210f1  ff15082ea400         call dword ptr [0xa42e08]
// 004210f7  8d4c2410             lea ecx, [esp + 0x10]
// 004210fb  ff15082ea400         call dword ptr [0xa42e08]
// 00421101  8d4c2434             lea ecx, [esp + 0x34]
// 00421105  c644242400           mov byte ptr [esp + 0x24], 0
// 0042110a  ff15d004a400         call dword ptr [0xa404d0]
// 00421110  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00421114  5f                   pop edi
// 00421115  8bc6                 mov eax, esi
// 00421117  5e                   pop esi
// 00421118  5d                   pop ebp
// 00421119  5b                   pop ebx
// 0042111a  64890d00000000       mov dword ptr fs:[0], ecx
// 00421121  83c418               add esp, 0x18
// 00421124  c3                   ret 
// copied from an identical function in another client (function ?archiveFile@@YA?AV?$bstr@D@@PBDV1@@Z)

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