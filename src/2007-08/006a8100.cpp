// from server: 40% by colin
// roc 2007-08 006a8100  unit: CXTPRibbonBar  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a8100
//
// 006a8100  4e                   dec esi
// 006a8101  7d00                 jge 0x6a8103
// 006a8103  56                   push esi
// 006a8104  e877d6fdff           call 0x685780
// 006a8109  83c410               add esp, 0x10
// 006a810c  8b16                 mov edx, dword ptr [esi]
// 006a810e  8b4270               mov eax, dword ptr [edx + 0x70]
// 006a8111  68b84e7d00           push 0x7d4eb8
// 006a8116  8bce                 mov ecx, esi
// 006a8118  ffd0                 call eax
// 006a811a  8bf0                 mov esi, eax
// 006a811c  8974241c             mov dword ptr [esp + 0x1c], esi
// 006a8120  8b8f60020000         mov ecx, dword ptr [edi + 0x260]
// 006a8126  8b11                 mov edx, dword ptr [ecx]
// 006a8128  8b425c               mov eax, dword ptr [edx + 0x5c]
// 006a812b  56                   push esi
// 006a812c  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006a8134  ffd0                 call eax
// 006a8136  85f6                 test esi, esi
// 006a8138  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006a8140  7407                 je 0x6a8149
// 006a8142  8bce                 mov ecx, esi
// 006a8144  e89b80f8ff           call 0x6301e4
// 006a8149  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a814d  64890d00000000       mov dword ptr fs:[0], ecx
// 006a8154  59                   pop ecx
// 006a8155  5f                   pop edi
// 006a8156  5e                   pop esi
// 006a8157  83c40c               add esp, 0xc
// 006a815a  c20400               ret 4

struct CXTPRibbonBar {
    void f(int);
};

struct QWidget {
    void *vtable;
};

extern "C" void __stdcall sub_685780(void*, int, int, int);
extern "C" void __stdcall sub_6301e4(void*);

void CXTPRibbonBar::f(int arg) {
    int esi = arg;
    esi--;
    if (esi >= 0) {
    }
    sub_685780((void*)0, esi, 0, 0);
    void* p = (void*)esi;
    void** vt = *(void***)p;
    void* (*fn)(void*, const char*) = (void* (*)(void*, const char*))vt[0x70/4];
    void* r = fn(p, (const char*)0x7d4eb8);
    void* saved = r;
    void* ecx = *(void**)((char*)this + 0x260);
    void** vt2 = *(void***)ecx;
    void (*fn2)(void*, void*) = (void (*)(void*, void*))vt2[0x5c/4];
    fn2(ecx, r);
    if (r == 0) {
        sub_6301e4(r);
    }
}
