// from server: 100% by king_originala
// roc 2008-06 00401ab0  unit: VCWorkspace::?$CComObject  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00401ab0
//
// 00401ab0  56                   push esi
// 00401ab1  8bf1                 mov esi, ecx
// 00401ab3  c7066cae8000         mov dword ptr [esi], 0x80ae6c
// 00401ab9  c7460458ae8000       mov dword ptr [esi + 4], 0x80ae58
// 00401ac0  c7460840ae8000       mov dword ptr [esi + 8], 0x80ae40
// 00401ac7  c7461024ae8000       mov dword ptr [esi + 0x10], 0x80ae24
// 00401ace  c7461818ae8000       mov dword ptr [esi + 0x18], 0x80ae18
// 00401ad5  c7461c0cae8000       mov dword ptr [esi + 0x1c], 0x80ae0c
// 00401adc  c74620010000c0       mov dword ptr [esi + 0x20], 0xc0000001
// 00401ae3  e8589c0600           call 0x46b740
// 00401ae8  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 00401aee  8b01                 mov eax, dword ptr [ecx]
// 00401af0  8b5008               mov edx, dword ptr [eax + 8]
// 00401af3  ffd2                 call edx
// 00401af5  8bce                 mov ecx, esi
// 00401af7  5e                   pop esi
// 00401af8  e9b38e0600           jmp 0x46a9b0

extern void G1_func_0046b740();

struct Interface {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
};

struct S {
    unsigned long field00;
    unsigned long field04;
    unsigned long field08;
    unsigned long field0C;
    unsigned long field10;
    unsigned long field14;
    unsigned long field18;
    unsigned long field1C;
    unsigned long field20;

    void f();
    void finish();
};

void S::f()
{
    field00 = 0x0080AE6C;
    field04 = 0x0080AE58;
    field08 = 0x0080AE40;
    field10 = 0x0080AE24;
    field18 = 0x0080AE18;
    field1C = 0x0080AE0C;
    field20 = 0xC0000001;
    G1_func_0046b740();
    (*(Interface **)0x0096C268)->slot2();
    finish();
}
