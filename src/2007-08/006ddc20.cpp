// from server: 82% by colin
// roc 2007-08 006ddc20  unit: CXTPDockingPaneWindowSelect  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ddc20
//
// 006ddc20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ddc24  56                   push esi
// 006ddc25  8bf1                 mov esi, ecx
// 006ddc27  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ddc2b  50                   push eax
// 006ddc2c  51                   push ecx
// 006ddc2d  8bce                 mov ecx, esi
// 006ddc2f  e8bceeffff           call 0x6dcaf0
// 006ddc34  85c0                 test eax, eax
// 006ddc36  7414                 je 0x6ddc4c
// 006ddc38  8b16                 mov edx, dword ptr [esi]
// 006ddc3a  898610010000         mov dword ptr [esi + 0x110], eax
// 006ddc40  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 006ddc46  6a01                 push 1
// 006ddc48  8bce                 mov ecx, esi
// 006ddc4a  ffd0                 call eax
// 006ddc4c  8bce                 mov ecx, esi
// 006ddc4e  e8eb25f5ff           call 0x63023e
// 006ddc53  5e                   pop esi
// 006ddc54  c20c00               ret 0xc

struct CXTPDockingPaneWindowSelect {
    char pad[0x110];
    void* field_110;
    void method(int, int, int);
};

extern "C" int __stdcall sub_6dcaf0(void*, int, int);
extern "C" void __stdcall sub_63023e(void*);

void CXTPDockingPaneWindowSelect::method(int a, int b, int c) {
    int r = sub_6dcaf0(this, b, c);
    if (r != 0) {
        field_110 = (void*)r;
        void** vtbl = *(void***)this;
        void (__stdcall *fn)(void*, int) = (void (__stdcall *)(void*, int))vtbl[0x8c / 4];
        fn(this, 1);
    }
    sub_63023e(this);
}
