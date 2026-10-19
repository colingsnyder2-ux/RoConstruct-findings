// from server: 26% by colin
// from server: 24% by colin
// roc 2008-06 0043b0d0  unit: G3D::VColor3::?$XItem  size: 695 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043b0d0
//
// 0043b0d0  83ec5c               sub esp, 0x5c
// 0043b0d3  8b442460             mov eax, dword ptr [esp + 0x60]
// 0043b0d7  8b10                 mov edx, dword ptr [eax]
// 0043b0d9  53                   push ebx
// 0043b0da  55                   push ebp
// 0043b0db  56                   push esi
// 0043b0dc  57                   push edi
// 0043b0dd  8bf9                 mov edi, ecx
// 0043b0df  8b7710               mov esi, dword ptr [edi + 0x10]
// 0043b0e2  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0043b0e5  897c2414             mov dword ptr [esp + 0x14], edi
// 0043b0e9  c644241300           mov byte ptr [esp + 0x13], 0
// 0043b0ee  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0043b0f2  89542428             mov dword ptr [esp + 0x28], edx
// 0043b0f6  3b7714               cmp esi, dword ptr [edi + 0x14]
// 0043b0f9  7606                 jbe 0x43b101
// 0043b0fb  ff1590288000         call dword ptr [0x802890]
// 0043b101  8b6f04               mov ebp, dword ptr [edi + 4]
// 0043b104  8bde                 mov ebx, esi
// 0043b106  8b7714               mov esi, dword ptr [edi + 0x14]
// 0043b109  896c2420             mov dword ptr [esp + 0x20], ebp
// 0043b10d  895c2424             mov dword ptr [esp + 0x24], ebx
// 0043b111  8974241c             mov dword ptr [esp + 0x1c], esi
// 0043b115  397710               cmp dword ptr [edi + 0x10], esi
// 0043b118  7606                 jbe 0x43b120
// 0043b11a  ff1590288000         call dword ptr [0x802890]
// 0043b120  8b4704               mov eax, dword ptr [edi + 4]
// 0043b123  89442438             mov dword ptr [esp + 0x38], eax
// 0043b127  85ed                 test ebp, ebp
// 0043b129  7406                 je 0x43b131
// 0043b12b  3b6c2438             cmp ebp, dword ptr [esp + 0x38]
// 0043b12f  7406                 je 0x43b137
// 0043b131  ff1590288000         call dword ptr [0x802890]
// 0043b137  3bde                 cmp ebx, esi
// 0043b139  0f8429020000         je 0x43b368
// 0043b13f  85ed                 test ebp, ebp
// 0043b141  0f851e010000         jne 0x43b265
// 0043b147  ff1590288000         call dword ptr [0x802890]
// 0043b14d  33c0                 xor eax, eax
// 0043b14f  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0043b152  7206                 jb 0x43b15a
// 0043b154  ff1590288000         call dword ptr [0x802890]
// 0043b15a  8b0b                 mov ecx, dword ptr [ebx]
// 0043b15c  8d542418             lea edx, [esp + 0x18]
// 0043b160  52                   push edx
// 0043b161  8d442434             lea eax, [esp + 0x34]
// 0043b165  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0043b169  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0043b16d  50                   push eax
// 0043b16e  e8adf1ffff           call 0x43a320
// 0043b173  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0043b177  85ff                 test edi, edi
// 0043b179  7406                 je 0x43b181
// 0043b17b  3b7c2428             cmp edi, dword ptr [esp + 0x28]
// 0043b17f  7406                 je 0x43b187
// 0043b181  ff1590288000         call dword ptr [0x802890]
// 0043b187  8b742434             mov esi, dword ptr [esp + 0x34]
// 0043b18b  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 0043b18f  0f846d010000         je 0x43b302
// 0043b195  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0043b19b  85ff                 test edi, edi
// 0043b19d  0f85ca000000         jne 0x43b26d
// 0043b1a3  ffd3                 call ebx
// 0043b1a5  33c0                 xor eax, eax
// 0043b1a7  3b7018               cmp esi, dword ptr [eax + 0x18]
// 0043b1aa  7502                 jne 0x43b1ae
// 0043b1ac  ffd3                 call ebx
// 0043b1ae  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 0043b1b1  3b6e20               cmp ebp, dword ptr [esi + 0x20]
// 0043b1b4  7602                 jbe 0x43b1b8
// 0043b1b6  ffd3                 call ebx
// 0043b1b8  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0043b1bb  85ff                 test edi, edi
// 0043b1bd  0f85b1000000         jne 0x43b274
// 0043b1c3  ff1590288000         call dword ptr [0x802890]
// 0043b1c9  3b7718               cmp esi, dword ptr [edi + 0x18]
// 0043b1cc  7506                 jne 0x43b1d4
// 0043b1ce  ff1590288000         call dword ptr [0x802890]
// 0043b1d4  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0043b1d7  897c2418             mov dword ptr [esp + 0x18], edi
// 0043b1db  397e1c               cmp dword ptr [esi + 0x1c], edi
// 0043b1de  7606                 jbe 0x43b1e6
// 0043b1e0  ff1590288000         call dword ptr [0x802890]
// 0043b1e6  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0043b1e9  894c2440             mov dword ptr [esp + 0x40], ecx
// 0043b1ed  8d4900               lea ecx, [ecx]
// 0043b1f0  85db                 test ebx, ebx
// 0043b1f2  7406                 je 0x43b1fa
// 0043b1f4  3b5c2440             cmp ebx, dword ptr [esp + 0x40]
// 0043b1f8  7406                 je 0x43b200
// 0043b1fa  ff1590288000         call dword ptr [0x802890]
// 0043b200  3bef                 cmp ebp, edi
// 0043b202  0f84f2000000         je 0x43b2fa
// 0043b208  807c241300           cmp byte ptr [esp + 0x13], 0
// 0043b20d  7570                 jne 0x43b27f
// 0043b20f  8b3d90288000         mov edi, dword ptr [0x802890]
// 0043b215  85db                 test ebx, ebx
// 0043b217  7562                 jne 0x43b27b
// 0043b219  ffd7                 call edi
// 0043b21b  33c0                 xor eax, eax
// 0043b21d  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043b220  7202                 jb 0x43b224
// 0043b222  ffd7                 call edi
// 0043b224  8b4500               mov eax, dword ptr [ebp]
// 0043b227  8b742414             mov esi, dword ptr [esp + 0x14]
// 0043b22b  50                   push eax
// 0043b22c  8d542458             lea edx, [esp + 0x58]
// 0043b230  81c6e8feffff         add esi, 0xfffffee8
// 0043b236  52                   push edx
// 0043b237  8bce                 mov ecx, esi
// 0043b239  e8d2020000           call 0x43b510
// 0043b23e  d900                 fld dword ptr [eax]
// 0043b240  d95c2448             fstp dword ptr [esp + 0x48]
// 0043b244  8d4c2448             lea ecx, [esp + 0x48]
// 0043b248  d94004               fld dword ptr [eax + 4]
// 0043b24b  51                   push ecx
// 0043b24c  d95c2450             fstp dword ptr [esp + 0x50]
// 0043b250  8bce                 mov ecx, esi
// 0043b252  d94008               fld dword ptr [eax + 8]
// 0043b255  8b06                 mov eax, dword ptr [esi]
// 0043b257  8b90f4000000         mov edx, dword ptr [eax + 0xf4]
// 0043b25d  d95c2454             fstp dword ptr [esp + 0x54]
// 0043b261  ffd2                 call edx
// 0043b263  eb6d                 jmp 0x43b2d2
// 0043b265  8b4500               mov eax, dword ptr [ebp]
// 0043b268  e9e2feffff           jmp 0x43b14f
// 0043b26d  8b07                 mov eax, dword ptr [edi]
// 0043b26f  e933ffffff           jmp 0x43b1a7
// 0043b274  8b3f                 mov edi, dword ptr [edi]
// 0043b276  e94effffff           jmp 0x43b1c9
// 0043b27b  8b03                 mov eax, dword ptr [ebx]
// 0043b27d  eb9e                 jmp 0x43b21d
// 0043b27f  85db                 test ebx, ebx
// 0043b281  756f                 jne 0x43b2f2
// 0043b283  ff1590288000         call dword ptr [0x802890]
// 0043b289  33c0                 xor eax, eax
// 0043b28b  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043b28e  7206                 jb 0x43b296
// 0043b290  ff1590288000         call dword ptr [0x802890]
// 0043b296  8b4500               mov eax, dword ptr [ebp]
// 0043b299  8b742414             mov esi, dword ptr [esp + 0x14]
// 0043b29d  8bbee8feffff         mov edi, dword ptr [esi - 0x118]
// 0043b2a3  50                   push eax
// 0043b2a4  81c6e8feffff         add esi, 0xfffffee8
// 0043b2aa  8d442464             lea eax, [esp + 0x64]
// 0043b2ae  50                   push eax
// 0043b2af  8bce                 mov ecx, esi
// 0043b2b1  81c7f8000000         add edi, 0xf8
// 0043b2b7  e854020000           call 0x43b510
// 0043b2bc  8b17                 mov edx, dword ptr [edi]
// 0043b2be  50                   push eax
// 0043b2bf  8d4c244c             lea ecx, [esp + 0x4c]
// 0043b2c3  51                   push ecx
// 0043b2c4  8bce                 mov ecx, esi
// 0043b2c6  ffd2                 call edx
// 0043b2c8  84c0                 test al, al
// 0043b2ca  7466                 je 0x43b332
// 0043b2cc  8b3d90288000         mov edi, dword ptr [0x802890]
// 0043b2d2  c644241301           mov byte ptr [esp + 0x13], 1
// 0043b2d7  85db                 test ebx, ebx
// 0043b2d9  751b                 jne 0x43b2f6
// 0043b2db  ffd7                 call edi
// 0043b2dd  33c0                 xor eax, eax
// 0043b2df  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043b2e2  7202                 jb 0x43b2e6
// 0043b2e4  ffd7                 call edi
// 0043b2e6  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0043b2ea  83c508               add ebp, 8
// 0043b2ed  e9fefeffff           jmp 0x43b1f0
// 0043b2f2  8b03                 mov eax, dword ptr [ebx]
// 0043b2f4  eb95                 jmp 0x43b28b
// 0043b2f6  8b03                 mov eax, dword ptr [ebx]
// 0043b2f8  ebe5                 jmp 0x43b2df
// 0043b2fa  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0043b2fe  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0043b302  85ed                 test ebp, ebp
// 0043b304  7527                 jne 0x43b32d
// 0043b306  ff1590288000         call dword ptr [0x802890]
// 0043b30c  33c0                 xor eax, eax
// 0043b30e  3b5810               cmp ebx, dword ptr [eax + 0x10]
// 0043b311  7206                 jb 0x43b319
// 0043b313  ff1590288000         call dword ptr [0x802890]
// 0043b319  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0043b31d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0043b321  83c304               add ebx, 4
// 0043b324  895c2424             mov dword ptr [esp + 0x24], ebx
// 0043b328  e9fafdffff           jmp 0x43b127
// 0043b32d  8b4500               mov eax, dword ptr [ebp]
// 0043b330  ebdc                 jmp 0x43b30e
// 0043b332  51                   push ecx
// 0043b333  8bcc                 mov ecx, esp
// 0043b335  89642474             mov dword ptr [esp + 0x74], esp
// 0043b339  6816b78000           push 0x80b716
// 0043b33e  ff15103f8000         call dword ptr [0x803f10]
// 0043b344  8b742418             mov esi, dword ptr [esp + 0x18]
// 0043b348  81c6e8feffff         add esi, 0xfffffee8
// 0043b34e  8bce                 mov ecx, esi
// 0043b350  e89b662d00           call 0x7119f0
// 0043b355  6a00                 push 0
// 0043b357  8bce                 mov ecx, esi
// 0043b359  e8725d2d00           call 0x7110d0
// 0043b35e  5f                   pop edi
// 0043b35f  5e                   pop esi
// 0043b360  5d                   pop ebp
// 0043b361  5b                   pop ebx
// 0043b362  83c45c               add esp, 0x5c
// 0043b365  c20400               ret 4
// 0043b368  33c0                 xor eax, eax
// 0043b36a  38442413             cmp byte ptr [esp + 0x13], al
// 0043b36e  8d8fe8feffff         lea ecx, [edi - 0x118]
// 0043b374  0f94c0               sete al
// 0043b377  50                   push eax
// 0043b378  e8535d2d00           call 0x7110d0
// 0043b37d  5f                   pop edi
// 0043b37e  5e                   pop esi
// 0043b37f  5d                   pop ebp
// 0043b380  5b                   pop ebx
// 0043b381  83c45c               add esp, 0x5c
// 0043b384  c20400               ret 4

