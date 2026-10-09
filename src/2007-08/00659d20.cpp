// from server: 60% by colin
// roc 2007-08 00659d20  unit: CXTPReportControl  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00659d20
//
// 00659d20  53                   push ebx
// 00659d21  8b1da0ed7700         mov ebx, dword ptr [0x77eda0]
// 00659d27  56                   push esi
// 00659d28  8bf1                 mov esi, ecx
// 00659d2a  8b86a0010000         mov eax, dword ptr [esi + 0x1a0]
// 00659d30  85c0                 test eax, eax
// 00659d32  57                   push edi
// 00659d33  7415                 je 0x659d4a
// 00659d35  8b4020               mov eax, dword ptr [eax + 0x20]
// 00659d38  85c0                 test eax, eax
// 00659d3a  740e                 je 0x659d4a
// 00659d3c  50                   push eax
// 00659d3d  ffd3                 call ebx
// 00659d3f  85c0                 test eax, eax
// 00659d41  7407                 je 0x659d4a
// 00659d43  bf01000000           mov edi, 1
// 00659d48  eb02                 jmp 0x659d4c
// 00659d4a  33ff                 xor edi, edi
// 00659d4c  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 00659d52  85c0                 test eax, eax
// 00659d54  741b                 je 0x659d71
// 00659d56  83782000             cmp dword ptr [eax + 0x20], 0
// 00659d5a  7415                 je 0x659d71
// 00659d5c  8b4020               mov eax, dword ptr [eax + 0x20]
// 00659d5f  50                   push eax
// 00659d60  ffd3                 call ebx
// 00659d62  85c0                 test eax, eax
// 00659d64  740b                 je 0x659d71
// 00659d66  b801000000           mov eax, 1
// 00659d6b  0bc7                 or eax, edi
// 00659d6d  5f                   pop edi
// 00659d6e  5e                   pop esi
// 00659d6f  5b                   pop ebx
// 00659d70  c3                   ret 
// 00659d71  33c0                 xor eax, eax
// 00659d73  0bc7                 or eax, edi
// 00659d75  5f                   pop edi
// 00659d76  5e                   pop esi
// 00659d77  5b                   pop ebx
// 00659d78  c3                   ret 

extern "C" int __stdcall IsWindowVisible(void*);

struct CXTPReportControl {
    int m_pad0[0x68];
    void* m_pWnd1;
    int m_pad1;
    void* m_pWnd2;
    int IsVisible();
};

int CXTPReportControl::IsVisible()
{
    int result = 0;
    if (m_pWnd1 == 0) {
        void* h = *(void**)((char*)m_pWnd1 + 0x20);
        if (h != 0) {
            if (IsWindowVisible(h) != 0)
                result = 1;
        }
    }
    if (m_pWnd2 != 0) {
        if (*(int*)((char*)m_pWnd2 + 0x20) != 0) {
            void* h = *(void**)((char*)m_pWnd2 + 0x20);
            if (IsWindowVisible(h) != 0)
                result |= 1;
        }
    }
    return result;
}
