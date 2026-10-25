// from server: 40% by atomic.potato
// roc 2010-06 006767f0  unit: RBX::Assembly  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006767f0
//
// 006767f0  56                   push esi
// 006767f1  8b742408             mov esi, dword ptr [esp + 8]
// 006767f5  8b4610               mov eax, dword ptr [esi + 0x10]
// 006767f8  57                   push edi
// 006767f9  8d4808               lea ecx, [eax + 8]
// 006767fc  e83fbd1500           call 0x7d2540
// 00676801  85c0                 test eax, eax
// 00676803  7418                 je 0x67681d
// 00676805  8bc8                 mov ecx, eax
// 00676807  e834bd1500           call 0x7d2540
// 0067680c  85c0                 test eax, eax
// 0067680e  7407                 je 0x676817
// 00676810  83c0f8               add eax, -8
// 00676813  8bf8                 mov edi, eax
// 00676815  eb08                 jmp 0x67681f
// 00676817  33c0                 xor eax, eax
// 00676819  8bf8                 mov edi, eax
// 0067681b  eb02                 jmp 0x67681f
// 0067681d  33ff                 xor edi, edi
// 0067681f  8b4614               mov eax, dword ptr [esi + 0x14]
// 00676822  8d4808               lea ecx, [eax + 8]
// 00676825  e816bd1500           call 0x7d2540
// 0067682a  85c0                 test eax, eax
// 0067682c  7418                 je 0x676846
// 0067682e  8bc8                 mov ecx, eax
// 00676830  e80bbd1500           call 0x7d2540
// 00676835  85c0                 test eax, eax
// 00676837  7407                 je 0x676840
// 00676839  83c0f8               add eax, -8
// 0067683c  8bf0                 mov esi, eax
// 0067683e  eb08                 jmp 0x676848
// 00676840  33c0                 xor eax, eax
// 00676842  8bf0                 mov esi, eax
// 00676844  eb02                 jmp 0x676848
// 00676846  33f6                 xor esi, esi
// 00676848  8b4724               mov eax, dword ptr [edi + 0x24]
// 0067684b  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0067684e  85c0                 test eax, eax
// 00676850  7405                 je 0x676857
// 00676852  8d48f8               lea ecx, [eax - 8]
// 00676855  eb02                 jmp 0x676859
// 00676857  33c9                 xor ecx, ecx
// 00676859  e812120000           call 0x677a70
// 0067685e  84c0                 test al, al
// 00676860  7422                 je 0x676884
// 00676862  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00676865  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00676868  85c0                 test eax, eax
// 0067686a  7405                 je 0x676871
// 0067686c  8d48f8               lea ecx, [eax - 8]
// 0067686f  eb02                 jmp 0x676873
// 00676871  33c9                 xor ecx, ecx
// 00676873  e8f8110000           call 0x677a70
// 00676878  84c0                 test al, al
// 0067687a  7408                 je 0x676884
// 0067687c  5f                   pop edi
// 0067687d  b801000000           mov eax, 1
// 00676882  5e                   pop esi
// 00676883  c3                   ret 
// 00676884  5f                   pop edi
// 00676885  33c0                 xor eax, eax
// 00676887  5e                   pop esi
// 00676888  c3                   ret 

struct Inner {
    char pad0[32];
    int f();
};

struct Outer {
    char pad0[0x10];
    Inner* a;
    Inner* b;
};

struct Node {
    char pad0[0x24];
    char* ptr;
};

struct Getter {
    char pad[0xf4];
    char* ptr;
    char get() const;
};

char Getter::get() const
{
    return *(char*)(ptr + 0x3c);
}

int Inner::f()
{
    return *(int*)((char*)this + 32);
}

bool Assembly_006767f0(Outer* self)
{
    Node* p1;
    Node* p2;

    Inner* i1 = self->a;
    if (i1 != 0) {
        Inner* t = (Inner*)((char*)i1 + 8);
        int r = t->f();
        if (r != 0) {
            Inner* t2 = (Inner*)((char*)r + 8);
            int r2 = t2->f();
            if (r2 != 0) {
                p1 = (Node*)(r2 - 8);
            } else {
                p1 = 0;
            }
        } else {
            p1 = 0;
        }
    } else {
        p1 = 0;
    }

    Inner* i2 = self->b;
    if (i2 != 0) {
        Inner* t = (Inner*)((char*)i2 + 8);
        int r = t->f();
        if (r != 0) {
            Inner* t2 = (Inner*)((char*)r + 8);
            int r2 = t2->f();
            if (r2 != 0) {
                p2 = (Node*)(r2 - 8);
            } else {
                p2 = 0;
            }
        } else {
            p2 = 0;
        }
    } else {
        p2 = 0;
    }

    char* c1 = p1->ptr;
    char* v1 = *(char**)(c1 + 0x1c);
    Getter* g1;
    if (v1 != 0) {
        g1 = (Getter*)(v1 - 8);
    } else {
        g1 = 0;
    }
    if (!g1->get()) {
        return false;
    }

    char* c2 = p2->ptr;
    char* v2 = *(char**)(c2 + 0x1c);
    Getter* g2;
    if (v2 != 0) {
        g2 = (Getter*)(v2 - 8);
    } else {
        g2 = 0;
    }
    if (!g2->get()) {
        return false;
    }

    return true;
}
