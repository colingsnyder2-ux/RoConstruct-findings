// from server: 100% by EspClaude
// roc 2008-06 00429f30  unit: ThreadLogManager  size: 591 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00429f30
//
// 00429f30  6aff                 push -1
// 00429f32  68c6f37b00           push 0x7bf3c6
// 00429f37  64a100000000         mov eax, dword ptr fs:[0]
// 00429f3d  50                   push eax
// 00429f3e  64892500000000       mov dword ptr fs:[0], esp
// 00429f45  81ec74010000         sub esp, 0x174
// 00429f4b  53                   push ebx
// 00429f4c  55                   push ebp
// 00429f4d  56                   push esi
// 00429f4e  57                   push edi
// 00429f4f  8d442410             lea eax, [esp + 0x10]
// 00429f53  50                   push eax
// 00429f54  83c104               add ecx, 4
// 00429f57  e844dcffff           call 0x427ba0
// 00429f5c  8bb42494010000       mov esi, dword ptr [esp + 0x194]
// 00429f63  56                   push esi
// 00429f64  c784249001000000000000 mov dword ptr [esp + 0x190], 0
// 00429f6f  ff15e42f8000         call dword ptr [0x802fe4]
// 00429f75  83c404               add esp, 4
// 00429f78  8d4c2410             lea ecx, [esp + 0x10]
// 00429f7c  8bf8                 mov edi, eax
// 00429f7e  ff15e02f8000         call dword ptr [0x802fe0]
// 00429f84  8d4c0701             lea ecx, [edi + eax + 1]
// 00429f88  51                   push ecx
// 00429f89  8d4c2414             lea ecx, [esp + 0x14]
// 00429f8d  ff1584338000         call dword ptr [0x803384]
// 00429f93  56                   push esi
// 00429f94  50                   push eax
// 00429f95  ff15182b8000         call dword ptr [0x802b18]
// 00429f9b  6aff                 push -1
// 00429f9d  8d4c2414             lea ecx, [esp + 0x14]
// 00429fa1  ff1580338000         call dword ptr [0x803380]
// 00429fa7  8d4c2410             lea ecx, [esp + 0x10]
// 00429fab  ff15e02f8000         call dword ptr [0x802fe0]
// 00429fb1  40                   inc eax
// 00429fb2  50                   push eax
// 00429fb3  8d4c2414             lea ecx, [esp + 0x14]
// 00429fb7  ff1584338000         call dword ptr [0x803384]
// 00429fbd  50                   push eax
// 00429fbe  ff15142b8000         call dword ptr [0x802b14]
// 00429fc4  6aff                 push -1
// 00429fc6  8d4c2414             lea ecx, [esp + 0x14]
// 00429fca  ff1580338000         call dword ptr [0x803380]
// 00429fd0  8d4c2418             lea ecx, [esp + 0x18]
// 00429fd4  e8a7f7ffff           call 0x429780
// 00429fd9  68dc048100           push 0x8104dc
// 00429fde  8d542414             lea edx, [esp + 0x14]
// 00429fe2  52                   push edx
// 00429fe3  8d44241c             lea eax, [esp + 0x1c]
// 00429fe7  50                   push eax
// 00429fe8  c684249801000001     mov byte ptr [esp + 0x198], 1
// 00429ff0  e86b41feff           call 0x40e160
// 00429ff5  83c40c               add esp, 0xc
// 00429ff8  8d4c2444             lea ecx, [esp + 0x44]
// 00429ffc  51                   push ecx
// 00429ffd  8bc8                 mov ecx, eax
// 00429fff  ff15e03e8000         call dword ptr [0x803ee0]
// 0042a005  50                   push eax
// 0042a006  ff1508228000         call dword ptr [0x802208]
// 0042a00c  8d4c2414             lea ecx, [esp + 0x14]
// 0042a010  8be8                 mov ebp, eax
// 0042a012  ff15143f8000         call dword ptr [0x803f14]
// 0042a018  83fdff               cmp ebp, -1
// 0042a01b  7458                 je 0x42a075
// 0042a01d  8b1d04228000         mov ebx, dword ptr [0x802204]
// 0042a023  f644244410           test byte ptr [esp + 0x44], 0x10
// 0042a028  753f                 jne 0x42a069
// 0042a02a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0042a02e  8b442448             mov eax, dword ptr [esp + 0x48]
// 0042a032  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0042a036  8b742418             mov esi, dword ptr [esp + 0x18]
// 0042a03a  8b3a                 mov edi, dword ptr [edx]
// 0042a03c  51                   push ecx
// 0042a03d  50                   push eax
// 0042a03e  52                   push edx
// 0042a03f  56                   push esi
// 0042a040  57                   push edi
// 0042a041  8d542448             lea edx, [esp + 0x48]
// 0042a045  56                   push esi
// 0042a046  52                   push edx
// 0042a047  e804fbffff           call 0x429b50
// 0042a04c  8b5004               mov edx, dword ptr [eax + 4]
// 0042a04f  8b00                 mov eax, dword ptr [eax]
// 0042a051  83c41c               add esp, 0x1c
// 0042a054  8d4c2444             lea ecx, [esp + 0x44]
// 0042a058  51                   push ecx
// 0042a059  52                   push edx
// 0042a05a  50                   push eax
// 0042a05b  8d4c2448             lea ecx, [esp + 0x48]
// 0042a05f  51                   push ecx
// 0042a060  8d4c2428             lea ecx, [esp + 0x28]
// 0042a064  e877f7ffff           call 0x4297e0
// 0042a069  8d542444             lea edx, [esp + 0x44]
// 0042a06d  52                   push edx
// 0042a06e  55                   push ebp
// 0042a06f  ffd3                 call ebx
// 0042a071  85c0                 test eax, eax
// 0042a073  75ae                 jne 0x42a023
// 0042a075  8b842498010000       mov eax, dword ptr [esp + 0x198]
// 0042a07c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0042a080  8b31                 mov esi, dword ptr [ecx]
// 0042a082  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0042a086  8be8                 mov ebp, eax
// 0042a088  3b442430             cmp eax, dword ptr [esp + 0x30]
// 0042a08c  7374                 jae 0x42a102
// 0042a08e  8b1dfc218000         mov ebx, dword ptr [0x8021fc]
// 0042a094  85ff                 test edi, edi
// 0042a096  0f85d5000000         jne 0x42a171
// 0042a09c  ff1590288000         call dword ptr [0x802890]
// 0042a0a2  33c0                 xor eax, eax
// 0042a0a4  3b7014               cmp esi, dword ptr [eax + 0x14]
// 0042a0a7  7506                 jne 0x42a0af
// 0042a0a9  ff1590288000         call dword ptr [0x802890]
// 0042a0af  8d4634               lea eax, [esi + 0x34]
// 0042a0b2  50                   push eax
// 0042a0b3  8d4c2414             lea ecx, [esp + 0x14]
// 0042a0b7  51                   push ecx
// 0042a0b8  8d54241c             lea edx, [esp + 0x1c]
// 0042a0bc  52                   push edx
// 0042a0bd  e89e40feff           call 0x40e160
// 0042a0c2  83c40c               add esp, 0xc
// 0042a0c5  8bc8                 mov ecx, eax
// 0042a0c7  ff15e03e8000         call dword ptr [0x803ee0]
// 0042a0cd  50                   push eax
// 0042a0ce  ffd3                 call ebx
// 0042a0d0  8d4c2414             lea ecx, [esp + 0x14]
// 0042a0d4  ff15143f8000         call dword ptr [0x803f14]
// 0042a0da  85ff                 test edi, edi
// 0042a0dc  0f8596000000         jne 0x42a178
// 0042a0e2  ff1590288000         call dword ptr [0x802890]
// 0042a0e8  33c0                 xor eax, eax
// 0042a0ea  3b7014               cmp esi, dword ptr [eax + 0x14]
// 0042a0ed  7506                 jne 0x42a0f5
// 0042a0ef  ff1590288000         call dword ptr [0x802890]
// 0042a0f5  8b36                 mov esi, dword ptr [esi]
// 0042a0f7  45                   inc ebp
// 0042a0f8  3b6c2430             cmp ebp, dword ptr [esp + 0x30]
// 0042a0fc  7296                 jb 0x42a094
// 0042a0fe  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0042a102  8b01                 mov eax, dword ptr [ecx]
// 0042a104  8909                 mov dword ptr [ecx], ecx
// 0042a106  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0042a10a  894904               mov dword ptr [ecx + 4], ecx
// 0042a10d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0042a111  33ff                 xor edi, edi
// 0042a113  897c2430             mov dword ptr [esp + 0x30], edi
// 0042a117  3bc1                 cmp eax, ecx
// 0042a119  741a                 je 0x42a135
// 0042a11b  eb03                 jmp 0x42a120
// 0042a11d  8d4900               lea ecx, [ecx]
// 0042a120  8b30                 mov esi, dword ptr [eax]
// 0042a122  50                   push eax
// 0042a123  e852652700           call 0x6a067a
// 0042a128  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0042a12c  83c404               add esp, 4
// 0042a12f  8bc6                 mov eax, esi
// 0042a131  3bf1                 cmp esi, ecx
// 0042a133  75eb                 jne 0x42a120
// 0042a135  51                   push ecx
// 0042a136  e83f652700           call 0x6a067a
// 0042a13b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0042a13f  50                   push eax
// 0042a140  897c2434             mov dword ptr [esp + 0x34], edi
// 0042a144  e831652700           call 0x6a067a
// 0042a149  83c408               add esp, 8
// 0042a14c  8d4c2410             lea ecx, [esp + 0x10]
// 0042a150  ff15143f8000         call dword ptr [0x803f14]
// 0042a156  8b8c2484010000       mov ecx, dword ptr [esp + 0x184]
// 0042a15d  5f                   pop edi
// 0042a15e  5e                   pop esi
// 0042a15f  5d                   pop ebp
// 0042a160  5b                   pop ebx
// 0042a161  64890d00000000       mov dword ptr fs:[0], ecx
// 0042a168  81c480010000         add esp, 0x180
// 0042a16e  c20800               ret 8
// 0042a171  8b07                 mov eax, dword ptr [edi]
// 0042a173  e92cffffff           jmp 0x42a0a4
// 0042a178  8b07                 mov eax, dword ptr [edi]
// 0042a17a  e96bffffff           jmp 0x42a0ea

