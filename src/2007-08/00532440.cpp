// from server: 70% by colin
// roc 2007-08 00532440  unit: RBX::VSelection::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00532440
//
// 00532440  51                   push ecx
// 00532441  56                   push esi
// 00532442  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00532446  56                   push esi
// 00532447  81c104010000         add ecx, 0x104
// 0053244d  c744240800000000     mov dword ptr [esp + 8], 0
// 00532455  e89654eeff           call 0x4178f0
// 0053245a  8bc6                 mov eax, esi
// 0053245c  5e                   pop esi
// 0053245d  59                   pop ecx
// 0053245e  c20400               ret 4

struct S {
    char pad[0x104];
    void* field_104;
    void* method(void* arg);
};

extern "C" void __stdcall sub_4178f0(void*);

void* S::method(void* arg)
{
    field_104 = 0;
    sub_4178f0(arg);
    return arg;
}
