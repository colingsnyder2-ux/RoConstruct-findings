// from server: 73% by colin
// roc 2007-08 00670890  unit: CXTPToolBar::CControlButtonExpand  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00670890
//
// 00670890  56                   push esi
// 00670891  8bf1                 mov esi, ecx
// 00670893  83be6c01000000       cmp dword ptr [esi + 0x16c], 0
// 0067089a  7446                 je 0x6708e2
// 0067089c  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 006708a2  83f8ff               cmp eax, -1
// 006708a5  750f                 jne 0x6708b6
// 006708a7  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 006708ad  85c9                 test ecx, ecx
// 006708af  7405                 je 0x6708b6
// 006708b1  e8ca9cfcff           call 0x63a580
// 006708b6  85c0                 test eax, eax
// 006708b8  7428                 je 0x6708e2
// 006708ba  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006708c0  83b9dc00000002       cmp dword ptr [ecx + 0xdc], 2
// 006708c7  7409                 je 0x6708d2
// 006708c9  83b9fc00000005       cmp dword ptr [ecx + 0xfc], 5
// 006708d0  7510                 jne 0x6708e2
// 006708d2  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 006708d8  6a00                 push 0
// 006708da  50                   push eax
// 006708db  e89051fdff           call 0x645a70
// 006708e0  5e                   pop esi
// 006708e1  c3                   ret 
// 006708e2  8bce                 mov ecx, esi
// 006708e4  5e                   pop esi
// 006708e5  e9e694fcff           jmp 0x639dd0

struct CControlButtonExpand {
    void OnLButtonDown();
};

extern "C" int __stdcall sub_63A580(int);
extern "C" int __stdcall sub_645A70(int, int);
extern "C" void __stdcall sub_639DD0();

void CControlButtonExpand::OnLButtonDown()
{
    if (*(int*)((char*)this + 0x16c) == 0)
        goto tail;

    int eax = *(int*)((char*)this + 0x9c);
    if (eax == -1) {
        int ecx = *(int*)((char*)this + 0x158);
        if (ecx != 0)
            eax = sub_63A580(ecx);
    }
    if (eax == 0)
        goto tail;

    {
        int ecx = *(int*)((char*)this + 0xfc);
        if (*(int*)(ecx + 0xdc) != 2 && *(int*)(ecx + 0xfc) != 5)
            goto tail;
    }

    sub_645A70(*(int*)((char*)this + 0x80), 0);
    return;

tail:
    sub_639DD0();
}
