// from server: 100% by colin
// roc 2007-08 005d2200  unit: RBX::Tool  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d2200
//
// 005d2200  56                   push esi
// 005d2201  57                   push edi
// 005d2202  8bf1                 mov esi, ecx
// 005d2204  e8d7f8ffff           call 0x5d1ae0
// 005d2209  85c0                 test eax, eax
// 005d220b  7504                 jne 0x5d2211
// 005d220d  33ff                 xor edi, edi
// 005d220f  eb24                 jmp 0x5d2235
// 005d2211  56                   push esi
// 005d2212  e859b3faff           call 0x57d570
// 005d2217  83c404               add esp, 4
// 005d221a  84c0                 test al, al
// 005d221c  7507                 jne 0x5d2225
// 005d221e  bf01000000           mov edi, 1
// 005d2223  eb10                 jmp 0x5d2235
// 005d2225  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 005d222b  50                   push eax
// 005d222c  8bce                 mov ecx, esi
// 005d222e  e82df9ffff           call 0x5d1b60
// 005d2233  8bf8                 mov edi, eax
// 005d2235  56                   push esi
// 005d2236  e8f545ebff           call 0x486830
// 005d223b  83c404               add esp, 4
// 005d223e  50                   push eax
// 005d223f  57                   push edi
// 005d2240  8bce                 mov ecx, esi
// 005d2242  e809240000           call 0x5d4650
// 005d2247  5f                   pop edi
// 005d2248  5e                   pop esi
// 005d2249  c3                   ret 

struct Tool {
    char pad[0xbc];
    int field_bc;
    int method_5d1ae0();
    int method_5d1b60(int);
    void method_5d4650(int, int);
    void method_5d2200();
};

extern "C" bool __cdecl sub_57d570(Tool*);
extern "C" int __cdecl sub_486830(Tool*);

void Tool::method_5d2200() {
    int edi;
    if (this->method_5d1ae0() == 0) {
        edi = 0;
    } else if (sub_57d570(this) == false) {
        edi = 1;
    } else {
        edi = this->method_5d1b60(this->field_bc);
    }
    this->method_5d4650(edi, sub_486830(this));
}
