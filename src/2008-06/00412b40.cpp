// from server: 100% by atomic.potato
// roc 2008-06 00412b40  unit: CChildFrame  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00412b40
//
// 00412b40  56                   push esi
// 00412b41  8bf1                 mov esi, ecx
// 00412b43  8b4620               mov eax, dword ptr [esi + 0x20]
// 00412b46  50                   push eax
// 00412b47  ff15f82d8000         call dword ptr [0x802df8]
// 00412b4d  50                   push eax
// 00412b4e  e88be02800           call 0x6a0bde
// 00412b53  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00412b56  6a05                 push 5
// 00412b58  51                   push ecx
// 00412b59  ff15fc2d8000         call dword ptr [0x802dfc]
// 00412b5f  50                   push eax
// 00412b60  e879e02800           call 0x6a0bde
// 00412b65  3bc6                 cmp eax, esi
// 00412b67  b803000000           mov eax, 3
// 00412b6c  7404                 je 0x412b72
// 00412b6e  8b442408             mov eax, dword ptr [esp + 8]
// 00412b72  50                   push eax
// 00412b73  8bce                 mov ecx, esi
// 00412b75  e892e22800           call 0x6a0e0c
// 00412b7a  5e                   pop esi
// 00412b7b  c20400               ret 4

struct CWnd
{
    char pad[0x20];
    void* m_hWnd;
};

struct CChildFrame
{
    char pad[0x20];
    void* m_hWnd;
    void SetChild(int nCmdShow);
    void sub_6A0E0C(int n);
};

extern "C" void* (__stdcall *GetParent)(void*);
extern "C" void* (__stdcall *GetWindow)(void*, unsigned int);

CWnd* __stdcall sub_6A0BDE(void*);

void CChildFrame::SetChild(int nCmdShow)
{
    CWnd* pParent = sub_6A0BDE(GetParent(m_hWnd));
    CWnd* pOwner = sub_6A0BDE(GetWindow(pParent->m_hWnd, 5));
    int n = (pOwner == (CWnd*)this) ? 3 : nCmdShow;
    sub_6A0E0C(n);
}
