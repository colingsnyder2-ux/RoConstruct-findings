// from server: 65% by colin
// roc 2007-08 00644ce0  unit: CXTPCommandBar  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00644ce0
//
// 00644ce0  56                   push esi
// 00644ce1  8bf1                 mov esi, ecx
// 00644ce3  8d8638010000         lea eax, [esi + 0x138]
// 00644ce9  50                   push eax
// 00644cea  ff1514ee7700         call dword ptr [0x77ee14]
// 00644cf0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00644cf4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00644cf8  8b16                 mov edx, dword ptr [esi]
// 00644cfa  8b9270010000         mov edx, dword ptr [edx + 0x170]
// 00644d00  50                   push eax
// 00644d01  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00644d05  51                   push ecx
// 00644d06  50                   push eax
// 00644d07  8bce                 mov ecx, esi
// 00644d09  ffd2                 call edx
// 00644d0b  5e                   pop esi
// 00644d0c  c20c00               ret 0xc

extern "C" int __stdcall SetRectEmpty(void*);

struct CXTPCommandBar {
    char pad[0x138];
    int rect;
    int OnCreateControl(int, int, int);
};

int CXTPCommandBar::OnCreateControl(int a, int b, int c) {
    SetRectEmpty(&rect);
    int (*fn)(CXTPCommandBar*, int, int, int) =
        *(int (**)(CXTPCommandBar*, int, int, int))((*(int*)this) + 0x170);
    return fn(this, a, b, c);
}
