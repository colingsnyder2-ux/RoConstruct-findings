// from server: 100% by king_originala
// roc 2008-06 00462e40  unit: Scintilla::CScintillaView  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00462e40
//
// 00462e40  8d4158               lea eax, [ecx + 0x58]
// 00462e43  85c0                 test eax, eax
// 00462e45  7403                 je 0x462e4a
// 00462e47  8b4020               mov eax, dword ptr [eax + 0x20]
// 00462e4a  8b542408             mov edx, dword ptr [esp + 8]
// 00462e4e  3bd0                 cmp edx, eax
// 00462e50  7552                 jne 0x462ea4
// 00462e52  8b442404             mov eax, dword ptr [esp + 4]
// 00462e56  c1e810               shr eax, 0x10
// 00462e59  3d00010000           cmp eax, 0x100
// 00462e5e  7432                 je 0x462e92
// 00462e60  3d00020000           cmp eax, 0x200
// 00462e65  7419                 je 0x462e80
// 00462e67  3d00030000           cmp eax, 0x300
// 00462e6c  752e                 jne 0x462e9c
// 00462e6e  8b01                 mov eax, dword ptr [ecx]
// 00462e70  8b9024020000         mov edx, dword ptr [eax + 0x224]
// 00462e76  ffd2                 call edx
// 00462e78  b801000000           mov eax, 1
// 00462e7d  c20800               ret 8
// 00462e80  8b01                 mov eax, dword ptr [ecx]
// 00462e82  8b9028020000         mov edx, dword ptr [eax + 0x228]
// 00462e88  ffd2                 call edx
// 00462e8a  b801000000           mov eax, 1
// 00462e8f  c20800               ret 8
// 00462e92  8b01                 mov eax, dword ptr [ecx]
// 00462e94  8b902c020000         mov edx, dword ptr [eax + 0x22c]
// 00462e9a  ffd2                 call edx
// 00462e9c  b801000000           mov eax, 1
// 00462ea1  c20800               ret 8
// 00462ea4  89542408             mov dword ptr [esp + 8], edx
// 00462ea8  e92fd92300           jmp 0x6a07dc

typedef unsigned long DWORD;

struct Control {
    char padding[32];
    DWORD handle;

    DWORD safeHandle() const {
        DWORD result = reinterpret_cast<DWORD>(this);
        if (this)
            result = handle;
        return result;
    }
};

#define SLOT(n) virtual void slot##n();
#define TEN(n) \
    SLOT(n##0) SLOT(n##1) SLOT(n##2) SLOT(n##3) SLOT(n##4) \
    SLOT(n##5) SLOT(n##6) SLOT(n##7) SLOT(n##8) SLOT(n##9)

struct View {
    TEN(0)
    TEN(1)
    TEN(2)
    TEN(3)
    TEN(4)
    TEN(5)
    TEN(6)
    TEN(7)
    TEN(8)
    TEN(9)
    TEN(10)
    TEN(11)
    TEN(12)
    SLOT(130)
    SLOT(131)
    SLOT(132)
    SLOT(133)
    SLOT(134)
    SLOT(135)
    SLOT(136)
    virtual void onChange();
    virtual void onKillFocus();
    virtual void onSetFocus();

    char padding[84];
    Control control;

    int fallback(DWORD command, DWORD source);
    int command(DWORD command, DWORD source);
};

#undef TEN
#undef SLOT

int View::command(DWORD command, DWORD source)
{
    if (source == control.safeHandle()) {
        switch (command >> 16) {
        case 0x100:
            onSetFocus();
            break;
        case 0x200:
            onKillFocus();
            break;
        case 0x300:
            onChange();
            break;
        }
        return 1;
    }
    return fallback(command, source);
}
