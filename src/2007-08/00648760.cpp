// from server: 53% by colin
// roc 2007-08 00648760  unit: CXTPCommandBar  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00648760
//
// 00648760  8bd1                 mov edx, ecx
// 00648762  8d4a70               lea ecx, [edx + 0x70]
// 00648765  e896feffff           call 0x648600
// 0064876a  85c0                 test eax, eax
// 0064876c  7503                 jne 0x648771
// 0064876e  8bc1                 mov eax, ecx
// 00648770  c3                   ret 
// 00648771  8bca                 mov ecx, edx
// 00648773  e9c8ffffff           jmp 0x648740

struct CXTPCommandBar {
    char pad[0x70];
    int field_70;
    int sub_648600();
    int sub_648740();
    int sub_648760();
};

int CXTPCommandBar::sub_648760()
{
    int r = sub_648600();
    if (r == 0)
        return sub_648740();
    return (int)&field_70;
}
