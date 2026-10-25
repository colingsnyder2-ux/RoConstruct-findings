// from server: 100% by king_originala
// roc 2008-06 006570a0  unit: RBX::ArrowPanel  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006570a0
//
// 006570a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006570a4  8b542404             mov edx, dword ptr [esp + 4]
// 006570a8  56                   push esi
// 006570a9  8bf1                 mov esi, ecx
// 006570ab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006570af  50                   push eax
// 006570b0  51                   push ecx
// 006570b1  52                   push edx
// 006570b2  8bce                 mov ecx, esi
// 006570b4  e84784ffff           call 0x64f500
// 006570b9  8b442418             mov eax, dword ptr [esp + 0x18]
// 006570bd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006570c1  898688010000         mov dword ptr [esi + 0x188], eax
// 006570c7  c706fcbf8400         mov dword ptr [esi], 0x84bffc
// 006570cd  c74610ecbf8400       mov dword ptr [esi + 0x10], 0x84bfec
// 006570d4  c74614e4bf8400       mov dword ptr [esi + 0x14], 0x84bfe4
// 006570db  c74620dcbf8400       mov dword ptr [esi + 0x20], 0x84bfdc
// 006570e2  c74624ccbf8400       mov dword ptr [esi + 0x24], 0x84bfcc
// 006570e9  c74644bcbf8400       mov dword ptr [esi + 0x44], 0x84bfbc
// 006570f0  c74664acbf8400       mov dword ptr [esi + 0x64], 0x84bfac
// 006570f7  c786840000009cbf8400 mov dword ptr [esi + 0x84], 0x84bf9c
// 00657101  c786a40000008cbf8400 mov dword ptr [esi + 0xa4], 0x84bf8c
// 0065710b  c786c40000007cbf8400 mov dword ptr [esi + 0xc4], 0x84bf7c
// 00657115  c7863001000074bf8400 mov dword ptr [esi + 0x130], 0x84bf74
// 0065711f  898e8c010000         mov dword ptr [esi + 0x18c], ecx
// 00657125  8bc6                 mov eax, esi
// 00657127  5e                   pop esi
// 00657128  c21400               ret 0x14

struct S {
    unsigned long data[0x190 / 4];

    void initialize(void *, void *, void *);
    S(void *, void *, void *, void *, void *);
};

S::S(void *a, void *b, void *c, void *d, void *e)
{
    initialize(a, b, c);
    data[0x188 / 4] = (unsigned long)e;
    data[0x000 / 4] = 0x0084bffc;
    data[0x010 / 4] = 0x0084bfec;
    data[0x014 / 4] = 0x0084bfe4;
    data[0x020 / 4] = 0x0084bfdc;
    data[0x024 / 4] = 0x0084bfcc;
    data[0x044 / 4] = 0x0084bfbc;
    data[0x064 / 4] = 0x0084bfac;
    data[0x084 / 4] = 0x0084bf9c;
    data[0x0a4 / 4] = 0x0084bf8c;
    data[0x0c4 / 4] = 0x0084bf7c;
    data[0x130 / 4] = 0x0084bf74;
    data[0x18c / 4] = (unsigned long)d;
}
