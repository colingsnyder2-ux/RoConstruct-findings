// from server: 90% by colin
// roc 2007-08 00461de0  unit: CSelectionCaption  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00461de0
//
// 00461de0  56                   push esi
// 00461de1  8bf1                 mov esi, ecx
// 00461de3  e856e41c00           call 0x63023e
// 00461de8  83f8ff               cmp eax, -1
// 00461deb  7506                 jne 0x461df3
// 00461ded  0bc0                 or eax, eax
// 00461def  5e                   pop esi
// 00461df0  c20400               ret 4
// 00461df3  8d8e90010000         lea ecx, [esi + 0x190]
// 00461df9  e8a2bdfbff           call 0x41dba0
// 00461dfe  33c0                 xor eax, eax
// 00461e00  5e                   pop esi
// 00461e01  c20400               ret 4

struct CSelectionCaption {
    char pad[0x190];
    int field190;
    int method(int);
};

extern "C" int __stdcall sub_63023e();
extern "C" void __stdcall sub_41dba0(int*);

int CSelectionCaption::method(int arg) {
    int result = sub_63023e();
    if (result == -1) {
        return result;
    }
    sub_41dba0(&field190);
    return 0;
}
