// from server: 72% by colin
// roc 2007-08 006deb10  unit: CXTPDockingPaneMiniWnd  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006deb10
//
// 006deb10  56                   push esi
// 006deb11  57                   push edi
// 006deb12  8bf9                 mov edi, ecx
// 006deb14  8db71cffffff         lea esi, [edi - 0xe4]
// 006deb1a  8bce                 mov ecx, esi
// 006deb1c  e83ffaffff           call 0x6de560
// 006deb21  85c0                 test eax, eax
// 006deb23  7432                 je 0x6deb57
// 006deb25  85f6                 test esi, esi
// 006deb27  7418                 je 0x6deb41
// 006deb29  837e2000             cmp dword ptr [esi + 0x20], 0
// 006deb2d  7412                 je 0x6deb41
// 006deb2f  85f6                 test esi, esi
// 006deb31  7403                 je 0x6deb36
// 006deb33  8b7620               mov esi, dword ptr [esi + 0x20]
// 006deb36  6a00                 push 0
// 006deb38  6a00                 push 0
// 006deb3a  56                   push esi
// 006deb3b  ff15dcec7700         call dword ptr [0x77ecdc]
// 006deb41  8b873cffffff         mov eax, dword ptr [edi - 0xc4]
// 006deb47  6a00                 push 0
// 006deb49  6a00                 push 0
// 006deb4b  6885000000           push 0x85
// 006deb50  50                   push eax
// 006deb51  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006deb57  5f                   pop edi
// 006deb58  5e                   pop esi
// 006deb59  c3                   ret 

extern "C" {
    int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
    int __stdcall InvalidateRect(void*, const void*, int);
}

struct CXTPDockingPaneMiniWnd {
    char pad[0xE4];

    void sub_6DEB10();
};

struct Inner {
    char pad[0x20];
    void* field20;
};

int __fastcall sub_6DE560(void*);

void CXTPDockingPaneMiniWnd::sub_6DEB10()
{
    Inner* p = (Inner*)((char*)this - 0xE4);
    if (sub_6DE560(p)) {
        if (p != 0 && p->field20 != 0) {
            void* h = p->field20;
            SendMessageA(h, 0, 0, 0);
        }
        InvalidateRect(*(void**)((char*)this - 0xC4), 0, 0);
    }
}