// from server: 81% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
typedef unsigned long DWORD;
typedef void* HANDLE;
typedef int BOOL;
struct FILETIME { DWORD dwLowDateTime; DWORD dwHighDateTime; };
struct WIN32_FIND_DATAA {
	DWORD dwFileAttributes;
	FILETIME ftCreationTime;
	FILETIME ftLastAccessTime;
	FILETIME ftLastWriteTime;
	DWORD nFileSizeHigh;
	DWORD nFileSizeLow;
	DWORD dwReserved0;
	DWORD dwReserved1;
	char cFileName[260];
	char cAlternateFileName[14];
};
#define INVALID_HANDLE_VALUE ((HANDLE)(long)-1)
#define FILE_ATTRIBUTE_DIRECTORY 0x10
extern "C" {
__declspec(dllimport) HANDLE __stdcall FindFirstFileA(const char*, WIN32_FIND_DATAA*);
__declspec(dllimport) BOOL __stdcall FindNextFileA(HANDLE, WIN32_FIND_DATAA*);
__declspec(dllimport) BOOL __stdcall DeleteFileA(const char*);
__declspec(dllimport) BOOL __stdcall PathAppendA(char*, const char*);
__declspec(dllimport) char* __stdcall PathAddBackslashA(char*);
}
#include <list>

