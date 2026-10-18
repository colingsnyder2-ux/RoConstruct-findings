// from server: 39% by colin
// roc 2008-06 0058c620  unit: RBX::ChangeHistoryService  size: 656 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058c620
//
// 0058c620  6aff                 push -1
// 0058c622  689b177d00           push 0x7d179b
// 0058c627  64a100000000         mov eax, dword ptr fs:[0]
// 0058c62d  50                   push eax
// 0058c62e  64892500000000       mov dword ptr fs:[0], esp
// 0058c635  81ec84000000         sub esp, 0x84
// 0058c63b  53                   push ebx
// 0058c63c  56                   push esi
// 0058c63d  57                   push edi
// 0058c63e  6a40                 push 0x40
// 0058c640  8bf1                 mov esi, ecx
// 0058c642  e8d9421100           call 0x6a0920
// 0058c647  83c404               add esp, 4
// 0058c64a  8944242c             mov dword ptr [esp + 0x2c], eax
// 0058c64e  c784249800000000000000 mov dword ptr [esp + 0x98], 0
// 0058c659  85c0                 test eax, eax
// 0058c65b  740a                 je 0x58c667
// 0058c65d  56                   push esi
// 0058c65e  8bc8                 mov ecx, eax
// 0058c660  e8bbf8ffff           call 0x58bf20
// 0058c665  eb02                 jmp 0x58c669
// 0058c667  33c0                 xor eax, eax
// 0058c669  898634010000         mov dword ptr [esi + 0x134], eax
// 0058c66f  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 0058c675  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 0058c67b  898e54010000         mov dword ptr [esi + 0x154], ecx
// 0058c681  898658010000         mov dword ptr [esi + 0x158], eax
// 0058c687  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 0058c68d  8b00                 mov eax, dword ptr [eax]
// 0058c68f  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 0058c695  898660010000         mov dword ptr [esi + 0x160], eax
// 0058c69b  b840725800           mov eax, 0x587240
// 0058c6a0  898e5c010000         mov dword ptr [esi + 0x15c], ecx
// 0058c6a6  8bd0                 mov edx, eax
// 0058c6a8  83ec10               sub esp, 0x10
// 0058c6ab  8bc4                 mov eax, esp
// 0058c6ad  33c9                 xor ecx, ecx
// 0058c6af  8910                 mov dword ptr [eax], edx
// 0058c6b1  894804               mov dword ptr [eax + 4], ecx
// 0058c6b4  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0058c6b8  897008               mov dword ptr [eax + 8], esi
// 0058c6bb  89480c               mov dword ptr [eax + 0xc], ecx
// 0058c6be  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 0058c6c4  83cfff               or edi, 0xffffffff
// 0058c6c7  89bc24a8000000       mov dword ptr [esp + 0xa8], edi
// 0058c6ce  e80d61f1ff           call 0x4a27e0
// 0058c6d3  80be6501000000       cmp byte ptr [esi + 0x165], 0
// 0058c6da  8d5f02               lea ebx, [edi + 2]
// 0058c6dd  7423                 je 0x58c702
// 0058c6df  6848198300           push 0x831948
// 0058c6e4  8bce                 mov ecx, esi
// 0058c6e6  e8d5fbffff           call 0x58c2c0
// 0058c6eb  399e50010000         cmp dword ptr [esi + 0x150], ebx
// 0058c6f1  760f                 jbe 0x58c702
// 0058c6f3  8bce                 mov ecx, esi
// 0058c6f5  e886f8ffff           call 0x58bf80
// 0058c6fa  399e50010000         cmp dword ptr [esi + 0x150], ebx
// 0058c700  77f1                 ja 0x58c6f3
// 0058c702  33c9                 xor ecx, ecx
// 0058c704  8d54240c             lea edx, [esp + 0xc]
// 0058c708  b840725800           mov eax, 0x587240
// 0058c70d  894c2410             mov dword ptr [esp + 0x10], ecx
// 0058c711  52                   push edx
// 0058c712  8d4c2444             lea ecx, [esp + 0x44]
// 0058c716  89442410             mov dword ptr [esp + 0x10], eax
// 0058c71a  89742418             mov dword ptr [esp + 0x18], esi
// 0058c71e  e80de3ffff           call 0x58aa30
// 0058c723  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0058c729  899c2498000000       mov dword ptr [esp + 0x98], ebx
// 0058c730  85c0                 test eax, eax
// 0058c732  7405                 je 0x58c739
// 0058c734  83c014               add eax, 0x14
// 0058c737  eb02                 jmp 0x58c73b
// 0058c739  33c0                 xor eax, eax
// 0058c73b  6a0a                 push 0xa
// 0058c73d  8d4c2444             lea ecx, [esp + 0x44]
// 0058c741  51                   push ecx
// 0058c742  50                   push eax
// 0058c743  8d542428             lea edx, [esp + 0x28]
// 0058c747  52                   push edx
// 0058c748  b9403e9700           mov ecx, 0x973e40
// 0058c74d  e8ee6bf1ff           call 0x4a3340
// 0058c752  50                   push eax
// 0058c753  8d8e68010000         lea ecx, [esi + 0x168]
// 0058c759  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 0058c761  e8da8d0000           call 0x595540
// 0058c766  8d4c241c             lea ecx, [esp + 0x1c]
// 0058c76a  889c2498000000       mov byte ptr [esp + 0x98], bl
// 0058c771  e8fa8b0000           call 0x595370
// 0058c776  8d4c2440             lea ecx, [esp + 0x40]
// 0058c77a  89bc2498000000       mov dword ptr [esp + 0x98], edi
// 0058c781  e88a2ff1ff           call 0x49f710
// 0058c786  b880725800           mov eax, 0x587280
// 0058c78b  33c9                 xor ecx, ecx
// 0058c78d  8944240c             mov dword ptr [esp + 0xc], eax
// 0058c791  8d44240c             lea eax, [esp + 0xc]
// 0058c795  894c2410             mov dword ptr [esp + 0x10], ecx
// 0058c799  50                   push eax
// 0058c79a  8d4c2444             lea ecx, [esp + 0x44]
// 0058c79e  89742418             mov dword ptr [esp + 0x18], esi
// 0058c7a2  e889e2ffff           call 0x58aa30
// 0058c7a7  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0058c7ad  bb03000000           mov ebx, 3
// 0058c7b2  899c2498000000       mov dword ptr [esp + 0x98], ebx
// 0058c7b9  85c0                 test eax, eax
// 0058c7bb  7405                 je 0x58c7c2
// 0058c7bd  83c014               add eax, 0x14
// 0058c7c0  eb02                 jmp 0x58c7c4
// 0058c7c2  33c0                 xor eax, eax
// 0058c7c4  6a0a                 push 0xa
// 0058c7c6  8d4c2444             lea ecx, [esp + 0x44]
// 0058c7ca  51                   push ecx
// 0058c7cb  50                   push eax
// 0058c7cc  8d542428             lea edx, [esp + 0x28]
// 0058c7d0  52                   push edx
// 0058c7d1  b9a03c9700           mov ecx, 0x973ca0
// 0058c7d6  e8656bf1ff           call 0x4a3340
// 0058c7db  50                   push eax
// 0058c7dc  8d8e7c010000         lea ecx, [esi + 0x17c]
// 0058c7e2  c684249c00000004     mov byte ptr [esp + 0x9c], 4
// 0058c7ea  e8518d0000           call 0x595540
// 0058c7ef  8d4c241c             lea ecx, [esp + 0x1c]
// 0058c7f3  889c2498000000       mov byte ptr [esp + 0x98], bl
// 0058c7fa  e8718b0000           call 0x595370
// 0058c7ff  8d4c2440             lea ecx, [esp + 0x40]
// 0058c803  89bc2498000000       mov dword ptr [esp + 0x98], edi
// 0058c80a  e8012ff1ff           call 0x49f710
// 0058c80f  b890725800           mov eax, 0x587290
// 0058c814  33c9                 xor ecx, ecx
// 0058c816  8944240c             mov dword ptr [esp + 0xc], eax
// 0058c81a  8d44240c             lea eax, [esp + 0xc]
// 0058c81e  894c2410             mov dword ptr [esp + 0x10], ecx
// 0058c822  50                   push eax
// 0058c823  8d4c246c             lea ecx, [esp + 0x6c]
// 0058c827  89742418             mov dword ptr [esp + 0x18], esi
// 0058c82b  e8b0e2ffff           call 0x58aae0
// 0058c830  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0058c836  bb05000000           mov ebx, 5
// 0058c83b  899c2498000000       mov dword ptr [esp + 0x98], ebx
// 0058c842  85c0                 test eax, eax
// 0058c844  7405                 je 0x58c84b
// 0058c846  83c014               add eax, 0x14
// 0058c849  eb02                 jmp 0x58c84d
// 0058c84b  33c0                 xor eax, eax
// 0058c84d  6a0a                 push 0xa
// 0058c84f  8d4c246c             lea ecx, [esp + 0x6c]
// 0058c853  51                   push ecx
// 0058c854  50                   push eax
// 0058c855  8d54243c             lea edx, [esp + 0x3c]
// 0058c859  52                   push edx
// 0058c85a  b9b0519700           mov ecx, 0x9751b0
// 0058c85f  e84cc7ffff           call 0x588fb0
// 0058c864  50                   push eax
// 0058c865  8d8e90010000         lea ecx, [esi + 0x190]
// 0058c86b  c684249c00000006     mov byte ptr [esp + 0x9c], 6
// 0058c873  e8c88c0000           call 0x595540
// 0058c878  8d4c2430             lea ecx, [esp + 0x30]
// 0058c87c  889c2498000000       mov byte ptr [esp + 0x98], bl
// 0058c883  e8e88a0000           call 0x595370
// 0058c888  8d4c2468             lea ecx, [esp + 0x68]
// 0058c88c  89bc2498000000       mov dword ptr [esp + 0x98], edi
// 0058c893  e8782ef1ff           call 0x49f710
// 0058c898  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0058c89f  5f                   pop edi
// 0058c8a0  5e                   pop esi
// 0058c8a1  64890d00000000       mov dword ptr fs:[0], ecx
// 0058c8a8  5b                   pop ebx
// 0058c8a9  81c490000000         add esp, 0x90
// 0058c8af  c3                   ret 

