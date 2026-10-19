// from server: 32% by colin
// from server: 12% by colin
// roc 2008-06 0043cc20  unit: RBX::Soundscape::VSoundId::?$XItem  size: 884 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043cc20
//
// 0043cc20  6aff                 push -1
// 0043cc22  68c1067c00           push 0x7c06c1
// 0043cc27  64a100000000         mov eax, dword ptr fs:[0]
// 0043cc2d  50                   push eax
// 0043cc2e  64892500000000       mov dword ptr fs:[0], esp
// 0043cc35  81eca0000000         sub esp, 0xa0
// 0043cc3b  53                   push ebx
// 0043cc3c  55                   push ebp
// 0043cc3d  56                   push esi
// 0043cc3e  8bd9                 mov ebx, ecx
// 0043cc40  57                   push edi
// 0043cc41  8d4c2440             lea ecx, [esp + 0x40]
// 0043cc45  895c2414             mov dword ptr [esp + 0x14], ebx
// 0043cc49  ff1560248000         call dword ptr [0x802460]
// 0043cc4f  c78424b800000000000000 mov dword ptr [esp + 0xb8], 0
// 0043cc5a  e811761100           call 0x554270
// 0043cc5f  8944245c             mov dword ptr [esp + 0x5c], eax
// 0043cc63  8b8424c0000000       mov eax, dword ptr [esp + 0xc0]
// 0043cc6a  8b7310               mov esi, dword ptr [ebx + 0x10]
// 0043cc6d  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0043cc70  8b10                 mov edx, dword ptr [eax]
// 0043cc72  c78424b800000001000000 mov dword ptr [esp + 0xb8], 1
// 0043cc7d  c644241300           mov byte ptr [esp + 0x13], 0
// 0043cc82  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0043cc86  89542428             mov dword ptr [esp + 0x28], edx
// 0043cc8a  3b7314               cmp esi, dword ptr [ebx + 0x14]
// 0043cc8d  7606                 jbe 0x43cc95
// 0043cc8f  ff1590288000         call dword ptr [0x802890]
// 0043cc95  8b7b04               mov edi, dword ptr [ebx + 4]
// 0043cc98  8bee                 mov ebp, esi
// 0043cc9a  8b7314               mov esi, dword ptr [ebx + 0x14]
// 0043cc9d  897c2420             mov dword ptr [esp + 0x20], edi
// 0043cca1  896c2424             mov dword ptr [esp + 0x24], ebp
// 0043cca5  8974241c             mov dword ptr [esp + 0x1c], esi
// 0043cca9  397310               cmp dword ptr [ebx + 0x10], esi
// 0043ccac  7606                 jbe 0x43ccb4
// 0043ccae  ff1590288000         call dword ptr [0x802890]
// 0043ccb4  8b4304               mov eax, dword ptr [ebx + 4]
// 0043ccb7  89442468             mov dword ptr [esp + 0x68], eax
// 0043ccbb  eb03                 jmp 0x43ccc0
// 0043ccbd  8d4900               lea ecx, [ecx]
// 0043ccc0  85ff                 test edi, edi
// 0043ccc2  7406                 je 0x43ccca
// 0043ccc4  3b7c2468             cmp edi, dword ptr [esp + 0x68]
// 0043ccc8  7406                 je 0x43ccd0
// 0043ccca  ff1590288000         call dword ptr [0x802890]
// 0043ccd0  3bee                 cmp ebp, esi
// 0043ccd2  0f8477020000         je 0x43cf4f
// 0043ccd8  85ff                 test edi, edi
// 0043ccda  0f8550010000         jne 0x43ce30
// 0043cce0  ff1590288000         call dword ptr [0x802890]
// 0043cce6  33c0                 xor eax, eax
// 0043cce8  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043cceb  7206                 jb 0x43ccf3
// 0043cced  ff1590288000         call dword ptr [0x802890]
// 0043ccf3  8b4d00               mov ecx, dword ptr [ebp]
// 0043ccf6  8d542418             lea edx, [esp + 0x18]
// 0043ccfa  52                   push edx
// 0043ccfb  8d442434             lea eax, [esp + 0x34]
// 0043ccff  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0043cd03  8b8c24c4000000       mov ecx, dword ptr [esp + 0xc4]
// 0043cd0a  50                   push eax
// 0043cd0b  e810d6ffff           call 0x43a320
// 0043cd10  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0043cd14  85db                 test ebx, ebx
// 0043cd16  7406                 je 0x43cd1e
// 0043cd18  3b5c2428             cmp ebx, dword ptr [esp + 0x28]
// 0043cd1c  7406                 je 0x43cd24
// 0043cd1e  ff1590288000         call dword ptr [0x802890]
// 0043cd24  8b742434             mov esi, dword ptr [esp + 0x34]
// 0043cd28  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 0043cd2c  0f84c5010000         je 0x43cef7
// 0043cd32  8b3d90288000         mov edi, dword ptr [0x802890]
// 0043cd38  85db                 test ebx, ebx
// 0043cd3a  0f85f7000000         jne 0x43ce37
// 0043cd40  ffd7                 call edi
// 0043cd42  33c0                 xor eax, eax
// 0043cd44  3b7018               cmp esi, dword ptr [eax + 0x18]
// 0043cd47  7502                 jne 0x43cd4b
// 0043cd49  ffd7                 call edi
// 0043cd4b  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 0043cd4e  3b6e20               cmp ebp, dword ptr [esi + 0x20]
// 0043cd51  7602                 jbe 0x43cd55
// 0043cd53  ffd7                 call edi
// 0043cd55  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0043cd58  897c2438             mov dword ptr [esp + 0x38], edi
// 0043cd5c  85db                 test ebx, ebx
// 0043cd5e  0f85da000000         jne 0x43ce3e
// 0043cd64  ff1590288000         call dword ptr [0x802890]
// 0043cd6a  33c0                 xor eax, eax
// 0043cd6c  3b7018               cmp esi, dword ptr [eax + 0x18]
// 0043cd6f  7506                 jne 0x43cd77
// 0043cd71  ff1590288000         call dword ptr [0x802890]
// 0043cd77  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 0043cd7a  895c2418             mov dword ptr [esp + 0x18], ebx
// 0043cd7e  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 0043cd81  7606                 jbe 0x43cd89
// 0043cd83  ff1590288000         call dword ptr [0x802890]
// 0043cd89  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0043cd8c  894c2460             mov dword ptr [esp + 0x60], ecx
// 0043cd90  85ff                 test edi, edi
// 0043cd92  7406                 je 0x43cd9a
// 0043cd94  3b7c2460             cmp edi, dword ptr [esp + 0x60]
// 0043cd98  7406                 je 0x43cda0
// 0043cd9a  ff1590288000         call dword ptr [0x802890]
// 0043cda0  3beb                 cmp ebp, ebx
// 0043cda2  0f8447010000         je 0x43ceef
// 0043cda8  807c241300           cmp byte ptr [esp + 0x13], 0
// 0043cdad  0f8599000000         jne 0x43ce4c
// 0043cdb3  85ff                 test edi, edi
// 0043cdb5  0f858a000000         jne 0x43ce45
// 0043cdbb  ff1590288000         call dword ptr [0x802890]
// 0043cdc1  33c0                 xor eax, eax
// 0043cdc3  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043cdc6  7206                 jb 0x43cdce
// 0043cdc8  ff1590288000         call dword ptr [0x802890]
// 0043cdce  8b4500               mov eax, dword ptr [ebp]
// 0043cdd1  8b742414             mov esi, dword ptr [esp + 0x14]
// 0043cdd5  50                   push eax
// 0043cdd6  8d542474             lea edx, [esp + 0x74]
// 0043cdda  81c6f4feffff         add esi, 0xfffffef4
// 0043cde0  52                   push edx
// 0043cde1  8bce                 mov ecx, esi
// 0043cde3  e818fdffff           call 0x43cb00
// 0043cde8  8bf8                 mov edi, eax
// 0043cdea  57                   push edi
// 0043cdeb  8d4c2444             lea ecx, [esp + 0x44]
// 0043cdef  c68424bc00000002     mov byte ptr [esp + 0xbc], 2
// 0043cdf7  ff150c248000         call dword ptr [0x80240c]
// 0043cdfd  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0043ce00  8d4c2470             lea ecx, [esp + 0x70]
// 0043ce04  8944245c             mov dword ptr [esp + 0x5c], eax
// 0043ce08  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 0043ce10  ff1568248000         call dword ptr [0x802468]
// 0043ce16  8b16                 mov edx, dword ptr [esi]
// 0043ce18  8b92e8000000         mov edx, dword ptr [edx + 0xe8]
// 0043ce1e  8d442440             lea eax, [esp + 0x40]
// 0043ce22  50                   push eax
// 0043ce23  8bce                 mov ecx, esi
// 0043ce25  ffd2                 call edx
// 0043ce27  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0043ce2b  e98c000000           jmp 0x43cebc
// 0043ce30  8b07                 mov eax, dword ptr [edi]
// 0043ce32  e9b1feffff           jmp 0x43cce8
// 0043ce37  8b03                 mov eax, dword ptr [ebx]
// 0043ce39  e906ffffff           jmp 0x43cd44
// 0043ce3e  8b03                 mov eax, dword ptr [ebx]
// 0043ce40  e927ffffff           jmp 0x43cd6c
// 0043ce45  8b07                 mov eax, dword ptr [edi]
// 0043ce47  e977ffffff           jmp 0x43cdc3
// 0043ce4c  85ff                 test edi, edi
// 0043ce4e  0f8590000000         jne 0x43cee4
// 0043ce54  ff1590288000         call dword ptr [0x802890]
// 0043ce5a  33c0                 xor eax, eax
// 0043ce5c  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043ce5f  7206                 jb 0x43ce67
// 0043ce61  ff1590288000         call dword ptr [0x802890]
// 0043ce67  8b4500               mov eax, dword ptr [ebp]
// 0043ce6a  8b742414             mov esi, dword ptr [esp + 0x14]
// 0043ce6e  50                   push eax
// 0043ce6f  8d842494000000       lea eax, [esp + 0x94]
// 0043ce76  81c6f4feffff         add esi, 0xfffffef4
// 0043ce7c  50                   push eax
// 0043ce7d  8bce                 mov ecx, esi
// 0043ce7f  e87cfcffff           call 0x43cb00
// 0043ce84  8b16                 mov edx, dword ptr [esi]
// 0043ce86  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 0043ce8c  50                   push eax
// 0043ce8d  8d442444             lea eax, [esp + 0x44]
// 0043ce91  50                   push eax
// 0043ce92  8bce                 mov ecx, esi
// 0043ce94  c68424c000000003     mov byte ptr [esp + 0xc0], 3
// 0043ce9c  ffd2                 call edx
// 0043ce9e  84c0                 test al, al
// 0043cea0  8d8c2490000000       lea ecx, [esp + 0x90]
// 0043cea7  0f94c3               sete bl
// 0043ceaa  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 0043ceb2  ff1568248000         call dword ptr [0x802468]
// 0043ceb8  84db                 test bl, bl
// 0043ceba  756a                 jne 0x43cf26
// 0043cebc  c644241301           mov byte ptr [esp + 0x13], 1
// 0043cec1  85ff                 test edi, edi
// 0043cec3  7526                 jne 0x43ceeb
// 0043cec5  ff1590288000         call dword ptr [0x802890]
// 0043cecb  33c0                 xor eax, eax
// 0043cecd  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043ced0  7206                 jb 0x43ced8
// 0043ced2  ff1590288000         call dword ptr [0x802890]
// 0043ced8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0043cedc  83c508               add ebp, 8
// 0043cedf  e9acfeffff           jmp 0x43cd90
// 0043cee4  8b07                 mov eax, dword ptr [edi]
// 0043cee6  e971ffffff           jmp 0x43ce5c
// 0043ceeb  8b07                 mov eax, dword ptr [edi]
// 0043ceed  ebde                 jmp 0x43cecd
// 0043ceef  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0043cef3  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0043cef7  85ff                 test edi, edi
// 0043cef9  7527                 jne 0x43cf22
// 0043cefb  ff1590288000         call dword ptr [0x802890]
// 0043cf01  33c0                 xor eax, eax
// 0043cf03  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0043cf06  7206                 jb 0x43cf0e
// 0043cf08  ff1590288000         call dword ptr [0x802890]
// 0043cf0e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0043cf12  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0043cf16  83c504               add ebp, 4
// 0043cf19  896c2424             mov dword ptr [esp + 0x24], ebp
// 0043cf1d  e99efdffff           jmp 0x43ccc0
// 0043cf22  8b07                 mov eax, dword ptr [edi]
// 0043cf24  ebdd                 jmp 0x43cf03
// 0043cf26  51                   push ecx
// 0043cf27  8bcc                 mov ecx, esp
// 0043cf29  89642420             mov dword ptr [esp + 0x20], esp
// 0043cf2d  6816b78000           push 0x80b716
// 0043cf32  ff15103f8000         call dword ptr [0x803f10]
// 0043cf38  8b742418             mov esi, dword ptr [esp + 0x18]
// 0043cf3c  81c6f4feffff         add esi, 0xfffffef4
// 0043cf42  8bce                 mov ecx, esi
// 0043cf44  e8a74a2d00           call 0x7119f0
// 0043cf49  6a00                 push 0
// 0043cf4b  8bce                 mov ecx, esi
// 0043cf4d  eb10                 jmp 0x43cf5f
// 0043cf4f  33c0                 xor eax, eax
// 0043cf51  38442413             cmp byte ptr [esp + 0x13], al
// 0043cf55  8d8bf4feffff         lea ecx, [ebx - 0x10c]
// 0043cf5b  0f94c0               sete al
// 0043cf5e  50                   push eax
// 0043cf5f  e86c412d00           call 0x7110d0
// 0043cf64  8d4c2440             lea ecx, [esp + 0x40]
// 0043cf68  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 0043cf73  ff1568248000         call dword ptr [0x802468]
// 0043cf79  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 0043cf80  5f                   pop edi
// 0043cf81  5e                   pop esi
// 0043cf82  5d                   pop ebp
// 0043cf83  64890d00000000       mov dword ptr fs:[0], ecx
// 0043cf8a  5b                   pop ebx
// 0043cf8b  81c4ac000000         add esp, 0xac
// 0043cf91  c20400               ret 4

