// from server: 92% by colin
// roc 2007-08 006c79f0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c79f0
//
// 006c79f0  56                   push esi
// 006c79f1  8bf1                 mov esi, ecx
// 006c79f3  8b465c               mov eax, dword ptr [esi + 0x5c]
// 006c79f6  c7809001000001000000 mov dword ptr [eax + 0x190], 1
// 006c7a00  ff15d4ec7700         call dword ptr [0x77ecd4]
// 006c7a06  3b4620               cmp eax, dword ptr [esi + 0x20]
// 006c7a09  750d                 jne 0x6c7a18
// 006c7a0b  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 006c7a0e  8b11                 mov edx, dword ptr [ecx]
// 006c7a10  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 006c7a16  ffd0                 call eax
// 006c7a18  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006c7a1b  6a00                 push 0
// 006c7a1d  6a03                 push 3
// 006c7a1f  68d3000000           push 0xd3
// 006c7a24  51                   push ecx
// 006c7a25  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006c7a2b  8bce                 mov ecx, esi
// 006c7a2d  5e                   pop esi
// 006c7a2e  e90df2ffff           jmp 0x6c6c40

extern "C" void* __stdcall GetFocus();
extern "C" long __stdcall SendMessageA(void* hWnd, unsigned int msg, unsigned int wParam, long lParam);

struct CXTPCustomizeSheet_CCustomizeEdit {
    char pad[0x20];
    void* field_20;
    char pad2[0x38];
    void* field_5c;
    void sub_6c6c40();
    void func();
};

void CXTPCustomizeSheet_CCustomizeEdit::func()
{
    *(int*)((char*)field_5c + 0x190) = 1;
    if (GetFocus() == field_20) {
        void* p = field_5c;
        void** vtbl = *(void***)p;
        void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vtbl[0x14c / 4];
        fn(p);
    }
    SendMessageA(field_20, 0xd3, 3, 0);
    sub_6c6c40();
}
