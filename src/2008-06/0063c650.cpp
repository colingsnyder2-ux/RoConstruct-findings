// from server: 100% by king_originala
// roc 2008-06 0063c650  unit: RBX::VSeat::?$FactoryProduct  size: 297 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063c650
//
// 0063c650  51                   push ecx
// 0063c651  837c240800           cmp dword ptr [esp + 8], 0
// 0063c656  56                   push esi
// 0063c657  8bf1                 mov esi, ecx
// 0063c659  c744240400000000     mov dword ptr [esp + 4], 0
// 0063c661  7414                 je 0x63c677
// 0063c663  c786340100006c9e8400 mov dword ptr [esi + 0x134], 0x849e6c
// 0063c66d  c7860004000044618400 mov dword ptr [esi + 0x400], 0x846144
// 0063c677  6a00                 push 0
// 0063c679  e8520ef6ff           call 0x59d4d0
// 0063c67e  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0063c684  c7068c9c8400         mov dword ptr [esi], 0x849c8c
// 0063c68a  c746107c9c8400       mov dword ptr [esi + 0x10], 0x849c7c
// 0063c691  c74614749c8400       mov dword ptr [esi + 0x14], 0x849c74
// 0063c698  c746206c9c8400       mov dword ptr [esi + 0x20], 0x849c6c
// 0063c69f  c746245c9c8400       mov dword ptr [esi + 0x24], 0x849c5c
// 0063c6a6  c746444c9c8400       mov dword ptr [esi + 0x44], 0x849c4c
// 0063c6ad  c746643c9c8400       mov dword ptr [esi + 0x64], 0x849c3c
// 0063c6b4  c786840000002c9c8400 mov dword ptr [esi + 0x84], 0x849c2c
// 0063c6be  c786a40000001c9c8400 mov dword ptr [esi + 0xa4], 0x849c1c
// 0063c6c8  c786c40000000c9c8400 mov dword ptr [esi + 0xc4], 0x849c0c
// 0063c6d2  c78630010000009c8400 mov dword ptr [esi + 0x130], 0x849c00
// 0063c6dc  c786a0010000f09b8400 mov dword ptr [esi + 0x1a0], 0x849bf0
// 0063c6e6  c786c0010000e49b8400 mov dword ptr [esi + 0x1c0], 0x849be4
// 0063c6f0  c786cc010000cc9b8400 mov dword ptr [esi + 0x1cc], 0x849bcc
// 0063c6fa  8b4804               mov ecx, dword ptr [eax + 4]
// 0063c6fd  c7843134010000c09b8400 mov dword ptr [ecx + esi + 0x134], 0x849bc0
// 0063c708  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0063c70e  8b4208               mov eax, dword ptr [edx + 8]
// 0063c711  c7843034010000b89b8400 mov dword ptr [eax + esi + 0x134], 0x849bb8
// 0063c71c  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0063c722  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0063c725  c78432340100009c9b8400 mov dword ptr [edx + esi + 0x134], 0x849b9c
// 0063c730  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0063c736  8b4004               mov eax, dword ptr [eax + 4]
// 0063c739  8d8848fdffff         lea ecx, [eax - 0x2b8]
// 0063c73f  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0063c746  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0063c74c  8b4208               mov eax, dword ptr [edx + 8]
// 0063c74f  8d8840fdffff         lea ecx, [eax - 0x2c0]
// 0063c755  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0063c75c  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0063c762  8b420c               mov eax, dword ptr [edx + 0xc]
// 0063c765  8d8838fdffff         lea ecx, [eax - 0x2c8]
// 0063c76b  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0063c772  8bc6                 mov eax, esi
// 0063c774  5e                   pop esi
// 0063c775  59                   pop ecx
// 0063c776  c20400               ret 4

struct S {
    unsigned char data[0x404];
    void base_0059d4d0(int);
    S* func_0063c650(int);
};

S* S::func_0063c650(int initialize)
{
    volatile int state = 0;

    if (initialize) {
        *(int*)(data + 0x134) = 0x849e6c;
        *(int*)(data + 0x400) = 0x846144;
    }

    base_0059d4d0(0);

    int* table = *(int**)(data + 0x134);
    *(int*)(data + 0x000) = 0x849c8c;
    *(int*)(data + 0x010) = 0x849c7c;
    *(int*)(data + 0x014) = 0x849c74;
    *(int*)(data + 0x020) = 0x849c6c;
    *(int*)(data + 0x024) = 0x849c5c;
    *(int*)(data + 0x044) = 0x849c4c;
    *(int*)(data + 0x064) = 0x849c3c;
    *(int*)(data + 0x084) = 0x849c2c;
    *(int*)(data + 0x0a4) = 0x849c1c;
    *(int*)(data + 0x0c4) = 0x849c0c;
    *(int*)(data + 0x130) = 0x849c00;
    *(int*)(data + 0x1a0) = 0x849bf0;
    *(int*)(data + 0x1c0) = 0x849be4;
    *(int*)(data + 0x1cc) = 0x849bcc;

    *(int*)(data + table[1] + 0x134) = 0x849bc0;
    *(int*)(data + (*(int**)(data + 0x134))[2] + 0x134) = 0x849bb8;
    *(int*)(data + (*(int**)(data + 0x134))[3] + 0x134) = 0x849b9c;

    int offset = (*(int**)(data + 0x134))[1];
    *(int*)(data + offset + 0x130) = offset - 0x2b8;
    offset = (*(int**)(data + 0x134))[2];
    *(int*)(data + offset + 0x130) = offset - 0x2c0;
    offset = (*(int**)(data + 0x134))[3];
    *(int*)(data + offset + 0x130) = offset - 0x2c8;

    return this;
}
