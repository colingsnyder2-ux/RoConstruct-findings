// from server: 80% by colin
// roc 2007-08 00581cd0  unit: RBX::VHat::?$FactoryProduct  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00581cd0
//
// 00581cd0  56                   push esi
// 00581cd1  8d442408             lea eax, [esp + 8]
// 00581cd5  50                   push eax
// 00581cd6  8bf1                 mov esi, ecx
// 00581cd8  e8f35cf0ff           call 0x4879d0
// 00581cdd  83c404               add esp, 4
// 00581ce0  84c0                 test al, al
// 00581ce2  7547                 jne 0x581d2b
// 00581ce4  6a18                 push 0x18
// 00581ce6  c74608301c5800       mov dword ptr [esi + 8], 0x581c30
// 00581ced  c706901b5800         mov dword ptr [esi], 0x581b90
// 00581cf3  e8fee10a00           call 0x62fef6
// 00581cf8  83c404               add esp, 4
// 00581cfb  85c0                 test eax, eax
// 00581cfd  7429                 je 0x581d28
// 00581cff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00581d03  8908                 mov dword ptr [eax], ecx
// 00581d05  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00581d09  895004               mov dword ptr [eax + 4], edx
// 00581d0c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00581d10  894808               mov dword ptr [eax + 8], ecx
// 00581d13  8b542414             mov edx, dword ptr [esp + 0x14]
// 00581d17  89500c               mov dword ptr [eax + 0xc], edx
// 00581d1a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00581d1e  894810               mov dword ptr [eax + 0x10], ecx
// 00581d21  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00581d25  895014               mov dword ptr [eax + 0x14], edx
// 00581d28  894604               mov dword ptr [esi + 4], eax
// 00581d2b  5e                   pop esi
// 00581d2c  c21c00               ret 0x1c

struct FactoryProduct {
    void* vtable;
    void* field4;
    void* field8;
    void construct(int a, int b, int c, int d, int e, int f, int g);
};

extern "C" char __cdecl sub_4879D0(void* p);
extern "C" void* __cdecl sub_62FEF6(unsigned int size);

void FactoryProduct::construct(int a, int b, int c, int d, int e, int f, int g)
{
    int local;
    if (sub_4879D0(&local)) {
        return;
    }
    this->field8 = (void*)0x581C30;
    this->vtable = (void*)0x581B90;
    void* p = sub_62FEF6(0x18);
    if (p) {
        *(int*)((char*)p + 0) = a;
        *(int*)((char*)p + 4) = b;
        *(int*)((char*)p + 8) = c;
        *(int*)((char*)p + 12) = d;
        *(int*)((char*)p + 16) = e;
        *(int*)((char*)p + 20) = f;
    }
    this->field4 = p;
}
