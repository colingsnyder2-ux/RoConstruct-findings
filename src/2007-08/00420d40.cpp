// from server: 94% by colin
// roc 2007-08 00420d40  unit: CRobloxTreeCtrl  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00420d40
//
// 00420d40  8b442404             mov eax, dword ptr [esp + 4]
// 00420d44  56                   push esi
// 00420d45  50                   push eax
// 00420d46  8bf1                 mov esi, ecx
// 00420d48  e8f3fbffff           call 0x420940
// 00420d4d  83f8ff               cmp eax, -1
// 00420d50  7506                 jne 0x420d58
// 00420d52  0bc0                 or eax, eax
// 00420d54  5e                   pop esi
// 00420d55  c20400               ret 4
// 00420d58  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00420d5e  e83dceffff           call 0x41dba0
// 00420d63  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00420d66  6a00                 push 0
// 00420d68  68c8000000           push 0xc8
// 00420d6d  6a00                 push 0
// 00420d6f  51                   push ecx
// 00420d70  ff15eced7700         call dword ptr [0x77edec]
// 00420d76  33c0                 xor eax, eax
// 00420d78  5e                   pop esi
// 00420d79  c20400               ret 4

struct CRobloxTreeCtrl {
    int sub_420940(int);
    void sub_41dba0();
    int method(int);
};

extern "C" int __stdcall SetTimer(void*, unsigned int, unsigned int, void*);

int CRobloxTreeCtrl::method(int a)
{
    int r = sub_420940(a);
    if (r == -1) {
        return r;
    }
    ((CRobloxTreeCtrl*)((char*)this + 0xb8))->sub_41dba0();
    SetTimer(*(void**)((char*)this + 0x20), 0xc8, 0, 0);
    return 0;
}
