// from server: 46% by atomic.potato
// roc 2011-06 006478c0  unit: RBX::Accoutrement  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006478c0
//
// 006478c0  56                   push esi
// 006478c1  57                   push edi
// 006478c2  8bf1                 mov esi, ecx
// 006478c4  e8978efeff           call 0x630760
// 006478c9  85c0                 test eax, eax
// 006478cb  7504                 jne 0x6478d1
// 006478cd  33ff                 xor edi, edi
// 006478cf  eb3b                 jmp 0x64790c
// 006478d1  56                   push esi
// 006478d2  e86992ffff           call 0x640b40
// 006478d7  83c404               add esp, 4
// 006478da  84c0                 test al, al
// 006478dc  7507                 jne 0x6478e5
// 006478de  bf01000000           mov edi, 1
// 006478e3  eb27                 jmp 0x64790c
// 006478e5  8b4644               mov eax, dword ptr [esi + 0x44]
// 006478e8  50                   push eax
// 006478e9  e842840300           call 0x67fd30
// 006478ee  83c404               add esp, 4
// 006478f1  85c0                 test eax, eax
// 006478f3  7507                 jne 0x6478fc
// 006478f5  b802000000           mov eax, 2
// 006478fa  eb0e                 jmp 0x64790a
// 006478fc  8bc8                 mov ecx, eax
// 006478fe  e8cd6a0300           call 0x67e3d0
// 00647903  f7d8                 neg eax
// 00647905  1bc0                 sbb eax, eax
// 00647907  83e004               and eax, 4
// 0064790a  8bf8                 mov edi, eax
// 0064790c  85f6                 test esi, esi
// 0064790e  7436                 je 0x647946
// 00647910  8b4644               mov eax, dword ptr [esi + 0x44]
// 00647913  85c0                 test eax, eax
// 00647915  740e                 je 0x647925
// 00647917  8b4844               mov ecx, dword ptr [eax + 0x44]
// 0064791a  85c9                 test ecx, ecx
// 0064791c  7409                 je 0x647927
// 0064791e  e8ad5be4ff           call 0x48d4d0
// 00647923  eb02                 jmp 0x647927
// 00647925  8bc6                 mov eax, esi
// 00647927  85c0                 test eax, eax
// 00647929  741b                 je 0x647946
// 0064792b  6a00                 push 0
// 0064792d  68e0c3c000           push 0xc0c3e0
// 00647932  68f871c000           push 0xc071f8
// 00647937  6a00                 push 0
// 00647939  50                   push eax
// 0064793a  e8ab391c00           call 0x80b2ea
// 0064793f  83c414               add esp, 0x14
// 00647942  85c0                 test eax, eax
// 00647944  7502                 jne 0x647948
// 00647946  33c0                 xor eax, eax
// 00647948  50                   push eax
// 00647949  57                   push edi
// 0064794a  8bce                 mov ecx, esi
// 0064794c  e84f1d0000           call 0x6496a0
// 00647951  5f                   pop edi
// 00647952  5e                   pop esi
// 00647953  c3                   ret 

struct Sub {
    char pad0[0x44];
    Sub* field44;
    int method();
};

struct Obj {
    char pad0[0x44];
    Sub* field44;
    int f();
};

extern "C" int __cdecl sub_630760();
extern "C" int __cdecl sub_640b40(Obj*);
extern "C" Sub* __cdecl sub_67fd30(Sub*);
extern "C" int __cdecl sub_48d4d0(Sub*);
extern "C" int __cdecl sub_80b2ea(int, int, int, int, int);
extern "C" int __cdecl sub_6496a0(Obj*, int, int);

int Obj::f()
{
    int edi;
    if (sub_630760() == 0) {
        edi = 0;
    } else if (sub_640b40(this) == 0) {
        edi = 1;
    } else {
        Sub* p = sub_67fd30(field44);
        if (p == 0) {
            edi = 2;
        } else {
            int r = p->method();
            edi = (r == 0) ? 4 : 0;
        }
    }

    int eax;
    if (this != 0) {
        Sub* p = field44;
        if (p != 0) {
            Sub* q = p->field44;
            if (q != 0) {
                sub_48d4d0(q);
                eax = (int)q;
            } else {
                eax = (int)p;
            }
        } else {
            eax = (int)this;
        }
    } else {
        eax = 0;
    }

    if (eax != 0) {
        if (sub_80b2ea(eax, 0, 0xc071f8, 0xc0c3e0, 0) != 0) {
            return sub_6496a0(this, edi, eax);
        }
    }
    return sub_6496a0(this, edi, 0);
}
