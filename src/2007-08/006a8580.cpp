// from server: 90% by colin
// roc 2007-08 006a8580  unit: CXTPRibbonBar::CControlCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a8580
//
// 006a8580  56                   push esi
// 006a8581  8bb184000000         mov esi, dword ptr [ecx + 0x84]
// 006a8587  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 006a858d  e8dedff9ff           call 0x646570
// 006a8592  8b4020               mov eax, dword ptr [eax + 0x20]
// 006a8595  6a00                 push 0
// 006a8597  56                   push esi
// 006a8598  6812010000           push 0x112
// 006a859d  50                   push eax
// 006a859e  ff15d0ec7700         call dword ptr [0x77ecd0]
// 006a85a4  5e                   pop esi
// 006a85a5  c3                   ret 

struct CXTPRibbonBarCControlCaptionButton {
    void OnClick();
};

extern "C" void* __fastcall sub_646570(void* p);

extern "C" int __stdcall PostMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, int lParam);

void CXTPRibbonBarCControlCaptionButton::OnClick() {
    void* p = *(void**)((char*)this + 0x84);
    void* q = *(void**)((char*)this + 0xfc);
    void* r = sub_646570(q);
    unsigned int w = *(unsigned int*)((char*)r + 0x20);
    PostMessageA(p, 0x112, w, 0);
}
