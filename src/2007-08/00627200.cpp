// from server: 100% by colin
// roc 2007-08 00627200  unit: RBX::GettingUp  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00627200
//
// 00627200  56                   push esi
// 00627201  57                   push edi
// 00627202  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00627206  8bf1                 mov esi, ecx
// 00627208  8b4e08               mov ecx, dword ptr [esi + 8]
// 0062720b  57                   push edi
// 0062720c  e86f1cfeff           call 0x608e80
// 00627211  56                   push esi
// 00627212  8bcf                 mov ecx, edi
// 00627214  e8271ffeff           call 0x609140
// 00627219  5f                   pop edi
// 0062721a  5e                   pop esi
// 0062721b  c20400               ret 4

struct SubA {
    void methodA(int);
};

struct SubB {
    void methodB(void*);
};

struct GettingUp {
    char pad[8];
    SubA* subA;
    void construct(void*);
};

void GettingUp::construct(void* arg)
{
    subA->methodA((int)arg);
    ((SubB*)arg)->methodB(this);
}
