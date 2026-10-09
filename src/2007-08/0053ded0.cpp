// from server: 88% by colin
// roc 2007-08 0053ded0  unit: RBX::VScript::?$FactoryProduct  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053ded0
//
// 0053ded0  53                   push ebx
// 0053ded1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0053ded5  56                   push esi
// 0053ded6  57                   push edi
// 0053ded7  8bf9                 mov edi, ecx
// 0053ded9  8db7f0000000         lea esi, [edi + 0xf0]
// 0053dedf  53                   push ebx
// 0053dee0  56                   push esi
// 0053dee1  e8da700000           call 0x544fc0
// 0053dee6  83c408               add esp, 8
// 0053dee9  84c0                 test al, al
// 0053deeb  741b                 je 0x53df08
// 0053deed  53                   push ebx
// 0053deee  8bce                 mov ecx, esi
// 0053def0  ff1590e67700         call dword ptr [0x77e690]
// 0053def6  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0053def9  683c128c00           push 0x8c123c
// 0053defe  8bcf                 mov ecx, edi
// 0053df00  89461c               mov dword ptr [esi + 0x1c], eax
// 0053df03  e80868f0ff           call 0x444710
// 0053df08  5f                   pop edi
// 0053df09  5e                   pop esi
// 0053df0a  5b                   pop ebx
// 0053df0b  c20400               ret 4

struct FactoryProduct {
    char pad[0xf0];
    char field_f0[0x20];
    void sub_0053ded0(void* arg);
};

struct StringAssign {
    void assign(const StringAssign&);
};

extern "C" char __cdecl sub_00544fc0(void*, void*);
extern "C" void __stdcall sub_0077e690(void*, void*);
extern "C" void __cdecl sub_00444710(void*, const char*);

void FactoryProduct::sub_0053ded0(void* arg)
{
    char* p = field_f0;
    if (sub_00544fc0(p, arg)) {
        ((StringAssign*)p)->assign(*(StringAssign*)arg);
        *(int*)(p + 0x1c) = *(int*)((char*)arg + 0x1c);
        sub_00444710(this, (const char*)0x8c123c);
    }
}
