// from server: 78% by colin
// roc 2007-08 006a3fc0  unit: PAUHWND__::?$CArray  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3fc0
//
// 006a3fc0  8b442404             mov eax, dword ptr [esp + 4]
// 006a3fc4  8b5134               mov edx, dword ptr [ecx + 0x34]
// 006a3fc7  83c12c               add ecx, 0x2c
// 006a3fca  50                   push eax
// 006a3fcb  52                   push edx
// 006a3fcc  e83fe90200           call 0x6d2910
// 006a3fd1  c20400               ret 4

struct HWND__;

struct CArrayHWND {
    char pad[0x2c];
    unsigned int m_nSize;
    HWND__** m_pData;
    void Add(HWND__* newElement);
};

extern "C" void __stdcall CArrayHWND_Add_impl(void* pArray, HWND__** pData, HWND__* newElement);

void CArrayHWND::Add(HWND__* newElement)
{
    CArrayHWND_Add_impl((char*)this + 0x2c, m_pData, newElement);
}
