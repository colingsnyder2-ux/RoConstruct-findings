// from server: 67% by colin
// roc 2007-08 00636be0  unit: CXTPEdit  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636be0
//
// 00636be0  51                   push ecx
// 00636be1  56                   push esi
// 00636be2  8bf1                 mov esi, ecx
// 00636be4  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00636bea  85c9                 test ecx, ecx
// 00636bec  c744240400000000     mov dword ptr [esp + 4], 0
// 00636bf4  7425                 je 0x636c1b
// 00636bf6  83792000             cmp dword ptr [ecx + 0x20], 0
// 00636bfa  741f                 je 0x636c1b
// 00636bfc  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 00636c03  7416                 je 0x636c1b
// 00636c05  8d86bc010000         lea eax, [esi + 0x1bc]
// 00636c0b  50                   push eax
// 00636c0c  e8dfeeffff           call 0x635af0
// 00636c11  c786c001000000000000 mov dword ptr [esi + 0x1c0], 0
// 00636c1b  81c6bc010000         add esi, 0x1bc
// 00636c21  56                   push esi
// 00636c22  8b742410             mov esi, dword ptr [esp + 0x10]
// 00636c26  8bce                 mov ecx, esi
// 00636c28  ff1574dd7700         call dword ptr [0x77dd74]
// 00636c2e  8bc6                 mov eax, esi
// 00636c30  5e                   pop esi
// 00636c31  59                   pop ecx
// 00636c32  c20400               ret 4

struct CXTPEdit {
    char pad[0x178];
    void* field_178;
    char pad2[0x1bc - 0x17c];
    void* field_1bc;
    void* field_1c0;
    void* sub_636be0(void* arg);
};

extern "C" void __stdcall sub_635af0(void*);
extern "C" void* __stdcall sub_77dd74(void*);

void* CXTPEdit::sub_636be0(void* arg) {
    void* result = 0;
    if (field_178 != 0 && *(void**)((char*)field_178 + 0x20) != 0 && field_1c0 != 0) {
        sub_635af0(&field_1bc);
        field_1c0 = 0;
    }
    sub_77dd74(&field_1bc);
    return arg;
}
