// from server: 100% by king_originala
// roc 2008-06 0043d3a0  unit: XBoolItem  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043d3a0
//
// 0043d3a0  83ec10               sub esp, 0x10
// 0043d3a3  56                   push esi
// 0043d3a4  8bf1                 mov esi, ecx
// 0043d3a6  83be1c01000000       cmp dword ptr [esi + 0x11c], 0
// 0043d3ad  7509                 jne 0x43d3b8
// 0043d3af  33c0                 xor eax, eax
// 0043d3b1  5e                   pop esi
// 0043d3b2  83c410               add esp, 0x10
// 0043d3b5  c21400               ret 0x14
// 0043d3b8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0043d3bc  8b542428             mov edx, dword ptr [esp + 0x28]
// 0043d3c0  8d41ff               lea eax, [ecx - 1]
// 0043d3c3  89442404             mov dword ptr [esp + 4], eax
// 0043d3c7  8b442420             mov eax, dword ptr [esp + 0x20]
// 0043d3cb  03c2                 add eax, edx
// 0043d3cd  99                   cdq 
// 0043d3ce  2bc2                 sub eax, edx
// 0043d3d0  d1f8                 sar eax, 1
// 0043d3d2  83c10c               add ecx, 0xc
// 0043d3d5  8d50fa               lea edx, [eax - 6]
// 0043d3d8  894c240c             mov dword ptr [esp + 0xc], ecx
// 0043d3dc  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0043d3e2  83c007               add eax, 7
// 0043d3e5  57                   push edi
// 0043d3e6  8954240c             mov dword ptr [esp + 0xc], edx
// 0043d3ea  89442414             mov dword ptr [esp + 0x14], eax
// 0043d3ee  e84d6d2d00           call 0x714140
// 0043d3f3  83780401             cmp dword ptr [eax + 4], 1
// 0043d3f7  0f8599000000         jne 0x43d496
// 0043d3fd  8d7814               lea edi, [eax + 0x14]
// 0043d400  8bcf                 mov ecx, edi
// 0043d402  e829b02d00           call 0x718430
// 0043d407  85c0                 test eax, eax
// 0043d409  0f8487000000         je 0x43d496
// 0043d40f  8b06                 mov eax, dword ptr [esi]
// 0043d411  8b5058               mov edx, dword ptr [eax + 0x58]
// 0043d414  8bce                 mov ecx, esi
// 0043d416  ffd2                 call edx
// 0043d418  85c0                 test eax, eax
// 0043d41a  8b06                 mov eax, dword ptr [esi]
// 0043d41c  8b9000010000         mov edx, dword ptr [eax + 0x100]
// 0043d422  8bce                 mov ecx, esi
// 0043d424  7425                 je 0x43d44b
// 0043d426  ffd2                 call edx
// 0043d428  84c0                 test al, al
// 0043d42a  7407                 je 0x43d433
// 0043d42c  b80c000000           mov eax, 0xc
// 0043d431  eb39                 jmp 0x43d46c
// 0043d433  8b06                 mov eax, dword ptr [esi]
// 0043d435  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 0043d43b  8bce                 mov ecx, esi
// 0043d43d  ffd2                 call edx
// 0043d43f  f7d8                 neg eax
// 0043d441  1bc0                 sbb eax, eax
// 0043d443  83e004               and eax, 4
// 0043d446  83c004               add eax, 4
// 0043d449  eb21                 jmp 0x43d46c
// 0043d44b  ffd2                 call edx
// 0043d44d  84c0                 test al, al
// 0043d44f  7407                 je 0x43d458
// 0043d451  b809000000           mov eax, 9
// 0043d456  eb14                 jmp 0x43d46c
// 0043d458  8b06                 mov eax, dword ptr [esi]
// 0043d45a  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 0043d460  8bce                 mov ecx, esi
// 0043d462  ffd2                 call edx
// 0043d464  f7d8                 neg eax
// 0043d466  1bc0                 sbb eax, eax
// 0043d468  83e004               and eax, 4
// 0043d46b  40                   inc eax
// 0043d46c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0043d470  85c9                 test ecx, ecx
// 0043d472  7403                 je 0x43d477
// 0043d474  8b4904               mov ecx, dword ptr [ecx + 4]
// 0043d477  6a00                 push 0
// 0043d479  8d54240c             lea edx, [esp + 0xc]
// 0043d47d  52                   push edx
// 0043d47e  50                   push eax
// 0043d47f  6a03                 push 3
// 0043d481  51                   push ecx
// 0043d482  8bcf                 mov ecx, edi
// 0043d484  e827ac2d00           call 0x7180b0
// 0043d489  5f                   pop edi
// 0043d48a  b801000000           mov eax, 1
// 0043d48f  5e                   pop esi
// 0043d490  83c410               add esp, 0x10
// 0043d493  c21400               ret 0x14
// 0043d496  8b06                 mov eax, dword ptr [esi]
// 0043d498  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 0043d49e  8bce                 mov ecx, esi
// 0043d4a0  ffd2                 call edx
// 0043d4a2  8bf8                 mov edi, eax
// 0043d4a4  8b06                 mov eax, dword ptr [esi]
// 0043d4a6  8b5058               mov edx, dword ptr [eax + 0x58]
// 0043d4a9  f7df                 neg edi
// 0043d4ab  1bff                 sbb edi, edi
// 0043d4ad  8bce                 mov ecx, esi
// 0043d4af  81e700040000         and edi, 0x400
// 0043d4b5  ffd2                 call edx
// 0043d4b7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0043d4bb  8b5104               mov edx, dword ptr [ecx + 4]
// 0043d4be  f7d8                 neg eax
// 0043d4c0  1bc0                 sbb eax, eax
// 0043d4c2  2500010000           and eax, 0x100
// 0043d4c7  0bc7                 or eax, edi
// 0043d4c9  50                   push eax
// 0043d4ca  6a04                 push 4
// 0043d4cc  8d442410             lea eax, [esp + 0x10]
// 0043d4d0  50                   push eax
// 0043d4d1  52                   push edx
// 0043d4d2  ff15402d8000         call dword ptr [0x802d40]
// 0043d4d8  5f                   pop edi
// 0043d4d9  b801000000           mov eax, 1
// 0043d4de  5e                   pop esi
// 0043d4df  83c410               add esp, 0x10
// 0043d4e2  c21400               ret 0x14

