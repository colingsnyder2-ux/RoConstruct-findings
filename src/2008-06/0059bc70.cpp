// from server: 48% by colin
// roc 2008-06 0059bc70  unit: RBX::PartInstance  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059bc70
//
// 0059bc70  6aff                 push -1
// 0059bc72  68a9707d00           push 0x7d70a9
// 0059bc77  64a100000000         mov eax, dword ptr fs:[0]
// 0059bc7d  50                   push eax
// 0059bc7e  64892500000000       mov dword ptr fs:[0], esp
// 0059bc85  83ec08               sub esp, 8
// 0059bc88  53                   push ebx
// 0059bc89  55                   push ebp
// 0059bc8a  56                   push esi
// 0059bc8b  8bf1                 mov esi, ecx
// 0059bc8d  8974240c             mov dword ptr [esp + 0xc], esi
// 0059bc91  c706b82d8300         mov dword ptr [esi], 0x832db8
// 0059bc97  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 0059bc9a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0059bca0  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 0059bca8  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 0059bcab  7602                 jbe 0x59bcaf
// 0059bcad  ffd3                 call ebx
// 0059bcaf  57                   push edi
// 0059bcb0  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0059bcb3  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 0059bcb6  7602                 jbe 0x59bcba
// 0059bcb8  ffd3                 call ebx
// 0059bcba  33db                 xor ebx, ebx
// 0059bcbc  3bfd                 cmp edi, ebp
// 0059bcbe  7415                 je 0x59bcd5
// 0059bcc0  8b0f                 mov ecx, dword ptr [edi]
// 0059bcc2  3bcb                 cmp ecx, ebx
// 0059bcc4  7408                 je 0x59bcce
// 0059bcc6  8b01                 mov eax, dword ptr [ecx]
// 0059bcc8  8b10                 mov edx, dword ptr [eax]
// 0059bcca  6a01                 push 1
// 0059bccc  ffd2                 call edx
// 0059bcce  83c704               add edi, 4
// 0059bcd1  3bfd                 cmp edi, ebp
// 0059bcd3  75eb                 jne 0x59bcc0
// 0059bcd5  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0059bcdb  3bc3                 cmp eax, ebx
// 0059bcdd  7409                 je 0x59bce8
// 0059bcdf  50                   push eax
// 0059bce0  e895491000           call 0x6a067a
// 0059bce5  83c404               add esp, 4
// 0059bce8  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 0059bcee  50                   push eax
// 0059bcef  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 0059bcf5  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 0059bcfb  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 0059bd01  e874491000           call 0x6a067a
// 0059bd06  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0059bd0c  83c404               add esp, 4
// 0059bd0f  3bc3                 cmp eax, ebx
// 0059bd11  7409                 je 0x59bd1c
// 0059bd13  50                   push eax
// 0059bd14  e861491000           call 0x6a067a
// 0059bd19  83c404               add esp, 4
// 0059bd1c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0059bd22  50                   push eax
// 0059bd23  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 0059bd29  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0059bd2f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 0059bd35  e840491000           call 0x6a067a
// 0059bd3a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0059bd40  83c404               add esp, 4
// 0059bd43  3bc3                 cmp eax, ebx
// 0059bd45  7409                 je 0x59bd50
// 0059bd47  50                   push eax
// 0059bd48  e82d491000           call 0x6a067a
// 0059bd4d  83c404               add esp, 4
// 0059bd50  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0059bd56  50                   push eax
// 0059bd57  899eac000000         mov dword ptr [esi + 0xac], ebx
// 0059bd5d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 0059bd63  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 0059bd69  e80c491000           call 0x6a067a
// 0059bd6e  8dbe88000000         lea edi, [esi + 0x88]
// 0059bd74  83c404               add esp, 4
// 0059bd77  897c2414             mov dword ptr [esp + 0x14], edi
// 0059bd7b  8bcf                 mov ecx, edi
// 0059bd7d  c644242008           mov byte ptr [esp + 0x20], 8
// 0059bd82  e849bae6ff           call 0x4077d0
// 0059bd87  8b3f                 mov edi, dword ptr [edi]
// 0059bd89  57                   push edi
// 0059bd8a  e8eb481000           call 0x6a067a
// 0059bd8f  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0059bd92  83c404               add esp, 4
// 0059bd95  5f                   pop edi
// 0059bd96  3bc3                 cmp eax, ebx
// 0059bd98  7409                 je 0x59bda3
// 0059bd9a  50                   push eax
// 0059bd9b  e8da481000           call 0x6a067a
// 0059bda0  83c404               add esp, 4
// 0059bda3  8b4670               mov eax, dword ptr [esi + 0x70]
// 0059bda6  50                   push eax
// 0059bda7  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0059bdaa  899e80000000         mov dword ptr [esi + 0x80], ebx
// 0059bdb0  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0059bdb6  e8bf481000           call 0x6a067a
// 0059bdbb  83c404               add esp, 4
// 0059bdbe  8d4e50               lea ecx, [esi + 0x50]
// 0059bdc1  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0059bdc6  e8b57ffbff           call 0x553d80
// 0059bdcb  8d4e30               lea ecx, [esi + 0x30]
// 0059bdce  885c241c             mov byte ptr [esp + 0x1c], bl
// 0059bdd2  e8a97ffbff           call 0x553d80
// 0059bdd7  8bce                 mov ecx, esi
// 0059bdd9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0059bde1  e89a02fdff           call 0x56c080
// 0059bde6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0059bdea  5e                   pop esi
// 0059bdeb  5d                   pop ebp
// 0059bdec  5b                   pop ebx
// 0059bded  64890d00000000       mov dword ptr fs:[0], ecx
// 0059bdf4  83c414               add esp, 0x14
// 0059bdf7  c3                   ret 

