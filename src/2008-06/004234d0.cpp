// from server: 100% by tester
// roc 2008-06 004234d0  unit: CRobloxTreeCtrl  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004234d0
//
// 004234d0  8b442404             mov eax, dword ptr [esp + 4]
// 004234d4  56                   push esi
// 004234d5  50                   push eax
// 004234d6  8bf1                 mov esi, ecx
// 004234d8  e8c3f8ffff           call 0x422da0
// 004234dd  83f8ff               cmp eax, -1
// 004234e0  7506                 jne 0x4234e8
// 004234e2  0bc0                 or eax, eax
// 004234e4  5e                   pop esi
// 004234e5  c20400               ret 4
// 004234e8  8d8ed0000000         lea ecx, [esi + 0xd0]
// 004234ee  e8ddd6ffff           call 0x420bd0
// 004234f3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 004234f6  6a00                 push 0
// 004234f8  68c8000000           push 0xc8
// 004234fd  6a00                 push 0
// 004234ff  51                   push ecx
// 00423500  ff157c2d8000         call dword ptr [0x802d7c]
// 00423506  33c0                 xor eax, eax
// 00423508  5e                   pop esi
// 00423509  c20400               ret 4

struct CRobloxTreeCtrl {
    int sub_420940(int);
    void sub_41dba0();
    int method(int);
};

extern "C" void* SetTimer;

int CRobloxTreeCtrl::method(int a)
{
    int r = sub_420940(a);
    if (r == -1) {
        return r;
    }
    ((CRobloxTreeCtrl*)((char*)this + 0xd0))->sub_41dba0();
    ((void (__stdcall*)(void*, unsigned int, unsigned int, void*))SetTimer)(*(void**)((char*)this + 0x20), 0, 0xc8, 0);
    return 0;
}
