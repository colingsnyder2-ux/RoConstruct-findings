// roc 2009-12 0046ab60  unit: Scintilla::CScintillaCtrl  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046ab60
//
// 0046ab60  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046ab64  56                   push esi
// 0046ab65  57                   push edi
// 0046ab66  8bf1                 mov esi, ecx
// 0046ab68  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0046ab6c  8b06                 mov eax, dword ptr [esi]
// 0046ab6e  8b4060               mov eax, dword ptr [eax + 0x60]
// 0046ab71  51                   push ecx
// 0046ab72  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0046ab76  52                   push edx
// 0046ab77  8b542418             mov edx, dword ptr [esp + 0x18]
// 0046ab7b  51                   push ecx
// 0046ab7c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0046ab80  52                   push edx
// 0046ab81  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0046ab85  51                   push ecx
// 0046ab86  6a00                 push 0
// 0046ab88  6808f89a00           push 0x9af808
// 0046ab8d  52                   push edx
// 0046ab8e  8bce                 mov ecx, esi
// 0046ab90  ffd0                 call eax
// 0046ab92  8bf8                 mov edi, eax
// 0046ab94  85ff                 test edi, edi
// 0046ab96  742e                 je 0x46abc6
// 0046ab98  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0046ab9b  53                   push ebx
// 0046ab9c  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 0046aba2  6a00                 push 0
// 0046aba4  6a00                 push 0
// 0046aba6  6888080000           push 0x888
// 0046abab  51                   push ecx
// 0046abac  ffd3                 call ebx
// 0046abae  8b5620               mov edx, dword ptr [esi + 0x20]
// 0046abb1  6a00                 push 0
// 0046abb3  6a00                 push 0
// 0046abb5  6889080000           push 0x889
// 0046abba  52                   push edx
// 0046abbb  894654               mov dword ptr [esi + 0x54], eax
// 0046abbe  ffd3                 call ebx
// 0046abc0  894658               mov dword ptr [esi + 0x58], eax
// 0046abc3  8bc7                 mov eax, edi
// 0046abc5  5b                   pop ebx
// 0046abc6  5f                   pop edi
// 0046abc7  5e                   pop esi
// 0046abc8  c21800               ret 0x18
// copied from an identical function in another client (function ?Create@CScintillaCtrl@@QAEHKABURECT@@PAUCWnd@@IKPAX@Z)

// from server: 100% by colin
typedef void* NULLPTR;
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
typedef unsigned long DWORD;
typedef int BOOL;
typedef unsigned int UINT;
typedef long LPARAM;
typedef unsigned long WPARAM;
typedef void* LPVOID;
typedef long LRESULT;
typedef const char* LPCTSTR;

struct RECT { long left; long top; long right; long bottom; };

__declspec(dllimport) LRESULT __stdcall SendMessageW(void* hWnd, UINT msg, WPARAM wp, LPARAM lp);

struct CWnd
{
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual BOOL CreateEx(DWORD dwExStyle, LPCTSTR lpszClassName, LPCTSTR lpszWindowName,
                          DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, LPVOID lpParam);
    void* m_pad0[7];
    void* m_hWnd;
    void* m_pad1[12];
    LRESULT SendMessage(UINT message, WPARAM wParam, LPARAM lParam)
    {
        return SendMessageW(m_hWnd, message, wParam, lParam);
    }
};

struct CScintillaCtrl : CWnd
{
    LRESULT m_DirectFunction;
    LRESULT m_DirectPointer;
    BOOL Create(DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, DWORD dwExStyle, LPVOID lpParam);
    inline void SetupDirectAccess()
    {
        m_DirectFunction = SendMessage(0x888, 0, 0);
        m_DirectPointer = SendMessage(0x889, 0, 0);
    }
};

BOOL CScintillaCtrl::Create(DWORD dwStyle, const RECT& rect, CWnd* pParentWnd, UINT nID, DWORD dwExStyle, LPVOID lpParam)
{
    BOOL bSuccess = CreateEx(dwExStyle, "scintilla", 0, dwStyle, rect, pParentWnd, nID, lpParam);
    if (bSuccess)
        SetupDirectAccess();
    return bSuccess;
}