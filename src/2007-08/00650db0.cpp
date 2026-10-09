// from server: 53% by colin
// roc 2007-08 00650db0  unit: CXTPCommandBar  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00650db0
//
// 00650db0  83ec08               sub esp, 8
// 00650db3  83b91001000000       cmp dword ptr [ecx + 0x110], 0
// 00650dba  7509                 jne 0x650dc5
// 00650dbc  83b91401000000       cmp dword ptr [ecx + 0x114], 0
// 00650dc3  741b                 je 0x650de0
// 00650dc5  8b9110010000         mov edx, dword ptr [ecx + 0x110]
// 00650dcb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00650dcf  8b8914010000         mov ecx, dword ptr [ecx + 0x114]
// 00650dd5  8910                 mov dword ptr [eax], edx
// 00650dd7  894804               mov dword ptr [eax + 4], ecx
// 00650dda  83c408               add esp, 8
// 00650ddd  c20400               ret 4
// 00650de0  8b11                 mov edx, dword ptr [ecx]
// 00650de2  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 00650de8  8d0424               lea eax, [esp]
// 00650deb  50                   push eax
// 00650dec  ffd2                 call edx
// 00650dee  8b0424               mov eax, dword ptr [esp]
// 00650df1  8b542404             mov edx, dword ptr [esp + 4]
// 00650df5  8d4806               lea ecx, [eax + 6]
// 00650df8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00650dfc  83c206               add edx, 6
// 00650dff  8908                 mov dword ptr [eax], ecx
// 00650e01  895004               mov dword ptr [eax + 4], edx
// 00650e04  83c408               add esp, 8
// 00650e07  c20400               ret 4

struct CXTPCommandBar
{
    int m_nLeft;
    int m_nTop;
    void GetRect(int* out);
};

void CXTPCommandBar::GetRect(int* out)
{
    if (m_nLeft == 0 && m_nTop == 0)
    {
        int tmp[2];
        (*(void (__thiscall **)(CXTPCommandBar*, int*))(*(int*)this + 0x150))(this, tmp);
        out[0] = tmp[0] + 6;
        out[1] = tmp[1] + 6;
    }
    else
    {
        out[0] = m_nLeft;
        out[1] = m_nTop;
    }
}