struct PartInstance {
    char pad0[0x1c];
    unsigned int field1c;
    int field20;
    char pad24[0x4c];
    int field70;
    char pad74[0x8];
    int field7c;
    int field80;
    int field84;
    char pad88[0x18];
    int fielda0;
    int fielda4;
    int fielda8;
    int fieldac;
    int fieldb0;
    int fieldb4;
    int fieldb8;
    int fieldbc;
    int fieldc0;
    int fieldc4;
    int fieldc8;
    int fieldcc;
    int fieldd0;
    int fieldd4;
    int fieldd8;
    int fielddc;
    int fielde0;
    int fielde4;
    void destroy();
};

extern "C" void __cdecl operator_delete(void*);
extern "C" void __cdecl sub_6a067a(void*);
extern "C" void __cdecl sub_4077d0(void*);
extern "C" void __cdecl sub_553d80(void*);
extern "C" void __cdecl sub_56c080(void*);

void PartInstance::destroy() {
    *(int*)this = 0x832db8;
    int ebp = field20;
    if (field1c > ebp) {
        void (*fn)() = *(void(**)())0x802890;
        fn();
    }
    int edi = field1c;
    if (edi > field20) {
        void (*fn)() = *(void(**)())0x802890;
        fn();
    }
    while (edi != ebp) {
        int* p = *(int**)edi;
        if (p != 0) {
            void (*fn)(int) = *(void(**)(int))*p;
            fn(1);
        }
        edi += 4;
    }
    if (fielddc != 0) {
        sub_6a067a((void*)fielddc);
    }
    sub_6a067a((void*)fieldd0);
    fielddc = 0;
    fielde0 = 0;
    fielde4 = 0;
    if (fieldc4 != 0) {
        sub_6a067a((void*)fieldc4);
    }
    sub_6a067a((void*)fieldb8);
    fieldc4 = 0;
    fieldc8 = 0;
    fieldcc = 0;
    if (fieldac != 0) {
        sub_6a067a((void*)fieldac);
    }
    sub_6a067a((void*)fielda0);
    fieldac = 0;
    fieldb0 = 0;
    fieldb4 = 0;
    sub_4077d0((void*)((char*)this + 0x88));
    sub_6a067a(*(void**)((char*)this + 0x88));
    if (field7c != 0) {
        sub_6a067a((void*)field7c);
    }
    sub_6a067a((void*)field70);
    field7c = 0;
    field80 = 0;
    field84 = 0;
    sub_553d80((void*)((char*)this + 0x50));
    sub_553d80((void*)((char*)this + 0x30));
    sub_56c080(this);
}
