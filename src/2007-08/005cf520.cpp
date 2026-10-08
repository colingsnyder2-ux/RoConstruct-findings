// from server: 65% by colin
// roc 2007-08 005cf520  unit: RBX::IStage  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cf520
//
// 005cf520  51                   push ecx
// 005cf521  d9ee                 fldz 
// 005cf523  56                   push esi
// 005cf524  57                   push edi
// 005cf525  d9542408             fst dword ptr [esp + 8]
// 005cf529  8bf9                 mov edi, ecx
// 005cf52b  33f6                 xor esi, esi
// 005cf52d  397738               cmp dword ptr [edi + 0x38], esi
// 005cf530  7e1f                 jle 0x5cf551
// 005cf532  8b4734               mov eax, dword ptr [edi + 0x34]
// 005cf535  ddd8                 fstp st(0)
// 005cf537  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 005cf53a  8b11                 mov edx, dword ptr [ecx]
// 005cf53c  8b4210               mov eax, dword ptr [edx + 0x10]
// 005cf53f  ffd0                 call eax
// 005cf541  d8442408             fadd dword ptr [esp + 8]
// 005cf545  83c601               add esi, 1
// 005cf548  3b7738               cmp esi, dword ptr [edi + 0x38]
// 005cf54b  d9542408             fst dword ptr [esp + 8]
// 005cf54f  7ce1                 jl 0x5cf532
// 005cf551  5f                   pop edi
// 005cf552  5e                   pop esi
// 005cf553  59                   pop ecx
// 005cf554  c3                   ret 

struct IStage {
    char pad[0x34];
    void** items;
    int count;
    float computeTotal();
};

float IStage::computeTotal()
{
    float total = 0.0f;
    int i = 0;
    if (count > 0) {
        do {
            void* p = items[i];
            float (*fn)(void*) = *(float (**)(void*))((*(char**)p) + 0x10);
            total += fn(p);
            i++;
        } while (i < count);
    }
    return total;
}
