// from server: 90% by colin
// roc 2007-08 00644200  unit: CXTPCommandBar  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00644200
//
// 00644200  56                   push esi
// 00644201  8bf1                 mov esi, ecx
// 00644203  83befc00000006       cmp dword ptr [esi + 0xfc], 6
// 0064420a  7412                 je 0x64421e
// 0064420c  e86ff7ffff           call 0x643980
// 00644211  85c0                 test eax, eax
// 00644213  7409                 je 0x64421e
// 00644215  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00644218  56                   push esi
// 00644219  e862c70500           call 0x6a0980
// 0064421e  83bedc00000000       cmp dword ptr [esi + 0xdc], 0
// 00644225  7412                 je 0x644239
// 00644227  8b06                 mov eax, dword ptr [esi]
// 00644229  8b9040010000         mov edx, dword ptr [eax + 0x140]
// 0064422f  6a00                 push 0
// 00644231  6a01                 push 1
// 00644233  6a00                 push 0
// 00644235  8bce                 mov ecx, esi
// 00644237  ffd2                 call edx
// 00644239  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0064423f  e83c570800           call 0x6c9980
// 00644244  8bce                 mov ecx, esi
// 00644246  5e                   pop esi
// 00644247  e900c7feff           jmp 0x63094c

struct CXTPCommandBar {
    void OnDestroy();
};

extern "C" void* __stdcall sub_643980();
extern "C" void __stdcall sub_6A0980(int);
extern "C" void __stdcall sub_6C9980(int);
extern "C" void __stdcall sub_63094C();

void CXTPCommandBar::OnDestroy()
{
    if (*(int*)((char*)this + 0xfc) != 6) {
        void* p = sub_643980();
        if (p != 0) {
            sub_6A0980(*(int*)((char*)p + 0x4c));
        }
    }
    if (*(int*)((char*)this + 0xdc) != 0) {
        (*(void(__thiscall**)(void*, int, int, int))(*(int*)this + 0x140))(this, 0, 1, 0);
    }
    sub_6C9980(*(int*)((char*)this + 0x178));
    sub_63094C();
}
