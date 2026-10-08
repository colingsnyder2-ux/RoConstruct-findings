// from server: 88% by colin
// roc 2007-08 00678de0  unit: CXTPPopupBar  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00678de0
//
// 00678de0  8b442404             mov eax, dword ptr [esp + 4]
// 00678de4  56                   push esi
// 00678de5  8bf1                 mov esi, ecx
// 00678de7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00678deb  898684010000         mov dword ptr [esi + 0x184], eax
// 00678df1  8b442410             mov eax, dword ptr [esp + 0x10]
// 00678df5  85c0                 test eax, eax
// 00678df7  898e88010000         mov dword ptr [esi + 0x188], ecx
// 00678dfd  740e                 je 0x678e0d
// 00678dff  50                   push eax
// 00678e00  8d868c010000         lea eax, [esi + 0x18c]
// 00678e06  50                   push eax
// 00678e07  ff15e0ed7700         call dword ptr [0x77ede0]
// 00678e0d  8b16                 mov edx, dword ptr [esi]
// 00678e0f  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00678e15  6a00                 push 0
// 00678e17  6a00                 push 0
// 00678e19  8bce                 mov ecx, esi
// 00678e1b  ffd0                 call eax
// 00678e1d  5e                   pop esi
// 00678e1e  c20c00               ret 0xc

extern "C" void __stdcall CopyRect(void*, const void*);

struct CXTPPopupBar
{
    void SetRect(int left, int top, const void* src);
};

void CXTPPopupBar::SetRect(int left, int top, const void* src)
{
    *(int*)((char*)this + 0x184) = left;
    *(int*)((char*)this + 0x188) = top;
    if (src != 0)
    {
        CopyRect((char*)this + 0x18c, src);
    }
    (*(void(__thiscall**)(CXTPPopupBar*, int, int))(*(int*)this + 0x158))(this, 0, 0);
}
