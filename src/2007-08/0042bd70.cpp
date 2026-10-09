// from server: 80% by colin
// roc 2007-08 0042bd70  unit: VCLuaFunction::?$CComObjectNoLock  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042bd70
//
// 0042bd70  56                   push esi
// 0042bd71  8d442408             lea eax, [esp + 8]
// 0042bd75  50                   push eax
// 0042bd76  8bf1                 mov esi, ecx
// 0042bd78  e853bc0500           call 0x4879d0
// 0042bd7d  83c404               add esp, 4
// 0042bd80  84c0                 test al, al
// 0042bd82  7539                 jne 0x42bdbd
// 0042bd84  6a10                 push 0x10
// 0042bd86  c74608c0b84200       mov dword ptr [esi + 8], 0x42b8c0
// 0042bd8d  c70660b44200         mov dword ptr [esi], 0x42b460
// 0042bd93  e85e412000           call 0x62fef6
// 0042bd98  83c404               add esp, 4
// 0042bd9b  85c0                 test eax, eax
// 0042bd9d  741b                 je 0x42bdba
// 0042bd9f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042bda3  8908                 mov dword ptr [eax], ecx
// 0042bda5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0042bda9  895004               mov dword ptr [eax + 4], edx
// 0042bdac  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042bdb0  894808               mov dword ptr [eax + 8], ecx
// 0042bdb3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0042bdb7  89500c               mov dword ptr [eax + 0xc], edx
// 0042bdba  894604               mov dword ptr [esi + 4], eax
// 0042bdbd  5e                   pop esi
// 0042bdbe  c21400               ret 0x14

struct VCLuaFunction {
    void* field0;
    void* field4;
    void* field8;
    void construct(void* a, void* b, void* c, void* d);
};

extern "C" char __cdecl sub_4879D0(void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);

void VCLuaFunction::construct(void* a, void* b, void* c, void* d)
{
    char local;
    if (sub_4879D0(&local)) {
        return;
    }
    this->field8 = (void*)0x42B8C0;
    this->field0 = (void*)0x42B460;
    void* p = sub_62FEF6(0x10);
    if (p) {
        *(void**)p = a;
        *(void**)((char*)p + 4) = b;
        *(void**)((char*)p + 8) = c;
        *(void**)((char*)p + 12) = d;
    }
    this->field4 = p;
}
