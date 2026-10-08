// from server: 84% by colin
// roc 2007-08 0041d5d0  unit: CInsertObjectDialog  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d5d0
//
// 0041d5d0  56                   push esi
// 0041d5d1  8bf1                 mov esi, ecx
// 0041d5d3  8d4e74               lea ecx, [esi + 0x74]
// 0041d5d6  c706847b7800         mov dword ptr [esi], 0x787b84
// 0041d5dc  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0041d5e2  8bce                 mov ecx, esi
// 0041d5e4  5e                   pop esi
// 0041d5e5  e9282e2100           jmp 0x630412

struct CInsertObjectDialog {
    char pad[0x74];
    void* field_74;
    void destruct();
};

extern "C" void __stdcall sub_77ddbc(void*);
extern "C" void __fastcall sub_630412(void*);

void CInsertObjectDialog::destruct() {
    *(void**)this = (void*)0x787b84;
    sub_77ddbc(&field_74);
    sub_630412(this);
}
