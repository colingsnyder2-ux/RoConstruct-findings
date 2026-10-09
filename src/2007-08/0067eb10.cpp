// from server: 69% by colin
// roc 2007-08 0067eb10  unit: CXTPControlSelector  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067eb10
//
// 0067eb10  8b542404             mov edx, dword ptr [esp + 4]
// 0067eb14  56                   push esi
// 0067eb15  8bf1                 mov esi, ecx
// 0067eb17  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0067eb1d  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 0067eb23  3bd0                 cmp edx, eax
// 0067eb25  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0067eb29  750b                 jne 0x67eb36
// 0067eb2b  3bc1                 cmp eax, ecx
// 0067eb2d  7507                 jne 0x67eb36
// 0067eb2f  837c241000           cmp dword ptr [esp + 0x10], 0
// 0067eb34  7421                 je 0x67eb57
// 0067eb36  6a01                 push 1
// 0067eb38  8bce                 mov ecx, esi
// 0067eb3a  899678010000         mov dword ptr [esi + 0x178], edx
// 0067eb40  89867c010000         mov dword ptr [esi + 0x17c], eax
// 0067eb46  e845bbfbff           call 0x63a690
// 0067eb4b  6806100000           push 0x1006
// 0067eb50  8bce                 mov ecx, esi
// 0067eb52  e849d9fbff           call 0x63c4a0
// 0067eb57  5e                   pop esi
// 0067eb58  c20c00               ret 0xc

struct CXTPControlSelector {
    char pad[0x178];
    unsigned int m_nMin;
    unsigned int m_nMax;
    void SetRange(unsigned int, unsigned int, int);
    void OnChanged(int);
    void Notify(int);
};

void CXTPControlSelector::SetRange(unsigned int nMin, unsigned int nMax, int bNotify) {
    unsigned int oldMin = m_nMin;
    unsigned int oldMax = m_nMax;
    if (nMin != oldMin || nMax != oldMax || bNotify != 0) {
        m_nMin = nMin;
        m_nMax = nMax;
        OnChanged(1);
        Notify(0x1006);
    }
}
