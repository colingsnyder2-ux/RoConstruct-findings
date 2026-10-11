// from server: 100% by colin
// roc 2008-06 0042e6b0  unit: CMainFrame  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042e6b0
//
// 0042e6b0  56                   push esi
// 0042e6b1  6a00                 push 0
// 0042e6b3  8bf1                 mov esi, ecx
// 0042e6b5  e8a6922700           call 0x6a7960
// 0042e6ba  c70614098100         mov dword ptr [esi], 0x810914
// 0042e6c0  c74620b4088100       mov dword ptr [esi + 0x20], 0x8108b4
// 0042e6c7  8bc6                 mov eax, esi
// 0042e6c9  5e                   pop esi
// 0042e6ca  c3                   ret 

struct CMainFrame {
    char pad[0x24];
    CMainFrame* construct();
};

extern "C" void __stdcall sub_006a7960(int);

CMainFrame* CMainFrame::construct()
{
    sub_006a7960(0);
    *(int*)((char*)this + 0x00) = 0x810914;
    *(int*)((char*)this + 0x20) = 0x8108b4;
    return this;
}
