// from server: 86% by colin
// roc 2007-08 00627640  unit: RBX::SeparateStage  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00627640
//
// 00627640  56                   push esi
// 00627641  57                   push edi
// 00627642  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00627646  8bf1                 mov esi, ecx
// 00627648  56                   push esi
// 00627649  8bcf                 mov ecx, edi
// 0062764b  e8e01afeff           call 0x609130
// 00627650  8b4e08               mov ecx, dword ptr [esi + 8]
// 00627653  57                   push edi
// 00627654  e827c4fdff           call 0x603a80
// 00627659  5f                   pop edi
// 0062765a  5e                   pop esi
// 0062765b  c20400               ret 4

struct SeparateStage {
    char pad[8];
    int field8;
    void func(int);
};

void SeparateStage::func(int arg)
{
    extern void __stdcall sub_609130(void*, int);
    extern void __stdcall sub_603a80(int, int);
    sub_609130(this, arg);
    sub_603a80(field8, arg);
}
