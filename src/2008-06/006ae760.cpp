// from server: 100% by tester
// roc 2008-06 006ae760  unit: CXTPPaintManager  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae760
//
// 006ae760  56                   push esi
// 006ae761  8bf1                 mov esi, ecx
// 006ae763  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ae767  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 006ae76d  83f8ff               cmp eax, -1
// 006ae770  750f                 jne 0x6ae781
// 006ae772  8b895c010000         mov ecx, dword ptr [ecx + 0x15c]
// 006ae778  85c9                 test ecx, ecx
// 006ae77a  7405                 je 0x6ae781
// 006ae77c  e83fd0ffff           call 0x6ab7c0
// 006ae781  f7d8                 neg eax
// 006ae783  1bc0                 sbb eax, eax
// 006ae785  83e0f6               and eax, 0xfffffff6
// 006ae788  83c00f               add eax, 0xf
// 006ae78b  50                   push eax
// 006ae78c  8bce                 mov ecx, esi
// 006ae78e  e8ddf8ffff           call 0x6ae070
// 006ae793  5e                   pop esi
// 006ae794  c20400               ret 4

struct CXTPPaintManager {
    int sub_63CD70(int);
    int sub_63A580();
    int method(int);
};

int CXTPPaintManager::method(int arg) {
    int eax = *(int*)(arg + 0x9c);
    if (eax == -1) {
        int ecx = *(int*)(arg + 0x15c);
        if (ecx != 0) {
            eax = ((CXTPPaintManager*)ecx)->sub_63A580();
        }
    }
    int val = (eax != 0) ? 0x5 : 0xf;
    return sub_63CD70(val);
}
