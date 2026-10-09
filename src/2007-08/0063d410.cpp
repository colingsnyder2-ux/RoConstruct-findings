// from server: 96% by colin
// roc 2007-08 0063d410  unit: CXTPPaintManager  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063d410
//
// 0063d410  56                   push esi
// 0063d411  8bf1                 mov esi, ecx
// 0063d413  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0063d417  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 0063d41d  83f8ff               cmp eax, -1
// 0063d420  750f                 jne 0x63d431
// 0063d422  8b8958010000         mov ecx, dword ptr [ecx + 0x158]
// 0063d428  85c9                 test ecx, ecx
// 0063d42a  7405                 je 0x63d431
// 0063d42c  e84fd1ffff           call 0x63a580
// 0063d431  f7d8                 neg eax
// 0063d433  1bc0                 sbb eax, eax
// 0063d435  83e0f6               and eax, 0xfffffff6
// 0063d438  83c00f               add eax, 0xf
// 0063d43b  50                   push eax
// 0063d43c  8bce                 mov ecx, esi
// 0063d43e  e82df9ffff           call 0x63cd70
// 0063d443  5e                   pop esi
// 0063d444  c20400               ret 4

struct CXTPPaintManager {
    int sub_63CD70(int);
    int sub_63A580();
    int method(int);
};

int CXTPPaintManager::method(int arg) {
    int eax = *(int*)(arg + 0x9c);
    if (eax == -1) {
        int ecx = *(int*)(arg + 0x158);
        if (ecx != 0) {
            eax = ((CXTPPaintManager*)ecx)->sub_63A580();
        }
    }
    int val = (eax != 0) ? 0x5 : 0xf;
    return sub_63CD70(val);
}
