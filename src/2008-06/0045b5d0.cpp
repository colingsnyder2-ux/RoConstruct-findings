// from server: 100% by king_originala
// roc 2008-06 0045b5d0  unit: CRobloxWnd  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045b5d0
//
// 0045b5d0  8b442404             mov eax, dword ptr [esp + 4]
// 0045b5d4  56                   push esi
// 0045b5d5  50                   push eax
// 0045b5d6  8bf1                 mov esi, ecx
// 0045b5d8  e8ed5d2400           call 0x6a13ca
// 0045b5dd  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0045b5e3  5e                   pop esi
// 0045b5e4  85c9                 test ecx, ecx
// 0045b5e6  740d                 je 0x45b5f5
// 0045b5e8  c744240401000000     mov dword ptr [esp + 4], 1
// 0045b5f0  e95bca0000           jmp 0x468050
// 0045b5f5  c20400               ret 4

struct Target {
    void perform(int);
};

struct CRobloxWnd {
    char reserved[0x84];
    Target *target;

    void previous(int);
    void f(int);
};

void CRobloxWnd::f(int value)
{
    previous(value);
    if (target)
        target->perform(1);
}
