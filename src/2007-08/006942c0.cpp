// from server: 88% by colin
// roc 2007-08 006942c0  unit: CXTPStatusBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006942c0
//
// 006942c0  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 006942c3  e8a88e0600           call 0x6fd170
// 006942c8  83f8ff               cmp eax, -1
// 006942cb  7508                 jne 0x6942d5
// 006942cd  6a00                 push 0
// 006942cf  ff15b8ed7700         call dword ptr [0x77edb8]
// 006942d5  c3                   ret 

struct Inner {
    int GetHeight();
};

struct CXTPStatusBar {
    char pad[0x6c];
    Inner* m_pInner;
    int GetHeight();
};

extern "C" int __stdcall GetSystemMetrics(int);

int CXTPStatusBar::GetHeight()
{
    int n = m_pInner->GetHeight();
    if (n == -1)
        return GetSystemMetrics(0);
    return n;
}
