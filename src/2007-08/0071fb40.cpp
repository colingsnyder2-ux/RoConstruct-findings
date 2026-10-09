// from server: 73% by colin
// roc 2007-08 0071fb40  unit: CXTPDockingPaneAutoHidePanel  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071fb40
//
// 0071fb40  53                   push ebx
// 0071fb41  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0071fb45  56                   push esi
// 0071fb46  57                   push edi
// 0071fb47  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0071fb4b  8bf1                 mov esi, ecx
// 0071fb4d  397e18               cmp dword ptr [esi + 0x18], edi
// 0071fb50  7513                 jne 0x71fb65
// 0071fb52  8b06                 mov eax, dword ptr [esi]
// 0071fb54  8b5014               mov edx, dword ptr [eax + 0x14]
// 0071fb57  ffd2                 call edx
// 0071fb59  85c0                 test eax, eax
// 0071fb5b  7527                 jne 0x71fb84
// 0071fb5d  56                   push esi
// 0071fb5e  8bcb                 mov ecx, ebx
// 0071fb60  e80b4cfcff           call 0x6e4770
// 0071fb65  8b763c               mov esi, dword ptr [esi + 0x3c]
// 0071fb68  85f6                 test esi, esi
// 0071fb6a  7418                 je 0x71fb84
// 0071fb6c  8d642400             lea esp, [esp]
// 0071fb70  8bc6                 mov eax, esi
// 0071fb72  8b4808               mov ecx, dword ptr [eax + 8]
// 0071fb75  8b01                 mov eax, dword ptr [ecx]
// 0071fb77  8b500c               mov edx, dword ptr [eax + 0xc]
// 0071fb7a  8b36                 mov esi, dword ptr [esi]
// 0071fb7c  53                   push ebx
// 0071fb7d  57                   push edi
// 0071fb7e  ffd2                 call edx
// 0071fb80  85f6                 test esi, esi
// 0071fb82  75ec                 jne 0x71fb70
// 0071fb84  5f                   pop edi
// 0071fb85  5e                   pop esi
// 0071fb86  5b                   pop ebx
// 0071fb87  c20800               ret 8

struct CXTPDockingPaneAutoHidePanel {
    void* m_vt;
    char pad[0x14];
    int m_nID;
    char pad2[0x20];
    void* m_pList;
    void OnPaneClosed(void* pPanel, int nID);
};

extern "C" void __stdcall sub_6e4770(void* p1, void* p2);

void CXTPDockingPaneAutoHidePanel::OnPaneClosed(void* pPanel, int nID)
{
    if (m_nID == nID) {
        void** vt = *(void***)this;
        int (__stdcall* fn)(void*) = (int (__stdcall*)(void*))vt[5];
        if (fn(this) == 0) {
            sub_6e4770(pPanel, this);
        }
    }
    void* p = m_pList;
    while (p != 0) {
        void* next = *(void**)p;
        void* obj = *(void**)((char*)p + 8);
        void** vt2 = *(void***)obj;
        void (__stdcall* fn2)(void*, void*, int) = (void (__stdcall*)(void*, void*, int))vt2[3];
        fn2(obj, pPanel, nID);
        p = next;
    }
}
