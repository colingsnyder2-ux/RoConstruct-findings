// from server: 87% by colin
// roc 2007-08 0066acc0  unit: CXTPToolBar::CControlButtonExpand  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066acc0
//
// 0066acc0  57                   push edi
// 0066acc1  8bf9                 mov edi, ecx
// 0066acc3  8b8770010000         mov eax, dword ptr [edi + 0x170]
// 0066acc9  85c0                 test eax, eax
// 0066accb  7435                 je 0x66ad02
// 0066accd  53                   push ebx
// 0066acce  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0066acd2  56                   push esi
// 0066acd3  50                   push eax
// 0066acd4  8bcb                 mov ecx, ebx
// 0066acd6  e80592fdff           call 0x643ee0
// 0066acdb  8bf0                 mov esi, eax
// 0066acdd  85f6                 test esi, esi
// 0066acdf  741f                 je 0x66ad00
// 0066ace1  56                   push esi
// 0066ace2  8bcf                 mov ecx, edi
// 0066ace4  e887630000           call 0x671070
// 0066ace9  c7877001000000000000 mov dword ptr [edi + 0x170], 0
// 0066acf3  8b06                 mov eax, dword ptr [esi]
// 0066acf5  8b90d8010000         mov edx, dword ptr [eax + 0x1d8]
// 0066acfb  53                   push ebx
// 0066acfc  8bce                 mov ecx, esi
// 0066acfe  ffd2                 call edx
// 0066ad00  5e                   pop esi
// 0066ad01  5b                   pop ebx
// 0066ad02  5f                   pop edi
// 0066ad03  c20400               ret 4

struct CXTPToolBar
{
    char pad[0x170];
    void* m_pControlButtonExpand;
    void RemoveControlButtonExpand(void*);

    void CControlButtonExpand(void* pControl);
};

struct CXTPControlButtonExpand
{
    void* m_pParent;
    void OnRemoved(void*);
};

struct CXTPControls
{
    void* Find(void*);
};

void CXTPToolBar::CControlButtonExpand(void* pControl)
{
    if (m_pControlButtonExpand != 0)
    {
        CXTPControlButtonExpand* pExpand = (CXTPControlButtonExpand*)((CXTPControls*)pControl)->Find(m_pControlButtonExpand);
        if (pExpand != 0)
        {
            RemoveControlButtonExpand(pExpand);
            m_pControlButtonExpand = 0;
            pExpand->OnRemoved(pControl);
        }
    }
}
