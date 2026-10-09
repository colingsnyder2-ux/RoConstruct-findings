// from server: 85% by colin
// roc 2007-08 00628070  unit: RBX::AssemblyStage  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628070
//
// 00628070  56                   push esi
// 00628071  57                   push edi
// 00628072  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00628076  8bf1                 mov esi, ecx
// 00628078  8bcf                 mov ecx, edi
// 0062807a  e831aff8ff           call 0x5b2fb0
// 0062807f  84c0                 test al, al
// 00628081  7509                 jne 0x62808c
// 00628083  8b4e08               mov ecx, dword ptr [esi + 8]
// 00628086  57                   push edi
// 00628087  e8d4f5ffff           call 0x627660
// 0062808c  8d44240c             lea eax, [esp + 0xc]
// 00628090  50                   push eax
// 00628091  8d4e10               lea ecx, [esi + 0x10]
// 00628094  e897dafdff           call 0x605b30
// 00628099  56                   push esi
// 0062809a  8bcf                 mov ecx, edi
// 0062809c  e89f10feff           call 0x609140
// 006280a1  5f                   pop edi
// 006280a2  5e                   pop esi
// 006280a3  c20400               ret 4

struct AssemblyStage {
    char pad[0x10];
    void onEngineChanged(void*);
};

extern "C" char __fastcall sub_5b2fb0(void*);
extern "C" void __fastcall sub_627660(void*, void*);
extern "C" void __fastcall sub_605b30(void*, void*);
extern "C" void __fastcall sub_609140(void*, void*);

void AssemblyStage::onEngineChanged(void* a)
{
    if (!sub_5b2fb0(a)) {
        sub_627660(*(void**)((char*)this + 8), a);
    }
    sub_605b30((char*)this + 0x10, (char*)this + 0xc);
    sub_609140(a, this);
}