struct String {
    char data[0x1c];
    String();
    String(const String&);
    ~String();
    String& operator=(const String&);
};

struct Result {
    int value;
    Result(const Result&);
    __declspec(dllimport) ~Result() throw();
};

struct ArgumentBase {
    char data[1];
};

struct Argument {
    char padding[20];
    ArgumentBase base;
};

struct Name {
    char pad[0x10];
    int* begin;
    int* end;
    int* cap;
};

struct Item {
    char pad[0x1c];
    int value;
};

struct EnumDescriptor {
    char pad[0x10];
    int* begin;
    int* end;
    int* cap;
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void* __stdcall Guid_getLocalScope();

extern "C" void __stdcall string_ctor(String*);
extern "C" void __stdcall string_dtor(String*);
extern "C" String* __stdcall string_assign(String*, const String*);

void __fastcall sub_43a320(void* self, void* dummy, int* out, int* out2);
Result* __fastcall sub_43cb00(void* self, void* dummy, Result* out, int* in);

struct S {
    char pad0[0x10];
    int* begin;
    int* end;
    char pad1[0x100];
    int flag;

    void func(int* arg);
};

void S::func(int* arg)
{
    String str;
    string_ctor(&str);

    int* p = (int*)Guid_getLocalScope();

    int* it = begin;
    int* endp = end;
    int* argEnd = (int*)arg[6];
    int* argBegin = (int*)arg[0];

    bool found = false;

    while (it != endp) {
        if (it == 0) {
            _invalid_parameter_noinfo();
        }
        int* item = (int*)*it;
        int* e = (int*)item[4];
        if (it >= e) {
            _invalid_parameter_noinfo();
        }
        int* val = (int*)*it;

        int out1, out2;
        sub_43a320(this, 0, &out1, &out2);

        if (out2 == (int)argEnd) {
            it += 4;
            continue;
        }

        if (out1 == 0) {
            _invalid_parameter_noinfo();
        }
        int* e2 = (int*)((int*)out1)[6];
        if (out2 == (int)e2) {
            _invalid_parameter_noinfo();
        }

        int* sub = (int*)((int*)out2)[7];
        int* subEnd = (int*)((int*)out2)[8];
        if (sub > subEnd) {
            _invalid_parameter_noinfo();
        }
        int* subBegin = (int*)((int*)out2)[4];

        if (out1 == 0) {
            _invalid_parameter_noinfo();
        }
        int* e3 = (int*)((int*)out1)[6];
        if (out2 == (int)e3) {
            _invalid_parameter_noinfo();
        }
        int* subEnd2 = (int*)((int*)out2)[8];
        if ((int*)((int*)out2)[7] > subEnd2) {
            _invalid_parameter_noinfo();
        }
        int* subBegin2 = (int*)((int*)out2)[4];

        if (sub == subEnd2) {
            it += 4;
            continue;
        }

        if (!found) {
            if (subBegin == 0) {
                _invalid_parameter_noinfo();
            }
            int* e4 = (int*)((int*)subBegin)[4];
            if (sub >= e4) {
                _invalid_parameter_noinfo();
            }
            int v = *sub;
            Result r = *(Result*)0;
            sub_43cb00((char*)this - 0x10c, 0, &r, &v);
            string_assign(&str, (String*)&r);
            r.~Result();
            ((void(__thiscall*)(S*, String*))((int*)this)[0x3a])(this, &str);
            found = true;
        } else {
            if (subBegin2 == 0) {
                _invalid_parameter_noinfo();
            }
            int* e5 = (int*)((int*)subBegin2)[4];
            if (sub >= e5) {
                _invalid_parameter_noinfo();
            }
            int v = *sub;
            Result r = *(Result*)0;
            sub_43cb00((char*)this - 0x10c, 0, &r, &v);
            bool b = ((bool(__thiscall*)(S*, Result*, String*))((int*)this)[0x3b])(this, &r, &str);
            r.~Result();
            if (b) {
                String tmp;
                string_ctor(&tmp);
                string_assign(&tmp, (String*)0x80b716);
                ((void(__thiscall*)(S*, String*))0x7119f0)((S*)((char*)this - 0x10c), &tmp);
                ((void(__thiscall*)(S*, int))0x7110d0)((S*)((char*)this - 0x10c), 0);
                string_dtor(&tmp);
            }
        }

        it += 4;
    }

    ((void(__thiscall*)(S*, int))0x7110d0)((S*)((char*)this - 0x10c), found ? 0 : 1);

    string_dtor(&str);
}
