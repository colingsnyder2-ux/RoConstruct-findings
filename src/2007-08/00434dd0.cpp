// from server: 64% by atomic.potato
// roc 2007-08 00434dd0  unit: CMemberTreeView  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00434dd0
//
// 00434dd0  8b442404             mov eax, dword ptr [esp + 4]
// 00434dd4  57                   push edi
// 00434dd5  50                   push eax
// 00434dd6  8bf9                 mov edi, ecx
// 00434dd8  e869b81f00           call 0x630646
// 00434ddd  83f8ff               cmp eax, -1
// 00434de0  742b                 je 0x434e0d
// 00434de2  8b5760               mov edx, dword ptr [edi + 0x60]
// 00434de5  8b4244               mov eax, dword ptr [edx + 0x44]
// 00434de8  8d4f60               lea ecx, [edi + 0x60]
// 00434deb  ffd0                 call eax
// 00434ded  56                   push esi
// 00434dee  8db7a0000000         lea esi, [edi + 0xa0]
// 00434df4  68c4000000           push 0xc4
// 00434df9  e872faffff           call 0x434870
// 00434dfe  83c404               add esp, 4
// 00434e01  85c0                 test eax, eax
// 00434e03  750f                 jne 0x434e14
// 00434e05  5e                   pop esi
// 00434e06  83c8ff               or eax, 0xffffffff
// 00434e09  5f                   pop edi
// 00434e0a  c20400               ret 4
// 00434e0d  83c8ff               or eax, 0xffffffff
// 00434e10  5f                   pop edi
// 00434e11  c20400               ret 4
// 00434e14  85f6                 test esi, esi
// 00434e16  7403                 je 0x434e1b
// 00434e18  8b7604               mov esi, dword ptr [esi + 4]
// 00434e1b  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00434e1e  56                   push esi
// 00434e1f  6a00                 push 0
// 00434e21  6809110000           push 0x1109
// 00434e26  51                   push ecx
// 00434e27  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00434e2d  50                   push eax
// 00434e2e  e869b61f00           call 0x63049c
// 00434e33  5e                   pop esi
// 00434e34  33c0                 xor eax, eax
// 00434e36  5f                   pop edi
// 00434e37  c20400               ret 4

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CMemberTreeView
{
    int sub_434DD0(unsigned int);
};

extern "C" int __stdcall sub_630646(unsigned int);
extern "C" void* __cdecl sub_434870(int);
extern "C" int __stdcall sub_63049C(void*);

typedef void (__thiscall *VFn)(void*);

int CMemberTreeView::sub_434DD0(unsigned int a1)
{
    int result = sub_630646(a1);
    if (result == -1)
        return -1;

    VFn fn = *(VFn*)(*(char**)((char*)this + 0x60) + 0x44);
    fn((char*)this + 0x60);

    char* p = (char*)this + 0xa0;
    void* obj = sub_434870(0xc4);
    if (obj == 0)
        return -1;

    unsigned int v = 0;
    if (p != 0)
        v = *(unsigned int*)(p + 4);

    void* hwnd = *(void**)((char*)this + 0x20);
    void* r = (void*)SendMessageA(hwnd, 0x1109, 0, v);
    sub_63049C(r);
    return 0;
}
