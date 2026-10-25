// from server: 100% by king_originala
// roc 2008-06 0040d140  unit: RBX::Reflection::Metadata::Item  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040d140
//
// 0040d140  56                   push esi
// 0040d141  8bf1                 mov esi, ecx
// 0040d143  e878fbffff           call 0x40ccc0
// 0040d148  c706d4bb8000         mov dword ptr [esi], 0x80bbd4
// 0040d14e  c74610c8bb8000       mov dword ptr [esi + 0x10], 0x80bbc8
// 0040d155  c74614c0bb8000       mov dword ptr [esi + 0x14], 0x80bbc0
// 0040d15c  c74620b8bb8000       mov dword ptr [esi + 0x20], 0x80bbb8
// 0040d163  c74624a8bb8000       mov dword ptr [esi + 0x24], 0x80bba8
// 0040d16a  c7464498bb8000       mov dword ptr [esi + 0x44], 0x80bb98
// 0040d171  c7466488bb8000       mov dword ptr [esi + 0x64], 0x80bb88
// 0040d178  c7868400000078bb8000 mov dword ptr [esi + 0x84], 0x80bb78
// 0040d182  c786a400000068bb8000 mov dword ptr [esi + 0xa4], 0x80bb68
// 0040d18c  c786c400000058bb8000 mov dword ptr [esi + 0xc4], 0x80bb58
// 0040d196  c6863001000000       mov byte ptr [esi + 0x130], 0
// 0040d19d  c6863101000001       mov byte ptr [esi + 0x131], 1
// 0040d1a4  8bc6                 mov eax, esi
// 0040d1a6  5e                   pop esi
// 0040d1a7  c3                   ret 

struct S {
    unsigned char storage[0x132];
    void initialize();
    S();
};

S::S()
{
    initialize();
    *(unsigned int*)(storage + 0x00) = 0x0080bbd4;
    *(unsigned int*)(storage + 0x10) = 0x0080bbc8;
    *(unsigned int*)(storage + 0x14) = 0x0080bbc0;
    *(unsigned int*)(storage + 0x20) = 0x0080bbb8;
    *(unsigned int*)(storage + 0x24) = 0x0080bba8;
    *(unsigned int*)(storage + 0x44) = 0x0080bb98;
    *(unsigned int*)(storage + 0x64) = 0x0080bb88;
    *(unsigned int*)(storage + 0x84) = 0x0080bb78;
    *(unsigned int*)(storage + 0xa4) = 0x0080bb68;
    *(unsigned int*)(storage + 0xc4) = 0x0080bb58;
    storage[0x130] = 0;
    storage[0x131] = 1;
}
