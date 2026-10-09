// from server: 69% by colin
// roc 2007-08 00627f20  unit: RBX::AssemblyStage  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00627f20
//
// 00627f20  83ec0c               sub esp, 0xc
// 00627f23  56                   push esi
// 00627f24  57                   push edi
// 00627f25  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00627f29  8bf1                 mov esi, ecx
// 00627f2b  56                   push esi
// 00627f2c  8bcf                 mov ecx, edi
// 00627f2e  e8fd11feff           call 0x609130
// 00627f33  8d442418             lea eax, [esp + 0x18]
// 00627f37  50                   push eax
// 00627f38  8d4c240c             lea ecx, [esp + 0xc]
// 00627f3c  51                   push ecx
// 00627f3d  8d4e10               lea ecx, [esi + 0x10]
// 00627f40  e86baafbff           call 0x5e29b0
// 00627f45  8bcf                 mov ecx, edi
// 00627f47  e864b0f8ff           call 0x5b2fb0
// 00627f4c  84c0                 test al, al
// 00627f4e  7509                 jne 0x627f59
// 00627f50  8b4e08               mov ecx, dword ptr [esi + 8]
// 00627f53  57                   push edi
// 00627f54  e8e7f6ffff           call 0x627640
// 00627f59  5f                   pop edi
// 00627f5a  5e                   pop esi
// 00627f5b  83c40c               add esp, 0xc
// 00627f5e  c20400               ret 4

struct AssemblyStage {
    void onEngineChanged(int);
};

extern void __fastcall sub_609130(int, int);
extern void __fastcall sub_5E29B0(int, int, int);
extern char __fastcall sub_5B2FB0(int);
extern void __fastcall sub_627640(int, int);

void AssemblyStage::onEngineChanged(int a)
{
    int local1;
    int local2;
    sub_609130(a, (int)this);
    sub_5E29B0((int)this + 0x10, (int)&local1, (int)&local2);
    if (!sub_5B2FB0(a))
        sub_627640(*(int *)((char *)this + 8), a);
}
