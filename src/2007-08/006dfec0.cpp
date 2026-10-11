// from server: 93% by atomic.potato
// roc 2007-08 006dfec0  unit: CXTPDockingPaneMiniWnd  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dfec0
//
// 006dfec0  56                   push esi
// 006dfec1  8bf1                 mov esi, ecx
// 006dfec3  8b0d88888b00         mov ecx, dword ptr [0x8b8888]
// 006dfec9  85c9                 test ecx, ecx
// 006dfecb  740d                 je 0x6dfeda
// 006dfecd  a18c888b00           mov eax, dword ptr [0x8b888c]
// 006dfed2  99                   cdq 
// 006dfed3  f7f9                 idiv ecx
// 006dfed5  83f801               cmp eax, 1
// 006dfed8  7d05                 jge 0x6dfedf
// 006dfeda  b801000000           mov eax, 1
// 006dfedf  57                   push edi
// 006dfee0  898628010000         mov dword ptr [esi + 0x128], eax
// 006dfee6  89862c010000         mov dword ptr [esi + 0x12c], eax
// 006dfeec  8b4620               mov eax, dword ptr [esi + 0x20]
// 006dfeef  8dbe00010000         lea edi, [esi + 0x100]
// 006dfef5  57                   push edi
// 006dfef6  50                   push eax
// 006dfef7  ff15d4ed7700         call dword ptr [0x77edd4]
// 006dfefd  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 006dff00  2b4f04               sub ecx, dword ptr [edi + 4]
// 006dff03  83be3c01000000       cmp dword ptr [esi + 0x13c], 0
// 006dff0a  898e24010000         mov dword ptr [esi + 0x124], ecx
// 006dff10  c7863401000001000000 mov dword ptr [esi + 0x134], 1
// 006dff1a  5f                   pop edi
// 006dff1b  741f                 je 0x6dff3c
// 006dff1d  8b5620               mov edx, dword ptr [esi + 0x20]
// 006dff20  6a03                 push 3
// 006dff22  52                   push edx
// 006dff23  c7863c01000000000000 mov dword ptr [esi + 0x13c], 0
// 006dff2d  ff15e0ec7700         call dword ptr [0x77ece0]
// 006dff33  6a0b                 push 0xb
// 006dff35  8bce                 mov ecx, esi
// 006dff37  e854f8ffff           call 0x6df790
// 006dff3c  8b4620               mov eax, dword ptr [esi + 0x20]
// 006dff3f  6a00                 push 0
// 006dff41  6a64                 push 0x64
// 006dff43  6a01                 push 1
// 006dff45  50                   push eax
// 006dff46  c7863801000001000000 mov dword ptr [esi + 0x138], 1
// 006dff50  c7863001000006000000 mov dword ptr [esi + 0x130], 6
// 006dff5a  ff15eced7700         call dword ptr [0x77edec]
// 006dff60  5e                   pop esi
// 006dff61  c3                   ret 

extern "C" {
    int __stdcall GetWindowRect(void*, void*);
    int __stdcall KillTimer(void*, unsigned int);
    int __stdcall SetTimer(void*, unsigned int, unsigned int, void*);
}

struct CXTPDockingPaneMiniWnd {
    char pad[0x20];
    void* m_hWnd;
    char pad2[0x100 - 0x24];
    int m_rect[4];
    char pad3[0x14];
    int m_124;
    int m_128;
    int m_12c;
    int m_130;
    int m_134;
    int m_138;
    int m_13c;
    void OnTimer(unsigned int);
    void Init();
};

void CXTPDockingPaneMiniWnd::Init()
{
    int v;
    if (*(int*)0x8b8888 != 0) {
        v = *(int*)0x8b888c / *(int*)0x8b8888;
        if (v < 1)
            v = 1;
    } else {
        v = 1;
    }
    m_128 = v;
    m_12c = v;
    GetWindowRect(m_hWnd, &m_rect[0]);
    m_124 = m_rect[2] - m_rect[0];
    m_134 = 1;
    if (m_13c != 0) {
        m_13c = 0;
        KillTimer(m_hWnd, 3);
        OnTimer(0xb);
    }
    m_138 = 1;
    m_130 = 6;
    SetTimer(m_hWnd, 1, 0x64, 0);
}
