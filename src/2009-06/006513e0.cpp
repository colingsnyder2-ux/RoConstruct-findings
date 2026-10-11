// from server: 54% by atomic.potato
// roc 2009-06 006513e0  unit: RBX::VVisit::?$FactoryProduct  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006513e0
//
// 006513e0  ff050ca5a400         inc dword ptr [0xa4a50c]
// 006513e6  56                   push esi
// 006513e7  8bf1                 mov esi, ecx
// 006513e9  57                   push edi
// 006513ea  8d7e14               lea edi, [esi + 0x14]
// 006513ed  e87eaffeff           call 0x63c370
// 006513f2  8907                 mov dword ptr [edi], eax
// 006513f4  ff0538a5a400         inc dword ptr [0xa4a538]
// 006513fa  e80149f9ff           call 0x5e5d00
// 006513ff  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00651403  8d4e40               lea ecx, [esi + 0x40]
// 00651406  51                   push ecx
// 00651407  50                   push eax
// 00651408  52                   push edx
// 00651409  e8a2c2f7ff           call 0x5cd6b0
// 0065140e  83c404               add esp, 4
// 00651411  50                   push eax
// 00651412  8bcf                 mov ecx, edi
// 00651414  e807b0feff           call 0x63c420
// 00651419  ff0570a6a400         inc dword ptr [0xa4a670]
// 0065141f  e8cc45f9ff           call 0x5e59f0
// 00651424  83c648               add esi, 0x48
// 00651427  56                   push esi
// 00651428  50                   push eax
// 00651429  8b442418             mov eax, dword ptr [esp + 0x18]
// 0065142d  50                   push eax
// 0065142e  e87dc2f7ff           call 0x5cd6b0
// 00651433  83c404               add esp, 4
// 00651436  50                   push eax
// 00651437  8bcf                 mov ecx, edi
// 00651439  e8e2affeff           call 0x63c420
// 0065143e  5f                   pop edi
// 0065143f  5e                   pop esi
// 00651440  c20800               ret 8

struct VVisit {
    char pad0[0x14];
    void* field14;
    char pad18[0x28];
    void* field40;
    char pad44[0x04];
    void* field48;
    void method(int, int);
};

extern "C" void* __cdecl sub_63c370();
extern "C" void __cdecl sub_5e5d00();
extern "C" void __cdecl sub_5e59f0();
extern "C" void* __cdecl sub_5cd6b0(void*, void*, void*);
extern "C" void __cdecl sub_63c420(void*, void*);

extern unsigned int dword_a4a50c;
extern unsigned int dword_a4a538;
extern unsigned int dword_a4a670;

void VVisit::method(int a, int b)
{
    dword_a4a50c++;
    void** edi = &field14;
    *edi = sub_63c370();
    dword_a4a538++;
    sub_5e5d00();
    void* r = sub_5cd6b0((void*)a, (void*)b, &field40);
    sub_63c420(edi, r);
    dword_a4a670++;
    sub_5e59f0();
    void* r2 = sub_5cd6b0((void*)a, (void*)b, &field48);
    sub_63c420(edi, r2);
}
