// from server: 75% by colin
// roc 2007-08 00694e50  unit: CXTPToolTipContext::CStandardToolTip  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00694e50
//
// 00694e50  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 00694e53  85c0                 test eax, eax
// 00694e55  7419                 je 0x694e70
// 00694e57  83782000             cmp dword ptr [eax + 0x20], 0
// 00694e5b  7413                 je 0x694e70
// 00694e5d  8b4020               mov eax, dword ptr [eax + 0x20]
// 00694e60  6a00                 push 0
// 00694e62  6a00                 push 0
// 00694e64  6801040000           push 0x401
// 00694e69  50                   push eax
// 00694e6a  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00694e70  c3                   ret 

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CXTPToolTipContext
{
    struct CStandardToolTip
    {
        void UpdateTip();
    };
};

void CXTPToolTipContext::CStandardToolTip::UpdateTip()
{
    void* p = *(void**)((char*)this + 0x5c);
    if (p != 0)
    {
        void* h = *(void**)((char*)p + 0x20);
        if (h != 0)
        {
            SendMessageA(h, 0x401, 0, 0);
        }
    }
}