struct ChangeHistoryService;

struct ChangeHistoryService {
    unsigned char pad0[0x130];
    void* field130;
    void* field134;
    void* field138;
    unsigned char pad13c[0x14c - 0x13c];
    void* field14c;
    unsigned int field150;
    void* field154;
    void* field158;
    void* field15c;
    void* field160;
    unsigned char pad164;
    unsigned char field165;
    unsigned char pad166[2];
    unsigned char field168[0x14];
    unsigned char field17c[0x14];
    unsigned char field190[0x14];

    void construct();
};

extern "C" void* __cdecl operator_new(unsigned int);

void* __fastcall sub_58bf20(void* self, void* parent);
void __fastcall sub_4a27e0(void* self, void* a, void* b, void* c, void* d);
void __fastcall sub_58c2c0(void* self, const char* s);
void __fastcall sub_58bf80(void* self);
void __fastcall sub_58aa30(void* self, void* a);
void __fastcall sub_58aae0(void* self, void* a);
void __fastcall sub_4a3340(void* self, void* a, void* b, void* c, void* d);
void __fastcall sub_595540(void* self, void* a);
void __fastcall sub_595370(void* self);
void __fastcall sub_49f710(void* self);
void __fastcall sub_588fb0(void* self, void* a, void* b, void* c, void* d);

