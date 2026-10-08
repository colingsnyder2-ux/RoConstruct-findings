// from server: 64% by colin
// roc 2007-08 00627860  unit: RBX::CollisionStage  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00627860
//
// 00627860  56                   push esi
// 00627861  57                   push edi
// 00627862  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00627866  8bf1                 mov esi, ecx
// 00627868  56                   push esi
// 00627869  8bcf                 mov ecx, edi
// 0062786b  e8c018feff           call 0x609130
// 00627870  8b07                 mov eax, dword ptr [edi]
// 00627872  8b500c               mov edx, dword ptr [eax + 0xc]
// 00627875  8bcf                 mov ecx, edi
// 00627877  ffd2                 call edx
// 00627879  83f801               cmp eax, 1
// 0062787c  57                   push edi
// 0062787d  8bce                 mov ecx, esi
// 0062787f  750d                 jne 0x62788e
// 00627881  014610               add dword ptr [esi + 0x10], eax
// 00627884  e897feffff           call 0x627720
// 00627889  5f                   pop edi
// 0062788a  5e                   pop esi
// 0062788b  c20400               ret 4
// 0062788e  e8fdfeffff           call 0x627790
// 00627893  5f                   pop edi
// 00627894  5e                   pop esi
// 00627895  c20400               ret 4

struct CollisionStage {
    void func_00627860(int);
};

extern "C" void __stdcall func_00609130(int);
extern void func_00627720();
extern void func_00627790();

void CollisionStage::func_00627860(int a)
{
    func_00609130((int)this);
    int r = ((int (__thiscall *)(int))((*(int **)a)[3]))(a);
    if (r == 1) {
        *(int *)((char *)this + 0x10) += r;
        func_00627720();
    } else {
        func_00627790();
    }
}
