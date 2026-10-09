// from server: 29% by colin
// roc 2007-08 00632210  unit: CRobloxControlColorSelector  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00632210
//
// 00632210  6aff                 push -1
// 00632212  68fa2f7600           push 0x762ffa
// 00632217  64a100000000         mov eax, dword ptr fs:[0]
// 0063221d  50                   push eax
// 0063221e  51                   push ecx
// 0063221f  a188518b00           mov eax, dword ptr [0x8b5188]
// 00632224  33c4                 xor eax, esp
// 00632226  50                   push eax
// 00632227  8d442408             lea eax, [esp + 8]
// 0063222b  64a300000000         mov dword ptr fs:[0], eax
// 00632231  6a30                 push 0x30
// 00632233  e8f6601000           call 0x73832e
// 00632238  89442404             mov dword ptr [esp + 4], eax
// 0063223c  85c0                 test eax, eax
// 0063223e  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00632246  7417                 je 0x63225f
// 00632248  8bc8                 mov ecx, eax
// 0063224a  e8810d0700           call 0x6a2fd0
// 0063224f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00632253  64890d00000000       mov dword ptr fs:[0], ecx
// 0063225a  59                   pop ecx
// 0063225b  83c410               add esp, 0x10
// 0063225e  c3                   ret 
// 0063225f  33c0                 xor eax, eax
// 00632261  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00632265  64890d00000000       mov dword ptr fs:[0], ecx
// 0063226c  59                   pop ecx
// 0063226d  83c410               add esp, 0x10
// 00632270  c3                   ret 

struct CRobloxControlColorSelector {
    void* f();
};

extern "C" void* __cdecl sub_0073832e(unsigned int size);
extern "C" void __fastcall sub_006a2fd0(void* self);

void* CRobloxControlColorSelector::f()
{
    void* p = sub_0073832e(0x30);
    if (p != 0) {
        sub_006a2fd0(p);
    } else {
        p = 0;
    }
    return p;
}