void ChangeHistoryService::construct()
{
    void* obj = operator_new(0x40);
    if (obj) {
        void* r = sub_58bf20(obj, this);
        field134 = r;
    } else {
        field134 = 0;
    }

    void* e14c = field14c;
    void* e138 = field138;
    field154 = e138;
    field158 = e14c;
    field160 = *(void**)e14c;
    field15c = e138;

    {
        struct { void* a; void* b; void* c; void* d; } tmp;
        tmp.a = (void*)0x587240;
        tmp.b = 0;
        tmp.c = this;
        tmp.d = field14c;
        sub_4a27e0(field130, &tmp, 0, 0, 0);
    }

    if (field165 != 0) {
        sub_58c2c0(this, "base");
        while (field150 > 1) {
            sub_58bf80(this);
        }
    }

    {
        struct { void* a; void* b; void* c; } tmp;
        tmp.a = (void*)0x587240;
        tmp.b = 0;
        tmp.c = this;
        sub_58aa30((char*)this + 0x30, &tmp);
    }

    {
        void* base = field130 ? (char*)field130 + 0x14 : 0;
        char buf[0x14];
        sub_4a3340((void*)0x973e40, buf, base, (char*)this + 0x30, (void*)0xa);
        sub_595540((char*)this + 0x168, buf);
        sub_595370((char*)this + 0x1c);
        sub_49f710((char*)this + 0x40);
    }

    {
        struct { void* a; void* b; void* c; } tmp;
        tmp.a = (void*)0x587280;
        tmp.b = 0;
        tmp.c = this;
        sub_58aa30((char*)this + 0x30, &tmp);
    }

    {
        void* base = field130 ? (char*)field130 + 0x14 : 0;
        char buf[0x14];
        sub_4a3340((void*)0x973ca0, buf, base, (char*)this + 0x30, (void*)0xa);
        sub_595540((char*)this + 0x17c, buf);
        sub_595370((char*)this + 0x1c);
        sub_49f710((char*)this + 0x40);
    }

    {
        struct { void* a; void* b; void* c; } tmp;
        tmp.a = (void*)0x587290;
        tmp.b = 0;
        tmp.c = this;
        sub_58aae0((char*)this + 0x58, &tmp);
    }

    {
        void* base = field130 ? (char*)field130 + 0x14 : 0;
        char buf[0x14];
        sub_588fb0((void*)0x9751b0, buf, base, (char*)this + 0x58, (void*)0xa);
        sub_595540((char*)this + 0x190, buf);
        sub_595370((char*)this + 0x30);
        sub_49f710((char*)this + 0x68);
    }
}
