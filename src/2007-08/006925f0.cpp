// from server: 38% by colin
// roc 2007-08 006925f0  unit: CXTPStatusBarPane  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006925f0
//
// 006925f0  56                   push esi
// 006925f1  8bf1                 mov esi, ecx
// 006925f3  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 006925f6  57                   push edi
// 006925f7  e8d4fdffff           call 0x6923d0
// 006925fc  85c0                 test eax, eax
// 006925fe  7432                 je 0x692632
// 00692600  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00692604  8b38                 mov edi, dword ptr [eax]
// 00692606  56                   push esi
// 00692607  83ec10               sub esp, 0x10
// 0069260a  8bd4                 mov edx, esp
// 0069260c  890a                 mov dword ptr [edx], ecx
// 0069260e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00692612  894a04               mov dword ptr [edx + 4], ecx
// 00692615  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00692619  894a08               mov dword ptr [edx + 8], ecx
// 0069261c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00692620  894a0c               mov dword ptr [edx + 0xc], ecx
// 00692623  8b542420             mov edx, dword ptr [esp + 0x20]
// 00692627  8bc8                 mov ecx, eax
// 00692629  8b8794000000         mov eax, dword ptr [edi + 0x94]
// 0069262f  52                   push edx
// 00692630  ffd0                 call eax
// 00692632  5f                   pop edi
// 00692633  5e                   pop esi
// 00692634  c21400               ret 0x14

struct CXTPStatusBarPane {
    void OnDrawPane(void*, int, int, int, int);
};

struct CXTPStatusBarPaneHelper {
    void* FindPane(void*);
};

extern "C" void* __stdcall sub_6923D0(void*);

void CXTPStatusBarPane::OnDrawPane(void* pDC, int x, int y, int cx, int cy)
{
    void* pane = sub_6923D0(*(void**)((char*)this + 0x50));
    if (pane == 0) {
        void** vtbl = *(void***)pane;
        typedef void (__stdcall *DrawFn)(void*, void*, int, int, int, int);
        DrawFn fn = (DrawFn)vtbl[0x94 / 4];
        fn(pane, pDC, x, y, cx, cy);
    }
}
