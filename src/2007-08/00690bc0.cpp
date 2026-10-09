// from server: 83% by colin
// roc 2007-08 00690bc0  unit: CXTSplitterWnd  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00690bc0
//
// 00690bc0  56                   push esi
// 00690bc1  57                   push edi
// 00690bc2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00690bc6  83ff1a               cmp edi, 0x1a
// 00690bc9  8bf1                 mov esi, ecx
// 00690bcb  7405                 je 0x690bd2
// 00690bcd  83ff15               cmp edi, 0x15
// 00690bd0  751c                 jne 0x690bee
// 00690bd2  e8a9f6ffff           call 0x690280
// 00690bd7  8b10                 mov edx, dword ptr [eax]
// 00690bd9  8bc8                 mov ecx, eax
// 00690bdb  8b4204               mov eax, dword ptr [edx + 4]
// 00690bde  ffd0                 call eax
// 00690be0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00690be3  6a00                 push 0
// 00690be5  6a00                 push 0
// 00690be7  51                   push ecx
// 00690be8  ff15dcec7700         call dword ptr [0x77ecdc]
// 00690bee  8b542418             mov edx, dword ptr [esp + 0x18]
// 00690bf2  8b442414             mov eax, dword ptr [esp + 0x14]
// 00690bf6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00690bfa  52                   push edx
// 00690bfb  50                   push eax
// 00690bfc  51                   push ecx
// 00690bfd  57                   push edi
// 00690bfe  8bce                 mov ecx, esi
// 00690c00  e8d7f1f9ff           call 0x62fddc
// 00690c05  5f                   pop edi
// 00690c06  5e                   pop esi
// 00690c07  c21000               ret 0x10

struct CXTSplitterWnd {
    char pad[0x20];
    void* hwnd;
    void OnCommand(unsigned int id, unsigned int code, void* p, int extra);
    void* GetSomething();
};

extern "C" int __stdcall InvalidateRect(void*, const void*, int);

void CXTSplitterWnd::OnCommand(unsigned int id, unsigned int code, void* p, int extra) {
    if (id == 0x1a || id == 0x15) {
        void* obj = GetSomething();
        void** vt = *(void***)obj;
        typedef void (__thiscall *Fn)(void*);
        ((Fn)vt[1])(obj);
        InvalidateRect(hwnd, 0, 0);
    }
    void* a = *(void**)((char*)this + 0x10);
    void* b = *(void**)((char*)this + 0x14);
    void* c = *(void**)((char*)this + 0x18);
    void (__thiscall *fn)(CXTSplitterWnd*, unsigned int, void*, void*, void*) = (void (__thiscall *)(CXTSplitterWnd*, unsigned int, void*, void*, void*))0x62fddc;
    fn(this, id, a, b, c);
}
