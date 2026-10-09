// from server: 60% by colin
// roc 2007-08 004c5310  unit: RakPeer  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c5310
//
// 004c5310  53                   push ebx
// 004c5311  55                   push ebp
// 004c5312  56                   push esi
// 004c5313  8bd9                 mov ebx, ecx
// 004c5315  33ed                 xor ebp, ebp
// 004c5317  396b08               cmp dword ptr [ebx + 8], ebp
// 004c531a  57                   push edi
// 004c531b  8b3dc4e67700         mov edi, dword ptr [0x77e6c4]
// 004c5321  7e1c                 jle 0x4c533f
// 004c5323  8b33                 mov esi, dword ptr [ebx]
// 004c5325  8b06                 mov eax, dword ptr [esi]
// 004c5327  50                   push eax
// 004c5328  ffd7                 call edi
// 004c532a  8b4e08               mov ecx, dword ptr [esi + 8]
// 004c532d  51                   push ecx
// 004c532e  ffd7                 call edi
// 004c5330  8bc6                 mov eax, esi
// 004c5332  8b760c               mov esi, dword ptr [esi + 0xc]
// 004c5335  50                   push eax
// 004c5336  ffd7                 call edi
// 004c5338  83c40c               add esp, 0xc
// 004c533b  3b33                 cmp esi, dword ptr [ebx]
// 004c533d  75e6                 jne 0x4c5325
// 004c533f  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004c5342  7e1e                 jle 0x4c5362
// 004c5344  8b7304               mov esi, dword ptr [ebx + 4]
// 004c5347  8b16                 mov edx, dword ptr [esi]
// 004c5349  52                   push edx
// 004c534a  ffd7                 call edi
// 004c534c  8b4608               mov eax, dword ptr [esi + 8]
// 004c534f  50                   push eax
// 004c5350  ffd7                 call edi
// 004c5352  8bc6                 mov eax, esi
// 004c5354  8b760c               mov esi, dword ptr [esi + 0xc]
// 004c5357  50                   push eax
// 004c5358  ffd7                 call edi
// 004c535a  83c40c               add esp, 0xc
// 004c535d  3b7304               cmp esi, dword ptr [ebx + 4]
// 004c5360  75e5                 jne 0x4c5347
// 004c5362  5f                   pop edi
// 004c5363  5e                   pop esi
// 004c5364  896b0c               mov dword ptr [ebx + 0xc], ebp
// 004c5367  896b08               mov dword ptr [ebx + 8], ebp
// 004c536a  5d                   pop ebp
// 004c536b  5b                   pop ebx
// 004c536c  c3                   ret 

extern "C" void __stdcall free(void*);

struct RakPeer {
    void* field0;
    void* field4;
    int field8;
    int fieldC;
    void clear();
};

void RakPeer::clear()
{
    int i;
    void* p;
    void* next;

    if (field8 > 0) {
        p = field0;
        do {
            free(*(void**)p);
            free(*(void**)((char*)p + 8));
            next = *(void**)((char*)p + 0xC);
            free(p);
            p = next;
        } while (p != field0);
    }

    if (fieldC > 0) {
        p = field4;
        do {
            free(*(void**)p);
            free(*(void**)((char*)p + 8));
            next = *(void**)((char*)p + 0xC);
            free(p);
            p = next;
        } while (p != field4);
    }

    fieldC = 0;
    field8 = 0;
}
