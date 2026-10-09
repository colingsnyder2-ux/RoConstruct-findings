// from server: 90% by colin
// roc 2007-08 00692a30  unit: CXTPStatusBar  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692a30
//
// 00692a30  56                   push esi
// 00692a31  8bf1                 mov esi, ecx
// 00692a33  e806d8f9ff           call 0x63023e
// 00692a38  8bce                 mov ecx, esi
// 00692a3a  e891f9ffff           call 0x6923d0
// 00692a3f  85c0                 test eax, eax
// 00692a41  7435                 je 0x692a78
// 00692a43  8b10                 mov edx, dword ptr [eax]
// 00692a45  8bc8                 mov ecx, eax
// 00692a47  8b82d4000000         mov eax, dword ptr [edx + 0xd4]
// 00692a4d  ffd0                 call eax
// 00692a4f  83f806               cmp eax, 6
// 00692a52  7524                 jne 0x692a78
// 00692a54  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00692a58  f64118c0             test byte ptr [ecx + 0x18], 0xc0
// 00692a5c  741a                 je 0x692a78
// 00692a5e  6a27                 push 0x27
// 00692a60  6a00                 push 0
// 00692a62  6a00                 push 0
// 00692a64  6a00                 push 0
// 00692a66  6a00                 push 0
// 00692a68  6a00                 push 0
// 00692a6a  8bce                 mov ecx, esi
// 00692a6c  e8dfd4f9ff           call 0x62ff50
// 00692a71  8bc8                 mov ecx, eax
// 00692a73  e8b6d5f9ff           call 0x63002e
// 00692a78  5e                   pop esi
// 00692a79  c20400               ret 4

struct CXTPStatusBar {
    void sub_63023E();
    void* sub_6923D0();
    void* sub_62FF50(int, int, int, int, int, int);
    void sub_63002E();
    void func_00692A30(unsigned int);
};

void CXTPStatusBar::func_00692A30(unsigned int param)
{
    sub_63023E();
    void* p = sub_6923D0();
    if (p != 0) {
        int* vtbl = *(int**)p;
        int (__thiscall *fn)(void*) = (int (__thiscall *)(void*))vtbl[0xd4 / 4];
        int r = fn(p);
        if (r == 6) {
            unsigned char* q = (unsigned char*)param;
            if ((q[0x18] & 0xc0) != 0) {
                void* r2 = sub_62FF50(0, 0, 0, 0, 0, 0x27);
                ((CXTPStatusBar*)r2)->sub_63002E();
            }
        }
    }
}
