// from server: 89% by colin
// roc 2007-08 006a65c0  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a65c0
//
// 006a65c0  56                   push esi
// 006a65c1  8bf1                 mov esi, ecx
// 006a65c3  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 006a65c9  85c0                 test eax, eax
// 006a65cb  c7061c427d00         mov dword ptr [esi], 0x7d421c
// 006a65d1  c74620bc417d00       mov dword ptr [esi + 0x20], 0x7d41bc
// 006a65d8  7407                 je 0x6a65e1
// 006a65da  50                   push eax
// 006a65db  ff1538ed7700         call dword ptr [0x77ed38]
// 006a65e1  8bce                 mov ecx, esi
// 006a65e3  e8a89ffcff           call 0x670590
// 006a65e8  f644240801           test byte ptr [esp + 8], 1
// 006a65ed  7409                 je 0x6a65f8
// 006a65ef  56                   push esi
// 006a65f0  e86d96f8ff           call 0x62fc62
// 006a65f5  83c404               add esp, 4
// 006a65f8  8bc6                 mov eax, esi
// 006a65fa  5e                   pop esi
// 006a65fb  c20400               ret 4

struct CXTPMenuBar_CControlMDISysMenuPopup {
    char pad0[0x17c];
    void* m_pIcon;
    void* dtor(int flags);
};

extern "C" int __stdcall DestroyIcon(void*);
extern "C" void __cdecl sub_00670590();
extern "C" void __cdecl sub_0062FC62(void*);

void* CXTPMenuBar_CControlMDISysMenuPopup::dtor(int flags)
{
    *(int*)this = 0x7d421c;
    *(int*)((char*)this + 0x20) = 0x7d41bc;
    if (m_pIcon != 0) {
        DestroyIcon(m_pIcon);
    }
    sub_00670590();
    if (flags & 1) {
        sub_0062FC62(this);
    }
    return this;
}
