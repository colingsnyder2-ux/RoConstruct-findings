// from server: 85% by colin
// roc 2007-08 00595640  unit: RBX::VSlingshotTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00595640
//
// 00595640  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00595643  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00595649  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 0059564f  85c0                 test eax, eax
// 00595651  7416                 je 0x595669
// 00595653  50                   push eax
// 00595654  e839bd0900           call 0x631392
// 00595659  83c404               add esp, 4
// 0059565c  50                   push eax
// 0059565d  b92c598a00           mov ecx, 0x8a592c
// 00595662  ff1508e77700         call dword ptr [0x77e708]
// 00595668  c3                   ret 
// 00595669  32c0                 xor al, al
// 0059566b  c3                   ret 

struct T_func_00595640 {
    char pad[0xc];
    void* field_c;
    bool m();
};

extern "C" int __cdecl func_00631392(void*);
extern "C" void* __stdcall func_0077e708(void*);

bool T_func_00595640::m()
{
    void* p = *(void**)((char*)field_c + 0x188);
    void* q = *(void**)((char*)p + 0x318);
    if (q != 0) {
        void* r = (void*)func_00631392(q);
        func_0077e708(r);
        return true;
    }
    return false;
}
