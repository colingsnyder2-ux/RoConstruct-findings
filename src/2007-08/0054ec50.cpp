// from server: 89% by colin
// roc 2007-08 0054ec50  unit: boost::iostreams::Uinput::?$filtering_stream  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ec50
//
// 0054ec50  56                   push esi
// 0054ec51  8bf1                 mov esi, ecx
// 0054ec53  e868e8ffff           call 0x54d4c0
// 0054ec58  8b0ddce47700         mov ecx, dword ptr [0x77e4dc]
// 0054ec5e  8d4618               lea eax, [esi + 0x18]
// 0054ec61  8908                 mov dword ptr [eax], ecx
// 0054ec63  8b15e0e47700         mov edx, dword ptr [0x77e4e0]
// 0054ec69  50                   push eax
// 0054ec6a  8910                 mov dword ptr [eax], edx
// 0054ec6c  ff15e4e47700         call dword ptr [0x77e4e4]
// 0054ec72  83c404               add esp, 4
// 0054ec75  f644240801           test byte ptr [esp + 8], 1
// 0054ec7a  7409                 je 0x54ec85
// 0054ec7c  56                   push esi
// 0054ec7d  e8e00f0e00           call 0x62fc62
// 0054ec82  83c404               add esp, 4
// 0054ec85  8bc6                 mov eax, esi
// 0054ec87  5e                   pop esi
// 0054ec88  c20400               ret 4

struct S {
    S* f(unsigned int);
};

extern "C" void __stdcall sub_54D4C0();
extern "C" void __stdcall sub_62FC62(void*);
extern "C" void (__stdcall *sub_77E4E4)(void*);

extern int dword_77E4DC;
extern int dword_77E4E0;

S* S::f(unsigned int flags) {
    sub_54D4C0();
    int* p = (int*)((char*)this + 0x18);
    *p = dword_77E4DC;
    *p = dword_77E4E0;
    sub_77E4E4(p);
    if (flags & 1) {
        sub_62FC62(this);
    }
    return this;
}
