// from server: 100% by atomic.potato
// roc 2009-06 008002c0  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008002c0
//
// 008002c0  53                   push ebx
// 008002c1  55                   push ebp
// 008002c2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008002c6  56                   push esi
// 008002c7  8bd9                 mov ebx, ecx
// 008002c9  8b7378               mov esi, dword ptr [ebx + 0x78]
// 008002cc  57                   push edi
// 008002cd  83cfff               or edi, 0xffffffff
// 008002d0  896b70               mov dword ptr [ebx + 0x70], ebp
// 008002d3  85f6                 test esi, esi
// 008002d5  741b                 je 0x8002f2
// 008002d7  8b4608               mov eax, dword ptr [esi + 8]
// 008002da  85c0                 test eax, eax
// 008002dc  740d                 je 0x8002eb
// 008002de  3b6818               cmp ebp, dword ptr [eax + 0x18]
// 008002e1  7508                 jne 0x8002eb
// 008002e3  57                   push edi
// 008002e4  8bcb                 mov ecx, ebx
// 008002e6  e895ffffff           call 0x800280
// 008002eb  8b36                 mov esi, dword ptr [esi]
// 008002ed  47                   inc edi
// 008002ee  85f6                 test esi, esi
// 008002f0  75e5                 jne 0x8002d7
// 008002f2  5f                   pop edi
// 008002f3  5e                   pop esi
// 008002f4  5d                   pop ebp
// 008002f5  5b                   pop ebx
// 008002f6  c20400               ret 4

struct CXTColorHex {
    char pad[0x70];
    int field_70;
    char pad2[0x4];
    void* field_78;
    void sub_800280(int);
    void sub_8002c0(int);
};

void CXTColorHex::sub_8002c0(int arg) {
    void* esi;
    int edi;
    field_70 = arg;
    esi = field_78;
    edi = -1;
    while (esi != 0) {
        int* eax = *(int**)((char*)esi + 8);
        if (eax != 0 && arg == eax[6]) {
            sub_800280(edi);
        }
        esi = *(void**)esi;
        edi++;
    }
}
