// from server: 100% by colin
// roc 2007-08 0064cc30  unit: CXTPImageManagerIconSet  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064cc30
//
// 0064cc30  8b442404             mov eax, dword ptr [esp + 4]
// 0064cc34  83f801               cmp eax, 1
// 0064cc37  7509                 jne 0x64cc42
// 0064cc39  89442404             mov dword ptr [esp + 4], eax
// 0064cc3d  e91efdffff           jmp 0x64c960
// 0064cc42  83f802               cmp eax, 2
// 0064cc45  7508                 jne 0x64cc4f
// 0064cc47  e8f4baffff           call 0x648740
// 0064cc4c  c20400               ret 4
// 0064cc4f  83f803               cmp eax, 3
// 0064cc52  7508                 jne 0x64cc5c
// 0064cc54  e807bbffff           call 0x648760
// 0064cc59  c20400               ret 4
// 0064cc5c  83f804               cmp eax, 4
// 0064cc5f  7508                 jne 0x64cc69
// 0064cc61  e81abbffff           call 0x648780
// 0064cc66  c20400               ret 4
// 0064cc69  e8c2baffff           call 0x648730
// 0064cc6e  c20400               ret 4

struct CXTPImageManagerIconSet {
    void sub_64C960(int);
    void sub_648740();
    void sub_648760();
    void sub_648780();
    void sub_648730();
    void func(int);
};

void CXTPImageManagerIconSet::func(int n) {
    if (n == 1) {
        sub_64C960(n);
        return;
    }
    if (n == 2) {
        sub_648740();
        return;
    }
    if (n == 3) {
        sub_648760();
        return;
    }
    if (n == 4) {
        sub_648780();
        return;
    }
    sub_648730();
}
