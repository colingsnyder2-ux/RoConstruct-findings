// from server: 100% by king_originala
// roc 2008-06 005a07b0  unit: RBX::Workspace  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a07b0
//
// 005a07b0  51                   push ecx
// 005a07b1  837c240800           cmp dword ptr [esp + 8], 0
// 005a07b6  56                   push esi
// 005a07b7  8bf1                 mov esi, ecx
// 005a07b9  c744240400000000     mov dword ptr [esp + 4], 0
// 005a07c1  7414                 je 0x5a07d7
// 005a07c3  c78634010000281e8300 mov dword ptr [esi + 0x134], 0x831e28
// 005a07cd  c7860003000044618400 mov dword ptr [esi + 0x300], 0x846144
// 005a07d7  6a00                 push 0
// 005a07d9  e8a20dffff           call 0x591580
// 005a07de  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005a07e4  c706d4378300         mov dword ptr [esi], 0x8337d4
// 005a07ea  c74610c4378300       mov dword ptr [esi + 0x10], 0x8337c4
// 005a07f1  c74614bc378300       mov dword ptr [esi + 0x14], 0x8337bc
// 005a07f8  c74620b4378300       mov dword ptr [esi + 0x20], 0x8337b4
// 005a07ff  c74624a4378300       mov dword ptr [esi + 0x24], 0x8337a4
// 005a0806  c7464494378300       mov dword ptr [esi + 0x44], 0x833794
// 005a080d  c7466484378300       mov dword ptr [esi + 0x64], 0x833784
// 005a0814  c7868400000074378300 mov dword ptr [esi + 0x84], 0x833774
// 005a081e  c786a400000064378300 mov dword ptr [esi + 0xa4], 0x833764
// 005a0828  c786c400000054378300 mov dword ptr [esi + 0xc4], 0x833754
// 005a0832  c7863001000048378300 mov dword ptr [esi + 0x130], 0x833748
// 005a083c  c786a001000030378300 mov dword ptr [esi + 0x1a0], 0x833730
// 005a0846  c7868802000018378300 mov dword ptr [esi + 0x288], 0x833718
// 005a0850  8b4804               mov ecx, dword ptr [eax + 4]
// 005a0853  c78431340100000c378300 mov dword ptr [ecx + esi + 0x134], 0x83370c
// 005a085e  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005a0864  8b4208               mov eax, dword ptr [edx + 8]
// 005a0867  c784303401000004378300 mov dword ptr [eax + esi + 0x134], 0x833704
// 005a0872  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 005a0878  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005a087b  c7843234010000e8368300 mov dword ptr [edx + esi + 0x134], 0x8336e8
// 005a0886  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 005a088c  8b4004               mov eax, dword ptr [eax + 4]
// 005a088f  8d8848feffff         lea ecx, [eax - 0x1b8]
// 005a0895  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005a089c  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005a08a2  8b4208               mov eax, dword ptr [edx + 8]
// 005a08a5  8d8840feffff         lea ecx, [eax - 0x1c0]
// 005a08ab  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005a08b2  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 005a08b8  8b420c               mov eax, dword ptr [edx + 0xc]
// 005a08bb  8d8838feffff         lea ecx, [eax - 0x1c8]
// 005a08c1  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 005a08c8  8bc6                 mov eax, esi
// 005a08ca  5e                   pop esi
// 005a08cb  59                   pop ecx
// 005a08cc  c20400               ret 4

struct S {
    unsigned char data[0x304];
    void base(int);
    S* initialize(int);
};

S* S::initialize(int complete)
{
    volatile int state = 0;

    if (complete) {
        *(unsigned long*)(data + 0x134) = 0x831e28;
        *(unsigned long*)(data + 0x300) = 0x846144;
    }

    base(0);

    int* table = *(int**)(data + 0x134);

    *(unsigned long*)(data + 0x000) = 0x8337d4;
    *(unsigned long*)(data + 0x010) = 0x8337c4;
    *(unsigned long*)(data + 0x014) = 0x8337bc;
    *(unsigned long*)(data + 0x020) = 0x8337b4;
    *(unsigned long*)(data + 0x024) = 0x8337a4;
    *(unsigned long*)(data + 0x044) = 0x833794;
    *(unsigned long*)(data + 0x064) = 0x833784;
    *(unsigned long*)(data + 0x084) = 0x833774;
    *(unsigned long*)(data + 0x0a4) = 0x833764;
    *(unsigned long*)(data + 0x0c4) = 0x833754;
    *(unsigned long*)(data + 0x130) = 0x833748;
    *(unsigned long*)(data + 0x1a0) = 0x833730;
    *(unsigned long*)(data + 0x288) = 0x833718;

    *(unsigned long*)(data + 0x134 + table[1]) = 0x83370c;

    table = *(int**)(data + 0x134);
    *(unsigned long*)(data + 0x134 + table[2]) = 0x833704;

    table = *(int**)(data + 0x134);
    *(unsigned long*)(data + 0x134 + table[3]) = 0x8336e8;

    table = *(int**)(data + 0x134);
    int offset = table[1];
    *(int*)(data + 0x130 + offset) = offset - 0x1b8;

    table = *(int**)(data + 0x134);
    offset = table[2];
    *(int*)(data + 0x130 + offset) = offset - 0x1c0;

    table = *(int**)(data + 0x134);
    offset = table[3];
    *(int*)(data + 0x130 + offset) = offset - 0x1c8;

    return this;
}
