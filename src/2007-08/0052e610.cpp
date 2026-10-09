// from server: 22% by colin
// roc 2007-08 0052e610  unit: std::X::ZV?$allocator::$$A6AXMM::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052e610
//
// 0052e610  6aff                 push -1
// 0052e612  681bb67500           push 0x75b61b
// 0052e617  64a100000000         mov eax, dword ptr fs:[0]
// 0052e61d  50                   push eax
// 0052e61e  64892500000000       mov dword ptr fs:[0], esp
// 0052e625  51                   push ecx
// 0052e626  56                   push esi
// 0052e627  6a10                 push 0x10
// 0052e629  8bf1                 mov esi, ecx
// 0052e62b  e8c6181000           call 0x62fef6
// 0052e630  83c404               add esp, 4
// 0052e633  89442404             mov dword ptr [esp + 4], eax
// 0052e637  85c0                 test eax, eax
// 0052e639  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0052e641  741b                 je 0x52e65e
// 0052e643  83c604               add esi, 4
// 0052e646  56                   push esi
// 0052e647  8bc8                 mov ecx, eax
// 0052e649  e842ffffff           call 0x52e590
// 0052e64e  5e                   pop esi
// 0052e64f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0052e653  64890d00000000       mov dword ptr fs:[0], ecx
// 0052e65a  83c410               add esp, 0x10
// 0052e65d  c3                   ret 
// 0052e65e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052e662  33c0                 xor eax, eax
// 0052e664  5e                   pop esi
// 0052e665  64890d00000000       mov dword ptr fs:[0], ecx
// 0052e66c  83c410               add esp, 0x10
// 0052e66f  c3                   ret 

struct S {
    void m();
};

extern "C" void* __cdecl sub_62fef6(unsigned int);
extern "C" void __fastcall sub_52e590(void*, void*);

void S::m()
{
    void* p = sub_62fef6(0x10);
    if (p != 0) {
        sub_52e590(p, (char*)this + 4);
    }
}
