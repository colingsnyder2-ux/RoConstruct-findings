// from server: 63% by colin
// roc 2007-08 006a1290  unit: CXTPDockBar  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a1290
//
// 006a1290  56                   push esi
// 006a1291  8bf1                 mov esi, ecx
// 006a1293  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006a1296  8d44240c             lea eax, [esp + 0xc]
// 006a129a  50                   push eax
// 006a129b  51                   push ecx
// 006a129c  ff15f0ed7700         call dword ptr [0x77edf0]
// 006a12a2  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a12a6  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 006a12a9  8b11                 mov edx, dword ptr [ecx]
// 006a12ab  8b5268               mov edx, dword ptr [edx + 0x68]
// 006a12ae  50                   push eax
// 006a12af  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a12b3  50                   push eax
// 006a12b4  6a00                 push 0
// 006a12b6  ffd2                 call edx
// 006a12b8  5e                   pop esi
// 006a12b9  c20c00               ret 0xc

struct CXTPDockBar {
    char pad[0x20];
    void* hwnd;
    char pad2[0x48];
    void* pSome;
    void Method(int, int, int);
};

extern "C" int __stdcall ClientToScreen(void*, void*);

void CXTPDockBar::Method(int x, int y, int z)
{
    int pt[2];
    ClientToScreen(hwnd, pt);
    void* p = pSome;
    void** vtbl = *(void***)p;
    void (*fn)(void*, int, int, int) = (void (*)(void*, int, int, int))vtbl[0x68 / 4];
    fn(p, pt[0], pt[1], 0);
}
