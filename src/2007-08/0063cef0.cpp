// from server: 100% by colin
// roc 2007-08 0063cef0  unit: CXTPPaintManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063cef0
//
// 0063cef0  8b81f8000000         mov eax, dword ptr [ecx + 0xf8]
// 0063cef6  83f816               cmp eax, 0x16
// 0063cef9  7d05                 jge 0x63cf00
// 0063cefb  b816000000           mov eax, 0x16
// 0063cf00  c3                   ret 

struct CXTPPaintManager {
    char pad0[0xf8];
    int m_nMinHeight;
    int GetMinHeight();
};

int CXTPPaintManager::GetMinHeight()
{
    int value = m_nMinHeight;
    if (value < 0x16)
        value = 0x16;
    return value;
}
