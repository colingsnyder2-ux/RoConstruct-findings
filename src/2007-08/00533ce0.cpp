// from server: 52% by colin
// roc 2007-08 00533ce0  unit: RBX::Selection  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00533ce0
//
// 00533ce0  53                   push ebx
// 00533ce1  55                   push ebp
// 00533ce2  56                   push esi
// 00533ce3  57                   push edi
// 00533ce4  8be9                 mov ebp, ecx
// 00533ce6  e805f4ffff           call 0x5330f0
// 00533ceb  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00533cef  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 00533cf5  8b742418             mov esi, dword ptr [esp + 0x18]
// 00533cf9  8da42400000000       lea esp, [esp]
// 00533d00  85ff                 test edi, edi
// 00533d02  7406                 je 0x533d0a
// 00533d04  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 00533d08  7402                 je 0x533d0c
// 00533d0a  ffd3                 call ebx
// 00533d0c  3b742420             cmp esi, dword ptr [esp + 0x20]
// 00533d10  7423                 je 0x533d35
// 00533d12  85ff                 test edi, edi
// 00533d14  7502                 jne 0x533d18
// 00533d16  ffd3                 call ebx
// 00533d18  3b7708               cmp esi, dword ptr [edi + 8]
// 00533d1b  7202                 jb 0x533d1f
// 00533d1d  ffd3                 call ebx
// 00533d1f  8b06                 mov eax, dword ptr [esi]
// 00533d21  50                   push eax
// 00533d22  8bcd                 mov ecx, ebp
// 00533d24  e827f2ffff           call 0x532f50
// 00533d29  3b7708               cmp esi, dword ptr [edi + 8]
// 00533d2c  7202                 jb 0x533d30
// 00533d2e  ffd3                 call ebx
// 00533d30  83c608               add esi, 8
// 00533d33  ebcb                 jmp 0x533d00
// 00533d35  5f                   pop edi
// 00533d36  5e                   pop esi
// 00533d37  5d                   pop ebp
// 00533d38  5b                   pop ebx
// 00533d39  c21000               ret 0x10

struct Instance;

struct Selection {
    void clearSelection();
    void addToSelection(Instance* instance);
    void setSelection(Instance** first, Instance** last);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void Selection::setSelection(Instance** first, Instance** last) {
    clearSelection();
    while (first != last) {
        if (first == 0 || first != last) {
            _invalid_parameter_noinfo();
        }
        if (first != last) {
            if (first == 0) {
                _invalid_parameter_noinfo();
            }
            if (first >= (Instance**)0x8) {
                _invalid_parameter_noinfo();
            }
            addToSelection(*first);
            if (first >= (Instance**)0x8) {
                _invalid_parameter_noinfo();
            }
            first += 2;
        }
    }
}
