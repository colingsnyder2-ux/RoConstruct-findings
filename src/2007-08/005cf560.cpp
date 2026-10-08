// from server: 75% by colin
// roc 2007-08 005cf560  unit: RBX::IStage  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cf560
//
// 005cf560  51                   push ecx
// 005cf561  d9ee                 fldz 
// 005cf563  56                   push esi
// 005cf564  57                   push edi
// 005cf565  d9542408             fst dword ptr [esp + 8]
// 005cf569  8bf9                 mov edi, ecx
// 005cf56b  33f6                 xor esi, esi
// 005cf56d  397720               cmp dword ptr [edi + 0x20], esi
// 005cf570  7e1d                 jle 0x5cf58f
// 005cf572  8b471c               mov eax, dword ptr [edi + 0x1c]
// 005cf575  ddd8                 fstp st(0)
// 005cf577  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 005cf57a  e8a12c0100           call 0x5e2220
// 005cf57f  d8442408             fadd dword ptr [esp + 8]
// 005cf583  83c601               add esi, 1
// 005cf586  3b7720               cmp esi, dword ptr [edi + 0x20]
// 005cf589  d9542408             fst dword ptr [esp + 8]
// 005cf58d  7ce3                 jl 0x5cf572
// 005cf58f  5f                   pop edi
// 005cf590  5e                   pop esi
// 005cf591  59                   pop ecx
// 005cf592  c3                   ret 

struct IStage {
    int pad0[7];
    int count;
    int pad1;
    void* items;
    float computeTotal();
};

float IStage::computeTotal() {
    float total = 0.0f;
    int i = 0;
    if (count > 0) {
        do {
            void* item = ((void**)items)[i];
            float v = ((float (__thiscall*)(void*))0x5e2220)(item);
            total += v;
            i++;
        } while (i < count);
    }
    return total;
}
