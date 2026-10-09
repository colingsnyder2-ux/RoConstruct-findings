// from server: 73% by colin
// roc 2007-08 005d2650  unit: RBX::Tool  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d2650
//
// 005d2650  56                   push esi
// 005d2651  8b742408             mov esi, dword ptr [esp + 8]
// 005d2655  57                   push edi
// 005d2656  56                   push esi
// 005d2657  e8c4aefaff           call 0x57d520
// 005d265c  8bf8                 mov edi, eax
// 005d265e  83c404               add esp, 4
// 005d2661  85ff                 test edi, edi
// 005d2663  741e                 je 0x5d2683
// 005d2665  8bce                 mov ecx, esi
// 005d2667  e814fdffff           call 0x5d2380
// 005d266c  85c0                 test eax, eax
// 005d266e  7413                 je 0x5d2683
// 005d2670  57                   push edi
// 005d2671  8bc8                 mov ecx, eax
// 005d2673  e8b8eff6ff           call 0x541630
// 005d2678  8bce                 mov ecx, esi
// 005d267a  e801fdffff           call 0x5d2380
// 005d267f  85c0                 test eax, eax
// 005d2681  75ed                 jne 0x5d2670
// 005d2683  5f                   pop edi
// 005d2684  5e                   pop esi
// 005d2685  c3                   ret 

struct Tool {
    void removeAllTools();
};

extern "C" void* __cdecl sub_57d520(void*);
extern "C" void* __stdcall sub_5d2380(void*);
extern "C" void __stdcall sub_541630(void*, void*);

void Tool::removeAllTools() {
    void* p = sub_57d520(*(void**)((char*)this + 8));
    if (p) {
        void* q = sub_5d2380(this);
        while (q) {
            sub_541630(q, p);
            q = sub_5d2380(this);
        }
    }
}