struct Rect {
    int left, top, right, bottom;
};

struct Context {
    int unused;
    void* dc;
};

struct Theme {
    int available();
    int draw(void*, int, int, const Rect*, const Rect*);
};

struct ThemeInfo {
    int unused;
    int kind;
    char padding[12];
    Theme theme;
};

struct I_func_00714140 {
    char pad[324];
    int m_x;
};

struct S_func_00714140 {
    char pad[176];
    I_func_00714140* m_p;
    int f();
};

extern "C" {
    extern int (__stdcall *DrawFrameControl)(void*, Rect*, unsigned int, unsigned int);
}

#define V(N) virtual void v##N();

struct XBoolItem {
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7)
    V(8) V(9) V(10) V(11) V(12) V(13) V(14) V(15)
    V(16) V(17) V(18) V(19) V(20) V(21)
    virtual int checked();
    V(23) V(24) V(25) V(26) V(27) V(28) V(29) V(30)
    V(31) V(32) V(33) V(34) V(35) V(36) V(37) V(38)
    V(39) V(40) V(41) V(42) V(43) V(44) V(45) V(46)
    V(47) V(48) V(49) V(50) V(51) V(52) V(53) V(54)
    V(55) V(56) V(57)
    virtual int hot();
    V(59) V(60) V(61) V(62) V(63)
    virtual bool disabled();

    char pad0[184];
    S_func_00714140* provider;
    char pad1[92];
    int enabled;

    int draw(Context*, int, int, int, int);
};

#undef V

int XBoolItem::draw(Context* context, int x, int top, int unused, int bottom)
{
    if (!enabled)
        return 0;

    Rect rect;
    rect.left = x - 1;
    int center = (top + bottom) / 2;
    rect.top = center - 6;
    rect.right = x + 12;
    rect.bottom = center + 7;

    ThemeInfo* info = reinterpret_cast<ThemeInfo*>(provider->f());
    if (info->kind == 1 && info->theme.available()) {
        int state;
        if (checked()) {
            if (disabled())
                state = 12;
            else
                state = (hot() != 0 ? 4 : 0) + 4;
        } else {
            if (disabled())
                state = 9;
            else
                state = (hot() != 0 ? 4 : 0) + 1;
        }
        void* dc = context;
        if (context)
            dc = context->dc;
        info->theme.draw(dc, 3, state, &rect, 0);
        return 1;
    }

    unsigned int hotFlags = hot() != 0 ? 0x400 : 0;
    unsigned int flags = checked() != 0 ? 0x100 : 0;
    flags |= hotFlags;
    DrawFrameControl(context->dc, &rect, 4, flags);
    return 1;
}
