// from server: 95% by colin
// roc 2007-08 0068f230  unit: CXTPDockingPane  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f230
//
// 0068f230  56                   push esi
// 0068f231  8b742408             mov esi, dword ptr [esp + 8]
// 0068f235  85f6                 test esi, esi
// 0068f237  57                   push edi
// 0068f238  8bf9                 mov edi, ecx
// 0068f23a  7417                 je 0x68f253
// 0068f23c  8d4f20               lea ecx, [edi + 0x20]
// 0068f23f  e8fc120500           call 0x6e0540
// 0068f244  8b10                 mov edx, dword ptr [eax]
// 0068f246  57                   push edi
// 0068f247  8bc8                 mov ecx, eax
// 0068f249  8b8240010000         mov eax, dword ptr [edx + 0x140]
// 0068f24f  6a01                 push 1
// 0068f251  ffd0                 call eax
// 0068f253  8bbfb4000000         mov edi, dword ptr [edi + 0xb4]
// 0068f259  85ff                 test edi, edi
// 0068f25b  740f                 je 0x68f26c
// 0068f25d  f7de                 neg esi
// 0068f25f  1bf6                 sbb esi, esi
// 0068f261  83e605               and esi, 5
// 0068f264  56                   push esi
// 0068f265  57                   push edi
// 0068f266  ff1520ed7700         call dword ptr [0x77ed20]
// 0068f26c  5f                   pop edi
// 0068f26d  5e                   pop esi
// 0068f26e  c20400               ret 4

extern "C" __declspec(dllimport) int __stdcall ShowWindow(void*, int);

struct Inner {
    void* GetSomething();
};

struct CXTPDockingPane {
    char pad[0x20];
    Inner field_20;
    char pad2[0xb4 - 0x24];
    void* field_b4;
    void Show(int);
};

void CXTPDockingPane::Show(int nCmdShow) {
    if (nCmdShow) {
        Inner* p = &field_20;
        void* obj = p->GetSomething();
        void* vtable = *(void**)obj;
        typedef void (__thiscall *Fn)(void*, void*, int);
        Fn fn = *(Fn*)((char*)vtable + 0x140);
        fn(obj, this, 1);
    }
    void* hwnd = *(void**)((char*)this + 0xb4);
    if (hwnd) {
        int cmd = nCmdShow ? 5 : 0;
        ShowWindow(hwnd, cmd);
    }
}