extern "C" void __stdcall invalid_parameter_noinfo();

struct GuardBase {
    int a;
    int b;
    GuardBase();
    __declspec(dllimport) ~GuardBase() throw();
    void acquire(void*);
};

struct Guard : GuardBase {
    int c;
    Guard(void* p);
};

struct EnumDescriptor;

struct Item {
    char pad000[4];
    void* field04;
    char pad008[8];
    void* field10;
    void* field14;
    char pad018[0x100];
    void* field118;
    char pad11c[0xdc];
    int field1f8;

    void destroy(unsigned int flags);
};

void Item::destroy(unsigned int flags) {
    char found = 0;
    void* it = field10;
    void* end = field14;

    if (it > end)
        invalid_parameter_noinfo();

    void* base = field04;
    void* cur = it;
    void* last = end;

    if (field10 > last)
        invalid_parameter_noinfo();

    void* b2 = field04;
    if (base != 0 && base != b2)
        invalid_parameter_noinfo();

    if (cur == last) {
        EnumDescriptor* owner = (EnumDescriptor*)((char*)this - 0x118);
        *(int*)((char*)owner + 0xe0) = (found == 0) ? 1 : 0;
        return;
    }

    while (cur != last) {
        void* node = cur;
        if (base != 0)
            node = *(void**)base;

        void* item = *(void**)node;

        Guard g(item);

        void* inner = *(void**)((char*)node + 0x10);
        void* innerEnd = *(void**)((char*)node + 0x20);
        void* innerCur = *(void**)((char*)node + 0x1c);

        if (innerCur > innerEnd)
            invalid_parameter_noinfo();

        void* innerBase = *(void**)((char*)node + 0x10);
        if (inner != 0 && inner != innerBase)
            invalid_parameter_noinfo();

        while (innerCur != innerEnd) {
            void* e = innerCur;
            if (inner != 0)
                e = *(void**)inner;

            void* val = *(void**)e;

            if (found) {
                EnumDescriptor* owner = (EnumDescriptor*)((char*)this - 0x118);
                void* fn = *(void**)((char*)owner + 0xf8);
                bool ok = ((bool (__thiscall*)(EnumDescriptor*, void*, void*))fn)(owner, &val, 0);
                if (!ok) {
                    invalid_parameter_noinfo();
                }
            } else {
                EnumDescriptor* owner = (EnumDescriptor*)((char*)this - 0x118);
                void* fn = *(void**)((char*)owner + 0xf4);
                ((void (__thiscall*)(EnumDescriptor*, void*))fn)(owner, &val);
            }

            found = 1;
            innerCur = (char*)innerCur + 8;
        }

        cur = (char*)cur + 4;
    }

    EnumDescriptor* owner = (EnumDescriptor*)((char*)this - 0x118);
    *(int*)((char*)owner + 0xe0) = (found == 0) ? 1 : 0;
}
