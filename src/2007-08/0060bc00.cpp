// from server: 85% by colin
// roc 2007-08 0060bc00  unit: CXTCaptionButtonTheme  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060bc00
//
// 0060bc00  8b442404             mov eax, dword ptr [esp + 4]
// 0060bc04  8a4073               mov al, byte ptr [eax + 0x73]
// 0060bc07  84c0                 test al, al
// 0060bc09  56                   push esi
// 0060bc0a  8bf1                 mov esi, ecx
// 0060bc0c  7416                 je 0x60bc24
// 0060bc0e  807e2c00             cmp byte ptr [esi + 0x2c], 0
// 0060bc12  750c                 jne 0x60bc20
// 0060bc14  e867ffffff           call 0x60bb80
// 0060bc19  88462c               mov byte ptr [esi + 0x2c], al
// 0060bc1c  5e                   pop esi
// 0060bc1d  c20400               ret 4
// 0060bc20  84c0                 test al, al
// 0060bc22  750a                 jne 0x60bc2e
// 0060bc24  807e2c00             cmp byte ptr [esi + 0x2c], 0
// 0060bc28  7404                 je 0x60bc2e
// 0060bc2a  c6462c00             mov byte ptr [esi + 0x2c], 0
// 0060bc2e  5e                   pop esi
// 0060bc2f  c20400               ret 4

struct CXTCaptionButtonTheme {
    char pad[0x2c];
    char m_bCached;
    char pad2[0x73 - 0x2d];
    char m_bFlag;
    char f(void* p);
    char g();
};

char CXTCaptionButtonTheme::f(void* p) {
    char al = ((char*)p)[0x73];
    if (al) {
        if (m_bCached != 0) {
            m_bCached = g();
            return m_bCached;
        }
        if (al) {
            return m_bCached;
        }
    }
    if (m_bCached != 0) {
        m_bCached = 0;
    }
    return m_bCached;
}
