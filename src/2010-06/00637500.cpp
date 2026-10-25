// from server: 82% by atomic.potato
// roc 2010-06 00637500  unit: RBX::PartInstance  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00637500
//
// 00637500  56                   push esi
// 00637501  57                   push edi
// 00637502  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00637506  57                   push edi
// 00637507  8bf1                 mov esi, ecx
// 00637509  e89215f6ff           call 0x598aa0
// 0063750e  689c64a300           push 0xa3649c
// 00637513  57                   push edi
// 00637514  ff1558a49e00         call dword ptr [0x9ea458]
// 0063751a  8b8e68010000         mov ecx, dword ptr [esi + 0x168]
// 00637520  83c408               add esp, 8
// 00637523  84c0                 test al, al
// 00637525  740c                 je 0x637533
// 00637527  6a01                 push 1
// 00637529  e852040400           call 0x677980
// 0063752e  5f                   pop edi
// 0063752f  5e                   pop esi
// 00637530  c20400               ret 4
// 00637533  6a00                 push 0
// 00637535  e846040400           call 0x677980
// 0063753a  5f                   pop edi
// 0063753b  5e                   pop esi
// 0063753c  c20400               ret 4

struct PartInstance {
    char pad[0x168];
    void* ptr;
    void method(const char* name);
};

extern "C" int __cdecl sub_598AA0(void* a, const char* b);
extern "C" int __stdcall sub_9EA458(const char* a, const char* b);
extern "C" void __stdcall sub_677980(void* p, int v);

void PartInstance::method(const char* name) {
    sub_598AA0(this, name);
    int r = sub_9EA458(name, "Torso");
    void* p = *(void**)((char*)this + 0x168);
    if (r) {
        sub_677980(p, 1);
    } else {
        sub_677980(p, 0);
    }
}
