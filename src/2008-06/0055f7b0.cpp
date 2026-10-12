// from server: 39% by colin
// roc 2008-06 0055f7b0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 397 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055f7b0

extern "C" void __stdcall ReleaseMutex(void*);
extern "C" void __stdcall LeaveCriticalSection(void*);

struct S {
    char pad[0x130];
    char field130[0x24];
    char field154[0x14];
    char field168[4];
    bool f(void* arg);
};

extern "C" void __stdcall sub_594ce0(void*);
extern "C" void __stdcall sub_594d00(void*);
extern "C" void __stdcall sub_55e690(void*, void*, void*, void*, void*);
extern "C" void __stdcall sub_55e7d0(void*, void*);
extern "C" void* (__stdcall *g_802890)();
extern "C" void* (__stdcall *g_802808)(void*);
extern "C" void* (__stdcall *g_8027e8)(void*);
extern "C" bool (__stdcall *g_80236c)(void*, void*);

bool S::f(void* arg) {
    sub_594ce0(field130);
    char flag = 1;
    void* eax = *(void**)field168;
    void* ecx = *(void**)field154;
    void* edi = *(void**)eax;
    void* ebp = field154;
    int zero = 0;
    void* esp14 = eax;
    void* esp10 = ecx;
    void* ebx = ecx;
L808:
    if (ebx != 0) {
        if (ebx == esp10) {
            goto L822;
        }
    }
    g_802890();
L822:
    if (edi == esp14) {
        goto L8ed;
    }
    if (ebx != 0) {
        eax = *(void**)ebx;
        goto L838;
    }
    g_802890();
    eax = 0;
L838:
    if (edi == *(void**)((char*)eax + 0x14)) {
        g_802890();
    }
    void* tmp28;
    g_802808(&tmp28);
    void* tmp2c;
    g_8027e8(&tmp2c);
    sub_55e7d0(&tmp2c, &tmp28);
    void* esi = (char*)edi + 8;
    void* eax2 = *(void**)((char*)esi + 0x24);
    void* edx2 = *(void**)((char*)&tmp28 + 0xc);
    void* ecx2 = *(void**)((char*)esi + 0x20);
    if (edx2 > eax2) {
        goto L8d5;
    }
    if (edx2 < eax2) {
        goto L87e;
    }
    if (*(void**)((char*)&tmp28 + 0x8) >= ecx2) {
        goto L8d5;
    }
L87e:
    if (ebx != 0) {
        eax = *(void**)ebx;
        goto L88a;
    }
    g_802890();
    eax = 0;
L88a:
    if (edi == *(void**)((char*)eax + 0x14)) {
        g_802890();
    }
    if (g_80236c(esi, arg)) {
        goto L915;
    }
    if (ebx != 0) {
        eax = *(void**)ebx;
        goto L8b4;
    }
    g_802890();
    eax = 0;
L8b4:
    if (edi == *(void**)((char*)eax + 0x14)) {
        g_802890();
    }
    edi = *(void**)edi;
    goto L808;
L8d5:
    sub_55e690(&tmp28, ebx, edi, esp10, esp14);
L8ed:
    *(int*)((char*)&tmp28 + 0x10) = -1;
    sub_594d00(field130);
    return false;
L915:
    *(int*)((char*)&tmp28 + 0x10) = -1;
    sub_594d00(field130);
    return true;
}
