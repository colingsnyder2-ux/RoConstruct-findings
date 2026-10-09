// from server: 36% by colin
// roc 2007-08 00438690  unit: CStandardOutputView  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00438690
//
// 00438690  6aff                 push -1
// 00438692  68c9e67300           push 0x73e6c9
// 00438697  64a100000000         mov eax, dword ptr fs:[0]
// 0043869d  50                   push eax
// 0043869e  51                   push ecx
// 0043869f  56                   push esi
// 004386a0  a188518b00           mov eax, dword ptr [0x8b5188]
// 004386a5  33c4                 xor eax, esp
// 004386a7  50                   push eax
// 004386a8  8d44240c             lea eax, [esp + 0xc]
// 004386ac  64a300000000         mov dword ptr fs:[0], eax
// 004386b2  8bf1                 mov esi, ecx
// 004386b4  89742408             mov dword ptr [esp + 8], esi
// 004386b8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004386bc  50                   push eax
// 004386bd  ff1598e67700         call dword ptr [0x77e698]
// 004386c3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004386cb  e860440f00           call 0x52cb30
// 004386d0  89461c               mov dword ptr [esi + 0x1c], eax
// 004386d3  8bc6                 mov eax, esi
// 004386d5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004386d9  64890d00000000       mov dword ptr fs:[0], ecx
// 004386e0  59                   pop ecx
// 004386e1  5e                   pop esi
// 004386e2  83c410               add esp, 0x10
// 004386e5  c20400               ret 4

struct CStandardOutputView {
    char pad[0x1c];
    void* field_1c;
    CStandardOutputView(const char* s);
};

extern "C" void* __stdcall sub_52CB30();
extern "C" void* __stdcall sub_77E698(const char* s);

CStandardOutputView::CStandardOutputView(const char* s) {
    sub_77E698(s);
    field_1c = sub_52CB30();
}
