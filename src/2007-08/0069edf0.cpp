// from server: 91% by colin
// roc 2007-08 0069edf0  unit: CXTPPropertyGridItemEnum  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069edf0
//
// 0069edf0  e8bbfeffff           call 0x69ecb0
// 0069edf5  85c0                 test eax, eax
// 0069edf7  7501                 jne 0x69edfa
// 0069edf9  c3                   ret 
// 0069edfa  e841f9ffff           call 0x69e740
// 0069edff  81b8d0000000f1ff1f02 cmp dword ptr [eax + 0xd0], 0x21ffff1
// 0069ee09  7506                 jne 0x69ee11
// 0069ee0b  b801000000           mov eax, 1
// 0069ee10  c3                   ret 
// 0069ee11  e82af9ffff           call 0x69e740
// 0069ee16  66b90500             mov cx, 5
// 0069ee1a  663b88d6000000       cmp cx, word ptr [eax + 0xd6]
// 0069ee21  1bc0                 sbb eax, eax
// 0069ee23  f7d8                 neg eax
// 0069ee25  c3                   ret 

extern int __cdecl func_0069ecb0();
extern char* __cdecl func_0069e740();

int __cdecl func_0069edf0()
{
    if (func_0069ecb0() == 0)
        return 0;
    if (*(int*)(func_0069e740() + 0xd0) == 0x21ffff1)
        return 1;
    return (unsigned short)5 > *(unsigned short*)(func_0069e740() + 0xd6);
}
