// from server: 83% by colin
// roc 2007-08 00421510  unit: CSelectionTreeCtrl  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00421510
//
// 00421510  55                   push ebp
// 00421511  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00421515  56                   push esi
// 00421516  8b742414             mov esi, dword ptr [esp + 0x14]
// 0042151a  57                   push edi
// 0042151b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0042151f  3bf7                 cmp esi, edi
// 00421521  741a                 je 0x42153d
// 00421523  8b442428             mov eax, dword ptr [esp + 0x28]
// 00421527  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0042152b  53                   push ebx
// 0042152c  8d1c08               lea ebx, [eax + ecx]
// 0042152f  90                   nop 
// 00421530  56                   push esi
// 00421531  8bcb                 mov ecx, ebx
// 00421533  ffd5                 call ebp
// 00421535  83c608               add esi, 8
// 00421538  3bf7                 cmp esi, edi
// 0042153a  75f4                 jne 0x421530
// 0042153c  5b                   pop ebx
// 0042153d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00421541  8b542428             mov edx, dword ptr [esp + 0x28]
// 00421545  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00421549  8928                 mov dword ptr [eax], ebp
// 0042154b  895004               mov dword ptr [eax + 4], edx
// 0042154e  8b542430             mov edx, dword ptr [esp + 0x30]
// 00421552  5f                   pop edi
// 00421553  5e                   pop esi
// 00421554  894808               mov dword ptr [eax + 8], ecx
// 00421557  89500c               mov dword ptr [eax + 0xc], edx
// 0042155a  5d                   pop ebp
// 0042155b  c3                   ret 

struct CSelectionTreeCtrl {
    void __cdecl Unk(int* out, int first, int last, int a, int b, int c, int d);
};

void CSelectionTreeCtrl::Unk(int* out, int first, int last, int a, int b, int c, int d) {
    if (first != last) {
        int* q = (int*)(a + c);
        do {
            ((void (__thiscall *)(int*, int))b)(q, first);
            first += 8;
        } while (first != last);
    }
    out[0] = b;
    out[1] = a;
    out[2] = c;
    out[3] = d;
}
