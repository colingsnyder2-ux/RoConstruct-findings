// from server: 81% by colin
// roc 2007-08 00539050  unit: RBX::VScriptContext::?$FactoryProduct  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00539050
//
// 00539050  56                   push esi
// 00539051  8d442408             lea eax, [esp + 8]
// 00539055  50                   push eax
// 00539056  8bf1                 mov esi, ecx
// 00539058  e873e9f4ff           call 0x4879d0
// 0053905d  83c404               add esp, 4
// 00539060  84c0                 test al, al
// 00539062  7539                 jne 0x53909d
// 00539064  6a10                 push 0x10
// 00539066  c74608c0c75700       mov dword ptr [esi + 8], 0x57c7c0
// 0053906d  c706c07c5300         mov dword ptr [esi], 0x537cc0
// 00539073  e87e6e0f00           call 0x62fef6
// 00539078  83c404               add esp, 4
// 0053907b  85c0                 test eax, eax
// 0053907d  741b                 je 0x53909a
// 0053907f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00539083  8908                 mov dword ptr [eax], ecx
// 00539085  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00539089  895004               mov dword ptr [eax + 4], edx
// 0053908c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00539090  894808               mov dword ptr [eax + 8], ecx
// 00539093  8b542414             mov edx, dword ptr [esp + 0x14]
// 00539097  89500c               mov dword ptr [eax + 0xc], edx
// 0053909a  894604               mov dword ptr [esi + 4], eax
// 0053909d  5e                   pop esi
// 0053909e  c21400               ret 0x14

struct RBX_VScriptContext_FactoryProduct {
    void construct();
};

extern "C" int __stdcall sub_4879D0(void*);
extern "C" void* __stdcall sub_62FEF6(unsigned int);

void RBX_VScriptContext_FactoryProduct::construct()
{
    char local[4];
    if (sub_4879D0(local) == 0) {
        *(int*)((char*)this + 8) = 0x57c7c0;
        *(int*)this = 0x537cc0;
        void* p = sub_62FEF6(0x10);
        if (p) {
            *(int*)((char*)p + 0) = *(int*)(local + 0);
            *(int*)((char*)p + 4) = *(int*)(local + 4);
            *(int*)((char*)p + 8) = *(int*)(local + 8);
            *(int*)((char*)p + 12) = *(int*)(local + 12);
        }
        *(void**)((char*)this + 4) = p;
    }
}