template <class T> class CStringT_ {
public:
    __declspec(noinline) CStringT_() { m_pszData = 0; }
    __declspec(noinline) ~CStringT_() throw() { m_pszData = 0; }
    __declspec(noinline) operator const T*() const throw() { return m_pszData; }
    __declspec(noinline) int GetLength() const { return 0; }
    __declspec(noinline) T* GetBuffer(int n) { return m_pszData; }
    __declspec(noinline) void ReleaseBuffer(int n = -1) { }
    static __declspec(noinline) int __cdecl StringLength(const T* psz) { return 0; }
    T* m_pszData;
};
extern template class __declspec(dllimport) CStringT_<char>;
typedef CStringT_<char> CString;
CString operator+(const CString& str1, const char* psz2);

class LogDirectory
{
public:
	CString getPath();
};

class ThreadLogManager
{
public:
	int pad;
	LogDirectory logDirectory;
	void deleteOldLogs(const char* subdir, unsigned int keep);
};

class FileList : public std::list<WIN32_FIND_DATAA>
{
public:
	__declspec(noinline) FileList() {}

};
#include <algorithm>
struct OlderThan
{
	DWORD low, high;
	OlderThan(const FILETIME& t) : low(t.dwLowDateTime), high(t.dwHighDateTime) {}
	bool operator()(const WIN32_FIND_DATAA& data) const
	{
		return data.ftCreationTime.dwHighDateTime < high || (data.ftCreationTime.dwHighDateTime == high && data.ftCreationTime.dwLowDateTime < low);
	}
};
void insertAt(FileList&, FileList::iterator, const WIN32_FIND_DATAA&);
namespace std { template<> FileList::iterator find_if(FileList::iterator, FileList::iterator, OlderThan); }


void ThreadLogManager::deleteOldLogs(const char* subdir, unsigned int keep)
{
	CString path = logDirectory.getPath();
	char* buffer = path.GetBuffer(path.GetLength() + CString::StringLength(subdir) + 1);
	PathAppendA(buffer, subdir);
	path.ReleaseBuffer();
	PathAddBackslashA(path.GetBuffer(path.GetLength() + 1));
	path.ReleaseBuffer();

	FileList files;
	WIN32_FIND_DATAA findData;
	HANDLE hFind = FindFirstFileA(path + "*.*", &findData);
	if (hFind != INVALID_HANDLE_VALUE)
	{
		do
		{
			if (!(findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
				files.std::list<WIN32_FIND_DATAA>::insert(std::find_if(files.begin(), files.end(), OlderThan(findData.ftCreationTime)), findData);
		} while (FindNextFileA(hFind, &findData));
	}

	FileList::iterator iter = files.begin();
	for (unsigned int i = keep; i < files.size(); ++i)
	{
		DeleteFileA(path + iter->cFileName);
		++iter;
	}
}
