// from server: 67% by colin
// roc 2007-08 006c6e10  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c6e10
//
// 006c6e10  51                   push ecx
// 006c6e11  56                   push esi
// 006c6e12  8bf1                 mov esi, ecx
// 006c6e14  8b8e68010000         mov ecx, dword ptr [esi + 0x168]
// 006c6e1a  85c9                 test ecx, ecx
// 006c6e1c  c744240400000000     mov dword ptr [esp + 4], 0
// 006c6e24  7425                 je 0x6c6e4b
// 006c6e26  83792000             cmp dword ptr [ecx + 0x20], 0
// 006c6e2a  741f                 je 0x6c6e4b
// 006c6e2c  83be9001000000       cmp dword ptr [esi + 0x190], 0
// 006c6e33  7416                 je 0x6c6e4b
// 006c6e35  8d868c010000         lea eax, [esi + 0x18c]
// 006c6e3b  50                   push eax
// 006c6e3c  e8afecf6ff           call 0x635af0
// 006c6e41  c7869001000000000000 mov dword ptr [esi + 0x190], 0
// 006c6e4b  81c68c010000         add esi, 0x18c
// 006c6e51  56                   push esi
// 006c6e52  8b742410             mov esi, dword ptr [esp + 0x10]
// 006c6e56  8bce                 mov ecx, esi
// 006c6e58  ff1574dd7700         call dword ptr [0x77dd74]
// 006c6e5e  8bc6                 mov eax, esi
// 006c6e60  5e                   pop esi
// 006c6e61  59                   pop ecx
// 006c6e62  c20400               ret 4

struct CXTPCustomizeSheet_CCustomizeEdit {
    char pad[0x168];
    void* field_168;
    char pad2[0x18c - 0x16c];
    void* field_18c;
    void* field_190;
    void* method(void* arg);
};

extern "C" void __stdcall sub_635af0(void* p);
extern "C" void* __stdcall sub_77dd74(void* p);

void* CXTPCustomizeSheet_CCustomizeEdit::method(void* arg) {
    void* result = 0;
    if (field_168 != 0 && *(void**)((char*)field_168 + 0x20) != 0 && field_190 != 0) {
        sub_635af0(&field_18c);
        field_190 = 0;
    }
    sub_77dd74(&field_18c);
    return arg;
}
