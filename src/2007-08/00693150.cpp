// from server: 57% by colin
// roc 2007-08 00693150  unit: CXTPStatusBar  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00693150
//
// 00693150  8b442408             mov eax, dword ptr [esp + 8]
// 00693154  56                   push esi
// 00693155  50                   push eax
// 00693156  e805fbffff           call 0x692c60
// 0069315b  85c0                 test eax, eax
// 0069315d  742e                 je 0x69318d
// 0069315f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00693163  8b30                 mov esi, dword ptr [eax]
// 00693165  83ec10               sub esp, 0x10
// 00693168  8bd4                 mov edx, esp
// 0069316a  890a                 mov dword ptr [edx], ecx
// 0069316c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00693170  894a04               mov dword ptr [edx + 4], ecx
// 00693173  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00693177  894a08               mov dword ptr [edx + 8], ecx
// 0069317a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0069317e  894a0c               mov dword ptr [edx + 0xc], ecx
// 00693181  8b542418             mov edx, dword ptr [esp + 0x18]
// 00693185  8bc8                 mov ecx, eax
// 00693187  8b4660               mov eax, dword ptr [esi + 0x60]
// 0069318a  52                   push edx
// 0069318b  ffd0                 call eax
// 0069318d  5e                   pop esi
// 0069318e  c21800               ret 0x18

struct CXTPStatusBar
{
    void SetPaneText(int nIndex, int nText, int nImage, int nWidth, int nStyle, int nID);
};

extern void* __cdecl sub_00692C60(int);

void CXTPStatusBar::SetPaneText(int nIndex, int nText, int nImage, int nWidth, int nStyle, int nID)
{
    void* p = sub_00692C60(nText);
    if (p != 0)
    {
        int* vtable = *(int**)p;
        int args[4];
        args[0] = nImage;
        args[1] = nWidth;
        args[2] = nStyle;
        args[3] = nID;
        ((void (__thiscall*)(void*, int, int, int, int, int))vtable[0x60 / 4])(p, nIndex, args[0], args[1], args[2], args[3]);
    }
}
