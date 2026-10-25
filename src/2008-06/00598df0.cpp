// from server: 100% by king_originala
// roc 2008-06 00598df0  unit: RBX::PartInstance  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598df0
//
// 00598df0  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 00598df6  c701c42a8300         mov dword ptr [ecx], 0x832ac4
// 00598dfc  c74110b82a8300       mov dword ptr [ecx + 0x10], 0x832ab8
// 00598e03  c74114b02a8300       mov dword ptr [ecx + 0x14], 0x832ab0
// 00598e0a  c74120a82a8300       mov dword ptr [ecx + 0x20], 0x832aa8
// 00598e11  c74124982a8300       mov dword ptr [ecx + 0x24], 0x832a98
// 00598e18  c74144882a8300       mov dword ptr [ecx + 0x44], 0x832a88
// 00598e1f  c74164782a8300       mov dword ptr [ecx + 0x64], 0x832a78
// 00598e26  c78184000000682a8300 mov dword ptr [ecx + 0x84], 0x832a68
// 00598e30  c781a4000000582a8300 mov dword ptr [ecx + 0xa4], 0x832a58
// 00598e3a  c781c4000000482a8300 mov dword ptr [ecx + 0xc4], 0x832a48
// 00598e44  c781300100003c2a8300 mov dword ptr [ecx + 0x130], 0x832a3c
// 00598e4e  8b5004               mov edx, dword ptr [eax + 4]
// 00598e51  c7840a34010000302a8300 mov dword ptr [edx + ecx + 0x134], 0x832a30
// 00598e5c  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 00598e62  8b5008               mov edx, dword ptr [eax + 8]
// 00598e65  c7840a34010000282a8300 mov dword ptr [edx + ecx + 0x134], 0x832a28
// 00598e70  e9ab010700           jmp 0x609020

struct S {
    unsigned int words[77];
    int* table;

    void reset();
    void finish();
};

void S::reset()
{
    int* t = table;
    words[0]  = 0x00832ac4;
    words[4]  = 0x00832ab8;
    words[5]  = 0x00832ab0;
    words[8]  = 0x00832aa8;
    words[9]  = 0x00832a98;
    words[17] = 0x00832a88;
    words[25] = 0x00832a78;
    words[33] = 0x00832a68;
    words[41] = 0x00832a58;
    words[49] = 0x00832a48;
    words[76] = 0x00832a3c;

    *(unsigned int*)((char*)this + 0x134 + t[1]) = 0x00832a30;
    *(unsigned int*)((char*)this + 0x134 + table[2]) = 0x00832a28;
    finish();
}
