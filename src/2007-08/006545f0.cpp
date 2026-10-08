// from server: 69% by colin
// roc 2007-08 006545f0  unit: CInstanceRecord::CNameItem  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006545f0
//
// 006545f0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006545f4  8b01                 mov eax, dword ptr [ecx]
// 006545f6  8b8010010000         mov eax, dword ptr [eax + 0x110]
// 006545fc  52                   push edx
// 006545fd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00654601  52                   push edx
// 00654602  ffd0                 call eax
// 00654604  85c0                 test eax, eax
// 00654606  7c19                 jl 0x654621
// 00654608  e8f5b8fdff           call 0x62ff02
// 0065460d  68897f0000           push 0x7f89
// 00654612  6a00                 push 0
// 00654614  ff1520ec7700         call dword ptr [0x77ec20]
// 0065461a  50                   push eax
// 0065461b  ff1560ed7700         call dword ptr [0x77ed60]
// 00654621  c20c00               ret 0xc

struct CInstanceRecord {
    struct CNameItem {
        int f(int, int, int);
    };
};

extern "C" int __stdcall LoadCursorA(void*, const char*);
extern "C" int __stdcall SetCursor(void*);

int CInstanceRecord::CNameItem::f(int a, int b, int c)
{
    int (__stdcall *fn)(int, int);
    fn = *(int (__stdcall **)(int, int))(*(int*)this + 0x110);
    int r = fn(b, c);
    if (r < 0) {
        return r;
    }
    void* h = (void*)LoadCursorA(0, (const char*)0x7f89);
    SetCursor(h);
    return r;
}
